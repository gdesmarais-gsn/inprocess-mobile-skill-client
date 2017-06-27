using GSN.Skill.Utils;
using System.Collections;
using UnityEngine;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Phoenix.Model.Popups;
using System;
using System.Text;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json;

namespace GSN.Skill.Phoenix.Utils.GeoLocation
{
	/// Possible results of location check
	public enum GpsResult
	{
		Undetermined,   /// Location was not yet received/validated
		Denied,         /// location disabled by user in system settings
		Timeout,        /// We were waiting too long for gps, aborted
		GeoCodeError,   /// Geocoder was unsuccessful, probably invalid location
		Determined,     /// Location lat/long was found and was reverse geocoded properly
	}

	public delegate CheckLocationLegalityRequestData.GpsData GeolocationParser(string data);

	public class Geolocation : SingletonMonoBehaviour<Geolocation>
	{
		private const int MAX_RETRY_ATTEMPTS = 2;
		private const int MAX_WAIT_IN_SECONDS = 20;
		private readonly WaitForSeconds LOCATION_INIT_DELAY = new WaitForSeconds(1);
		private readonly WaitForSeconds RETRY_DELAY = new WaitForSeconds(1);

		private BaseGeolocationMode _geolocationMode;

		private int _maxRetryAttempts;
		private Action<string, GeolocationParser> _successCallback;
		private Action<GpsResult> _failCallback;

		// keep track of the location denied popup because the user must go to native settings to fix location and then return
		private GpsDeniedPopupModel _locationDeniedPopup;

		public override void Awake()
		{
			base.Awake();

			CreateGeolocationMode();
		}

		#region Public Functions

		public void GetLocation(Action<string, GeolocationParser> successCallback, Action<GpsResult> failCallback)
		{
			if (_successCallback != null)
			{
				// we're already attemping to get location
				return;
			}

			_successCallback = successCallback;
			_failCallback = failCallback;

#if DEBUG
			if (HandleSpoofLocation())
				return;
#endif

			_geolocationMode.CheckDeviceSettings(StartLocationService, HandleFailLocationResult);
		}

		#endregion

		/// <summary>
		/// Handle application state changes to determine when user returned to application after changing location permission settings
		/// </summary>
		/// <param name="pauseStatus">If set to <c>true</c> pause status.</param>
		private void OnApplicationPause(bool pauseStatus)
		{
			if (pauseStatus)
				return;

			if (_locationDeniedPopup == null)
				return; // we're not in the middle of editing settings, ignore pause

			// re-handle checking device settings after the user returns to the app from fixing the location settings
			_geolocationMode.CheckDeviceSettings(StartLocationService, _locationDeniedPopup.UpdateState);
		}

		private void CreateGeolocationMode()
		{
#if UNITY_EDITOR
			_geolocationMode = new GeolocationEditorMode();
#elif UNITY_IOS
			_geolocationMode = new GeolocationIOSMode();
#else
			throw new Exception("Error: Invalid device set (Not Unity Editor, or iOS)");
#endif
		}

		private void HandleFailLocationResult(GpsResult reason)
		{
			GsnDebug.LogError("Handle fail location:", reason);

			switch (reason)
			{
				case GpsResult.Undetermined:
					ErrorManager.Instance.ShowGpsPermission(StartLocationService, () =>
					{
						// user declined permission
						EndGetLocationAttempt(reason);
					});
					//ErrorManager.Instance.HandleUserError(ErrorType.Gps, "We need your location to determine which matches you can play.", StartLocationService);
					break;
				case GpsResult.Timeout:
					// Gps timed out... guess we should throw a popup
					ErrorManager.Instance.HandleUserError(ErrorType.Gps, "Gps Timed out. Please try again later.", () =>
					{
						EndGetLocationAttempt(reason);
					});
					break;
				case GpsResult.Denied:
					// store member reference to the popup to track when the user returns back to the app from the settings menu
					// if they click cancel, then this becomes a moot point
					_locationDeniedPopup = ErrorManager.Instance.ShowGpsDenied(_geolocationMode.OpenSettings, () =>
					{
						EndGetLocationAttempt(reason);

						// user decided to cancel location setting changes, clear out
						_locationDeniedPopup = null;
					});
					//ErrorManager.Instance.HandleUserError(ErrorType.Gps, "Due to legal requirements, we must check your location before playing real-money matches. [Insert directions]", _geolocationMode.OpenSettings);
					break;
				case GpsResult.GeoCodeError:
					// problem with reverse geocoding step
					ErrorManager.Instance.HandleUserError(ErrorType.Gps, "Could not parse your location.", () =>
					{
						EndGetLocationAttempt(reason);
					});
					break;
			}
		}

