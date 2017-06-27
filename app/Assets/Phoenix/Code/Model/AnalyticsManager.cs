using System;
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.Requests.Analytics;
using GSN.Skill.Phoenix.Requests.Config;
using GSN.Skill.Requests;
using GSN.Skill.Utils;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using UnityEngine;
using System.Globalization;
using GSN.Skill.Requests.Config;

namespace GSN.Skill.Phoenix.Model
{
	public class AnalyticsAttributes : Dictionary<AnalyticsAttributeName, string> { }

	public class AnalyticsObjectToSend
	{
		public List<AnalyticsAttributes> data;
		public Dictionary<AnalyticMetaDataName,string> metadata;
		public AnalyticsObjectToSend(List<AnalyticsAttributes> data, Dictionary<AnalyticMetaDataName,string> metadata)
		{
			this.data = data;
			this.metadata = metadata;
		}
	}

	/// <summary>
	/// Analytics Manager that handles getting an authentication token from WorldWinner and managing sending analytics events
	/// to our specified Fabric endpoint.
	/// 
	/// NOTE: It's important that the analytics manager purely LISTENS on activities occurring in the client.
	/// It should never intrude on the system.
	/// </summary>
	public class AnalyticsManager : SingletonMonoBehaviour<AnalyticsManager>
	{
		private const string ERROR_CODE_FABRIC_TOKEN_UNAVAILABLE = "Fabric_Token_Unavailable";

		private const int ANALYTICS_EVENTS_SEND_INTERVAL_IN_SECONDS = 3;
		private readonly WaitForSeconds ANALYTICS_SEND_INTERVAL = new WaitForSeconds(ANALYTICS_EVENTS_SEND_INTERVAL_IN_SECONDS);

		private bool _periodicSendEnabled = false;
		private const string EVENT_TYPE = "skill/client";
		private AnalyticsEvents _analyticsEvents;
		private FabricSessionHandler _fabricSessionHandler;
		private FabricEventTokenRequestData _fabricEventToken;
		private FabricEventServiceRequestData _fabricEventService;

		private bool _sendingAnaltyicsEvents = false;
		private List<AnalyticsAttributes> _mainEventQueue;
		private Queue<AnalyticsAttributes> _postSendEventQueue;

		public void Init(CurrentUser currentUser, GameListData gameList)
		{
			_mainEventQueue = new List<AnalyticsAttributes>();
			_postSendEventQueue = new Queue<AnalyticsAttributes>();
			_analyticsEvents = new AnalyticsEvents(AddAnalyticsEvent,currentUser,gameList);
			_fabricEventToken = new FabricEventTokenRequestData();
			_fabricEventService = new FabricEventServiceRequestData();
			_fabricSessionHandler = new FabricSessionHandler();


			// listeners to decide to get a device token or user token
			EventDispatcher.AddListener<AutoLoginSuccessEvent>((e) => GetUserToken());
			EventDispatcher.AddListener<ShowWelcomeScreenEvent>((e) => GetDeviceToken());
			// user has registered or logged in, attempt a user token now
			EventDispatcher.AddListener<RegisterUserSuccessEvent>((e) => GetUserToken());
			EventDispatcher.AddListener<LoginSuccessEvent>((e) => GetUserToken());

		}

		private IEnumerator EventSendingLoop()
		{
			while (_periodicSendEnabled)
			{
				SendAnalyticsEvents();

				// wait every X seconds to attempt to send out analytics
				yield return ANALYTICS_SEND_INTERVAL;
			}
		}

		/// <summary>
		/// We're not logged in yet but we want to notify the analytics system that a user is doing stuff before logging in
		/// </summary>
		private void GetDeviceToken()
		{
			GsnDebug.Log("Analytics: Getting Device Token.");

			// setup fabric event token request
			_fabricEventToken.tokenType = FabricEventTokenRequestData.TokenType.device;
			DeviceManager.Instance.SetupAnalyticData(_fabricEventToken);
			_fabricEventToken.OnCompleteHandler += OnFabricEventTokenComplete;
			_fabricEventToken.OnFailHandler += OnFabricEventTokenFail;

			WebRequester.Instance.FetchRequest(_fabricEventToken);
		}

