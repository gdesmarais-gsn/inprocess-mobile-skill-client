using System.Collections.Generic;
using Newtonsoft.Json;

using MsgPack.Serialization;

using System;
using System.Net;
using System.Text;
using System.Linq;
using System.Security.Cryptography;
using System.IO;
using UnityEngine;
using Unity.IO.Compression;
using GSN.Skill.Games.Common.Utils.WebLogging;
using GSN.Skill.TriPeaks.Requests.Game;
using GSN.Skill.Requests;
using GSN.Skill.Games.Common.Client.Session;
using GSN.Skill.Games.Common.Client.Game;
using System.Collections;

namespace GSN.Skill.Games.Common.Utils {

	/// Makes it easy to collect game records for the sake of game validation. 

	/**
		The serialized (binary) representation of a GameLog is a series of objects serialized with MsgPack.

		The Log is:

		- A GameLogHeader
		- An SecureHunk for Join.  Literally, this is the response to the Join  request. It's MessagePacked (binary).
		- An SecureHunk for Start. Literally, this is the response to the Start request. It's MessagePacked (binary).
		- One or more SecureHunk instances, each of which contains a series of GameLogRecords.

		All AuthenticHunks can be authenticated using the same algorithm.

		The hashes in the AuthenticHunks are all chained, including the Join and Start hunks and all the Notary hunks.

		Notarization is the means by which a client can get assistance from a server in creating an SecureHunk.

		Note: when a hash or hmac is in a byte array, it's 64 binary bytes (512 bits).

		Strings (JSON or otherwise), before they are hashed or hmac'ed, get UTF8 encoded into a byte array.

		Integers, before they are hashed or hmac'ed, get converted to a string, like "23", then UTF8-encoded into a byte array.

	*/

	/// The first thing in the GameLog (MessagePack serialized)
	public class GameLogHeader 
	{
		// VERSION HISTORY
		public const int VERSION1 = 1; //Original version of the game log
		public const int VERSION2 = 2; //Version of the game log that includes a data history hunk
		public const int VERSION3 = 3; //Version of the game log that includes an initial sync on game move hunks

		public GameLogHeader() { // MessagePack does NOT like constructors with arguments.
		}

		public string label = "GameLog"; // If this isn't "GameLog" on read, something's seriously wrong.
		public int formatVersion = VERSION1; // change this if the format changes!
	}

	/// A hunk of Authenticatable content. MessagePack Serialized (binary)
	/**
		This class represents a fundamental authenticatable unit of the GameLog.

		Note that for EVERY HUNK, the following computations take place. It's just WHERE they take place that varies, depending on if
		it's a NOTARY hunk or not.

			- the body is prepared, and compressed if desired. The result is a byte array.
			- if compressed, compression is set to "gzip" or some other supported compression. Otherwise set compression to "none".
			- a hash is computed from the PRIOR hash, hunk type, the compression, and the current body.
			- the timeStamp and the hmac keyVersion are set.
			- the hmac is computed from the timeStamp, the keyVersion, and the hash, in that order.

		For Join and Start hunks, all five of these steps take place on the server, and the entire hunk is sent down to the client
		as the Join or Start response, and put directly into the GameLog to be sent back at validation time.

		For Notary hunks, the first three steps happen on the client, and the hash is sent to the Notary service, which returns
		the timeStamp, the keyVersion, and the hmac, back to the client in a Notary response. The client then fills out the Notary
		Hunk with this information.

		The end result is that the exact same algorithm can be used to authenticate every hunk, given an awareness that the first hunk
		is the Join hunk, the second hunk is the Start hunk, and the rest of the hunks are Notary hunks, because different hmac keys 
		are used to authenticate each kind of hunk.

	*/
	public class SecureHunk {

		public static readonly byte [] HUNK_TYPE_JOIN  = Encoding.UTF8.GetBytes("Join");
		public static readonly byte [] HUNK_TYPE_START = Encoding.UTF8.GetBytes("Start");
		public static readonly byte [] HUNK_TYPE_NOTARY = Encoding.UTF8.GetBytes("Notary");
		public static readonly byte [] HUNK_TYPE_DATAHISTORY = Encoding.UTF8.GetBytes("DataHistory");

		public const string HUNK_COMPRESSION_GZIP = "gzip";
		public const string HUNK_COMPRESSION_NONE = "none";

		public SecureHunk() {
		}
		public byte [] type;		// The type of the content of this SecureHunk "Join", "Start", "Notary", etc.
									// If you see a hunk type you do not recognize, you may ignore its content, but don't skip
									// authenticating it.
		public byte [] timeStamp; 	// UTF8 encoded server-generated timeStamp (at notarize time)
		public byte [] keyVersion;	// UTF8-encoded string representing an integer, a server-supplied version of the notary HMAC key used in computing hmac
									// this lets the server update keys and expire old ones.

