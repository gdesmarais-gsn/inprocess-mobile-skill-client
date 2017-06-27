using UnityEngine;
using System.Collections;
using System;

namespace GSN.Skill.Games.Tripeaks
{
	[System.Serializable]
	public class Tutorial 
	{
	    public enum TutorialStep
	    {
	        GameStart,
	        CardsDoneDealing,
	        UIResultsShown,
	        ReshuffleComplete
	    }

	    [Serializable]
	    public struct TutorialGroupOptions
	    {
	        [SerializeField]
	        public string tutorialGroup;
	        [SerializeField]
			[UnityEngine.Serialization.FormerlySerializedAs("triggerTutoralOnStep")]
	        public TutorialStep triggerTutorialOnStep;
	    }

		public string tutorialID;
		/* //TODO asset bundle name?
		[UnityEngine.Serialization.FormerlySerializedAs("tutorialResouceName")]
		public string tutorialResourceName;
		*/
		public TutorialGroupOptions[] tutorialGroupOptions;
	}
}

