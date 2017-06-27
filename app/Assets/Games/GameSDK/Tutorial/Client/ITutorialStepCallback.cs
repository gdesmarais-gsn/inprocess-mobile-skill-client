using System;

namespace GSN.Skill.Games.Common.Tutorial 
{
    public interface ITutorialStepCallback 
	{
        // A delegate types for hooking up step notifications.
        void OnTutorialStepWillShow(TutorialGroup group, String stepId);
        void OnTutorialStepShown(TutorialGroup group, String stepId);
        void OnTutorialStepWillHide(TutorialGroup group, String stepId);
        void OnTutorialStepHidden(TutorialGroup group, String stepId);
    }
}
