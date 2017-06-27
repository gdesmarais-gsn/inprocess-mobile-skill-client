using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

// mainly for arrays that we want to temporarily act like lists (e.g. when editing level data)
public static class ArrayHelper
{
	public static T[] Create<T>(int length)
	{
#if UNITY_FLASH && !UNITY_EDITOR
		return (T[])Array.CreateInstance(typeof(T), length);
#else
		return new T[length];
#endif
	}

	public static void Add<T>(ref T[] array, T newElement)
	{
		T[] newArray = Create<T>(array.Length + 1);
		Array.Copy(array, newArray, array.Length);
		newArray[newArray.Length - 1] = newElement;
		array = newArray;
	}

	public static bool Remove<T>(ref T[] array, T element)
	{
		int index = Array.IndexOf(array, element);
		if(index != -1)
		{
			RemoveAt<T>(ref array, index);
			return true;
		}
		return false;
	}

	public static void Insert<T>(ref T[] array, int index, T newElement)
	{
		T[] newArray = Create<T>(array.Length + 1);
		Array.Copy(array, newArray, index);
		newArray[index] = newElement;
		Array.Copy(array, index, newArray, index+1, array.Length - index);
		array = newArray;
	}

	public static void RemoveAt<T>(ref T[] array, int index)
	{
		int newArrayLength = array.Length - 1;
		T[] newArray = Create<T>(newArrayLength);
		Array.Copy(array, newArray, index);
		Array.Copy(array, index+1, newArray, index, newArray.Length - index);
		array = newArray;
	}

	public static void AddRange<T>(ref T[] array, T[] newElements)
	{
		if(newElements.Length != 0)
		{
			T[] newArray = Create<T>(array.Length + newElements.Length);
			Array.Copy(array, newArray, array.Length);
			Array.Copy(newElements, 0, newArray, array.Length, newElements.Length);
			array = newArray;
		}
	}

	public static bool Contains<T>(T[] array, T element) where T : class
	{
		foreach(T value in array)
		{
			if(value == element)
			{
				return true;
			}
		}
		return false;
	}
	
	public static void AddIfUnique<T>(ref T[] array, T newElement) where T : class
	{
		if(!Contains<T>(array, newElement))
			Add<T>(ref array, newElement);
	}



	public static T[] Add2<T>(T[] array, T newElement)
	{
		T[] newArray = Create<T>(array.Length + 1);
		Array.Copy(array, newArray, array.Length);
		newArray[newArray.Length - 1] = newElement;
		return newArray;
	}

	public static T[] Remove2<T>(T[] array, T element)
	{
		int index = Array.IndexOf(array, element);
		if(index != -1)
		{
			return RemoveAt2<T>(array, index);
		}
		return array;
	}

	public static T[] Insert2<T>(T[] array, int index, T newElement)
	{
		T[] newArray = Create<T>(array.Length + 1);
		Array.Copy(array, newArray, index);
		newArray[index] = newElement;
		Array.Copy(array, index, newArray, index+1, array.Length - index);
		return newArray;
	}

	public static T[] RemoveAt2<T>(T[] array, int index)
	{
		int newArrayLength = array.Length - 1;
		T[] newArray = Create<T>(newArrayLength);
		Array.Copy(array, newArray, index);
		Array.Copy(array, index+1, newArray, index, newArray.Length - index);
		return newArray;
	}

	public static T[] AddRange2<T>(T[] array, T[] newElements)
	{
		if(newElements.Length != 0)
		{
			T[] newArray = Create<T>(array.Length + newElements.Length);
			Array.Copy(array, newArray, array.Length);
			Array.Copy(newElements, 0, newArray, array.Length, newElements.Length);
			return newArray;
		}
		return array;
	}
	
	public static T AddAndReturn<T>(ref T[] array, T newElement)
	{
		Add<T>(ref array, newElement);
		return newElement;
	}

	public static void Resize<T>(ref T[] array, int newLength)
	{
		T[] newArray = Create<T>(newLength);
		int oldLength = array.Length;
		int copyLength = (newLength < oldLength) ? newLength : oldLength;
		Array.Copy(array, newArray, copyLength);
		array = newArray;
	}
}
