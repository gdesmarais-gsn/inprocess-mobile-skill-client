using System;
using System.IO;
using System.Text;
using System.Collections.Generic;
using Newtonsoft.Json;
using MsgPack.Serialization;
using System.Linq;
using GSN.Skill.Games.Common.Events;
using GSN.Skill.Games.Common.Model;

namespace GSN.Skill.Games.Common.Utils
{
	/// Deserializes a JSON move file and plays it back to a GameModel.
	public class MovePlayer
	{
		private MemoryStream gameLogStream;					// List of records to play
		private Action<IInputMessage, long> _send;      // Function to call to process input
		private Action<long> _sync;    			        // Function to call to process a sync
		private IInputMessage _nextInput;				// Next input message to process
		private string commentText;
		private const int NEVER = 0x7fffffff;
		private int _prevRecordTime = NEVER;
		private int _nextRecordTime = NEVER;			// Time of the next message
		private string _nextRecordType = null;			// Type of record this is
		private InputMessageConverter _converter;
		private bool _abortOnEnd = true;

		private uint startTime; // timestamp from start record
		private uint notaryTime; // timestamp from latest notary hunk
		private int maxGameTime; // greatest gameTime from any input record

		public int excessRealTime {
			get; private set;
		}
		private SecureHunk _peekedHunk;
		public IDataSafe _dataSafe;

		/* 

			In the ReplayDataSafe, the calling of the callback passed into FetchData is not synchronous. It actually gets
			queued onto this ActionQueue. To make the callback get called, this ActionQueue must be processed.

			The reason we did this is that we don't want creators of GameModels to ever expect data responses to
			come back synchronously on calling FetchData. When FetchData returns, the data is NOT yet available.
			Your callback will NOT be called from inside FetchData.

			But when we are replaying a GameLog, DataSafe operations are *near* synchronous. That is, response
			actions are immediately queued. Therefore whenever a data request is made, the ActionQueue can be 
			processed and the data response will then be processed immediately by the model. 

		*/
		private ActionQueue actionQueue; 
		
		private byte [] currentHash;
			// Find the start and join records
         private Dictionary<string, string> _joinRecord = null;
         private Dictionary<string, string> _startRecord = null;

         private GameModelBase _model;
			
		/**
		\brief Creates a new MovePlayer.
		\param send GameModel's receive function
		\param sync GameModel's update function
		\param logRecords List of JSON strings from a move file, one string per move
		\param abortOnEnd If true, end the game when the replay is complete, as if the move file
			came from a tournament game.  If false, user control will be restored at the end of the replay.
		*/
		public MovePlayer(GameModelBase model, MemoryStream gameLogStream,  bool abortOnEnd = true)
		{
			_model = model;
			_send = model.Receive;
			_sync = model.Update;
			this.gameLogStream = gameLogStream;
			_abortOnEnd = abortOnEnd;
			_converter = new InputMessageConverter(model.inputTypeEnums);

			// this private ActionQueue is for making data requests asynchronous, but immediate.
			actionQueue = new ActionQueue();

            currentHash = GameLog.GetJoinAndStartRecords(gameLogStream, out _joinRecord, out _startRecord, out startTime);
            
            if ( _joinRecord == null || _startRecord == null )
            {
                throw new Exception("Unable to find start record and join record in game log");
            }
     
            _peekedHunk = GameLog.GetNextHunk(gameLogStream, currentHash);

            // get the data history.
            if (_peekedHunk.type.SequenceEqual(SecureHunk.HUNK_TYPE_DATAHISTORY)) {

	            SecureHunk dataHunk = _peekedHunk;
	            _peekedHunk = null;

	            _dataSafe = new ReplayDataSafe(dataHunk, actionQueue, startTime);

            }

            PrepareNextRecord();
        }

        public void ConfigureModel()
		{
            _model.Configure(_startRecord, _joinRecord, _dataSafe);
		}

		/** 
			our log read state consists of:

				the gameLogStream's position (where we'll get our next hunk from)
				our index inside the current hunk.

				if our index is equal to the current hunk's length, 
		*/

		private List<GameLogRecord> records = null;
		private int recordIndex = 0;

