using GSN.Skill.Requests;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.TriPeaks.Requests.Game
{
	public struct TriPeaksDataSafeFinishData
	{
		public Result result;

		public class Result : TriPeaksResult
		{
		}
	}

	public class TriPeaksDataSafeFinishRequestData : TriPeaksRequestData<TriPeaksDataSafeFinishData>
	{
		public override TriPeaksDataSafeFinishData Response { get; set; }

		/*
		public override string CookieSessionIDKey
		{
			get { return Response.result.env_vars.cookieName; }
		}
		*/
		public override Newtonsoft.Json.Linq.JContainer RequestBody {
			get {
				JObject body = new JObject();
				return body;
			}
		}
		public void SetTriPeaksDataSafeFinishData() {
		}
		#if DEBUG
		public override string mockPayload
		{
			get
			{
				string requestSpecificData = "";
				return constructMockPayload (requestSpecificData);
			}
		}
		#endif
	}
}
