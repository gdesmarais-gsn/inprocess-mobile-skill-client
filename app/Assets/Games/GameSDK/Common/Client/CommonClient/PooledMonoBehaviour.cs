using System;
using GSN.Skill.Games.Common.Utils;
using UnityEngine;

namespace GSN.Skill.Games.Common.Client
{
    /// Component added to object stored in MonoBehaviourPools 
	/**
        use this on objects stored in MonoBehaviourPools. Do not call functions on this Component directly.
	*/
    public class PooledMonoBehaviour : MonoBehaviour, IGsnPooledObject
    {
        public MonoBehaviourPool _pool;

        private bool _allocated = false;

        /// Only called from MonoBehaviourPool. 
        public void Free()
        {
            if (_pool != null)
            {
                _pool.ReleaseObject(this);
            }
        }

        /// Only called from MonoBehaviourPool when an object is claimed or unclaimed in the pool. 
        public void SetAllocated(bool a  ///< Claimed status
                                    )
        {
            if (a == _allocated)
                throw new Exception("double free or double allocation");

            _allocated = a;
        }
    }
}
