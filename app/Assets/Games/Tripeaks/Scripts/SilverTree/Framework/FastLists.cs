using UnityEngine;
using System.Collections;
using System.Collections.Generic;

// advantages over List<T>:
// - doesn't release the buffer on Clear(), resulting in better performance and less garbage collection
// - doesn't allocate memory when performing non-nested recursion, resulting in better performance and less garbage collection
// - doesn't null out entries in the buffer on Remove/RemoveAt, resulting in better performance

// advantages over BetterList<T>:
// - doesn't create a dependency on the 3rd-party library (NGUI)
// - doesn't allocate memory when performing non-nested recursion, resulting in better performance and less garbage collection
// - doesn't null out entries in the buffer on Remove/RemoveAt, resulting in better performance
// - ToArray() and Contains aren't broken (BetterList.ToArray could return null or a magically-changing array, Contains could throw a null reference exception)
// - Sort() doesn't call the comparison function O(N^2) times
// - less branching within each function

public class FastList<T> : IEnumerator<T>, IList<T>//, IList
{
    T[] items;
    public int Count;
    
    public FastList(int capacity=64)
    {
		capacity = MathUtil.Max(capacity, 0);
		items = new T[capacity];
    }

	public T this[int index] 
	{
		get { return items[index]; }
		set { items[index] = value; }
	}

	public void Add(T item)
	{
		if(Count == items.Length)
			IncreaseCapacity();
		items[Count++] = item;
	}

	public void Insert(int index, T item)
	{
		if(Count == items.Length)
			IncreaseCapacity();
		for(int i = Count ; i > index ; i--)
			items[i] = items[i-1];
		items[index] = item;
		Count++;
	}

	public void RemoveAt(int index)
	{
#if UNITY_EDITOR
		if(index >= Count)
			Debug.LogError("RemoveAt called with out-of-bounds index " + index + " >= " + Count);
#endif
		Count--;
		for(int i = index ; i < Count ; i++)
			items[i] = items[i+1];
		//items[Count] = default(T);
	}

	// faster than RemoveAt, but doesn't preserve order of elements
	public void RemoveAtFast(int index)
	{
#if UNITY_EDITOR
		if(index >= Count)
			Debug.LogError("RemoveAtUnordered called with out-of-bounds index " + index + " >= " + Count);
#endif
		Count--;
		items[index] = items[Count];
		//items[Count] = default(T);
	}

	public int IndexOf(T item)
	{
		EqualityComparer<T> comparer = EqualityComparer<T>.Default;
		for(int i = 0 ; i < Count ; i++)
		{
			if(comparer.Equals(items[i], item))
				return i;
		}
		return -1;
	}

	public bool Contains(T item)
	{
		return IndexOf(item) != -1;
	}

	public bool Remove(T item)
	{
		int index = IndexOf(item);
		bool found = (index != -1);
		if(found) {
			RemoveAt(index);
		}
		return found;
	}

	public void Clear()
	{
		Count = 0;
	}

	public void Release()
	{
		Clear();
		Trim();
	}

	public void AddRange(IList<T> list)
	{
		int oldCount = Count;
		Count += list.Count;
		while(Count > items.Length)
			IncreaseCapacity();
		list.CopyTo(items, oldCount);
	}

	public void Trim()
	{
		if(Count < items.Length)
		{
			T[] newItems = new T[Count];
			System.Array.Copy(items, newItems, Count);
			items = newItems;
		}
	}
	
	void IncreaseCapacity()
	{
		int oldLen = items.Length;
		int newLen = (oldLen > 0) ? (oldLen + oldLen) : 1;
		T[] newItems = new T[newLen];
		System.Array.Copy(items, newItems, oldLen);
		items = newItems;
//Debug.LogWarning("WARNING: had to increase capacity from " + oldLen + " to " + newLen);
	}

	public T[] ToArray()
	{
		T[] newItems = new T[Count];
		System.Array.Copy(items, newItems, Count);
		return newItems;
	}

	// faster than ToArray, but less safe.
	// may have extra elements after Count which should be ignored.
	// changes to the FastList done later may alter the returned array elements.
	public T[] ToArrayFast()
	{
		return items;
	}
	
	public void Sort(System.Comparison<T> comparison)
	{
		Trim();
        System.Array.Sort(items, comparison);
	}

	public void RemoveDuplicates()
	{
		for(int i = Count - 1 ; i >= 0 ; i--) {
			if(IndexOf(items[i]) != i) {
				RemoveAt(i);
			}
		}
	}

	public void AddIfUnique(T item)
	{
		if(IndexOf(item) == -1) {
			Add(item);
		}
	}


	// implementation of GetEnumerator which allows us to usually avoid creating any object for the enumeration
	int eIndex = -1;
	void System.IDisposable.Dispose() { eIndex = -1; }
	void IEnumerator.Reset() { eIndex = -1; }
	bool IEnumerator.MoveNext() { eIndex++; if(unchecked((uint)eIndex) >= unchecked((uint)Count)) { eIndex = -2; return false; }; return true; }
	object IEnumerator.Current { get { return items[eIndex]; } }
	T IEnumerator<T>.Current { get { return items[eIndex]; } }
    public IEnumerator<T> GetEnumerator()
    {
		if(eIndex < 0) { return this; }
		return GetSlowEnumerator();
    }
    IEnumerator<T> GetSlowEnumerator()
    {
		for(int i = 0 ; i < Count ; i++)
			yield return items[i];
    }
    
    // implementation of IEnumerable (which the compiler is hopefully smart enough to never use...)
    IEnumerator IEnumerable.GetEnumerator()
    {
		if(eIndex < 0) { return this; }
		return GetSlowNonGenericEnumerator();
    }
    IEnumerator GetSlowNonGenericEnumerator()
    {
		for(int i = 0 ; i < Count ; i++)
			yield return items[i];
    }
    
//    // implementation of IList
//	bool IList.IsFixedSize { get { return false; } }
//	bool IList.IsReadOnly { get { return false; } }
//    object IList.this[int index]
//    {
//		get { return items[index]; }
//		set { items[index] = (T)value; }
//    }

    // implementation of IList<T>
	int ICollection<T>.Count { get { return ((FastList<T>)this).Count; } }
	bool ICollection<T>.IsReadOnly { get { return false; } }
	public void CopyTo(T[] dest, int index)
	{
		System.Array.Copy(items, 0, dest, index, Count);
	}
}

// support for old syntax
public class FastSize64List<T> : FastList<T> where T : class
{
    public FastSize64List() : base(64) {}
}
public class FastSize128List<T> : FastList<T> where T : class
{
    public FastSize128List() : base(128) {}
}
