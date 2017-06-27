using System.Collections;
using System.Net.NetworkInformation;
using GSN.Skill.Phoenix.Requests.Config;
using GSN.Skill.Utils;
using UnityEngine;

namespace GSN.Skill.Phoenix.Model
{
    /// <summary>
    /// Device manager handles extracting device information useful for analytics and potentially other systems
    /// </summary>
    public class DeviceManager : SingletonMonoBehaviour<DeviceManager>
    {
        public struct DeviceData
        {
            public string applicationPlatform;
            public string vendorIdentifier;
            public string advertisingIdentifier;
            public string macAddress;
            public string applicationVersion;
        }

        private AbstractDeviceInfo _device;

        /// <summary>
        /// Initialize the singleton based on the device we're on
        /// </summary>
        public IEnumerator Init()
        {
#if UNITY_EDITOR
			_device = new EditorDeviceInfo();
#elif UNITY_IOS
			_device = new IOSDeviceInfo();
#elif UNITY_ANDROID
            _device = new AndroidDeviceInfo();
#endif

            while (!_device.IsDataReady())
                yield return null;
        }

        /// <summary>
        /// Setups the analytic data with device information.
        /// </summary>
        /// <returns>The analytic data.</returns>
        /// <param name="request">Request.</param>
        public void SetupAnalyticData(FabricEventTokenRequestData request)
        {
            _device.SetupAnalyticData(request);
        }

        /// <summary>
        /// Base class that defines common device info
        /// 
        /// So far it can extract advertising identifier info in a common fashion for all devices
        /// </summary>
        private abstract class AbstractDeviceInfo
        {
            private bool _advertisingIdentifierSet = false;

            private bool _advertisingTrackingEnabled = false;
            private string _advertisingIdentifier;

            protected AbstractDeviceInfo()
            {
#if !UNITY_EDITOR
                Application.RequestAdvertisingIdentifierAsync((string advertisingId, bool trackingEnabled, string error) =>
                {
                    _advertisingTrackingEnabled = trackingEnabled;
                    _advertisingIdentifier = advertisingId;

                    _advertisingIdentifierSet = true;
                });
#else
				_advertisingIdentifierSet = true;
#endif
            }

            public virtual bool IsDataReady()
            {
                if (!_advertisingIdentifierSet)
                    return false;

                return true;
            }

            public abstract void SetupAnalyticData(FabricEventTokenRequestData request);

            protected abstract string ApplicationPlatform { get; }
            protected abstract string MacAddress { get; }

            protected string AdvertisingIdentifier
            {
                get
                {
                    if (!_advertisingTrackingEnabled)
                        return string.Empty;

                    return _advertisingIdentifier;
                }
            }
        }

#if UNITY_EDITOR
		private class EditorDeviceInfo : AbstractDeviceInfo
		{
			// we're faking being CANVAS for testing purposes
			private const string APPLICATION_PLATFORM_NAME = "CANVAS";

			public override void SetupAnalyticData(FabricEventTokenRequestData request)
			{
				request.applicationPlatform = ApplicationPlatform;
				request.macAddress = MacAddress;

				// TODO: Remove vendor identifier when it's not required anymore
				request.vendorID = "some-string-with-stuff";
			}

			protected override string ApplicationPlatform { get { return APPLICATION_PLATFORM_NAME; } }
			protected override string MacAddress { get { return string.Empty; } }
		}
#endif

#if UNITY_IOS
		private class IOSDeviceInfo : AbstractDeviceInfo
		{
			private const string APPLICATION_PLATFORM_NAME = "IOS";

			private string _macAddress = string.Empty;

			public override void SetupAnalyticData(FabricEventTokenRequestData request)
			{
				request.applicationPlatform = ApplicationPlatform;
				request.macAddress = MacAddress;
				request.advertisingID = AdvertisingIdentifier;
				request.vendorID = VendorIdentifier;
			}

			protected override string ApplicationPlatform
			{
				get { return APPLICATION_PLATFORM_NAME; }
			}

			protected override string MacAddress
			{
				get
				{
					// TODO: Research and consider using native plugin implementation

					//if (!string.IsNullOrEmpty(_macAddress))
					//	return _macAddress;

					//NetworkInterface[] networkInterfaces = NetworkInterface.GetAllNetworkInterfaces();
					//for (int i = 0; i < networkInterfaces.Length; ++i)
					//{
					//	var networkInterface = networkInterfaces[i];

					//	if (networkInterface.NetworkInterfaceType != NetworkInterfaceType.Ethernet)
					//		continue;

					//	if (networkInterface.OperationalStatus != OperationalStatus.Up)
					//		continue;

					//	_macAddress = networkInterface.GetPhysicalAddress().ToString();
					//	break;
					//}

					return _macAddress;
				}
			}

			protected string VendorIdentifier
			{
				get
				{
					return UnityEngine.iOS.Device.vendorIdentifier;
				}
			}
		}
#endif

#if UNITY_ANDROID
        class AndroidDeviceInfo : AbstractDeviceInfo
        {
            private const string APPLICATION_PLATFORM_NAME = "ANDROID";

            private string _macAddress = string.Empty;

            public override void SetupAnalyticData(FabricEventTokenRequestData request)
            {
                request.applicationPlatform = ApplicationPlatform;
                request.macAddress = MacAddress;
            }

            protected override string ApplicationPlatform
            {
                get { return APPLICATION_PLATFORM_NAME; }
            }

            /// <summary>
            /// TODO NOTE: This is untested code referenced from here: https://forum.unity3d.com/threads/android-and-iphone-macaddress.108506/
            /// 
            /// Please reevaluate when android work starts
            /// </summary>
            /// <value>The mac address.</value>
            protected override string MacAddress
            {
                get
                {
                    if (!string.IsNullOrEmpty(_macAddress))
                        return _macAddress;

                    using (AndroidJavaObject activity = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity"))
                    {
                        AndroidJavaObject wifiManager = activity.Call<AndroidJavaObject>("getSystemService", "wifi");
                        _macAddress = wifiManager.Call<AndroidJavaObject>("getConnectionInfo").Call<string>("getMacAddress");
                    }

                    return _macAddress;
                }
            }
        }
#endif
    }
}
