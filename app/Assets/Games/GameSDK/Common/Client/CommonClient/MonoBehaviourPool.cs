using UnityEngine;
using System;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Client
{
    public class MonoBehaviourPool : GsnObjectPool
    {
        /// Creates and manages a pool of objects that have a  PooledMonoBehaviour component on them.
	   /**
		  a MonoBehaviourPool creates the resource from the resouces folder or a bundle. It will place these objects under
          the parent transform. These are inactive in this state.
          
          Call getObject to get the next free objects. If the pool is empty it will create and add a new object to the pool. 
	   */
        private Transform _parent;
        private GameObject _templateObject;

        private static IGsnPooledObject[] _scratchArray;

        public static void ClearScratchArray()
        {
            _scratchArray = null;
        }

        /// Constructs an MonoBehaviourPool
        public MonoBehaviourPool(Transform parent,          ///< The default parent transform these objects in the pool with set as parent 
                                string resourceName,        ///< The name of the object to load from resources or bundle
                                int initialPoolSize,        ///< How many objects the pool will initially start with
                                AssetBundle bundle = null   ///< If this object to be loaded came from a asset bundle
                                ) : base()
        {            
            GameObject templateObj = null;
            if (bundle == null)
                templateObj = Resources.Load(resourceName, typeof(GameObject)) as GameObject;
            else
                templateObj = bundle.LoadAsset<GameObject>(resourceName);

            if ( templateObj == null)
                Debug.LogError("Failed to load asset " + resourceName);

            Initialize( parent, initialPoolSize, templateObj );
        }
        


        public MonoBehaviourPool(Transform parent,       ///< The default parent transform these objects in the pool with set as parent 
                                int initialPoolSize,     ///< How many objects the pool will initially start with
                                GameObject templateObj   ///< The object used as a template when instantiating pool objects
                                ) : base()
        {
            Initialize( parent, initialPoolSize, templateObj );    
        }

        private void Initialize(Transform parent, int initialPoolSize, GameObject templateObj)
        {
            _parent = parent;
            _templateObject = templateObj;

            if (initialPoolSize == 0)
                return;

            if (_scratchArray == null)
                _scratchArray = new IGsnPooledObject[0];

            Array.Resize<IGsnPooledObject>(ref _scratchArray, initialPoolSize);

            int i;
            for (i = 0; i < initialPoolSize; ++i)
            { // create instances to increase pool size
                _scratchArray[i] = GetPooledObject();
            }

            for (i = initialPoolSize - 1; i >= 0; --i)
            { // place instances back into the pool
                _scratchArray[i].Free();
                _scratchArray[i] = null;
            }
        }
        
        /// Instantiates a new object
        override protected IGsnPooledObject CreateObject()
        {
			PooledMonoBehaviour retVal = ((GameObject)UnityEngine.Object.Instantiate(_templateObject, _templateObject.transform.localPosition, _templateObject.transform.localRotation)).GetComponent<PooledMonoBehaviour>();
            retVal._pool = this;

            // set parent
            retVal.gameObject.transform.SetParent(_parent, false);

            return retVal;
        }

        /// Gets a object from the pool. If pool is empty it iwll call createObject and add to the pool.
        public virtual PooledMonoBehaviour getObject()
        {
            PooledMonoBehaviour obj = (PooledMonoBehaviour)GetPooledObject();

            return obj;
        }

        public override void ReleaseObject(IGsnPooledObject o)
        {
            PooledMonoBehaviour obj = (PooledMonoBehaviour)o;

            // set parent back to original
            obj.gameObject.transform.SetParent(_parent, false);

            base.ReleaseObject(o);
        }
    }
}
