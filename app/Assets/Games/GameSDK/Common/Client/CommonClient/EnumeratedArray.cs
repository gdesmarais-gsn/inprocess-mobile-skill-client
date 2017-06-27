using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

namespace GSN.Skill.Games.Common.Utils
{
	/**
	\brief Generic array with size exactly equal to a specified enum and can be indexed by members of that enum.

	This class has an associated PropertyDrawer.  It should appear in the Unity editor with each element
	corresponding to a member of an enum, and without an option to change the size of the array.
	In order to get the PropertyDrawer to function correctly, the EnumeratedArray must be a public
	field (not private with [SerializeField]), and must be subclassed because Unity's inspector
	does not deal with generics well.

	For example, somewhere in your Scripts directory:
	\code
	[System.Serializable]
	public class EnumeratedArrayInt : EnumeratedArray<int>
	{
		public EnumeratedArrayInt(Type t) : base(t) {}
	}
	\endcode

	The PropertyDrawer must also be subclassed somewhere in your Editor directory:

	\code
	[CustomPropertyDrawer(typeof(EnumeratedArrayInt))]
	public class EnumeratedArrayIntDrawer : EnumeratedArrayDrawer<int> {}
	\endcode

	Then, you can define your array in your class:

	\code
	public enum VehicleSide
	{
		Front,
		Back,
		Left,
		Right
	}
	public EnumeratedArrayInt sideArmor = new EnumeratedArrayInt(typeof(VehicleSide));
	void Update()
	{
		Debug.Log("Front armor: "  + sideArmor[VehicleSide.Front]);
	}
	\endcode
	*/
	[System.Serializable]
	public class EnumeratedArray<T> : IEnumerable {
	
		/**
		\brief Names of the enum that this array was created with.  This will never be populated in DEBUG builds.
		
		Should only be used by EnumeratedArrayDrawer
		\see EnumeratedArrayDrawer
		*/
		public readonly string[] enumNames;

	#if DEBUG
		private Type _enumType;
	#endif
		
		[SerializeField]
		private T[] _data;

		/**
		\brief Create an EnumeratedArray.
		\param t typeof(an enum) that sets the size of the array.  This enum MUST have values 0 to N without skipping any numbers.
		*/
		public EnumeratedArray(Type t)
		{
	#if ! DEBUG
			string[] enumNames;

	#endif

			enumNames = Enum.GetNames(t);
			_data = new T[enumNames.Length];

	#if DEBUG
			if (! t.IsEnum)
				Debug.LogError("Type " + t + " is not an enum");
			_enumType = t;
	#endif
		}

		/**
		\brief Create an EnumeratedArray with default values.
		\param t typeof(an enum) that sets the size of the array.  This enum MUST have values 0 to N without skipping any numbers.
		\param data Initial values of the array.  MUST be the same length as t.
		*/
		public EnumeratedArray(Type t, T[] data)
			: this(t) //call the other constructor
		{
	#if DEBUG
			if (data.Length != enumNames.Length)
				Debug.LogError("Created an array of " + enumNames.Length +
						" length with " + data.Length + " values");
	#endif

			for (int i = 0; i < data.Length; ++i)
			{
				_data[i] = data[i];
			}
		}

		///Normal array indexing by integer
		public T this[int index] {
			get { return _data[index]; }
			set { _data[index] = value; }
		}
		///Index the array by an enum of type t that was used in the constructor
		public T this[object obj] {
			get {
	#if DEBUG
				if (obj.GetType() != _enumType)
					Debug.LogError(obj + " is not of type " + _enumType);
	#endif
				return _data[Convert.ToInt32(obj)];
			}
			set {
	#if DEBUG
				if (obj.GetType() != _enumType)
					Debug.LogError(obj + " is not of type " + _enumType);
	#endif
				_data[Convert.ToInt32(obj)] = value;
			}
		}

		///Length of the array
		public int Length { get { return _data.Length; } }

		///Returns an enumerator so you can do a foreach loop over an EnumeratedArray.
		public IEnumerator GetEnumerator() {
			return _data.GetEnumerator();
		}
	}

	///Subclass of EnumeratedArray for ints, so the PropertyDrawer works correctly
	[System.Serializable]
	public class EnumeratedArrayInt : EnumeratedArray<int> {
		public EnumeratedArrayInt(Type t) : base(t) {}
	}
	///Subclass of EnumeratedArray for floats, so the PropertyDrawer works correctly
	[System.Serializable]
	public class EnumeratedArrayFloat : EnumeratedArray<float> {
		public EnumeratedArrayFloat(Type t) : base(t) {}
	}
	///Subclass of EnumeratedArray for UnityEngine.Sprite, so the PropertyDrawer works correctly
	[System.Serializable]
	public class EnumeratedArraySprite : EnumeratedArray<Sprite> {
		public EnumeratedArraySprite(Type t) : base(t) {}
	}
	///Subclass of EnumeratedArray for UnityEngine.UI.Image, so the PropertyDrawer works correctly
	[System.Serializable]
	public class EnumeratedArrayUIImage : EnumeratedArray<UnityEngine.UI.Image> {
		public EnumeratedArrayUIImage(Type t) : base(t) {}
	}
	///Subclass of EnumeratedArray for UnityEngine.UI.Button, so the PropertyDrawer works correctly
	[System.Serializable]
	public class EnumeratedArrayUIButton : EnumeratedArray<UnityEngine.UI.Button> {
		public EnumeratedArrayUIButton(Type t) : base(t) {}
	}
	[System.Serializable]
	public class EnumeratedArrayColor : EnumeratedArray<Color> {
		public EnumeratedArrayColor(Type t) : base(t) {}
	}
	[System.Serializable]
	public class EnumeratedArrayMaterial : EnumeratedArray<Material> {
		public EnumeratedArrayMaterial(Type t) : base(t) {}
	}
}
