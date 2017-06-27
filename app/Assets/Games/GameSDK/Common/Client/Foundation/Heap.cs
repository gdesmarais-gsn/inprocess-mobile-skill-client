using System;

namespace GSN.Skill.Games.Common.Utils {

	public interface IHeapable {
		Heap __heap {get; set;}
		int __heapIndex {get; set;}
		int heapRank {get;}
	}

	public class Heap
	{
		private const int INITIAL_CAPACITY = 5;
		private const int GROW_FACTOR = 2;
		private const int MIN_GROW = 10;

		private int capacity = INITIAL_CAPACITY; // in slots, not items.
		private IHeapable[] heap = new IHeapable[INITIAL_CAPACITY];

		int tail = 0; // the location after the last item. one greater than Count of items.

		// how many items are in the heap.
		public int Count {
			get {
				return tail - 1;
			}
		}

		/// constructor
		public Heap()
		{
			heap[tail++] = null; // burn the first element.
		}

		public delegate void ItemWorker (IHeapable item);

		public void ForEach(ItemWorker workFn) {

			for (int i = 1; i < tail; ++i) {
				workFn(heap[i]);
			}
		}

		/// Adds an item to the heap
		public void Add(IHeapable item)
		{
			#if DEBUG
			if (item.__heap != null) {
				throw new Exception("Item already in a heap");
			}
			#endif

			item.__heap = this;
			item.__heapIndex = 0; // not a real index yet.

			if (tail == capacity) // get bigger if we have to.
				Grow();

			internalAdd(item);

		}

		public void Remove(IHeapable item) {

			if (item.__heap != this)
				return;

			if (tail < 2)
			{
				throw new Exception("Attempt to remove from empty heap");
			}

			int i = item.__heapIndex;

			#if DEBUG
			if (heap[i]!=item)
			{
				throw new Exception("Item heap __heapIndex is corrupt");
			}
			#endif

			internalRemove(i); // do the Remove.

		}

		private void internalRemove(int i)
		{
			IHeapable lastItem;
			IHeapable item;

			// First, Remove the item at the end of the vector.			
			lastItem = heap[--tail]; // item at end of heap.

			if (i == tail) // if we just removed the one we want to Remove
			{ // it's not ours any more, and we're done.
				lastItem.__heap = null;
				return;
			}
			// at this point, if the heap is dirty, it is still dirty,
			// and if it is clean, it is still clean, since removing the last element of
			// a clean heap is still a clean heap.
			item = heap[i]; // the one we *really* want to Remove.
			item.__heap = null; // it's not ours any more.
			heap[i] = lastItem; // overwrite the item we are removing, with the one we removed above.
			lastItem.__heapIndex = i; // keep this up-to-date.

			// there is no guarantee that the last item in the heap has a later heapRank than
			// the item we wanted to Remove. So we must look in both directions to
			// find where this item must really go.
			if (bubbleUp(i)) // try to move the item towards the head of the heap.
				// prepone returns true if it thinks we should try postponing instead.				
			{ // try to move the item towards the end of the heap.
				bubbleDown(i);
			}
		}


		private void internalAdd(IHeapable item) {
			int i;

			i = tail++; // stuff it at the end.

			heap[i] = item;
			item.__heapIndex = i;

			// bubble it up to where it belongs.
			bubbleUp(i);

		}

		public void __adjustIndex(IHeapable item) {
			int i = item.__heapIndex;

			if (bubbleUp(i)) {
				bubbleDown(i);
			}
		}

		// returns true if the item did not move.
		private bool bubbleUp(int child)
		{
			int parent;
			IHeapable parentItem;
			IHeapable item;
			int heapRank;

			item = heap[child]; // the item to bubble up.
			heapRank = item.heapRank; // cache the item's heapRank

			parent = child >> 1; // __heapIndex of the parent. each parent has two children, an even one and an odd one.

			if (parent==0)
			{
				return true; // no parent. Can't bubble up. Perhaps bubble down to find right spot.
			}

			parentItem = heap[parent]; // get the parent item

			if (heapRank > parentItem.heapRank)
			{
				return true; // Can't bubble up. Perhaps bubble down.
			}

			// bubble up if heapRank is smaller than the parent's.
			// stop when it is equal or greater.
			while(heapRank < parentItem.heapRank)
				// this is the bubbling step. We have a heapRank smaller than our parent's.
				// so our current parent should be our child.
			{ // move parent item down into child's slot.
				heap[child] = parentItem;
				parentItem.__heapIndex = child; // keep this up-to-date.
				// move up the tree towards the head.
				child = parent; // the child slot is now what the parent slot use to be.
				parent = child >> 1; // new parent slot.
				if (parent == 0) // no parent. You are done.
				{
					break;
				}
				parentItem = heap[parent];
			}
			// put our item where it goes. It might not have moved.
			heap[child] = item;
			item.__heapIndex = child; // keep __heapIndex up-to-date.
			return false; // don't bother bubbling down.
		}

		private void bubbleDown(int parent)
		{
			IHeapable childItem;
			int lesserChild;
			IHeapable item;
			int heapRank;

			item = heap[parent]; // get the item which might move.
			heapRank = item.heapRank; // cache the item's heapRank
			lesserChild = getLesserChild(parent); // which of any children should be promoted.

			/* We want to swap with the lesser child rather than the greater child, because if we promote it it will
				not end up greater than either of its new children, one of which is its prior sibling. */
			if (lesserChild == 0)
			{
				return; // no children, nothing to do.
			}
			childItem = heap[lesserChild];

			// If we're bubbling down, it's because we have a heaprank which is greater than our children.
			// stop the search when our heapRank is equal or less than any children.
			// i.e. the children's heapRanks are big enough for us to be their parent.
			while(heapRank>childItem.heapRank)
				// promote a child.
			{ // move the child into its parent's slot
				heap[parent] = childItem;
				childItem.__heapIndex = parent; // keep __heapIndex updated
				parent = lesserChild; // go down the tree.
				lesserChild = getLesserChild(parent); // which of any children should be promoted.
				if (lesserChild==0)
				{
					break; // no children.
				}
				childItem = heap[lesserChild]; // new child to look at.
			}
			heap[parent] = item; // we've found where this item should go.
			item.__heapIndex = parent; // keep __heapIndex updated.
		}

		// returns the __heapIndex of the earlier of a node's two children.
		private int getLesserChild(int heapIndex)
		{
			int firstChild;

			firstChild = heapIndex << 1; // times 2 left child.
			// heap[tail - 1] is the last element. 
			if (firstChild >= tail) // no children.
			{
				return 0;
			}

			if (firstChild+1 >= tail)
				// only one child. return it.
			{
				return firstChild;
			}
			// return the child with the smaller heapRank.
			else
			{
				return (heap[firstChild].heapRank <= heap[firstChild+1].heapRank) ? firstChild : firstChild+1;
			}
		}

		public IHeapable Top
		{
			get {
				if (tail < 2) 
					return null; 	// nothing in the heap.

				return heap[1];		// top item.
			}
		}

		public IHeapable PopTop() {
			if (tail < 2)
				return null;

			IHeapable retval = heap[1];

			Remove(retval);

			return retval;

		}

		private void Grow()
		{
			int newCapacity = capacity * GROW_FACTOR + MIN_GROW;
			var newHeap = new IHeapable[newCapacity];
			Array.Copy(heap, newHeap, capacity);

			heap = newHeap;

			capacity = newCapacity;
			
		}
	}
}
