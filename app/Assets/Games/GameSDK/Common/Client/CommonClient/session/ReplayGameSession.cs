using System.Collections.Generic;
using System.IO;
using System;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Client.Session
{
		public class ReplayGameSession : GameSessionBase, IGameSession
		{

			private IDataSafe _dataSafe;

			public IDataSafe DataSafe {
				get {
					return _dataSafe;
				}
				set {
					_dataSafe = value;
				}
			}

			public RequestWrapper ErrorRequestWrapper {
				get; private set;
			}

			new Dictionary<string, string> _joinRecord;
			new Dictionary<string, string> _startRecord;
			protected new Dictionary<string, string> _setup = null;
			protected Dictionary<string, string> _options = null;
			Dictionary<string, string> join;
			Dictionary<string, string> start;
			private MemoryStream _logStream;
			private ActionQueue _actionQueue;
			public bool abortOnEnd = true;

			public new Dictionary<string, string> Setup {
				get {
					return _setup;
				}
				set {
					// TODO - too many copies of this (well, references, but still)
					_setup = value;
					_startRecord = _setup;
				}
			}
			public Dictionary<string, string> Options {
				get {
					return _options;
				}
				set {
					// TODO - too many copies of this (well, references, but still)
					_options = value;
					_joinRecord = _options;
				}
			}


			public string TournamentId {
				get {
					return null;
				}
				set {
				}
			}

			public string GameId {
				get {
					return null;
				}
				set {
				}
			}

			public ReplayGameSession () {
				_actionQueue = GlobalActionQueue.instance;
			}

			public new Dictionary<string, string> JoinBody {
				get {
					return null;
				}
			}

			public new Dictionary<string, string> JoinRecord {
				get {
					return _joinRecord;
				}
			}


			public RequestWrapper.requestCustomizer customizeRequest{
				get;set;
			}
			/// Base url (including final slash) where we will send our requests.
			public string Url {
				set; private get; // Yes. Write-only.
			}

			public new Dictionary<string, string> StartBody {
				get {
					return null;
				}
			}

			public new Dictionary<string, string> StartRecord {
				get {
					return _startRecord;
				}
			}

			public MemoryStream logStream
			{
				set
				{
					_logStream = value;
					uint startTime;
					GameLog.GetJoinAndStartRecords(_logStream, out join, out start, out startTime);
				}
				get
				{
					return _logStream;
				}
			}

			private string notaryCompression = SecureHunk.HUNK_COMPRESSION_NONE;

			public string NotaryCompression {
				get {
					return notaryCompression;
				} 
				set {
					notaryCompression = value;
				}
			}

			public GameSessionExitMode ExitMode 
			{
				get;set;
			}
			public GameValidationResult ValidationResult {
				get; set;
			}

			int _timeout;

			public bool Success { get {return true;} }
			public FailReasons FailReason { get { return FailReasons.Success; } set{ }}
			public int Timeout { get { return _timeout; } set{ _timeout = value;} }

			public override void JoinTournament (GameSession.GameSetupOptions gameSetupOptions, Action doneAction)
			{
			/*
				string tournFlavorId = gameSetupOptions.tournID;
				string titleName = gameSetupOptions.titleName;
				string joinDataJson = gameSetupOptions.joinDataJSON;
			*/

				_joinRecord = join;
				_startRecord = null;
				_actionQueue.QueueAction(doneAction);
			}
			public void StartGame (Action doneAction)
			{
				_startRecord = start;
				_actionQueue.QueueAction(doneAction);
			}

			public void Validate(Action doneAction)
			{
				_actionQueue.QueueAction(doneAction);
			}

			private Job validateJob = new NullJob();

			public Job ValidateJob {

				get {
					return validateJob;
				}

			}

			public void EndBullish() {

			}

			public new void WriteGameLogToFile(string fn, bool text = false) {
			}

			public void AbortValidate() {

			}

			public Dictionary<string, string> joinRecord
			{
				get
				{
					return _joinRecord;
				}
			}	
			public Dictionary<string, string> startRecord
			{
				get
				{
					return _startRecord;
				}
			}
			public void AddRecord(string type, byte [] s, int gameTime)
			{
			}

			public void AddData(byte [] data)
			{

			}

			public void Notarize ()
			{

			}

			public void Abandon()
			{
			}		
		}
	}

