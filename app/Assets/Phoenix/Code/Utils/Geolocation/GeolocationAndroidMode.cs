using System;
using GSN.Skill.Phoenix.Requests.Account;
using UnityEngine;

namespace GSN.Skill.Phoenix.Utils.GeoLocation
{
	public class GeolocationAndroidMode : BaseGeolocationMode
	{
		public override void CheckDeviceSettings(Action successCallback, Action<GpsResult> failCallback)
		{
			/// Sparcade Notes:
			/// for android:
			/// for some reason sparcade's android version isn't consistent -_-
			/// CHECK: Android imported state "isLocationPermissionEnabled". if it's false, then
			///		SHOW IN-APP PERMISSIONS TO GEOLOCATE
			/// ...TBH this doesn't seem finished

			throw new NotImplementedException();
		}

		public override void OpenSettings()
		{
			throw new NotImplementedException();
		}

		public override CheckLocationLegalityRequestData.GpsData ParseGpsData(string data)
		{
			throw new NotImplementedException();
		}

		protected override void HandleReverseGeolocation(LocationInfo location)
		{
			throw new NotImplementedException();
		}
	}
}
