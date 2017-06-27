using UnityEngine;
using System;
using System.Collections.Generic;
using GSN.Skill.Utils;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Client.Audio 
{
	/// This class contains a clip and a mixer group that can be assigned in the editor. The AudioFactory will use this to get what clip and group to play a sound with. 
	[System.Serializable]
	public class BaseMapEntry
	{
		private uint nextEntry;

		public AudioClip clip;

		public List<AudioClip> variations = new List<AudioClip> ();

		[HideInInspector]
		public uint _lastTimePlayed;

		public AudioClip getClip(bool random)
		{
			if (variations.Count == 0)
				return clip;
			uint index = nextEntry++;
			if (nextEntry >= variations.Count)
				nextEntry = 0;
			if (random)
				index = new GsnRandom ().GetNextMod ((uint)variations.Count);
			return variations [(int)index];
		}
    }
        
    /// In your game derive a game specific AudioMapper with an enum for your game specific sounds.
	public abstract class AudioMapper<E> : SingletonMonoBehaviour<AudioMapper<E>> 
    {
		public EnumeratedArrayMapEntry tpAudio = new EnumeratedArrayMapEntry(typeof(E));

		public BaseMapEntry getEntry( E audio )
		{
			return tpAudio[audio];
		}
	}

	
	///Subclass of EnumeratedArray for GSN.Skill.Games.Common.Client.Audio.BaseMapEntry so the PropertyDrawer works correctly
	[System.Serializable]
	public class EnumeratedArrayMapEntry : EnumeratedArray<BaseMapEntry> {
		public EnumeratedArrayMapEntry(Type t) : base(t) {}
    }
}
