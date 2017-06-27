using System;

namespace GSN.Skill.Games.Common.Utils
{
	/**

		\brief Inherit from this class if you wish to be added to a LinkedList.

		A LinkedList is a handy way of collecting items in an ordered fashion.

	*/
	public class LinkedListNode
	{
		public LinkedList _ownerList; ///< what LinkedList I'm in right now.
		public LinkedListNode _prev; ///< previous LinkedListNode (might be an anchor)
		public LinkedListNode _next; ///< next LinkedListNode (might be an anchor)

		/**
			\brief Constructs a LinkedListNode. The LinkedListNode is not yet in any list.

			The LinkedListNode is, instead, in a _ring_ of size 1.

		*/

		public LinkedListNode()
		{
			_prev = this;
			_next = this;
			_ownerList = null;
		}

		/**
			\brief Override GetDumpString() for the sake of debugging.
		*/

		public virtual string GetDumpString()
		{
#if DEBUG
			throw new Exception("Override me");
#else
			return "Unimplemented GetDumpString";
#endif
		}
		/**

			\brief Returns true if and only if the LinkedListNode is not of a subclass of LinkedListNode. 

			__In any subclass of LinkedListNode, be sure to override IsAnchor() and return false!__

			An anchor contains the head and tail of a LinkedList, but no content. Every LinkedList contains an anchor.

		*/
		public virtual bool IsAnchor()
		{
			return true;
		}

		/**
			\brief Inserts a ring of LinkedListNode instances after this LinkedListNode instance in its ring.

			A ring is a circular group of LinkedListNode instances without an anchor, nor an owning LinkedList.

			insertRing() breaks the ring and inserts it into this ring.
		*/

		public void InsertRing(LinkedListNode ring)
		{
			// ring shall be inserted into our ring, between this and next
			#if DEBUG
				if (_ownerList!=null || ring._ownerList!=null)
				{
					throw new Exception("Rings cannot be in linked lists");
				}
			#endif
			_next._prev = ring._prev;
			ring._prev._next = _next;
			_next = ring; // must happen after first two lines.
			ring._prev = this; // must happen after first two lines.
		}
	
	};
}