		public byte [] compression; // UTF8 encoded String indicating how the body of the notary hunk is compressed. 
									// "none" means no compression.
									// "gzip" means gzip compression.
									// other compression options may be added later. 
		public byte [] body;		// contents of the hunk. 
									// 				For the Join and Start hunks, it's compressed (possibly), UTF8-encoded JSON.
									//				For a Notary hunk, it's a compressed (possibly), MessagePacked list of GameLogRecords


		public byte [] hash;		// SHA-512 hash of the PRIOR hash, the type, the compression and the body in that order.
									// Note that the first two hashes (for type "Join" and "Start") are computed on the server.
									// The rest are computed on the client, but sent to the server in Notary requests,
									// The responses to which are used to fill out Notary hunks in the log.
									// So, the INITIAL "prior" hash can be anything the server chooses, but it should never change.

		public byte [] hmac;		// hmac of the timeStamp, keyVersion, and hash, in that order (computed on server)
									// For the Join response, this will use the proper version of the JOIN hmac key.
									// For the Start response, this will use the proper version of the START hmac key.
									// For Notary Hunks, this will use the proper version of the NOTARY hmac key.

		private GZipper gzip = new GZipper();

		public void GetUncompressedBody(MemoryStream outStream) {

			string compstr = Encoding.UTF8.GetString(compression);

			switch(compstr) {
				case HUNK_COMPRESSION_GZIP:
					GsnDebug.Log("Decompressing hunk body".ToPink(), "Compressed length", body.Length);

					gzip.SetInput(body);
					gzip.GetOutput(outStream, CompressionMode.Decompress);

					GsnDebug.Log("Original length", outStream.Length);
					return;

				case HUNK_COMPRESSION_NONE:
					outStream.Write(body);
					return;
				default:
					throw new Exception("unknown compression " + compstr + " in hunk");

			}
		}

		public byte [] GetUncompressedBody() { // gets decompressed body

			string compstr = Encoding.UTF8.GetString(compression);

			switch(compstr) {
				case HUNK_COMPRESSION_GZIP:
					GsnDebug.Log("Decompressing hunk body".ToPink(), "Compressed length", body.Length);

					gzip.SetInput(body);
					byte[] retval = gzip.GetOutput(CompressionMode.Decompress);

					GsnDebug.Log("Original length", retval.Length);
					return retval;

				case HUNK_COMPRESSION_NONE:
					return body;
				default:
					throw new Exception("unknown compression " + compstr + " in hunk");

			}
		}

		public void SetBody(byte [] body_, string compression_, byte [] priorHash) {

			compression = Encoding.UTF8.GetBytes(compression_);

			switch(compression_) {
				case HUNK_COMPRESSION_NONE:
					body = body_;
					break;
				case HUNK_COMPRESSION_GZIP:
					{
						GsnDebug.Log("Compressing hunk body".ToPink(), "Original length:", body_.Length);

						gzip.SetInput(body_);
						body = gzip.GetOutput(CompressionMode.Compress);

						GsnDebug.Log("Compressed length:", body.Length);

						if (body.Length >= body_.Length) {
							// new length is equal or bigger. Compression is stupid.
							GsnDebug.Log("Compressing is stupid. Not doing it.");
							body = body_;
							compression = Encoding.UTF8.GetBytes(HUNK_COMPRESSION_NONE);
						}
					}
					break;
				default:
					throw new Exception("Unknown hunk body compression: " + compression_);
			}

			hash = ComputeHash(priorHash);
		}

		private byte [] ComputeHash (byte [] priorHash) {

			using (MemoryStream ms = new MemoryStream()) {
				ms.Write(priorHash);
				ms.Write(type);		// include hunk type
				ms.Write(compression); // include compression
				ms.Write(body);				// add the body
				ms.Seek(0, SeekOrigin.Begin);		// go to beginning
				return GameLog.GetSHA512Hash(ms);		// hash it all.
			}
		}

		public void Authenticate (byte [] priorHash) {

			byte [] computedHash = ComputeHash(priorHash);

			if (!hash.SequenceEqual(computedHash)) {
				throw new Exception ("Hunk not authentic");
			}
		}
	}

	/// =================== BELOW HERE IS NOT NEEDED BY THE VALIDATION SERVICE AT THE PYTHON LEVEL.

	/// What the server sends back from Notarize (MessagePack format)

	public class NotaryRequest {
		public NotaryRequest() {
			
		}
		public byte [] hash;
	}

