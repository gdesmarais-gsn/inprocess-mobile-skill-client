using System;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Utils;
using UnityEngine;

namespace GSN.Skill.Phoenix.Utils.GeoLocation
{
	public abstract class BaseGeolocationMode
	{
		private const int MIN_FETCH_LOCATION_IN_SECONDS = 60;

		private string _location = string.Empty;
		private DateTime _timeReceivedLocation = DateTime.MinValue;

		protected Action<string> _successCallback;
		protected Action<GpsResult, string> _failCallback;

		#region Public Functions

		public abstract void CheckDeviceSettings(Action successCallback, Action<GpsResult> failCallback);

		public void ReverseGeolocation(LocationInfo location, Action<string> successCallback, Action<GpsResult, string> failCallback)
		{
			GsnDebug.Log("GeoLoc all modes: start reverse geo location");

			_successCallback = successCallback;
			_failCallback = failCallback;

			if (IsLocationStale())
			{
				HandleReverseGeolocation(location);
			}
			else
			{
				NotifyLocationResult(true, _location);
			}
		}

		public abstract CheckLocationLegalityRequestData.GpsData ParseGpsData(string data);

		public abstract void OpenSettings();

#if !UNITY_EDITOR
		/// <summary>
		/// Callback called from native platform SDK when reverse geocoding process is finished
		/// </summary>
		/// <param name="location">Location.</param>
		public void ReceivedLocation(string location)
		{
			_timeReceivedLocation = DateTime.Now;
			_location = location;

			NotifyLocationResult(true, _location);
		}

		/// <summary>
		/// Callback called from native platform SDK when reverse geocoding process is failed
		/// </summary>
		/// <param name="error">Error.</param>
		public void ReceivedLocationError(string error)
		{
			NotifyLocationResult(false, error);
		}
#endif
		#endregion

		protected abstract void HandleReverseGeolocation(LocationInfo location);

		protected void NotifyLocationResult(bool success, string result)
		{
			if (success)
			{
				if (_successCallback != null)
					_successCallback(result);
			}
			else
			{
				if (_failCallback != null)
					_failCallback(GpsResult.GeoCodeError, result);
			}

			_successCallback = null;
			_failCallback = null;
		}

		private bool IsLocationStale()
		{
			return (DateTime.Now > _timeReceivedLocation.AddSeconds(MIN_FETCH_LOCATION_IN_SECONDS) || string.IsNullOrEmpty(_location));
		}
	}
}
