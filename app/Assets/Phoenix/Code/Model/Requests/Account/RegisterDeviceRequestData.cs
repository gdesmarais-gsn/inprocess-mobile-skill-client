using GSN.Skill.Phoenix.Utils;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace GSN.Skill.Phoenix.Requests.Account
{
	public struct RegisterDeviceData
	{
		public Result result;

		// We are going to want to be able to pass the client_id along with the tournament signup request to help with metrics.
		public struct Result
		{
			public string mac_address;
			public string windows_id;
			public string client_id;
			public string owner_id;
			public User user;
		}
	}

	/// <summary>
	/// This class is meant to call the register device endpoint.  We use the data here to tie a user's ww account to a device for the session.
	/// This helps with metrics, and can help distinguish where transactions (like deposits, tourn signups etc) come from.
	/// </summary>
	public class RegisterDeviceRequestData : WebPOSTRequest<RegisterDeviceData>, IUserInfo
	{
		private const APIReference.Category API_CATEGORY = APIReference.Category.Account;
		private const string URL_KEY = "register_device";

		// These are all of the request args that the ww backend is expecting.  The only required one is device_id
		private const string REQUEST_BODY_DEVICE_ID = "device_id";
		private const string REQUEST_BODY_DEVICE = "device";
		private const string REQUEST_BODY_DEVICE_ID_TYPE = "device_id_type";
		private const string REQUEST_BODY_MODEL = "model";  
		//private const string REQUEST_BODY_MODULE_TYPE = "moduleType";  // I don't believe this is required.    The WW API sets this as API::Account if nothing is provided.  Since there are no other consumers, this should be fine for MVP.
		private const string REQUEST_BODY_OS = "operating_system";
		private const string REQUEST_BODY_PLATFORM = "platform";
		private const string REQUEST_BODY_SIMPLE_DEVICE_TYPE = "simpleDeviceType";
		private const string SKILL_PLATFORM = "skill-app";


		public override RegisterDeviceData Response { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/account/register_device";
			}
		}

		public User userData
		{
			get { return Response.result.user; }
		}

		public override string CookieSessionIDKey
		{
			get { return string.Empty; }
		}

		public override JContainer RequestBody
		{
			get
			{
				JObject obj = new JObject();
				obj.Add(REQUEST_BODY_DEVICE_ID, NativeUtilities.GetDeviceID()); 
				obj.Add(REQUEST_BODY_DEVICE_ID_TYPE, NativeUtilities.GetDeviceIDType());
				//obj.Add(REQUEST_BODY_PLATFORM,  NativeUtilities.GetPlatform());
				// FOR MVP we are going to be supplying skill-app as the platform.  SKI-331
				obj.Add(REQUEST_BODY_PLATFORM,  SKILL_PLATFORM);
				obj.Add(REQUEST_BODY_DEVICE, SystemInfo.deviceName);
				obj.Add(REQUEST_BODY_MODEL, SystemInfo.deviceModel);
				obj.Add(REQUEST_BODY_OS, SystemInfo.operatingSystem);
				return obj;
			}
		}
		  
		#if DEBUG
		public override bool useMockPayload
		{
			get { return false; }
		}

		public override string mockPayload
		{
			get
			{
				string data = @"
				{
				  'result': {
				    'mac_address': 'mobile-device-mac-address',
				    'windows_id': '2063c1608d6e0baf80249c42e2be5804',
				    'client_id': '12109224',
				    'owner_id': '2063c1608d6e0baf80249c42e2be5804'
				  }
				}
				";

				return data;
			}
		}
		#endif // #if DEBUG
	}
}
