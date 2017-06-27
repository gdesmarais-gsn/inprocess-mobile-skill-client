using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Requests;
using UnityEngine;
using System.Text;
using System;

using GSN.Skill.Games.Common.Utils;
using Newtonsoft.Json;

namespace GSN.Skill.TriPeaks.Requests.Game
{
	public class TriPeaksResult
	{
		public string status;
		public AccountLoginData.EnvVars env_vars;
	}
	/*
	public class TriPeaksData
	{
		public TriPeaksResult result;
	}
*/

	public abstract class TriPeaksRequestData<T> : WebPOSTRequest<T> where T : struct
	{
		//public override T Response { get; set; }
		protected string _token;

		private string _host;

		// Splitting this up as we may need more activity in the getting/setting later
		// TODO - pull this from settings passed in
		public string host {
			get {
				// Allow for an instance override
				return (null == _host) ? "localhost:8000" : _host;
			}
			set {
				_host = value;
			}
		}
		private string _path;
		// Splitting this up as we may need more activity in the getting/setting later
		public string path {
			get {
				return _path;
			}
			set {
				_path = value;
			}
		}
		public override string Url
		{
			get
			{
				return host + path;

			}
		}

		/*
		Haven't figured out how to pull this in just yet
		public override string CookieSessionIDKey
		{
			get { return (null == Response.result) ? "" : Response.result.env_vars.cookieName; }
		}
		*/
		public override string CookieSessionIDKey {
			get { return String.Empty; }
		}
		public TriPeaksRequestData() {
			OnBeginHandler += (request) => {
				Log ("BEGIN request to " + Url + " - request: ", request);
			};
			OnFailHandler += (request) => {
				Log ("Request FAILED to " + Url + " - WW error: ", request.error);
			}; // TODO - better fail handling
			OnCompleteHandler += (request) => {
				Log ("Request COMPLETE to " + Url, request, true);
			}; 
		}
		public void Log(string message, object obj = null, bool ShowResponse = false) {
			string append = "";
			#if DEBUG
			if (null != obj) {
				if (ShowResponse) {
					System.Reflection.PropertyInfo property = obj.GetType().GetProperty("Response");
					if (null != property) {
						var value = property.GetValue(obj, null);
						if (null != value) {
							obj = value;
						}
					}
				}
				append = " Reference : [" + JsonConvert.SerializeObject(obj, Formatting.None,
					new JsonSerializerSettings { 
						ReferenceLoopHandling = ReferenceLoopHandling.Ignore
				}) + "]";
			}
			#endif
			GsnDebug.Log (this.GetType().Name + ": " + message + append);
		}
		#if DEBUG
		public override bool useMockPayload
		{
			get
			{
				return (Debug.isDebugBuild && host == "mock");
			}
		}	
		public static string constructMockPayload(string requestSpecificData) {
			return "{" +
				"  \"result\": {" +
				"    \"env_vars\": {" +
				"      \"light_features\": {" +
				"        \"mobilePromoPage\": 1" +
				"      }," +
				"      \"cookieName\": \"qaweb2.worldwinner.comSID_\"" +
				"    }," +
				"    \"status\" : \"success\"," +
				"    " + requestSpecificData +
				"  }," +
				"\"validate_jwt\":\"eyJhbGciOiJIUzI1NiJ9.eyJnYW1lX2lkIjoiMTE5MTM3OCIsImV4cCI6IjE0OTc1MzcxMTciLCJpYXQiOjE0OTc1MzM1MTcsIm9wdGlvbnNfZGF0YSI6eyJUdXRvcmlhbEludHJvQ2FyZE9yZGVyIjoiSW50cm8gT3JkZXIiLCJSZXNodWZmbGUiOiIxIiwiR2FtZVRpbWUiOiIxMjAiLCJPbmVTaG90V2lsZCI6IjEiLCJUdXRvcmlhbFRyYXAiOiIwIiwiVHV0b3JpYWxJbnRybyI6IjAiLCJIb2xkIjoiMCIsIkJvYXJkSUQiOiI5NyIsIlR1dG9yaWFsU2hhcmsiOiIwIn19.9sgGbYpiKi5UiRtvzPRqbds97z4Fe3du1gwCkSrQ4_I\"" +
				"}";
		}
		#endif
	}
}
