using System;
using UnityEngine;

using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.View.Pool
{
	/// <summary>
	/// Use this on objects stored in MonoBehaviourPools. Do not call functions on this Component directly.
	/// </summary>
	public class PooledGameObject : MonoBehaviour, IGsnPooledObject
	{
		public GameObjectPool _pool;

		private bool _allocated = false;

		public void Free()
		{
			if (_pool != null)
			{
				_pool.ReleaseObject(this);
			}
		}


		public virtual void OnDestroy()
		{
			if (_pool != null && !_pool.IsDestroyingObjects )
			{
				// NOTE: The parent and root might not be useful...Unity may have already gotten
				// to them and the refs may be null.
				GsnDebug.LogError( String.Format
				(
					"PooledGameObject [{0}] was [{1}] and is being destroyed by Unity.  It won't be available in the Pool anymore." + Environment.NewLine + 
					"Parent: {2}" + Environment.NewLine + 
					"Root:   {3}" + Environment.NewLine,
					gameObject.name,
					(_allocated ? "allocated" : "free"),
					(null != gameObject.transform.parent ? gameObject.transform.parent.name : "<null>"),
					(null != gameObject.transform.root ? gameObject.transform.root.name : "<null>")
		    ) );
			}
		}

		public bool Allocated
		{
			get { return _allocated; }

			set
			{
				if (_allocated == value)
					throw new Exception("double free or double allocation");

				_allocated = value;
			}
		}
	}
}
