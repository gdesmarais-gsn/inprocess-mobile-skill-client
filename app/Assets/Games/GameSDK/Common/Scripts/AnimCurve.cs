using UnityEngine;
using System;

namespace GSN.Skill.Games.Common
{
	[Serializable]
	public class AnimCurve : ScriptableObject {

		[SerializeField]
		public AnimationCurve animationCurve;
	}
}