	public class NotaryResponse {
		public NotaryResponse() {

		}
		public byte [] timeStamp;	// time of notarize.
		public byte [] keyVersion;		// version of the HMAC key used
		public byte [] hmac;		// hmac of the timeStamp, the keyVersion, and the hash.
	}

	/// Generic GameLogRecord format.
	public class GameLogRecord {
		public GameLogRecord() {
		}
		public string type;		// type of the record 'input', 'sync' and maybe 'ccrecs' (custom-compressed records)
		public int time;		// client-side time stamp (from the beginning of the game)
		public byte [] body;	// actual contents of the record. Probably a UTF8-encoded JSON string, but depends on 'type'
	}

	public class ValidateResponse {
		public ValidateResponse() {
		}
		public bool accepted;		// indication of whether your validation submission was accepted (does not indicate that validation itself is complete)
	}

	public class GameLog {

		public static string TempGameLogFileName;

		// Seconds that a file can sit on disk before being considered stale
		public static int MaxGameLogFileTime;

		private static int bytesPerNotarize = 1500;

		public static void SetBytesPerNotarize(int n) {
			bytesPerNotarize = n;
		}


		#if DEBUG

		private static string[] hackDescriptions = {
			"none", 
			"header label", 
			"header version", 
			"hack jresp", 
			"omit jresp",
			"hack sresp",
			"omit sresp",
			"notary general",
			"notary type",
			"notary time",
			"notary keyver",
			"notary comp",
			"notary body",
			"notary hash",
			"notary hmac"
		};

		private const int HEADER_LABEL_HACK = 		 1;
		private const int HEADER_VERSION_HACK = 	 2;
		private const int JOIN_RESPONSE_HACK1 = 	 3;
		private const int JOIN_RESPONSE_HACK2 = 	 4;
		private const int START_RESPONSE_HACK1 = 	 5;
		private const int START_RESPONSE_HACK2 = 	 6;
		private const int NOTARY_GENERAL_HACK = 	 7;
		private const int NOTARY_TYPE_HACK =	 	 8;
		private const int NOTARY_TIMESTAMP_HACK = 	 9;
		private const int NOTARY_KEYVER_HACK = 		10;
		private const int NOTARY_COMPRESSION_HACK = 11;
		private const int NOTARY_BODY_HACK = 		12;
		private const int NOTARY_HASH_HACK = 		13;
		private const int NOTARY_HMAC_HACK = 		14;

		private static int hackNumber = 0;

		public static string HackDescription {
			get {
				return hackDescriptions[hackNumber];
			}
		}

		public static void NextHack() {

			++hackNumber;

			if (hackNumber == hackDescriptions.Length) {
				hackNumber = 0;
			}

		}

		#endif

 		private bool ValidateInProgress = false;

		private List<SecureHunk> notarizedHunks;

		private List<GameLogRecord> records;

		private MemoryStream dataHistory;

		private byte [] dataHistoryHMAC;

		private int recordBytes;

		private Notarizer notarizer;

		public string TitleName; // set this before validate. . . . 

		public string modelVersion = null; // somebody should set this. . .

		// the first hash, before hashing the first hunk.
		private static byte[] initialHash;

		public static byte [] InitialHash {
			private set
			{
			}
			get {
				if (initialHash == null) {
					initialHash = GameLog.HexToBytes("E5247CDB47804CF6FCFC848452E7882275A138770EB3C89D92FFCA2DFD15FE597AF5B21E07B64800B4C5E09A49967A670A214F2CD32C869F27F3CD745CAC4F02");
				}
				return initialHash;
			}
		}

		private byte [] currentHash;

		private byte [] joinResponse;

		public bool Success;

		public byte [] JoinResponse
		{
			set {

				joinResponse = value;

				JoinHunk = (SecureHunk)GameLog.Deserialize<SecureHunk>(value); // Get the JoinHunk out of it.

				if (!JoinHunk.type.SequenceEqual(SecureHunk.HUNK_TYPE_JOIN)) {
					throw new Exception("Not a Join Hunk");
				}

				currentHash = InitialHash; // reinitialize.

				JoinHunk.Authenticate(currentHash); // verify it.

				currentHash = JoinHunk.hash;
			}
			get {
				return joinResponse;
			}
		}

		private byte [] startResponse;

		public byte [] StartResponse {
			set {

				startResponse = value;

				if (value == null) { // support null.
					StartHunk = null;
					return;
				}

				StartHunk = (SecureHunk)GameLog.Deserialize<SecureHunk>(value);

				if (!StartHunk.type.SequenceEqual(SecureHunk.HUNK_TYPE_START)) {
					throw new Exception("Not a Start Hunk");
				}

				StartHunk.Authenticate(currentHash);

				currentHash = StartHunk.hash;

			}
			get {
				return startResponse;
			}
		}

