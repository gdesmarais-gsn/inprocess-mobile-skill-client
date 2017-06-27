#if UNITY_EDITOR
using System;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Utils;
using Newtonsoft.Json;
using UnityEngine;

namespace GSN.Skill.Phoenix.Utils.GeoLocation
{
	public class GeolocationEditorMode : BaseGeolocationMode
	{
		private const string MOCK_LOCATION = @"
		{
			'FormattedAddressLines': ['100 Summer St', 'Boston, MA  02110', 'US'],
			'Street': '100 Summer St',
			'SubAdministrativeArea': 'Middlesex',
			'Thoroughfare': 'Summer St',
			'ZIP': '02110',
			'Name': '100 Summer St',
			'City': 'Boston',
			'PostCodeExtension': '1317',
			'Country': 'US',
			'State': 'MA',
			'SubLocality': 'Boston',
			'SubThoroughfare': '617',
			'CountryCode': 'US',
			'Latitude': 42.3538104,
			'Longitude': -71.057391
		}
		";

		public override void CheckDeviceSettings(Action successCallback, Action<GpsResult> failCallback)
		{
			GsnDebug.Log("GeoLoc Editor: Check Device Settings");

			// editor has no settings to validate. auto succeed
			if (successCallback != null)
				successCallback();
		}

		public override void OpenSettings() { }

		public override CheckLocationLegalityRequestData.GpsData ParseGpsData(string data)
		{
			// The mock data we're using reflects the GPS Data being used
			return JsonConvert.DeserializeObject<CheckLocationLegalityRequestData.GpsData>(data);
		}

		protected override void HandleReverseGeolocation(LocationInfo location)
		{
			GsnDebug.Log("GeoLoc Editor: reverse geolocate");

			NotifyLocationResult(true, MOCK_LOCATION);
		}
	}
}
#endif
