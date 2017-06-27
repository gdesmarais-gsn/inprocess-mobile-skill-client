using System;

namespace GSN.Skill.Games.Common.Utils
{
	/**
	\brief Interface for pooled objects.
	\see GsnObjectPool
	*/
	public interface IGsnPooledObject
	{
		/// Puts the object back into the pool.  Should call \<owningGsnObjectPool\>.releaseObject(this).
		void Free();
		/**
		\brief Called by the owning GsnObjectPool when allocated or released.
		\param a True when allocated, false when released.
		*/
		void SetAllocated(bool a);
	};
}
