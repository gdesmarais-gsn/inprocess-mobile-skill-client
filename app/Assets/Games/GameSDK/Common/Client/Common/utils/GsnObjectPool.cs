using System;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Utils
{
	/**
	  \brief Pool of objects that implement IGsnPooledObject.

	  Prevents slowdowns due to garbage collection by reusing deleted objects
	  */
	public abstract class GsnObjectPool
	{
		/// The underlying collection of objects.
		protected GsnVector< IGsnPooledObject > _pool;
		protected int _size; // how many object we have in total.
		private int _nextAvailable; // index to the next free one we are holding
//		private string _className; // class of the objects we are pooling
		/// Creates a new GsnObjectPool.  Does not create any pooled objects.
		public GsnObjectPool()
		{
			_pool = new GsnVector< IGsnPooledObject >(); // start with starting size
			_size = 0;
			_nextAvailable = 0;
		}

		//startingSize = 0;		// uncomment this to find out how many your pool needs.
		/// Gets a free object from the pool, or allocates a new one if the pool is exhausted.
		protected IGsnPooledObject GetPooledObject()
		{
			IGsnPooledObject retval;
			
			if (_nextAvailable<_size)
			// we have one for you already.
			{ // get it from the pool.
				retval = _pool[_nextAvailable++];
			}
			// extend the pool.
			else // call subclass to construct.
			{
				retval = _pool[_nextAvailable++] = CreateObject();
				++_size;
			}
			/*G::DEBUG
				{
					var str:String = "--- " + _className  + " pool extends to " + _size;
//					str += " at " + where(new Error(),3);
					trace(str);
				}*/
			retval.SetAllocated(true);
			//	trace(where(new Error(), 2));
			return retval;
		}
		
		 /// Override this in a subclass to cause specific kinds of objects to be constructed.  
		protected abstract IGsnPooledObject CreateObject();

		/**
		 * \brief Returns a pooled object to this pool when you're done with it
		 * Your object should have a function that calls this.
		 * \param o The object to return to the pool
		 */
		public virtual void ReleaseObject(IGsnPooledObject o)
		{
			o.SetAllocated(false);
			if (_nextAvailable==0)
			{
				throw new Exception("Too many frees!");
			}
			_pool[--_nextAvailable] = o;
		}
	};
}
