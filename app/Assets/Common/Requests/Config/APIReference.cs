using System;
using System.Collections.Generic;
using GSN.Skill.Utils;

namespace GSN.Skill.Requests.Config
{
	public class APIReference : Singleton<APIReference>
	{
		public enum Category
		{
			None,
			Account,
			Tournament,
			Payment,
			Config,
			Logging,
			Reward,
			Game
		}

		public bool HasData { get; private set; }

		// TODO: Need to figure out how to set environment
		public APIInfoRequestData apiInfo { get; private set; }

		private Dictionary<Category, Dictionary<string, string>> _apiList;

		public APIReference()
		{
			HasData = false;

			_apiList = new Dictionary<Category, Dictionary<string, string>>();

			apiInfo = new APIInfoRequestData();
			apiInfo.OnCompleteHandler += OnAPIInfoComplete;
		}

		#region Public Functions

		public void SetEnvironment(string environment)
		{
			// TODO: figure out how to display environment within the app
		}

		public string GetRequestURL(Category category, string urlKey)
		{
			if (!ValidateRequest(category, urlKey))
			{
				GsnDebug.LogError("Invalid urlKey in category:", category, "|", urlKey);
				return string.Empty;
			}

			return _apiList[category][urlKey];
		}

		#endregion

		private bool ValidateRequest(Category category, string urlKey)
		{
			if (!_apiList.ContainsKey(category))
				return false;

			if (!_apiList[category].ContainsKey(urlKey))
				return false;

			return true;
		}

		private void OnAPIInfoComplete(IWebRequest request)
		{
			// reset the list whenever an API info call has completed
			_apiList.Clear();

			APIInfoData.Service[] services = apiInfo.Response.result.services;

			for (int i = 0; i < services.Length; ++i)
			{
				APIInfoData.Service service = services[i];
				APIInfoData.Endpoint[] endpoints = service.endpoints;

				Category category = GetCategory(service.name);
                if (_apiList.ContainsKey(category))
				{
					_apiList[category].Clear();
				}
				else
				{
					_apiList[category] = new Dictionary<string, string>();
				}

				var categoryEndpoints = _apiList[category];

				for (int j = 0; j < endpoints.Length; ++j)
				{
					APIInfoData.Endpoint endpoint = endpoints[j];

					categoryEndpoints.Add(endpoint.name, endpoint.path);
				}
			}

			HasData = true;
		}

		private Category GetCategory(string category)
		{
			Category returnValue = Category.None;

			switch (category)
			{
				case "Account":
					returnValue = Category.Account;
					break;
				case "Tournament":
					returnValue = Category.Tournament;
					break;
				case "Payment":
					returnValue = Category.Payment;
					break;
				case "Config":
					returnValue = Category.Config;
					break;
				case "Logging":
					returnValue = Category.Logging;
					break;
				case "Reward":
					returnValue = Category.Reward;
					break;
				case "Game":
					returnValue = Category.Game;
					break;
			}

			return returnValue;
		}
	}
}
