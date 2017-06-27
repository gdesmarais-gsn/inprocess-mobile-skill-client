using UnityEngine;
using System.Collections.Generic;
using Newtonsoft.Json;
using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common.Model;
using System;
using System.IO;
using System.Text;

using System.Net.Mail;
using System.Net.Security;
using System.Net;
using System.Security.Cryptography.X509Certificates;
using GSN.Skill.Games.Common.Utils.WebLogging;

namespace GSN.Skill.Games.Common.Client.Session
{
	public class MockGameSession : GameSessionBase, IGameSession
	{

		// handy for timestamp computation.
		static DateTime UnixStartTime = new DateTime(1970, 1, 1, 0, 0, 0, 0, System.DateTimeKind.Utc);

		// what time is it now?
		private static string UnixTimeStamp()
		{
			double diff = (TimeZoneInfo.ConvertTimeToUtc(DateTime.Now) - UnixStartTime).TotalSeconds;

			return ((uint)diff).ToString();
		}

		private IDataSafe _dataSafe;

		public IDataSafe DataSafe {
			get {
				return _dataSafe;
			}
		}

 		public RequestWrapper ErrorRequestWrapper {
 			get; private set;
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

		public RequestWrapper.requestCustomizer customizeRequest{
			get;set;
		}
		/// Base url (including final slash) where we will send our requests.
		public string Url {
			set; private get; // Yes. Write-only.
		}
		public new Dictionary<string, string> Setup = new Dictionary<string, string>();
		public Dictionary<string, string> Options = new Dictionary<string, string>();

		private string notaryCompression = SecureHunk.HUNK_COMPRESSION_NONE;

		public string NotaryCompression {
			get {
				return notaryCompression;
			} 
			set {
				notaryCompression = value;
				_gameLog.NotaryCompression = value;
			}
		}

		private GameLog _gameLog = new GameLog("nowhere", null, true); // mocking Notarize and Validate

		private ActionQueue _actionQueue;
		
		private byte [] currentHash;

		private int _timeout = 5000;

		public int Timeout { get { return _timeout; } set{ _timeout = value;} }

		/// Indicates whether the most recent request was successful.
		private bool _success;
		public bool Success {
			get{
				return _success;
			}
			private set {
				_success = value;
			}
		}
		/// Indicates why the most recent request failed
		public GameSession.FailReasons FailReason {
			get; set;
		}

		public bool ActuallyValidate = true;	// Set this to true to use MessagePack.

		public MockGameSession () {
			_actionQueue = GlobalActionQueue.instance;

			_gameLog.NotaryCompression = notaryCompression;

            Application.logMessageReceived += HandleLog;
		}

        public GameSessionExitMode ExitMode 
        {
			get;set;
		}
		public GameValidationResult ValidationResult {
			get; set;
		}

		public bool 	ReplayEmailWhenDone;
        public string 	ReplayEmailSmtpServer;
        public int 		ReplayEmailSmtpPort = -1;
        public string 	ReplayEmailFromAddress;
        public string 	ReplayEmailFromPassword;
		public string 	ReplayToEmails = null;

		public delegate IDataSafePlugin DataSafePluginCreator(Dictionary <string, string> joinBody, Dictionary <string, string> joinRecord);

		// If your game needs a DataSafe, you must provide us the means to create it for your game.
		public DataSafePluginCreator CreateDataSafePlugin;
        
		public override void JoinTournament (GameSession.GameSetupOptions gameSetupOptions, Action doneAction)
		{
			// TODO - should I be using a web logger here?
			WebLogger.instance.logInfo("[VAL] Joining Tournament ", gameSetupOptions);

			// Clear the game log. 
			gameLog = new GameLog("", null, false);
			gameLog.NotaryCompression = notaryCompression;

			// TODO - what game log interaction do I need here?  GameSession has a fair bit.
			// create a faked-up join hunk.

			gameLog.StartResponse = null;
			_startRecord = null;

			_joinBody = new Dictionary<string, string>();

			_joinBody["join_data"] = JsonConvert.SerializeObject(_joinRecord);

			// here's the fake join hunk.
			SecureHunk ah = new SecureHunk();

			ah.timeStamp = Encoding.UTF8.GetBytes(UnixTimeStamp());

			ah.type = SecureHunk.HUNK_TYPE_JOIN;

			currentHash = GameLog.InitialHash;

			ah.SetBody (Encoding.UTF8.GetBytes(JsonConvert.SerializeObject(_joinBody)), SecureHunk.HUNK_COMPRESSION_NONE, currentHash);

			ah.hmac = GameLog.InitialHash; // faked up. No authentication anyway.

			currentHash = ah.hash; // save this so we can do the right thing with the start hunk.

			gameLog.JoinResponse = GameLog.Serialize<SecureHunk>(ah);

			if (CreateDataSafePlugin != null) {

				// make the DataSafe.
				// TODO - what datasafe should I make here?
				_dataSafe = new MockDataSafe(CreateDataSafePlugin(_joinBody, _joinRecord), this);
			}
			Success = true;

			_actionQueue.QueueAction (doneAction);
		}

		public void StartGame (Action doneAction)
		{
			_startBody = new Dictionary<string, string>();

			_startBody["start_data"] = JsonConvert.SerializeObject(_startRecord);

			SecureHunk ah = new SecureHunk();

			ah.timeStamp = Encoding.UTF8.GetBytes(UnixTimeStamp());

			ah.type = SecureHunk.HUNK_TYPE_START;

			ah.SetBody (Encoding.UTF8.GetBytes(JsonConvert.SerializeObject(_startBody)), SecureHunk.HUNK_COMPRESSION_NONE, currentHash);

			currentHash = ah.hash;

			ah.hmac = GameLog.InitialHash; // again, total crap. not authenticated anyway.

			gameLog.StartResponse = GameLog.Serialize<SecureHunk>(ah);

			_actionQueue.QueueAction(doneAction);
		}
		private class MockValidateJob : Job 
		{
			private MockGameSession mockGameSession;

			public MockValidateJob(MockGameSession mockGameSession) {
				this.mockGameSession = mockGameSession;
			}

			protected override void CustomStart() {
				// this is all we do!
				mockGameSession.FinishedWithGameLog("Replay :", "", () => {

					Failed = !mockGameSession.Success;

				//	mockGameSession.WriteGameLogToFile("/Users/jpaquette/Documents/2015/gitStuff/arena-game-common/Utils/GLDump/bin/Debug/foo.bin");

					Finish();

				});
			}
			
			protected override void CustomAbort() {}
			protected override void CustomReset(bool hard) {}
		}

        private Job validateJob;

        public Job ValidateJob {

        	get 
			{
				if (validateJob == null)
					validateJob = new MockValidateJob(this);
        		return validateJob;
        	}

        }

        public void EndBullish() {
        	
        }

        private void FinishedWithGameLog(string header, string body, Action doneAction)
        {
			Application.logMessageReceived -= HandleLog;

			_gameLog.FinalNotarizeSync((bool failed) => {
				if (failed)
				{
					_actionQueue.QueueAction(doneAction);
					return;
				}

		        string REPLAY_FILE_ROOT = (!Application.isEditor)?(Application.persistentDataPath+"/"):"../Replays/";
	            DateTime dt = DateTime.Now;
	            string filePath = REPLAY_FILE_ROOT + "Replay"+dt.ToString("yyyyMMdd_HHmmss") +".bin";
	            if (!Directory.Exists(REPLAY_FILE_ROOT)) {
	                Directory.CreateDirectory(REPLAY_FILE_ROOT);
	            }

				WriteGameLogToFile(filePath);
				SendReplayByMail(filePath, header, body);

				_actionQueue.QueueAction(doneAction);
			});
        }

		public new void WriteGameLogToFile(string fn, bool text = false) {

			using (FileStream outfile = new FileStream(fn, FileMode.Create)) {

				using (MemoryStream logStream = _gameLog.GetSerializedGameLog()) {

					if (text) { // write it out as hex text
						outfile.Write(Encoding.UTF8.GetBytes( GameLog.ToHexString(logStream.ToBytes())));
					} 
					else
					{	// write it in binary
						logStream.CopyTo(outfile);
					}
				}
			}

            GsnDebug.Log("Wrote GameLog to file:", fn);
		}

        public bool checkReplayParams()
        {
        	bool allClear = true;
        	if (ReplayEmailWhenDone)
 			{
				if (String.IsNullOrEmpty(ReplayToEmails))
				{
					GsnDebug.LogError("Replay Email From Address Cannot be null");
					allClear = false;
				}

				if (String.IsNullOrEmpty(ReplayEmailFromAddress))
				{
					GsnDebug.LogError("Replay Email From Address Cannot be null");
					allClear = false;
				}
				if (String.IsNullOrEmpty(ReplayEmailSmtpServer))
				{
					GsnDebug.LogError("Replay Email Smtp Server Cannot be null");
					allClear = false;
				}
				if (ReplayEmailSmtpPort == -1)
				{
					GsnDebug.LogError("Replay Email Smtp Port Cannot be found");
					allClear = false;
				}
				if (String.IsNullOrEmpty(ReplayEmailFromAddress))
				{
					GsnDebug.LogError("Replay Email From Address Cannot be null");
					allClear = false;
				}
				if (String.IsNullOrEmpty(ReplayEmailFromPassword))
				{
					GsnDebug.LogError("Replay Email From Password Cannot be null");
					allClear = false;
				}
 			}
 			return allClear;
        }       

        private void SendReplayByMail(string filePath, string header = "Replay: ", string body = "") 
        {
        	if (!ReplayEmailWhenDone)
        		return;
        	
        	if (!checkReplayParams())
        		return;

            try
            {
	            MailMessage mail = new MailMessage();

	            mail.From = new MailAddress(ReplayEmailFromAddress);
   				char [] sep = {','};
				string [] emails = ReplayToEmails.Split(sep);
				foreach (string email in emails)
		            mail.To.Add(email);

	            mail.Subject = header + filePath;
	            mail.Body = "This is the replay file for game " + filePath + Environment.NewLine + body;
 				Attachment attachment = new Attachment(filePath);
 				mail.Attachments.Add(attachment);

	             SmtpClient smtpServer = new SmtpClient(ReplayEmailSmtpServer);
	             smtpServer.Port = ReplayEmailSmtpPort;
	             smtpServer.Credentials = new System.Net.NetworkCredential(ReplayEmailFromAddress, ReplayEmailFromPassword) as ICredentialsByHost;
	             smtpServer.EnableSsl = true;
	             ServicePointManager.ServerCertificateValidationCallback = 
	                 delegate(object s, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors) 
	                     { return true; };
	             smtpServer.Send(mail);

            }
            catch (Exception ep)
            {
                Debug.Log("failed to send email with the following error:" + ep.Message);
            }

       		Debug.Log("Out SendReplayByMail");
        }

        void HandleLog(string logString, string stackTrace, LogType type)
        {
            if(LogType.Exception == type && logString.IndexOf("Access to the path") == -1 && logString.IndexOf("Attempt to") == -1)
            {
				FinishedWithGameLog("Exception: ", logString +  Environment.NewLine + stackTrace, ()=>{});
            }
        }

        private static string EscapeURL(string url) {
            return WWW.EscapeURL(url).Replace("+", "%20");
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
			_gameLog.Add (type, s, gameTime);
		}

		public void AddData(byte [] data) 
		{
			_gameLog.AddData(data);
		}

		public void Notarize ()
		{
			_gameLog.Notarize();
		}
		/// Validates the game log. Sends it to the validation server for Validation and official results.
		public void Validate(Action doneAction 		///< Action to call on completion of Validation.
		) {

			_actionQueue.BeginContext("GS:Validate", 0, () => {

				if (!ActuallyValidate) {
					// 
					Success = true;
					_actionQueue.EndContext();
					return;
				}

				gameLog.ValidateSync(() => {

					Success = gameLog.Success;
					_actionQueue.EndContext();

				});


			}, () => {
				Success = false;
				FailReason = FailReasons.ValidationServiceFailure;
				_actionQueue.EndContext();
			}, doneAction);

			// TODO - can I send off the game log to the actual validation service here, instead of in game log?
			// should I, or should the game log do that part itself?

		}

		public void Abandon()
		{
		}		
	}
}
