using System;

namespace GSN.Skill.Games.Common.Tutorial.Unity 
{
	[Serializable]
	public class TutorialStepAdditionalPrefab : TutorialStepPrefabBase 
	{
		public bool HideWithStep = true;

		public TutorialStepAdditionalPrefab()
		{

		}

		public TutorialStepAdditionalPrefab(string fullPath) 
		{
			FullPath = fullPath;
			HideWithStep = true;
		}
	}
}