		public SecureHunk JoinHunk {
			get; private set;
		}

		public SecureHunk StartHunk {
			get; private set;
		}

		#if DEBUG
		public static void HackHunk(SecureHunk hunk) {

			switch (hackNumber) {
				case NOTARY_TYPE_HACK:
					hunk.type[hunk.type.Length/2]++;
					break;
				case NOTARY_TIMESTAMP_HACK:
					hunk.timeStamp[hunk.timeStamp.Length/2]++;
					break;
				case NOTARY_KEYVER_HACK:
					hunk.keyVersion[hunk.keyVersion.Length/2]++;
					break;
				case NOTARY_COMPRESSION_HACK:
					hunk.compression[hunk.compression.Length/2]++;
					break;
				case NOTARY_BODY_HACK:
					hunk.body[hunk.body.Length/2]++;
					break;
				case NOTARY_HASH_HACK:
					hunk.hash[hunk.hash.Length/2]++;
					break;
				case NOTARY_HMAC_HACK:
					hunk.hmac[hunk.hmac.Length/2]++;
					break;
			}
		}
		#endif

		public string NotaryCompression = SecureHunk.HUNK_COMPRESSION_NONE; // compression used for notary hunks.

		public int NotarizeOutstanding {
			get {
				return (null == notarizer) ? 0 : notarizer.NotarizeOutstanding;
			}
		}
		/// Constructs an empty GameLog
		public GameLog(string url, RequestWrapper.requestCustomizer customizeWrapper, bool mocking) {

			currentHash = InitialHash;

			notarizedHunks = new List<SecureHunk>();

			records = new List<GameLogRecord> ();

			// the notarizer is what fills the list of notarized hunks.
			notarizer = new Notarizer(notarizedHunks, url, customizeWrapper, mocking);

		}

		static GameLog()
		{
			MessagePackSerializer.PrepareType<bool>();
			MessagePackSerializer.PrepareType<string>();
			MessagePackSerializer.PrepareType<int>();
			MessagePackSerializer.PrepareType<SecureHunk>();
			MessagePackSerializer.PrepareType<GameLogHeader>();
			MessagePackSerializer.PrepareType<Dictionary<string, string>>();
			MessagePackSerializer.PrepareType<ValidateResponse>();
			MessagePackSerializer.PrepareType<NotaryRequest>();
			MessagePackSerializer.PrepareType<List <GameLogRecord>>();
		}

		public static GameLog GetDeferredGameLog(string url, RequestWrapper.requestCustomizer customizeWrapper) {

			if (!File.Exists(TempGameLogFileName))
				return null;

			if (MaxGameLogFileTime > 0 && File.GetLastWriteTime(TempGameLogFileName).AddSeconds(MaxGameLogFileTime) < DateTime.Now)
			{
				// File is too old.  Delete it.
				ClearLog();
				return null;
			}

			GsnDebug.Log(TempGameLogFileName, "exists");

			GameLog retval = new GameLog(url, customizeWrapper, false);

			retval.ReadGameLogFromFile(TempGameLogFileName);

			return retval;

		}

		public void SaveLog(string overrideName = null, bool text = false) {

			try {

				ClearLog();

				string fn = TempGameLogFileName;
				if (overrideName != null)
					fn = overrideName;

				if (null == fn) {
					return;
				}

				MemoryStream ms = GetSerializedGameLog();

				ms.WriteToFile(fn, text);

				GsnDebug.Log("Wrote GameLog to", fn);

			} catch (Exception e) {

				GsnDebug.LogError("Error writing GameLog:", e.Message);

			}

		}

		public void ReadGameLogFromFile(string fn) {

			GsnDebug.Log("Reading", fn);

			using (var fs = new FileStream (fn, FileMode.Open)) {
				var glhSerializer = MessagePackSerializer.Get<GameLogHeader>();

				glhSerializer.Unpack(fs);

				var shSerializer = MessagePackSerializer.Get<SecureHunk>();

				while (fs.Position < fs.Length) {

					SecureHunk h = shSerializer.Unpack (fs);

					if (h.type.SequenceEqual (SecureHunk.HUNK_TYPE_JOIN)) {
						JoinResponse = GameLog.Serialize<SecureHunk>(h);
					} else if (h.type.SequenceEqual (SecureHunk.HUNK_TYPE_START)) {
						StartResponse = GameLog.Serialize<SecureHunk>(h);
					} else if (h.type.SequenceEqual (SecureHunk.HUNK_TYPE_DATAHISTORY)) {
						dataHistory = new MemoryStream();
						h.GetUncompressedBody(dataHistory);
						dataHistoryHMAC = h.hmac; // the hmac, if there is one.
					} else if (h.type.SequenceEqual (SecureHunk.HUNK_TYPE_NOTARY)) {
						if (h.hmac != null) {
							notarizedHunks.Add(h);
						} else
						{
							notarizer.AddHunk(h); // unnotarized hunk.
						}
					}
					// otherwise it's just skipped.
				}

			}

		}

