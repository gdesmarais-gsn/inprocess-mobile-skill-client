using System;
using System.Text;

namespace GSN.Skill.Games.Common.Utils
{
	/**
		\brief A container for LinkedListNode instances.

		A LinkedList is also a LinkedListNode, so a LinkedList can serve as a basis for creating a tree structure, 
		where LinkedList instances can be lists of LinkedList instances.
	*/
	public class LinkedList: LinkedListNode {

		/// A special LinkedListNode, which points to both the head and the tail of the list, but which has no other content.
		/**

			You need access to _anchor for the sake of iterating through the LinkedListNode instances in the LinkedList.

			\code

				LinkedListNode walker = myList._anchor._next;

				while (walker != myList._anchor) {

					// do something with walker here.

					walker = walker._next;
	
				}

			\endcode

			_anchor._next is the head of the list.

			_anchor._prev is the tail of the list.

			If the list is empty, then _anchor._next is the same as _anchor.

			If the list is empty, then _anchor._prev is the same as _anchor.

		*/
		public LinkedListNode _anchor; // pointer to first and last nodes.
		private int _size; // size of the list in nodes (doesn't include the anchor).
		/// Constructs an empty LinkedList
		public LinkedList()
		{
			//create the anchor
			_anchor = new LinkedListNode();
			_anchor._ownerList = this; // we own our anchor.
			_size = 0; // no nodes to begin with (doesn't include the anchor).
		}
		//G::DEBUG {Vet();}

		/// DESTROYS THE LIST, MAKING IT UNUSABLE.  For final Cleanup.
		public void Destroy()
		{
			UnlinkAll();
			_anchor = null;
		}

		/// clears out the list.
		public void UnlinkAll()
		{
			while(_anchor._next!=_anchor)
			{
				Remove(_anchor._next);
			}
		}
		#if DEBUG
		public void Vet()
		{
				int i = 0;
				LinkedListNode n = _anchor;
				if (n._next._prev!=n)
				{
					throw new Exception("bad LinkedList");
				}
				if (n._ownerList!=this)
				{
					throw new Exception("bad LinkedList");
				}
				for(n = _anchor._next; n!=_anchor; n = n._next)
				{
					if (n._next._prev!=n)
					{
						throw new Exception("bad LinkedList");
					}
					if (n._ownerList!=this)
					{
						throw new Exception("bad LinkedList");
					}
					i++;
				}
				if (i!=_size)
				{
					throw new Exception("bad LinkedList");
				}
		}
		#endif
		/// Adds the node to the end the list.
		public void PushBack(LinkedListNode node ///< LinkedListNode to add to the end of the list.
			)
		{
			InsertBefore(_anchor, node);
		}
		/// Adds the node to the beginning of the list.
		public void PushFront(LinkedListNode node ///< LinkedListNode to add to the beginning of the list. 
			)
		{
			InsertAfter(_anchor, node);
		}
		/// Inserts  inode before  lnode
		public void InsertBefore(LinkedListNode lnode,  ///< LinkedListNode before which  inode will be inserted
			LinkedListNode inode						///< LinkedListNode which will be inserted before  lnode
			)
		{
			#if DEBUG
				if (inode._ownerList!=null || inode._next!=inode || inode._prev!=inode)
				{
					throw new Exception("inode already in a list");
				}
				if (lnode._ownerList!=this)
				{
					throw new Exception("I don't own lnode");
				}
			#endif
			inode._next = lnode;
			inode._prev = lnode._prev;
			lnode._prev._next = inode;
			lnode._prev = inode;
			inode._ownerList = this;
			_size++;
		}
		//G::DEBUG {Vet();}
		/// inserts inode after lnode
		public void InsertAfter(LinkedListNode lnode,   ///< LinkedListNode after which  inode will be inserted 
			LinkedListNode inode						///< LinkedListNode which will be inserted after  lnode
			)
		{
			#if DEBUG
				if (inode._ownerList!=null || inode._next!=inode || inode._prev!=inode)
				{
					throw new Exception("inode already in a list");
				}
				if (lnode._ownerList!=this)
				{
					throw new Exception("I don't own lnode");
				}
			#endif
			inode._prev = lnode;
			inode._next = lnode._next;
			lnode._next._prev = inode;
			lnode._next = inode;
			inode._ownerList = this;
			++_size;
		}
		//G::DEBUG {Vet();}
		/// Inserts a ring of LinkedListNode instances after a node already in a LinkedList
		public void InsertRingAfter(LinkedListNode lnode, 	///< the LinkedListNode after which the ring will be inserted
			LinkedListNode ring 							///< the first LinkedListNode in the ring.
			)
		{
			LinkedListNode node;
			LinkedListNode oldNext;
			
			#if DEBUG
				if (ring._ownerList!=null)
				{
					throw new Exception("ring already in a list");
				}
				if (lnode._ownerList!=this)
				{
					throw new Exception("I don't own lnode");
				}
			#endif
			oldNext = lnode._next;
			// link up.
			lnode._next._prev = ring._prev;
			ring._prev._next = lnode._next;
			lnode._next = ring;
			ring._prev = lnode;
			node = ring;
			// count the new members.
			do
			{
				node._ownerList = this;
				++_size;
				node = node._next;
			}
			while(node!=oldNext);
		}

		/// Removes a LinkedListNode from a LinkedList. 
		public LinkedListNode Remove(LinkedListNode node	///< The LinkedListNode to remove.
			)
		{
			LinkedListNode retval;
			
			//make sure it is valid
			#if DEBUG
				if (node==_anchor)
				{
					throw new Exception("Attempt to unlink the anchor");
				}
				if (node._ownerList!=this)
				{
					throw new Exception("Not my node to unlink");
				}
			#endif
			//get the next node
			retval = node._next;
			//fix the refrences in the list
			retval._prev = node._prev;
			node._prev._next = retval;
			node._ownerList = null;
			node._next = node;
			node._prev = node;
			--_size;
			//G::DEBUG {Vet();}
			//return the next iterator
			return retval;
		}

		/// Returns true if the LinkedList has no nodes in it.
		public bool IsEmpty()
		{
			return _anchor._next==_anchor;
		}

		/// Returns a string representing the contents of the list. For debugging.
		/** 
			\returns a string representing the contents of the list. 
		*/
		public override string GetDumpString()
		{
			LinkedListNode node;
			StringBuilder str = new StringBuilder();
			
			for(node = _anchor._next; node!=_anchor; node = node._next)
			{
				if (node!=_anchor._next)
				{
					str.Append(",");
				}
				str.Append(node.GetDumpString());
			}
			return str.ToString();
		}

		/// Returns the number of nodes in the list (excluding the anchor)
		public int size
		{
			get
			{
				return _size;
			}
		}
	
	};
}