		/// <summary>
		/// We're logged in and authenticated! Let's attempt to get a user token
		/// </summary>
		/// <returns>The user token.</returns>
		private void GetUserToken()
		{
			GsnDebug.Log("Analytics: Getting User Token.");

			// setup fabric event token request
			_fabricEventToken.tokenType = FabricEventTokenRequestData.TokenType.user;
			DeviceManager.Instance.SetupAnalyticData(_fabricEventToken);
			_fabricEventToken.OnCompleteHandler += OnFabricEventTokenComplete;
			_fabricEventToken.OnFailHandler += OnFabricEventTokenFail;

			WebRequester.Instance.FetchRequest(_fabricEventToken);
		}

		/// <summary>
		/// We received a Fabric Event Token
		/// </summary>
		/// <param name="request">Request.</param>
		private void OnFabricEventTokenComplete(IWebRequest request)
		{
			GsnDebug.Log("Analytics: Fabric Event Token Successful.");

			_fabricEventToken.OnCompleteHandler -= OnFabricEventTokenComplete;
			_fabricEventToken.OnFailHandler -= OnFabricEventTokenFail;

			var r = (FabricEventTokenRequestData)request;

			// set the authorization token for future request headers
			_fabricSessionHandler.AuthorizationToken = r.Response.result.fabric_token;

			// set the endpoint we'll need to hit for our analytics events
			_fabricEventService.SetEndpoint(r.Response.result.eventEndpoint);

			// we're ready to send events. try to send any if we have any queued up
			if (!_periodicSendEnabled)
			{
				// kick off the coroutine that would periodically attempt to send analytics
				_periodicSendEnabled = true;
				StartCoroutine(EventSendingLoop());
			}
		}

		/// <summary>
		/// We did not receive a Fabric Event Token
		/// </summary>
		/// <param name="request">Request.</param>
		private void OnFabricEventTokenFail(IWebRequest request)
		{
			GsnDebug.LogError("Analytics: Fabric Event Token Fail.");

			_fabricEventToken.OnCompleteHandler -= OnFabricEventTokenComplete;
			_fabricEventToken.OnFailHandler -= OnFabricEventTokenFail;

			// TODO: Handle any issues behind the scenes

			for (int i = 0; i < request.error.errors.Length; ++i)
			{
				var error = request.error.errors[i];

				switch (error.error_code)
				{
					case ERROR_CODE_FABRIC_TOKEN_UNAVAILABLE:
						// TODO: QA AUTOMATION: This error will fail automation tests, though
						// the tests don't really care about this error.
						GsnDebug.LogError("Fabric Event Token System is down.");
						break;
					default:
						GsnDebug.LogError(request.error.errors[i].error_message);
						break;
				}
			}

			if (_fabricEventToken.tokenType == FabricEventTokenRequestData.TokenType.user)
			{
				// we were attempting to get a user token, but failed even after authentication. fallback to device token
				GetDeviceToken();
			}
		}

		/// <summary>
		/// Add an analytics event to the queue.
		/// </summary>
		/// <param name="attributes">Attributes.</param>
		private void AddAnalyticsEvent(AnalyticsAttributes attributes)
		{
			// TODO: Add error checking to make sure an event name has been set

			string eventID = Guid.NewGuid().ToString();
			// This is epoch
			int eventTime =  (int)(DateTime.UtcNow - new DateTime(1970, 1, 1)).TotalSeconds;;

			attributes.Add(AnalyticsAttributeName.event_id, eventID);
			attributes.Add(AnalyticsAttributeName.event_created_time, eventTime.ToString());

#if DEBUG
			GsnDebug.Log("Analytics: Adding analytics event", JObject.FromObject(attributes));
#endif

			if (!_sendingAnaltyicsEvents)
			{
				// we're not in the middle of sending. place event in normal queue
				_mainEventQueue.Add(attributes);
			}
			else
			{
				// we're in the middle of sending. place event in separate queue that will get added to the main queue after
				_postSendEventQueue.Enqueue(attributes);
			}
		}