		public static void ClearLog() {

			if (TempGameLogFileName != null)
				File.Delete(TempGameLogFileName);

		}

		/// Adds a record to the current AuthenticHunkBody.
		public void Add(string type,	///< The type of the record. E.g. 'input', 'sync' 
			byte [] body, 				///< The content of the game record. Serialized.
			int time
			) {	

			// If we are already in flight with Validation, we do not want to actually add any
			// new records to the game log.
			// We do, however, want to notice this event for tracking in the future.  Basically, why
			// is a game issuing a record (probably a sync) after the game has ended.
			if (ValidateInProgress) {
				// TODO - possibly record this event, including the game id, game params, etc. so it can be tracked later
				GsnDebug.Log ("Recording incoming for the game log after validation has begun - type: "+ type + " time: " + time );
				return;
			}


			GameLogRecord record = new GameLogRecord();
			record.type = type;
			record.time = time;
			record.body = body;

			records.Add(record);

			// this is just approximate. No need to be totally precise.
			// yes, the body can be null.
			recordBytes += type.Length + 4 + ((body == null) ? 1 : body.Length);

			if (recordBytes > bytesPerNotarize) {
				Notarize();
			}

		}

		// Add some more data to the data history.
		public void AddData(byte [] data) 
		{

			// the dataHistory is a series of concatenated serialized Dictionary<string, string>

			if (dataHistory == null)
				dataHistory = new MemoryStream();

			dataHistory.Write(data);

		}

		/// Notarizes the game log so far. Keeps trying until it succeeds.
		/** 
			Each time this is called, another hunk gets queued up for Notarization.

			Hunks are always notarized in order of queueing.

			After queueing a hunk, if the hunk processor isn't running, we start it.

			The hunk processor runs until all queued hunks are notarized.

			The hunk processor normally does one hunk, then stops, then gets restarted, over and over. 
			But if one notarize action gets hung up, the queue lengthens. 
		*/
		public void Notarize(Action<bool> doneAction = null, bool addSync = true) {

			if (records.Count == 0) {
				GsnDebug.Log("Nothing to Notarize");
				return;
			}

			GsnDebug.Log("Notarizing", records.Count, "records");

			SecureHunk ah = new SecureHunk(); // create a new hunk

			ah.type = SecureHunk.HUNK_TYPE_NOTARY;

			ah.SetBody(Serialize< List <GameLogRecord> >(records), NotaryCompression, currentHash);

			currentHash = ah.hash;

			resetLogRecords (addSync);

			notarizer.AddHunk(ah, doneAction); // get this hunk notarized.
		}

		public void FinalNotarizeSync(Action<bool> doneAction) {

			Notarize(doneAction, false); // this adds a final hunk, if any records exist.

		}

