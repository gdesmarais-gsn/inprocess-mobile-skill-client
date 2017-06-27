using System;
using GSN.Skill.Utils;
using UnityEngine;

namespace GSN.Skill.Phoenix.Utils
{
	public class NativeUtilities : SingletonMonoBehaviour<NativeUtilities>
	{
#if UNITY_IPHONE && false   // TODO: Re-enablewhen bringing in native code.
		[DllImport("__Internal")]
		private static extern void GsnNativeUtilitiesPluginSetSharedKeychainValue(string key, string value);
		[DllImport("__Internal")]
		private static extern string GsnNativeUtilitiesPluginGetSharedKeychainValue(string key);
#endif

		private const string GSN_DEVICE_ID_KEY = "GSN_DEVICE_ID";
		private const string IOS_DEVICE_ID_TYPE = "udid";
		private const string ANDROID_DEVICE_ID_TYPE = "androidId";
		private const string IOS_PLATFORM = "ios";
		private const string ANDROID_PLATFORM = "android";

		public static string GetDeviceID()
		{
			string device_id = string.Empty;
#if UNITY_IPHONE
			device_id = NativeUtilities.GetSharedKeychainValue(GSN_DEVICE_ID_KEY);
			if (String.IsNullOrEmpty(device_id)) // NOTE: GetSharedKeychainValue will return empty string in editor.
			{
				device_id = System.Guid.NewGuid().ToString();
				NativeUtilities.SetSharedKeychainValue(GSN_DEVICE_ID_KEY, device_id);
			}
#elif UNITY_ANDROID
			device_id = GetAndroidId();
#endif
			return device_id;
		}

		public static string GetDeviceIDType()
		{
			string device_id_type = string.Empty;
#if UNITY_IPHONE
			device_id_type = IOS_DEVICE_ID_TYPE;
#elif UNITY_ANDROID
			device_id_type =  ANDROID_DEVICE_ID_TYPE;
#endif
			return device_id_type;
		}

		public static string GetPlatform()
		{
			string platform = string.Empty;
#if UNITY_IPHONE
			platform = IOS_PLATFORM;
#elif UNITY_ANDROID
			platform =  ANDROID_PLATFORM;
#endif
			return platform;
		}

		/**
		 * @brief Set a shared value in the keychain on iOS.
		 *
		 * This value is shared by all apps that have the same KeySharing entitlement
		 * value. The UICKeyChainStore class checks all values in the entitlement file
		 * during reading and writes to the first one by default (this writing behavior
		 * can be more targeted but that functionality needs to be added here). NOTE: the
		 * service is identified as "com.gsn".
		 *
		 * @param key The key of the value to store.
		 * @param value The value to store at @p key location.
		 *
		 */

		private static void SetSharedKeychainValue(string key, string value)
		{
#if UNITY_IPHONE && !UNITY_EDITOR && false // TODO: re-enable after bringing in native code
			GsnNativeUtilitiesPluginSetSharedKeychainValue(key, value);
#endif
		}

		/**
		 * @brief Get a shared value from the keychain on iOS.
		 *
		 * This value is shared by all apps that have the same KeySharing entitlement
		 * value. The UICKeyChainStore class checks all values in the entitlement file
		 * during reading and writes to the first one by default (this writing behavior
		 * can be more targeted but that functionality needs to be added here). NOTE: the
		 * service is identified as "com.gsn".
		 *
		 * @param key The key of the value to retrieve.
		 *
		 * @return The value stored at @p key location or an empty string if it is not found.
		 *
		 */

		private static string GetSharedKeychainValue(string key)
		{
#if !UNITY_IPHONE || UNITY_EDITOR || true // TODO: re-enable after bringing in native code
			return String.Empty;
#else
			return GsnNativeUtilitiesPluginGetSharedKeychainValue(key);
#endif
		}

#if UNITY_ANDROID
		private static string GetAndroidId()
		{
			string androidId = String.Empty;
			if(!Application.isEditor)
			{
				AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
				AndroidJavaObject currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
				AndroidJavaObject contentResolver = currentActivity.Call<AndroidJavaObject>("getContentResolver");  
				AndroidJavaClass secure = new AndroidJavaClass("android.provider.Settings$Secure");
				androidId = secure.CallStatic<string>("getString", contentResolver, "android_id");
			}
			return androidId;
		}
#endif
	}
}