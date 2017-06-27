using System.Collections;
using UnityEngine;

namespace Gsn.AssetLoading
{
	public struct LoadAssetParams
	{
		public string groupName;
		public string assetName;

		public LoadAssetParams(string groupName, string assetName)
		{
			this.groupName = groupName;
			this.assetName = assetName;
		}
	}

	public interface IAssetLoadingService
	{
		void Initialize();
		bool CanLoadAsset(LoadAssetParams lap);
		object LoadAsset(LoadAssetParams lap);
		IEnumerator PreloadAssetGroup(string groupName, MonoBehaviour coroutineManager);
		void UnloadAssetGroup(string groupName);
	}

	public class AssetLoadingService
	{
		private static IAssetLoadingService service;
		
		public static void Initialize( IAssetLoadingService s )
		{
			service = s;
			service.Initialize();
		}

		public static bool CanLoadAsset(LoadAssetParams lap)
		{
			return service.CanLoadAsset(lap);
		}

		public static object LoadAsset(LoadAssetParams lap)
		{
			return service.LoadAsset(lap);
		}

		public static IEnumerator PreloadAssetGroup(string groupName, MonoBehaviour coroutineManager)
		{
			return service.PreloadAssetGroup(groupName, coroutineManager);
		}

		public static void UnloadAssetGroup(string groupName)
		{
			service.UnloadAssetGroup(groupName);
		}

		public static bool IsInitialized()
		{
			return service != null;
		}
	}




}