		public MemoryStream GetSerializedGameLog(bool attachUnnotarized = false) {

			MemoryStream retval = new MemoryStream();

			GameLogHeader header = new GameLogHeader();

			// we WERE going to do this using a constructor parameter, but that makes MessagePack very unhappy, EVEN IF we ALSO provide a constructor
			// that has no argument.
			if (dataHistory != null) {
				header.formatVersion = GameLogHeader.VERSION2;
			}

			#if DEBUG

			if (hackNumber == HEADER_LABEL_HACK) {
				header.label = "Gameloo";	// INTENTIONAL TYPO!
			}

			if (hackNumber == HEADER_VERSION_HACK) {
				header.formatVersion++; 
			}
			#endif

			retval.Write(GameLog.Serialize<GameLogHeader>(header));

			if (JoinResponse != null) {

				#if DEBUG
				if (hackNumber == JOIN_RESPONSE_HACK1) {

					JoinResponse[JoinResponse.Length / 2]++; // increment a byte.

				}
				#endif

				#if DEBUG
				if (hackNumber != JOIN_RESPONSE_HACK2) {
				#endif

					retval.Write(JoinResponse); // the Join hunk

				#if DEBUG
				}
				#endif

			} else {
				GsnDebug.Log ("No JoinResponse in the GameLog");
			}

			if (StartResponse != null) {

				#if DEBUG
				if (hackNumber == START_RESPONSE_HACK1) {
					StartResponse[StartResponse.Length / 2]++; // increment a byte
				}
				#endif

				#if DEBUG
				if (hackNumber != START_RESPONSE_HACK2) {
				#endif
					retval.Write(StartResponse); // the Start hunk
				#if DEBUG
				}
				#endif
			} else {
				GsnDebug.Log ("No StartResponse in the GameLog");				
			}

			if (dataHistory != null) {
				retval.Write(GameLog.Serialize(MakeDataHistoryHunk()));
			}

			int count = notarizedHunks.Count;

			#if DEBUG
			int nToHack = count / 2; 
			#endif

			for (int i = 0; i < count; ++i) {
				if (null == notarizedHunks [i]) {
					// We really shouldn't be adding blank hunks
					continue;
				}
				// We need to ensure that there is a time stamp on every secure hunk
				if (null == notarizedHunks [i].timeStamp) {
					GsnDebug.Log ("Skipping non-timestamped notarized hunk at index " + i);				
					continue;
				}

				byte[] serializedHunk = GameLog.Serialize<SecureHunk>(notarizedHunks[i]);

				#if DEBUG
				if (hackNumber == NOTARY_GENERAL_HACK && i == nToHack) {
					serializedHunk[serializedHunk.Length/2]++;					
				}
				#endif

				retval.Write(serializedHunk);

			}

			if (attachUnnotarized) {
				notarizer.GetUnnotarizedHunks (retval);
			}

			retval.Position = 0;

			return retval;

		}

		/**
		 * For existing gamelogs, reset/forget all the prior log record entries.
		 * Also add an initial sync.
		 * */
		private void resetLogRecords(bool addSync = true) {
			records = new List<GameLogRecord>(); // clear it out
			recordBytes = 0; // no bytes now.

			if (ValidateInProgress) {
				return;
			}
			if (addSync) {
				AddSync ();
			}
		}
		/**
		 * Add a sync event to the game log records.  Either pass in a 
		 * game time value, or one will be generated if possible.  If it
		 * isn't possible, this will silently continue without adding a
		 * record.  This is ok as it allows parts of the code to add 
		 * sync messages very easily.
		 * */
		public void AddSync(int gameTime = -1) {
			if (gameTime == -1 && GameModelProxyBase.instance != null) {
				gameTime = GameModelProxyBase.instance.GetStateTime();
			}
			if (gameTime != -1) {
				Add ("sync", null, gameTime);
			}
		}

		// This just creates a hunk and sets the type and body. Note that this hunk IS NOT in the hash chain.
		private SecureHunk MakeDataHistoryHunk() {
			var retval = new SecureHunk();

			retval.type = SecureHunk.HUNK_TYPE_DATAHISTORY;

			retval.SetBody(dataHistory.ToBytes(), SecureHunk.HUNK_COMPRESSION_GZIP, InitialHash);

			// this is the HMAC given to us by the DataSafe service. Or null.
			retval.hmac = dataHistoryHMAC;

			return retval;

		}

		public static SecureHunk GetNextHunk(MemoryStream logStream, byte [] priorHash) {

			if (logStream.Position >= logStream.Length) {
				return null; // nothing to get.
			}

			SecureHunk hunk = (SecureHunk)MessagePackSerializer.Get<SecureHunk>().Unpack(logStream);

			// The DataHistory hunk is NOT part of the hash chain. It is independently hashed.
			if (hunk.type.SequenceEqual(SecureHunk.HUNK_TYPE_DATAHISTORY)) {


				// This hash check will probably need to be different for this hunk.
				// Each request/response pair is hashed along with a prior hash. 
				// so we'll need to walk down the request/response pairs and hash them
				// using the prior hash, to get the ultimate hash for the data history.
				hunk.Authenticate(InitialHash); // check it.

			}
			else 
			{
				hunk.Authenticate(priorHash); // throw if inauthentic

			}

			return hunk;

		}

		// Get a hunk of a specific type, skipping other hunks.
		public static SecureHunk GetHunkOfType(byte [] type, MemoryStream logStream, byte [] priorHash) {

			while(true) {

				SecureHunk hunk = GetNextHunk(logStream, priorHash);

				if (hunk == null)
					return null;

				if (hunk.type.SequenceEqual(type)) {
					return hunk;
				}

				// The DataHistory hash is NOT in the chain of hashes. It's an independent hash of the 
				// data history.
				if (!hunk.type.SequenceEqual(SecureHunk.HUNK_TYPE_DATAHISTORY)) 
					priorHash = hunk.hash;

			}
		} 

