using System;
using System.Collections.Generic;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Events;

namespace GSN.Skill.Phoenix.Model.Data
{

	public class DeviceData
	{
		public string clientID {get; set;}


		public DeviceData()
		{
			RequestManager.Instance.OnDeviceDataSet += OnDeviceDataSet;
			EventDispatcher.AddListener<ClientIDSetEvent>(OnClientIDSet);
		}
		// This gets called if we get the client id from the ww back end.
		private void OnDeviceDataSet(RegisterDeviceRequestData registerDeviceData)
		{
			EventDispatcher.DispatchEvent( new ClientIDSetEvent(registerDeviceData.Response.result.client_id));
		}
		// This gets called regardless if we get the client id out of cache or if we get it from the backend.
		private void OnClientIDSet(IEvent e)
		{
			clientID = ((ClientIDSetEvent)e).clientID;
		}
	}
}
