using UnityEngine;
using System;
using System.Collections;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.View.Pool
{
	/// <summary>
	/// Creates and manages a pool of objects that have a  PooledMonoBehaviour component on them.
	/// 
	/// A MonoBehaviourPool creates the resource from the resouces folder or a bundle. It will place these objects under
	/// the parent transform.These are inactive in this state.
	/// 
	/// Call getObject to get the next free objects. If the pool is empty it will create and add a new object to the pool.
	/// </summary>
	public class GameObjectPool : GsnObjectPool
	{
		private static IGsnPooledObject[] _scratchArray;

		private Transform _parent;
		private GameObject _templateObject;

		static bool _appIsQuitting = false;

#if DEBUG
		// These are used to add debugging data to the name of the object which
		// conveniently shows up in the Editor's object hierarchy.
		// The first part of the name (set by Unity) uses the asset/resource name.
		// GameObjectPoolManager keeps one pool per asset/resource name, which will
		// avoid having multiple objects named AssetName___1.
		int curID = 1;
		const string suffix_start = "___";
		const string suffix_free = "_FREED";

		// Used when first creating the object
		void SetDbgData_Init(PooledGameObject obj)
		{
			// set the name of the game object with a UUID, that way we can distinguish
			// between them and track them when debugging.
			obj.gameObject.name += suffix_start + curID;
			++curID;
		}

		// Used when taking an object from the pool (Alloc from the view of the user).
		void SetDbgData_Alloc(PooledGameObject obj)
		{
			// Remove the free suffix.
			string name = obj.gameObject.name;
			int idx = name.LastIndexOf(suffix_free);
			if( -1 != idx )
			{
				obj.gameObject.name = name.Remove(idx, suffix_free.Length);
			}
		}
		
		// Used when returning an object to the pool.
		void SetDbgData_Free(PooledGameObject obj)
		{
			obj.gameObject.name += suffix_free;
		}

#endif // DEBUG

		public static void ClearScratchArray()
		{
			_scratchArray = null;
		}

		/// <summary>
		/// Initializes a new instance of the <see cref="T:GSN.Skill.Phoenix.View.Pool.MonoBehaviourPool"/> class.
		/// </summary>
		/// <param name="parent">The default parent transform these objects in the pool with set as parent</param>
		/// <param name="resourceName">The name of the object to load from resources or bundle</param>
		/// <param name="initialPoolSize">How many objects the pool will initially start with</param>
		/// <param name="bundle">If this object to be loaded came from an asset bundle</param>
		public void Init(Transform parent, string resourceName, int initialPoolSize, AssetBundle bundle = null)
		{
			GameObject templateObj = null;

			if (bundle == null)
			{
				// no bundle is set. do a resource load
				templateObj = Resources.Load<GameObject>(resourceName);
			}
			else
			{
				// a bundle is set. load the asset from the bundle
				templateObj = bundle.LoadAsset<GameObject>(resourceName);
			}

			if (templateObj == null)
			{
				Debug.LogError("Failed to load asset " + resourceName);
			}

			Initialize(parent, initialPoolSize, templateObj);
		}

		/// <summary>
		/// Initializes a new instance of the <see cref="T:GSN.Skill.Phoenix.View.Pool.MonoBehaviourPool"/> class.
		/// </summary>
		/// <param name="parent">The default parent transform these objects in the pool with set as parent</param>
		/// <param name="initialPoolSize">How many objects the pool will initially start with</param>
		/// <param name="templateObj">The object used as a template when instantiating pool objects</param>
		public void Init(Transform parent, int initialPoolSize, GameObject templateObj)
		{
			Initialize(parent, initialPoolSize, templateObj);
		}

		public IEnumerator InitAsync(Transform parent, string resourceName, int initialPoolSize, AssetBundle bundle = null)
		{
			GameObject templateObj = null;

			if (bundle == null)
			{
				// no bundle is set. do a resource load
				ResourceRequest request = Resources.LoadAsync<GameObject>(resourceName);

				while (!request.isDone)
				{
					// wait til the request is done
					yield return null;
				}

				templateObj = (GameObject)request.asset;
			}
			else
			{
				// a bundle is set. load the asset from the bundle
				AssetBundleRequest request = bundle.LoadAssetAsync<GameObject>(resourceName);

				while (!request.isDone)
				{
					// wait til the request is done
					yield return null;
				}

				templateObj = (GameObject)request.asset;
			}

			yield return InitializeAsync(parent, initialPoolSize, templateObj);
		}

		private void Initialize(Transform parent, int initialPoolSize, GameObject templateObj)
		{
			_parent = parent;
			_templateObject = templateObj;

			if (_parent.gameObject.activeSelf)
			{
				GsnDebug.LogError("GameObjectPool Error: Parent of this pool must be SetActive(false) for this system to work correctly.");
				return;
			}

			if (initialPoolSize == 0)
				return;

			if (_scratchArray == null)
				_scratchArray = new IGsnPooledObject[0];

			Array.Resize(ref _scratchArray, initialPoolSize);

			for (int i = 0; i < initialPoolSize; ++i)
			{
				// create instances to increase pool size
				_scratchArray[i] = GetPooledObject();
			}

			for (int i = initialPoolSize - 1; i >= 0; --i)
			{
				// place instances back into the pool
				_scratchArray[i].Free();
				_scratchArray[i] = null;
			}
		}

		private IEnumerator InitializeAsync(Transform parent, int initialPoolSize, GameObject templateObj)
		{
			_parent = parent;
			_templateObject = templateObj;

			if (initialPoolSize == 0)
				yield break;

			if (_scratchArray == null)
				_scratchArray = new IGsnPooledObject[0];

			Array.Resize(ref _scratchArray, initialPoolSize);

			for (int i = 0; i < initialPoolSize; ++i)
			{
				// create instances to increase pool size
				_scratchArray[i] = GetPooledObject();

				yield return new WaitForFixedUpdate();
			}

			for (int i = initialPoolSize - 1; i >= 0; --i)
			{
				// place instances back into the pool
				_scratchArray[i].Free();
				_scratchArray[i] = null;
			}
		}

		/// Instantiates a new object
		protected override IGsnPooledObject CreateObject()
		{
			GameObject unityObj = UnityEngine.Object.Instantiate(_templateObject, _templateObject.transform.localPosition, _templateObject.transform.localRotation);
			
			// Let Unity know that we will control the lifetime of the object.
			// This doesn't stop Unity from destroying it in all cases.  If the 
			// Object is left parented to an object that is going away with a scene
			// change, this object will will be destroyed by Unity.
			GameObject.DontDestroyOnLoad(unityObj);

			PooledGameObject retVal = unityObj.GetComponent<PooledGameObject>();
			if (retVal == null)
			{
				throw new Exception("GameObjectPool: Template object \"" + _templateObject.name + "\" is not inheriting from PooledGameObject");
			}

			retVal._pool = this;

			// set parent
			retVal.gameObject.transform.SetParent(_parent, false);

#if DEBUG
			SetDbgData_Init(retVal);
#endif

			return retVal;
		}

		/// Gets a object from the pool. If pool is empty it iwll call createObject and add to the pool.
		public virtual PooledGameObject GetObject()
		{
			PooledGameObject obj = (PooledGameObject)GetPooledObject();

#if DEBUG
			SetDbgData_Alloc(obj);
#endif

			return obj;
		}

		public override void ReleaseObject(IGsnPooledObject o)
		{
			PooledGameObject obj = (PooledGameObject)o;

			#if DEBUG
				SetDbgData_Free(obj);
			#endif

			// set parent back to original
			obj.gameObject.transform.SetParent(_parent, false);

			base.ReleaseObject(o);
		}

		// True if we are in the process of destroying some of our pooled objects,
		// false if not.
		//
		// Since we are managing Unity GameObjects, we need to make sure that we are
		// are controlling there lifetime and not Unity.  If the pooled objects are
		// not freed, Unity might try to destroy them.  PooledGameObject.OnDestroy
		// checks for that error case.  However, we might be explicitly destroying
		// objects to free up space or because the application is quitting, in which
		// case this function will return true to let you know that calling
		// PooledGameObject.OnDestroy is not an error.
		public bool IsDestroyingObjects
		{
			get 
			{ 
				// Unity lets us know the app is quitting (or editor play mode is ending)
				// through a MonoBehaviour callback.  We are not a behaviour, but our
				// manager is, so he will get the memo.
				return GameObjectPoolManager.IsAppQuitting; 
			}
		}
	}
}