		// returns the position at which the SecureHunks begin
		public static byte [] GetJoinAndStartRecords(MemoryStream logStream, out Dictionary<string, string> join, out Dictionary<string, string> start, out uint startTime) {

			join = null;
			start = null; // we don't have them yet.

			logStream.Seek(0, SeekOrigin.Begin); // start at top of stream.

			// get and check the header.
            GameLogHeader glh = (GameLogHeader)MessagePackSerializer.Get<GameLogHeader>().Unpack(logStream);

            if (glh.label != "GameLog") throw new Exception("Not a gamelog");

            if (glh.formatVersion > 2) throw new Exception("Unknown gamelog version" + glh.formatVersion);

            SecureHunk joinHunk = GetHunkOfType(SecureHunk.HUNK_TYPE_JOIN, logStream, InitialHash);
            SecureHunk startHunk = GetHunkOfType(SecureHunk.HUNK_TYPE_START, logStream, joinHunk.hash);

            startTime = Convert.ToUInt32(Encoding.UTF8.GetString(startHunk.timeStamp));

            byte [] bytes = joinHunk.GetUncompressedBody();

			// the JoinRecord is a dictionary made from the JSON deserialization of the hunk's body.
			Dictionary<string, string> JoinBody = JsonConvert.DeserializeObject< Dictionary<string, string> >(Encoding.UTF8.GetString(bytes));

			join = JsonConvert.DeserializeObject< Dictionary<string, string> >(JoinBody["join_data"]);

            bytes = startHunk.GetUncompressedBody();

   			Dictionary<string, string> StartBody = JsonConvert.DeserializeObject< Dictionary<string, string> >(Encoding.UTF8.GetString(bytes));
            
            start = JsonConvert.DeserializeObject<Dictionary < string, string > >(StartBody["start_data"]);

            return startHunk.hash; // remember the start of the hunks.

		}


		private FakeWebResponse MakeFakeValidateResponse(WebRequest request, byte[] postBytes, Stream postStream) {

			ValidateResponse vr = new ValidateResponse();

			vr.accepted = true;

			return new FakeWebResponse(true, GameLog.Serialize<ValidateResponse>(vr), 200);
		}

		public void ValidateSync(Action doneAction) {
			//_Validate ();
			if (ValidateInProgress) {
				throw new SystemException("Don't call Validate twice"); // we are in progress. Don't call 
			}

			ValidateInProgress = true;	// we are now in progress.

			WebLogger.instance.logInfo("[VAL] Doing final notarize");

			FinalNotarizeSync ((failed) => {
				validate2(failed, doneAction);
			});
		}

		// call this (and return) when validation fails.
		private void failValidation(string why) {
			Success = false;
			ValidateInProgress = false;

			WebLogger.instance.logInfo("[VAL] " + why);

			SaveLog();
		}

		// this is called when FinalNotarize is complete (failed or not)
		// this is called when FinalNotarize is complete (failed or not)
		private void validate2(bool failed, Action doneAction) {

			if (failed)
			{
				failValidation("failed final notarize");
				return;
			}

			if (dataHistory != null && dataHistoryHMAC == null) { // we need to finish the datasafe.
				TriPeaksDataSafeFinishRequestData finish = new TriPeaksDataSafeFinishRequestData ();
				finish.host = ArenaProxy.instance.gameSession.ValidationHost;
				// TODO - need to determine this token
				finish.SetTriPeaksDataSafeFinishData();
				finish.OnBeginHandler += (request) => { Debug.Log("TriPeaks datasafefinish Fetch"); };
				finish.OnFailHandler += (request) => { Debug.Log("TriPeaks datasafefinish Failed");}; // TODO - better fail handling
				finish.OnCompleteHandler += (request) => { 
					TriPeaksDataSafeFinishData.Result result = ((TriPeaksDataSafeFinishRequestData) request).Response.result;
					if (result.status != "success") {
						return;
					}
					else {
						validate3(doneAction);
					}
				};
				WebRequester.Instance.FetchRequest(finish);

			}
			else 
			{
				// just go on.
				validate3(doneAction);
			}

		}

		private void validate3(Action doneAction) {
			WebLogger.instance.logInfo("[VAL] Submitting Game Log");

			TriPeaksValidateRequestData validate = new TriPeaksValidateRequestData ();
			validate.host = ArenaProxy.instance.gameSession.ValidationHost;

			// TODO - this is debug - just in editor
			/*
			MemoryStream ms = GetSerializedGameLog ();
			FileStream file = new FileStream("/Users/gdesmarais/Desktop/gamelog.bin", FileMode.Create, FileAccess.Write);
			ms.WriteTo(file);
			file.Close();
			ms.Close();
			*/

			validate.SetTriPeaksValidateData(GetSerializedGameLog());
			validate.OnCompleteHandler += (request) => { 
				TriPeaksValidateData.Result result = ((TriPeaksValidateRequestData) request).Response.result;
				validate4(result.accepted, doneAction);
			};
			WebRequester.Instance.FetchRequest(validate);
		}

