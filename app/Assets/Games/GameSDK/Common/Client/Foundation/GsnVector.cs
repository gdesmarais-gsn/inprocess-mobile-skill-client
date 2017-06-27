using System;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Utils
{
	/// A List<T> with ActionScript semantics, such as automatically growing if an invalid index is requested.
	public class GsnVector<T> : List<T>
	{
		/// Creates a GsnVector
		public GsnVector() : base()
		{

		}

		/**
		\brief Creates a GsnVector with the given initial capacity and fills it with objects created with T's default constructor or null.
		\param capacity The initial capacity of the underlying list
		\param f Unused
		*/
		public GsnVector(int capacity, bool f = false) : base(capacity)
		{
			// populate the vector based on the capacity
			// this will allow items to be added to any index within the defined capacity
			for (int i = 0; i < capacity; ++i)
			{
				this[i] = default(T);
			}
		}

		/**
		\brief Access the element at index
		If index equals the size of the vector, a new object is automatically created and added to the vector.
		*/
	    new public T this[int index]
		{
		    get { return base[index]; }

		    set {
				int size_ = base.Count;
		        // Back to caller with the item at the requested index
		        // Support AS3 semantic of growing an array by indexing one past 
		        if (index == size_)
		        {
			        base.Add(value);
					return;
		        }

				base[index] = value;
			 }
	    }

		/// Returns the number of elements.  Can also be used to shrink, but not grow the size of the vector.
		new public int Count 
		{
			get { return base.Count; }

			set
			{
				while (value < base.Count)
					this.Pop();
				if (value > base.Count)
					throw new Exception("Cannot set Count to a bigger number");
			}
		}

		/**
		\brief Adds a new object to the end of the vector
		\returns The size of the vector with the new element added
		*/
		public int Push(T o)
		{
			Add(o);
			return Count;
		}

		/// Removes the last element and returns it.  Throws an exception if empty. 
		public T Pop()
		{
			T o = this[Count - 1];
			RemoveAt(Count - 1);
			return o;
		}

		/**
		\brief Returns a new GsnVector<T> containing the specified elements of this vector.
		Removes the specified elements from this vector before returning them.
		\see slice
		\param index First index to start taking elements
		\param length How many elements to take.  If taking this many elements would go past the end of the vector, only as many elements as exist are taken.
		*/
		public GsnVector<T> Splice(int index, int length = Int32.MaxValue)
		{
			GsnVector<T> v = new GsnVector<T>();
			int lastIndex = index + length;
			if (lastIndex >= this.Count)
				lastIndex = this.Count - 1; // set last index to the length of the vector
			for (int i = index; i <= lastIndex; ++i )
			{ // add the removed items
				v.Add(this[i]);
			}
			RemoveRange(index, length);
			return v;
		}

		/**
		\brief Returns a new GsnVector<T> containing the specified elements of this vector.
		If endIndex is greater than the size of the vector, only as many elements as exist will be in the return vector.

		Unlike splice(), this will not remove those elements from this vector.
		\see splice
		\param startIndex First index to start taking elements
		\param endIndex Index of the last element to take
		*/
		public GsnVector<T> Slice(int startIndex = 0, int endIndex = 16777215)
		{
			GsnVector<T> v = new GsnVector<T>();
			int lastIndex = endIndex - startIndex + 1;
			if (lastIndex >= this.Count)
				lastIndex = this.Count - 1;
			for (int i = 0; i < lastIndex; ++i)
			{
				v.Add(this[i]);
			}
			return v;
		}

		/**
		\brief Returns a string containing the string representation of every element in this vector
		\param sep A separator inserted between each element in the vector
		*/
		public string Join(string sep)
		{
			int len = Count;

			string retval = "";

			for (int i = 0; i < len; ++i) 
			{
				if (i > 0)
				{
					retval += sep;
				}
				retval += this[i].ToString();
			}
			
			return retval;
		}

		public void Unshift(T o)
		{
			Insert(0,o);
		}

		public T Shift()
		{
			T o = this[0];
			RemoveAt(0);
			return o;
		}

	}
}
