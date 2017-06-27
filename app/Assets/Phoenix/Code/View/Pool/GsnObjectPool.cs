using System;
using System.Collections.Generic;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.View.Pool
{
	/// <summary>
	/// Pool of objects that implement IGsnPooledObject.
	/// Prevents slowdowns due to garbage collection by reusing deleted objects
	/// </summary>
	public abstract class GsnObjectPool
	{
		/// The underlying collection of objects.
		//protected List<IGsnPooledObject> _pool;

		protected Queue<IGsnPooledObject> _pool;
		protected int _size; // how many object we have in total.

		private int _nextAvailable; // index to the next free one we are holding

		/// <summary>
		/// Initializes a new instance of the <see cref="T:GSN.Skill.Phoenix.View.Pool.GsnObjectPool"/> class.
		/// Does not create any pooled objects.
		/// </summary>
		protected GsnObjectPool()
		{
			_pool = new Queue<IGsnPooledObject>(); // start with starting size
			_size = 0;
			_nextAvailable = 0;
		}

		/// Gets a free object from the pool, or allocates a new one if the pool is exhausted.
		protected IGsnPooledObject GetPooledObject()
		{
			IGsnPooledObject retval;

			if (_pool.Count == 0)
			{
				// the pool is empty. create a new object
				retval = CreateObject();
			}
			else
			{
				// We have one for you already
				// Get it from the pool
				retval = _pool.Dequeue();
			}

			retval.Allocated = true;

			return retval;
		}

		/// Override this in a subclass to cause specific kinds of objects to be constructed.  
		protected abstract IGsnPooledObject CreateObject();

		/// <summary>
		/// Returns a pooled object to this pool when you're done with it
		/// Your object should have a function that calls this.
		/// </summary>
		/// <param name="obj">The object to return to the pool</param>
		public virtual void ReleaseObject(IGsnPooledObject obj)
		{
			if (!obj.Allocated)
			{
				GsnDebug.LogError("Object has already been deallocated. Too many Frees!");
				return;
			}

			obj.Allocated = false;

			_pool.Enqueue(obj);
		}
	};
}