		private void validate4(bool validationAccepted, Action doneAction) {

			WebLogger.instance.logInfo("[VAL] Game Log submission", validationAccepted ? "SUCCEEDED" : "FAILED");

			Success = validationAccepted;
			ValidateInProgress = false;
			GameValidationResult validationResult = GameValidationResult.ValidationSuccess;

			if (Success) {
				ClearLog();
			} else {
				// TODO - error handling - validation failed
				validationResult = GameValidationResult.ValidationFailure;
				ArenaProxy.instance.gameSession.FailReason = GameSession.FailReasons.ValidationServiceFailure;
				SaveLog();
			}
			ArenaProxy.instance.gameSession.ValidationResult = validationResult;
			if (null != doneAction) {
				doneAction ();
			}
		}

		// This is a FailChecker. It determines, for a WRJ, whether that WRJ should fail given how the WRD completed.
		private bool CheckValidateResponse(WebRequestDispatcher wrd) {

			ValidateResponse vr;

			try {
				vr = (ValidateResponse)GameLog.Deserialize<ValidateResponse>(wrd.ResponseBytes);
			}
			catch (Exception) {
				return true;
			}

			GsnDebug.Log("The sent game log was considered", vr.accepted ? "GOOD".ToGreen() : "BAD".ToRed() );

			return false; // if we make it here, call it success. Don't try again with the same GameLog if
			// the back end is telling you it doesn't like it.  Normally we would not try again on failure,
			// but with Bullish Validation (ARA-8371 STOPGAP) we don't accept failure. So, returning false 
			// here (indicating) success is the only way we can accept this special kind of failure, one where
			// the game log is corrupt.

			// This is what we'd normally do, if we didn't have Bullish Validation. We'd just fail over and over 
			// until we time out.
			// return (!vr.accepted);
		}

		public static byte [] Serialize<t>(t v) {

			var serializer = MessagePackSerializer.Get<t>();
			
			using(MemoryStream ms = new MemoryStream()) {
				serializer.Pack(ms, v);
				
				return ms.ToBytes();				
			}
		}
		
		public static t Deserialize<t>(byte[] bytes) {
			
			var serializer = MessagePackSerializer.Get<t>();
			return serializer.Unpack(new MemoryStream(bytes));
	    }

		public static t Deserialize<t>(MemoryStream st) {
			
			var serializer = MessagePackSerializer.Get<t>();
			return serializer.Unpack(st);
	    }

		/// Returns a byte array with the SHA-512 hash of the input
		public static byte [] GetSHA512Hash( byte [] input)
		{
			byte[] hashBytes;

			// Make sure the managed instance is disposed afterwards
			using (SHA512 sha = new SHA512Managed())
			{
				hashBytes = sha.ComputeHash(input);
			}

			return hashBytes;
		}

		/// Returns a byte array with the SHA-512 hash of the input
		public static byte [] GetSHA512Hash( Stream input)
		{
			byte[] hashBytes;

			// Make sure the managed instance is disposed afterwards
			using (SHA512 sha = new SHA512Managed())
			{
				hashBytes = sha.ComputeHash(input);
			}

			return hashBytes;
		}

		public static string ToHexString(byte [] input) {
			// Convert the hash to a string
			// Create a new Stringbuilder to collect the bytes and create a string.
			StringBuilder sBuilder = new StringBuilder();

			// Loop through each byte of the hashed data and format each one as a hexadecimal string. 
			for (int i = 0; i < input.Length; i++)
			{
				sBuilder.Append(input[i].ToString("X2"));
			}

			// Return the hexadecimal string. 
			return sBuilder.ToString();
		}

		public static byte[] HexToBytes(string input) {
			return Enumerable.Range(0, input.Length / 2).Select(x => Convert.ToByte(input.Substring(x * 2, 2), 16)).ToArray();
		}

		// Print the byte array in a readable format.
		public static void PrintByteArray(byte[] array)
		{
			int i;
			for (i = 0; i < array.Length; i++)
			{
				Console.Write(String.Format("{0:X2}", array[i]));
				if ((i % 4) == 3) Console.Write(" ");
			}
			Console.WriteLine();
		}
		public static string WrapJson(string wrapperKey, string json) {
			json = json.Replace ("\n", "");
			return "{\""+wrapperKey+"\":\"" + json.Replace("\"", "\\\"") + "\"}";
		}
	}
}
