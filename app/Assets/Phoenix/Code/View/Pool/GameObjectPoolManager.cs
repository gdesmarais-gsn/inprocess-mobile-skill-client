using System;
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Utils;
using UnityEngine;

namespace GSN.Skill.Phoenix.View.Pool
{
	[Serializable]
	public struct PoolData
	{
		public string resourceName;
		public int poolSize;
	}
	
	public class GameObjectPoolManager : SingletonMonoBehaviour<GameObjectPoolManager>
	{
		private const string DEFAULT_ASSET_BUNDLE_NAME = "Default";
		private const int DEFAULT_INITIAL_SIZE = 1;
		private const string POOL_PARENT_NAME = "GameObjectPool";


		private Dictionary<string, Dictionary<string, GameObjectPool>> _pooledObjects = new Dictionary<string, Dictionary<string, GameObjectPool>>();
		private Transform _poolParent;

		private WaitForFixedUpdate _waitForFixedUpdate = new WaitForFixedUpdate();

		public override void Awake()
		{
			base.Awake();

			_poolParent = new GameObject().transform;

			_poolParent.SetParent(this.transform, false);

			_poolParent.gameObject.SetActive(false);
			_poolParent.name = POOL_PARENT_NAME;
		}

		#region Public Functions

		public void InitAsync(List<PoolData> pools, Action completeCallback)
		{
			StartCoroutine(InternalInitAsync(pools, completeCallback));
		}

		public void AddPool(string resourceName, int initialSize, AssetBundle bundle)
		{
			var gameObjPool = new GameObjectPool();
			gameObjPool.Init(_poolParent, resourceName, initialSize, bundle);
			InternalAddPool(bundle.name, resourceName, gameObjPool);
		}

		public void AddPool(string resourceName, int initialSize)
		{
			var gameObjPool = new GameObjectPool();
			gameObjPool.Init(_poolParent, resourceName, initialSize);
			InternalAddPool(DEFAULT_ASSET_BUNDLE_NAME, resourceName, gameObjPool);
		}

		public void AddPool(GameObject templateObj, int initialSize)
		{
			var gameObjPool = new GameObjectPool();
			gameObjPool.Init(_poolParent, initialSize, templateObj);
			InternalAddPool(DEFAULT_ASSET_BUNDLE_NAME, templateObj.name, gameObjPool);
		}

		public IEnumerator AddPoolAsync(string resourceName, int initialSize)
		{
			var gameObjPool = new GameObjectPool();
			yield return gameObjPool.InitAsync(_poolParent, resourceName, initialSize);
			InternalAddPool(DEFAULT_ASSET_BUNDLE_NAME, resourceName, gameObjPool);
		}

		public GameObject GetObject(string resourceName, string assetBundleName = DEFAULT_ASSET_BUNDLE_NAME)
		{
			if (!PoolExists(resourceName, assetBundleName))
			{
				if (assetBundleName != DEFAULT_ASSET_BUNDLE_NAME)
				{
					GsnDebug.LogError("GetObject Error: Pool for " + resourceName + " with asset bundle " + assetBundleName + " doesn't exist.");
					return null;
				}

				GsnDebug.LogWarning("GetObject Error: Pool for " + resourceName + " doesn't exist. Making one since it doesn't need an asset bundle.");
				AddPool(resourceName, DEFAULT_INITIAL_SIZE);
			}

			return _pooledObjects[assetBundleName][resourceName].GetObject().gameObject;
		}

		public T GetObject<T>(GameObject templateObj) where T : MonoBehaviour
		{
			if (!PoolExists(templateObj.name, DEFAULT_ASSET_BUNDLE_NAME))
			{
				GsnDebug.LogWarning("GetObject Error: Pool for " + templateObj.name + " doesn't exist. Making one since it doesn't need an asset bundle.");
				AddPool(templateObj, DEFAULT_INITIAL_SIZE);
			}

			return GetObject<T>(templateObj.name);
		}

		public T GetObject<T>(string resourceName, string assetBundleName = DEFAULT_ASSET_BUNDLE_NAME) where T : MonoBehaviour
		{
			if (!PoolExists(resourceName, assetBundleName))
			{
				if (assetBundleName != DEFAULT_ASSET_BUNDLE_NAME)
				{
					GsnDebug.LogError("GetObject Error: Pool for " + resourceName + " with asset bundle " + assetBundleName + " doesn't exist.");
					return null;
				}

				GsnDebug.LogWarning("GetObject Error: Pool for " + resourceName + " doesn't exist. Making one since it doesn't need an asset bundle.");
				AddPool(resourceName, DEFAULT_INITIAL_SIZE);
			}

			return _pooledObjects[assetBundleName][resourceName].GetObject().GetComponent<T>();
		}

		#endregion

		private IEnumerator InternalInitAsync(List<PoolData> pools, Action completeCallback)
		{
			for (int i = 0; i < pools.Count; ++i)
			{
				PoolData data = pools[i];
				yield return AddPoolAsync(data.resourceName, data.poolSize);
			}

			if (completeCallback != null)
				completeCallback();
		}

		private void InternalAddPool(string assetBundleName, string resourceName, GameObjectPool gameObjPool)
		{
			if (PoolExists(resourceName, assetBundleName))
			{
				GsnDebug.LogError("AddPool Error: Pool for " + resourceName + " with asset bundle " + assetBundleName + " already exists.");
				return;
			}

			if (!_pooledObjects.ContainsKey(assetBundleName))
			{
				// brand new asset bundle! create a dictionary
				_pooledObjects.Add(assetBundleName, new Dictionary<string, GameObjectPool>());
			}

			// add the new game object pool based on the specified resource name
			_pooledObjects[assetBundleName].Add(resourceName, gameObjPool);
		}

		private bool PoolExists(string resourceName, string bundleName)
		{
			// resource name exists and assetbundle exists
			return _pooledObjects.ContainsKey(bundleName) && _pooledObjects[bundleName].ContainsKey(resourceName);
		}

		public static bool IsAppQuitting{ get; private set; }

		void OnApplicationQuit()
		{
			// Let the pools know we're shutting down, that way they know there objects
			// will be destroyed by Unity soon.
			IsAppQuitting = true;
		}
	}
}
