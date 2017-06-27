#if UNITY_IOS
// TODO: Add #if !UNITY_EDITOR
using System;
using System.Runtime.InteropServices;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Utils;
using UnityEngine;
using Newtonsoft.Json;

namespace GSN.Skill.Phoenix.Utils.GeoLocation
{
	public class GeolocationIOSMode : BaseGeolocationMode
	{
		/// Possible authorization statuses for location services
		private enum LocationServicesAuthorizationStatus
		{
			UNDETERMINED,
			RESTRICTED,
			DENIED,
			AUTHORIZED
		}

		// References the specified function inside Geolocation.mm (Yes the function is really named that for some reason)
		[DllImport("__Internal")]
		private static extern LocationServicesAuthorizationStatus GsnGeoLocationLocationServicesAuthorizationStatus();

		[DllImport("__Internal")]
		private static extern void GsnGeolocationOpenSettings();

		// References the specified functions inside GsnGeocoder.mm inside Plugins/iOS/Geolocation folder
		[DllImport("__Internal")]
		private static extern void _initGeocoder();
		[DllImport("__Internal")]
		private static extern void _requestLocation();

		public GeolocationIOSMode()
		{
			_initGeocoder();
		}

		public override void CheckDeviceSettings(Action successCallback, Action<GpsResult> failCallback)
		{
			GsnDebug.Log("GeoLoc iOS: Check Device Settings");

			/// Sparcade notes:
			/// somehow handle permissions for ios and android
			/// for ios:
			/// CHECK: Use the iOS imported function from LocationServicesAuthorizationStatus to check the authorization status
			/// && Input.location.isEnabledByUser is false
			///		SHOW IN-APP PERMISSIONS TO GEOLOCATE
			///			If approved, then StartLocationService
			///			If not approved, then kick out and show Error: User didn't give permissions

			// call the native iOS implementation to get our authorization status
			LocationServicesAuthorizationStatus authorizationStatus = GsnGeoLocationLocationServicesAuthorizationStatus();

			if (!Input.location.isEnabledByUser || // user hasn't enabled location on their iOS device
				authorizationStatus == LocationServicesAuthorizationStatus.UNDETERMINED) // authorization status is undetermined
			{
				GsnDebug.LogError("GeoLoc iOS: Undetermined location. location.isEnabledByUser:", Input.location.isEnabledByUser, "authorizationStatus:", authorizationStatus.ToString());

				// location isn't enabled OR they haven't explictly given us permission yet

				if (failCallback != null)
					failCallback(GpsResult.Undetermined);
			}
			else if (authorizationStatus != LocationServicesAuthorizationStatus.AUTHORIZED)
			{
				GsnDebug.LogError("GeoLoc iOS: Unauthorized", authorizationStatus.ToString());
				// the user did not give us permission to use their locations system

				if (failCallback != null)
					failCallback(GpsResult.Denied);
			}
			else
			{
				// location is enabled and they have authorized us to use their location

				if (successCallback != null)
					successCallback();
			}
		}

		public override void OpenSettings()
		{
			// calls into native code to launch the settings menu
			GsnGeolocationOpenSettings();
		}

		public override CheckLocationLegalityRequestData.GpsData ParseGpsData(string data)
		{
			// the GPSData is based off the iOS data so they will match exactly
			return JsonConvert.DeserializeObject<CheckLocationLegalityRequestData.GpsData>(data);
		}

		protected override void HandleReverseGeolocation(LocationInfo location)
		{
			GsnDebug.Log("GeoLoc iOS: reverse geolocate");

			// the C code calls back into Unity, which the base class "BaseGeolocationMode" will handle the success or fail callback
			_requestLocation();
		}
	}
}
#endif