		// sets records, and currentHash.
		private bool GetNotaryHunk() {
			recordIndex = 0; // start at the top of the new hunk.

			SecureHunk hunk;

			// look at _peekedHunk first.

			if (_peekedHunk != null && _peekedHunk.type.SequenceEqual(SecureHunk.HUNK_TYPE_NOTARY)) {
				hunk = _peekedHunk;
			}
			else
			{
				hunk = GameLog.GetHunkOfType(SecureHunk.HUNK_TYPE_NOTARY, gameLogStream, currentHash);        
			}
			_peekedHunk = null; // done with _peekedHunk. (skip it if we don't use it)

			if (hunk != null) {

				currentHash = hunk.hash;

				byte [] body = hunk.GetUncompressedBody();
				records = (List<GameLogRecord>)GameLog.Deserialize<List <GameLogRecord> >(body);

				notaryTime = Convert.ToUInt32(Encoding.UTF8.GetString(hunk.timeStamp));

				return true;

			} else {
				records = null;
				return false;
			}

		}

		void PrepareNextRecord()
		{

			// set this stuff just in case we don't find another record.
			_nextInput = null;
			_prevRecordTime = _nextRecordTime;
			_nextRecordTime = NEVER;
			_nextRecordType = null;

			GameLogRecord glr;
			while (true) {

				if (records == null) { // we need a HunkBody
					if (!GetNotaryHunk()) { // we can't get one. we are done.
						return;
					}
					// we got one.

				} 
				else {
					++recordIndex; // go to the next record in the hunk.
				}

				// while we are DONE with the hunk, go to the next one. This deals with empty hunks.
				while (recordIndex >= records.Count) {
					if (!GetNotaryHunk()) {					
						return;
					}
				}

				// get the record.
				glr = records[recordIndex];

				_nextRecordType = glr.type;
				_nextRecordTime = glr.time;

				if (_nextRecordTime > maxGameTime)
					maxGameTime = _nextRecordTime;

				_nextInput = null;

				switch (glr.type) {
					case "input":
					_nextInput = JsonConvert.DeserializeObject<IInputMessage>(Encoding.UTF8.GetString(glr.body), _converter);
                    return;
                    
                    case "sync":
                    return;
                    
					case "comment":
					commentText = Encoding.UTF8.GetString(glr.body);
					Console.WriteLine(_nextRecordTime + " " + commentText);
					break;
				}
			}
        }

		/**
		\brief Play moves up to a point in the replay
		\param before Time in milliseconds of the last move to be replayed.  Defaults to playing all moves.
		\returns True when the last move of the replay has been played.
		*/
		public bool PlayMoves(int before = NEVER) 
		{

			// complete all outstanding data requests before playing any moves.
			actionQueue.Process();

			while (_nextRecordTime != NEVER)
			{
				if (_nextRecordTime >= before)
					return false;

				switch(_nextRecordType) 
				{
					case "input":
					_send(_nextInput, _nextRecordTime);
					break;
					case "sync":
					_sync(_nextRecordTime);
					break;
					case "comment":
					Console.WriteLine(commentText);
					break;
				}

				actionQueue.Process(); // complete outstanding data requests.

				PrepareNextRecord();
			}
			
			// notaryTime and startTime are measured in seconds. So the difference between them could
			// be off by as much as an entire second, positive or negative. Net latency can add to this error
			// in computing duration.
			//
			// We are guarding against actual time taking too long compared to the game length as reported.
			// the actual game time is measured in seconds. The game length could be under or over-reported by up
			// to a second, and that's not including network variation.

			excessRealTime = ((int)(notaryTime - startTime) - 1) * 1000 - maxGameTime;

			// foo is now the amount of excess real time, having subtracted out a possible 1 second of error due
			// to inaccuracy in timestamping on the server. Any amount greater than zero, here is the result of 
			// network latency effects, possible timer speed variation, and cheating.

			// if tourney replay, send user abort
			if ( _abortOnEnd)
			{
				_send( new UserAbortedMessage(), _prevRecordTime);
			}
			return true; // all done.
		}
	}
}
