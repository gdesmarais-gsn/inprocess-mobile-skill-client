using System.Collections.Generic;
using GSN.Skill.Games.Common.Utils;

/// Extension methods for System.Collections.Generic.List<T>
public static class ListExtensions
{
	/**
	\brief Randomly shuffles the elements of a List<int>
	\param rand Random number generator
	\param count How many elements of the list to shuffle.  Defaults to the entire list.
	*/
	public static void Shuffle (this List<int> objectList, GsnRandom rand, int count = GsnMath.MAX_INT)
	{
		int i;
		int len;
		int s;
		int temp;
		
		len = objectList.Count;
		if (count!=GsnMath.MAX_INT && count<len) // if a count is provided, use it, if it's less than len.
		{
			len = count;
		}
		for(i = 0; i<len-1; i++)
		// get which to swap with.  Could be the same one!
		{
			s = (int)(rand.GetNextRange((uint)(i), (uint)(len-1)));
			if (s!=i)
			// swap
			{
				temp = objectList[i];
				objectList[i] = objectList[s];
				objectList[s] = temp;
			}
		}
	}
}