		/// <summary>
		/// Sends the queued analytics events.
		/// </summary>
		private void SendAnalyticsEvents()
		{
			if (!APIReference.Instance.HasData)
				return; // we haven't completed api discovery endpoint yet, which means we can't even send any analytics events
			
			if (!WebRequester.Instance.HasConnection)
				return;  // if we don't have a stable connection then don't attempt to send analytics. Since analytics are sent periodically anyway we can wait.

			if (string.IsNullOrEmpty(_fabricSessionHandler.AuthorizationToken))
			{
				GsnDebug.LogError("Analytics: Authorization token was not set before attempting to send an analytics event.");
				GetUserToken();
				return;
			}

			if (_mainEventQueue.Count == 0)
			{
				//GsnDebug.LogWarning("Analytics: No analytics events to send.");
				return; // we have nothing to send
			}

			_sendingAnaltyicsEvents = true;

			GsnDebug.Log("Sending analytics event(s)");
			// TODO: Figure out how to build the request header with the pertinent user/device specific information (i.e. device model, idfv, etc.)


			Dictionary<AnalyticMetaDataName,string> metaData = new Dictionary<AnalyticMetaDataName,string>();
			metaData.Add(AnalyticMetaDataName.type, EVENT_TYPE);
			metaData.Add(AnalyticMetaDataName.client_request_send_time,DateTime.UtcNow.ToString("o"));

			List<AnalyticsObjectToSend> events = new List<AnalyticsObjectToSend>();
			events.Add(new AnalyticsObjectToSend(_mainEventQueue, metaData));
			_fabricEventService.SetRequestBody(JArray.FromObject(events));
			_fabricEventService.OnCompleteHandler += OnFabricEventServiceComplete;
			_fabricEventService.OnFailHandler += OnFabricEventTokenFail;

			// use the fabric session handler. this makes sure the request header is set properly
			WebRequester.Instance.FetchRequest(_fabricEventService, _fabricSessionHandler);
		}

		private void UpdateEventQueue()
		{
			if (_postSendEventQueue.Count > 0)
			{
				_mainEventQueue.AddRange(_postSendEventQueue);

				_postSendEventQueue.Clear();
			}
		}

		/// <summary>
		/// The analytics events were successfully sent
		/// </summary>
		/// <param name="request">Request.</param>
		private void OnFabricEventServiceComplete(IWebRequest request)
		{
			_sendingAnaltyicsEvents = false;

			GsnDebug.Log("Analytics: Fabric Event(s) Send Successful.");

			_fabricEventService.OnCompleteHandler -= OnFabricEventServiceComplete;
			_fabricEventService.OnFailHandler -= OnFabricEventTokenFail;

			// analytics were sent successfully. clear out the events
			_mainEventQueue.Clear();

			UpdateEventQueue();
		}

		/// <summary>
		/// The analytics events failed to send
		/// </summary>
		/// <param name="request">Request.</param>
		private void OnFabricEventServiceFail(IWebRequest request)
		{
			_sendingAnaltyicsEvents = false;

			GsnDebug.LogError("Analytics: Fabric Event(s) Send Fail.");

			_fabricEventService.OnCompleteHandler -= OnFabricEventServiceComplete;
			_fabricEventService.OnFailHandler -= OnFabricEventTokenFail;

			// validate error
			for (int i = 0; i < request.error.errors.Length; ++i)
			{
				GsnDebug.LogError(request.error.errors[i].error_message);
			}

			UpdateEventQueue();

			// it's usually because our token is stale, get an updated user token
			GetUserToken();
		}
	}
}
