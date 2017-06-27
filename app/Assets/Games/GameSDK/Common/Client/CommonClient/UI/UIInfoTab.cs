using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Client
{
	/// <summary>
	/// This is the base class for the info tabs.
	/// </summary>
    public abstract class UIInfoTab : MonoBehaviour
    {
		/// <summary>
		/// Toggle the visibility of the settings panel.
		/// This allows us to keep the panel active at all times.
		/// </summary>
		public virtual bool visible
		{
			set
			{
				gameObject.SetActive(value);
			}
		}

		/// <summary>
		/// This function is called to setup any data you want on the info tabs.
		/// </summary>
		abstract public void Setup();

		public virtual IEnumerator Preload(Dictionary<string, string> joinRecord)
		{
			yield break;
		}

		public virtual int PreloadCount()
		{
			return 0;
		}
    }

	[System.Serializable]
	public class EnumeratedUIInfoTab : EnumeratedArray<UIInfoTab> {
		public EnumeratedUIInfoTab(Type t) : base(t) {}
	}
}

