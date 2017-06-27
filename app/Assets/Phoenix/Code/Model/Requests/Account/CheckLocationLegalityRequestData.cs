using System;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Phoenix.Requests.Account
{
	public struct LocationLegalityData
	{
		public struct Result
		{
			public bool legal_location;  
			public string[] allowed_tourn_types; // if null not a problem
			public string[] games_blocked; // if null not a problem
		}

		public Result result;
	}

	public class CheckLocationLegalityRequestData : WebPOSTRequest<LocationLegalityData>
	{
		public struct GpsData
		{
			public string[] formattedAddressLines;
			public string street;
			public string subAdministrativeArea;
			public string thoroughfare;
			public string zip;
			public string name;
			public string city;
			public string postCodeExtension;
			public string country;
			public string state;
			public string subLocality;
			public string subThroughfare;
			public string countryCode;
		}

		private const APIReference.Category API_CATEGORY = APIReference.Category.Account;
		private const string URL_KEY = "check_location_legality";

		private const string REQUEST_BODY_GPS_DATA = "gps_data";

		private GpsData _gpsData;

		public override LocationLegalityData Response { get; set; }

		public void SetGPSData(GpsData gpsData)
		{
			_gpsData = gpsData;
		}

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/account/check_state_legality";
			}
		}

		public override JContainer RequestBody
		{
			get
			{
				JObject gpsData = new JObject();
				if (_gpsData.formattedAddressLines != null)
					gpsData.Add("FormattedAddressLines", JsonConvert.SerializeObject(_gpsData.formattedAddressLines));

				gpsData.Add("Street", _gpsData.street);
				gpsData.Add("SubAdministrativeArea", _gpsData.subAdministrativeArea);
				gpsData.Add("Thoroughfare", _gpsData.thoroughfare);
				gpsData.Add("ZIP", _gpsData.zip);
				gpsData.Add("Name", _gpsData.name);
				gpsData.Add("City", _gpsData.city);
				gpsData.Add("PostCodeExtension", _gpsData.postCodeExtension);
				gpsData.Add("Country", _gpsData.country);
				gpsData.Add("State", _gpsData.state);
				gpsData.Add("SubLocality", _gpsData.subLocality);
				gpsData.Add("SubThoroughfare", _gpsData.subThroughfare);
				gpsData.Add("CountryCode", _gpsData.countryCode);

				JObject retval = new JObject();
				retval.Add(REQUEST_BODY_GPS_DATA, gpsData);

				return retval;
			}
		}

		public override string CookieSessionIDKey
		{
			get { return string.Empty; }
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
					'gps_data':
					{
						'SubAdministrativeArea': 'Suffolk',
						'CountryCode': 'US',
						'SubLocality': 'Downtown Crossing',
						'State': 'MA',
						'Street': '100 Summer St',
						'ZIP': '02110',
						'Name': '100 Summer St',
						'Latitude': 42.35364850681481,
						'Thoroughfare': 'Summer St',
						'Longitude': -71.0578371721235,
						'FormattedAddressLines': ['100 Summer St', 'Boston, MA  02110', 'United States'],
						'SubThoroughfare': '100',
						'PostCodeExtension': '2106',
						'Country': 'United States',
						'City': 'Boston'
					}
				}
				";

				string canadaData = @"
				{
					'gps_data':
					{
						'SubAdministrativeArea': 'Québec',
						'CountryCode': 'CA',
						'SubLocality': 'Vieux-Quebec',
						'State': 'QC',
						'Street': '2 Rue des Jardins',
						'ZIP': 'G1R 3V6',
						'Name': '2 Rue des Jardins',
						'Latitude': 46.8138783,
						'Thoroughfare': 'Rue des Jardins',
						'Longitude': -71.2079809,
						'FormattedAddressLines': ['2 Rue des Jardins', 'Quebec City QC G1R 3V6', 'Canada'],
						'SubThoroughfare': '2',
						'Country': 'Canada',
						'City': 'Quebec City'
					}
				}
				";

				return data;
			}
		}
		#endif // #if DEBUG
	}
}
