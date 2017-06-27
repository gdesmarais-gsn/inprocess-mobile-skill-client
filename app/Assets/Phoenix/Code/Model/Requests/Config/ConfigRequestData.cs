using GSN.Skill.Requests;
using Newtonsoft.Json.Linq;
using GSN.Skill.Requests.Config;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Phoenix.Model.Data;
using System.Collections.Generic;

namespace GSN.Skill.Phoenix.Requests.Config
{
	public struct ConfigData
	{
		public Result result;

		public struct Locations
		{
			public SortedDictionary<string,string> States;
			public SortedDictionary<string,string> Countries;
			public SortedDictionary<string,string> Provinces;
		}
		public struct PhoenixConfigItem
		{
			public string key;
			public string value;
		}
		public struct Result
		{
			public Locations locations; 
			public string[] depositAmounts;  // Array of deposit amounts we want to offer when depositing
			public Dictionary<string,string> links;
			public PhoenixConfigItem[] phoenixConfig;
		}
	}
	// Request for withdrawing.  On successful withdraw, you will just get a diet user object back.
	// An Error array will be provided if there is an issue with the withdraw. 
	public class ConfigRequestData : WebGETRequest<ConfigData>
	{

		private const APIReference.Category API_CATEGORY = APIReference.Category.Config;
		private const string URL_KEY = "get_game_configuration_data";
		private DeviceData _deviceData;

		public override ConfigData Response { get; set; }

		public override string Url
		{
			get
			{
				return APIReference.Instance.GetRequestURL(API_CATEGORY, URL_KEY);//"https://qaweb2.worldwinner.com/api/config/get_game_configuration_data?gametype_id=1";
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
				    'locations': {
				      'States': {
				        'IN': 'Indiana',
				        'VT': 'Vermont',
				        'GA': 'Georgia',
				        'AK': 'Alaska',
				        'IL': 'Illinois',
				        'KY': 'Kentucky'
				      },
				      'Countries': {
				        'CA': 'Canada',
				        'US': 'United States',
						'AN': 'Another Country that is not supported'
				      },
				      'Provinces': {
				        'NT': 'Northwest Territories',
				        'BC': 'British Columbia',
				        'MB': 'Manitoba',
				        'NS': 'Nova Scotia',
				        'ON': 'Ontario',
				        'QC': 'Quebec',
				        'YT': 'Yukon',
				        'NF': 'Newfoundland',
				        'NU': 'Nunavut',
				        'PE': 'Prince Edward Island',
				        'NB': 'New Brunswick',
				        'SK': 'Saskatchewan',
				        'AB': 'Alberta'
				      }
				    },
				    'depositAmounts': [
				      '10.00',
				      '20.00',
				      '25.00',
				      '30.00',
				      '50.00',
				      '75.00',
				      '100.00',
				      '200.00'
				    ],
				    'links': {
				      'rewardStore': 'https://qaweb2.worldwinner.com/desktop/cgi/rewards',
				      'payment': 'https://qaweb2.worldwinner.com/desktop/cgi/finance/deposit.pl',
				      'taxForm': 'https://qaweb2.worldwinner.com/desktop/cgi/tax/tax_reporting.html'
				    }
				  }
				}
				";

				return data;
			}
		}
		#endif // #if DEBUG
	}

}