		private void EndGetLocationAttempt(GpsResult reason)
		{
			if (_failCallback != null)
				_failCallback(reason);

			_successCallback = null;
			_failCallback = null;
		}

		private void StartLocationService()
		{
			_maxRetryAttempts = MAX_RETRY_ATTEMPTS;

			StartCoroutine(GetLocationInfo());
		}

		/// <summary>
		/// Gets the location info by using Unity's location system
		/// </summary>
		/// <returns>The location info.</returns>
		private IEnumerator GetLocationInfo()
		{
			GlobalFetchEventNotifier.OnBeginFetch(this);

			GsnDebug.Log("GeoLoc: Get location from Unity");

			Input.location.Start(); // Unity call to initiate location

			int maxWait = MAX_WAIT_IN_SECONDS;

			while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
			{
				yield return LOCATION_INIT_DELAY;
				--maxWait;
			}

			if (maxWait <= 0)
			{
				GlobalFetchEventNotifier.OnFetchCompleteOrFail(this);

				// timed out
				Input.location.Stop();
				yield return HandleGetLocationInfoFail(GpsResult.Timeout);

				yield break;
			}

			if (Input.location.status == LocationServiceStatus.Failed)
			{
				GlobalFetchEventNotifier.OnFetchCompleteOrFail(this);

				// can't determine device location
				Input.location.Stop();
				yield return HandleGetLocationInfoFail(GpsResult.Denied);

				yield break;
			}

			Input.location.Stop();

			// notify that the gps location has been determined
			if (_locationDeniedPopup != null)
			{
				_locationDeniedPopup.UpdateState(GpsResult.Determined);
				_locationDeniedPopup = null;
			}

			GlobalFetchEventNotifier.OnFetchCompleteOrFail(this);

			// success! pass the lat/long to reverse geocode
			GeoCode(Input.location.lastData);
		}

		private IEnumerator HandleGetLocationInfoFail(GpsResult reason)
		{
			if (--_maxRetryAttempts > 0)
			{
				yield return RETRY_DELAY;

				// we still have retries
				StartCoroutine(GetLocationInfo());
			}
			else
			{
				// we've reached our max retry attempts
				HandleFailLocationResult(reason);
			}
		}

		private void GeoCode(LocationInfo locationInfo)
		{
			// reverse geolocate the address
			_geolocationMode.ReverseGeolocation(locationInfo, OnGeoCodeComplete, OnGeoCodeFail);
		}

		private void OnGeoCodeComplete(string location)
		{
			// if we need to we can notify that: LocationResult.GpsDetermined

			if (_successCallback != null)
				_successCallback(location, _geolocationMode.ParseGpsData);

			_successCallback = null;
			_failCallback = null;
		}

		private void OnGeoCodeFail(GpsResult reason, string error)
		{
			GsnDebug.LogError("Reverse Geolocation Error -", reason + ":", error);
			HandleFailLocationResult(reason);
		}

#if DEBUG
		private bool HandleSpoofLocation()
		{
			if (string.IsNullOrEmpty(UserSaveRestore.Device.SpoofCountryCode))
				return false; // no country data

			if (string.IsNullOrEmpty(UserSaveRestore.Device.SpoofState))
				return false; // no state data

			// all necessary information has been set
			string spoofLocation = JsonConvert.SerializeObject(new { CountryCode = UserSaveRestore.Device.SpoofCountryCode, State = UserSaveRestore.Device.SpoofState });

			GsnDebug.Log("Spoofing location:", spoofLocation);

			// bypass the geolocation process and go straight into country/state validation
			OnGeoCodeComplete(spoofLocation);

			return true;
		}
#endif

		#region Native OS Callback handlers

#if !UNITY_EDITOR
		/// <summary>
		/// Callback called from native platform SDK when reverse geocoding process is finished
		/// </summary>
		/// <param name="location">Location.</param>
		private void ReceivedLocation(string location)
		{
			_geolocationMode.ReceivedLocation(location);
		}

		/// <summary>
		/// Callback called from native platform SDK when reverse geocoding process is failed
		/// </summary>
		/// <param name="error">Error.</param>
		private void ReceivedLocationError(string error)
		{
			_geolocationMode.ReceivedLocationError(error);
		}
#endif

		#endregion
	}
}
