using System;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;

namespace GSN.Skill.Games.Common.Tutorial
{
	using GSN.Skill.Games.Common.Client;
	using ProgressData = Dictionary<String, List<CompletedStep>>;

	//Tutorial manager class
	public class TutorialManager : Singleton<TutorialManager>
	{
		// A delegate types for hooking up tutorial notifications.
		public delegate void TutorialStepWillShowHandler(TutorialGroup group, String stepId);
		public delegate void TutorialStepShownHandler(TutorialGroup group, String stepId);
		public delegate void TutorialStepWillHideHandler(TutorialGroup group, String stepId);
		public delegate void TutorialStepHiddenHandler(TutorialGroup group, String stepId);

		public event TutorialStepWillShowHandler TutorialStepWillShow;
		public event TutorialStepShownHandler TutorialStepShown;
		public event TutorialStepWillHideHandler TutorialStepWillHide;
		public event TutorialStepHiddenHandler TutorialStepHidden;

		private TutorialStep _shownStep;                                             //current shown step
		private List<TutorialStep> _ignoreHideEventsFromSteps = new List<TutorialStep>();  //list of steps hide events from which will be ignored (for handling dismissing steps on configuration change)
		private bool _allowAutoLaunchNextStep = true;
		private bool _isCurrentStepShown;
		private Dictionary<string, TutorialGroup> _tutorialGroups = new Dictionary<string, TutorialGroup>();

		//Constructor
		public TutorialManager()
		{
		}

		//Hides shown tutorial step without completion
		private void DismissShownStep()
		{
			if (_shownStep == null)
			{
				return;
			}

			_shownStep.Dismiss();
			_shownStep = null;
		}

		public String ShownStepId
		{
			//get shown step identifier
			get
			{
				return _shownStep == null ? null : _shownStep.Id;
			}
		}

		public void LoadTutorial(AssetBundle bundle, string name)
		{
			if (_tutorialGroups.ContainsKey(name))
			{
				return;
			}

			TutorialGroup tutorialGroup;
			if (bundle == null)
			{
				tutorialGroup = Resources.Load<TutorialGroup>(name);
			}
			else
			{
				tutorialGroup = bundle.LoadAsset<TutorialGroup>(name);
			}

			AddTutorial(tutorialGroup, name);
		}

		/// Add a tutorial to the manager.
		/// @param group - the tutorial group object
		/// @param name = the name of the tutorial that is used to reference.  If null, uses the name of the tutorial object.
		public void AddTutorial(TutorialGroup group, string name = null)
		{
			if (name == null)
			{
				name = group.name;
			}
			_tutorialGroups.Add(name, group);
		}

		/*
        //Load tutorials' descriptions (unloads previously loaded tutorials)
        //@param path - file path
        //@param fromUnityResource - load from Unity resource or from file path
        public void LoadTutorialsDescriptions(String path, bool fromUnityResource = true) 
		{
            _tutorialBuilder = new TutorialBuilder();

            if (fromUnityResource)
                _tutorialBuilder.LoadFromUnityResource(path);
            else
                _tutorialBuilder.Load(path);

            DismissShownStep();
        }
		*/

		//Load players data from file
		public void LoadProgressData(String data)
		{
			ProgressData progressData = JsonConvert.DeserializeObject<ProgressData>(data);

			if (progressData != null)
			{
				// Go through the Dictionary and set up progress for each group.
				foreach (string groupName in progressData.Keys)
				{
					Debug.Log("The group name is " + groupName);
					TutorialGroup group = _tutorialGroups[groupName];
					group.completedSteps = progressData[group.Name];
				}
			}

			DismissShownStep();
		}

		//Set save path for storing completed steps (reloads saved steps from new path)
		//@param path - file path
		private void Save()
		{
			ProgressData progressData = new ProgressData();
			// Go the groups and build the dictionary
			foreach (TutorialGroup group in _tutorialGroups.Values)
			{
				progressData.Add(group.Name, group.completedSteps);
			}

			string progressDataStr = JsonConvert.SerializeObject(progressData);
			Debug.Log("If I were to send data it would be " + progressDataStr);
		}

		public void ShowStep(string groupName, int stepNumber)
		{
			TutorialGroup group = _tutorialGroups[groupName];

			ShowStep(group, stepNumber);
		}

		//Show tutorial step
		//@param groupName - tutorial group name
		//@param stepNumber - step number to show
		public void ShowStep(TutorialGroup group, int stepNumber)
		{
			if (_shownStep != null)
			{
				DismissShownStep();
			}

			if (group == null)
			{
				throw new Exception("Tutorial group cannot be null");
			}

			if (stepNumber >= group.Steps.Count)
			{
				throw new IndexOutOfRangeException("Tutorial step number not exist. groupName=" + group.Name + ", stepNumber=" + stepNumber);
			}

			TutorialStep step = group.Steps[stepNumber];

			if (step == null)
			{
				throw new NullReferenceException("Tutorial step is null. groupName=" + group.Name + ", stepNumber=" + stepNumber);
			}

			if (group.IsStepCompleted(stepNumber))
			{
				if (step.AutoLaunchNextStep)
				{
					BeginShowNextStep(group, step);
				}

				return;
			}

			_isCurrentStepShown = false;
			_shownStep = step;
			_shownStep.Show(group);
		}

		//Hide shown step
		public void HideShownStep(bool allowAutoLaunchNextStep = true)
		{
			if (_shownStep == null)
			{
				return;
			}

			if (!_isCurrentStepShown)
			{
				return;
			}

			_allowAutoLaunchNextStep = allowAutoLaunchNextStep;
			bool forceAnimate = !_allowAutoLaunchNextStep;

			_shownStep.Hide(forceAnimate);
		}

		//Process step hidden
		private void BeginShowNextStep(TutorialGroup group, TutorialStep step)
		{
			int nextStepNumber = group.GetStepNumber(step.Id) + 1;

			if (group.Steps.Count > nextStepNumber)
			{
				ShowStep(group, nextStepNumber);
			}
		}

		//Notify about events
		internal void OnStepWillShow(TutorialGroup group, TutorialStep step)
		{
			if (TutorialStepWillShow != null)
			{
				TutorialStepWillShow(group, step.Id);
			}
		}

		internal void OnStepShown(TutorialGroup group, TutorialStep step)
		{
			if (TutorialStepShown != null)
			{
				TutorialStepShown(group, step.Id);
			}
			_isCurrentStepShown = true;
		}

		internal void OnStepWillHide(TutorialGroup group, TutorialStep step)
		{
			if (_ignoreHideEventsFromSteps.Contains(step))
			{
				return;
			}

			if (TutorialStepWillHide != null)
			{
				TutorialStepWillHide(group, step.Id);
			}
		}

		internal void OnStepHidden(TutorialGroup group, TutorialStep step)
		{
			_shownStep = null;

			if (TutorialStepHidden != null)
			{
				TutorialStepHidden(group, step.Id);
			}

			if (step.CompleteOnHide)
			{
				int stepNumber = group.GetStepNumber(step.Id);
				if (group.CompleteStep(stepNumber))
					Save();
			}

			if (_allowAutoLaunchNextStep && step.AutoLaunchNextStep)
			{
				BeginShowNextStep(group, step);
			}
		}

		//Complete all tutorial steps from all groups (useful for skipping tutorial)
		public void CompleteAllSteps()
		{
			foreach (TutorialGroup group in _tutorialGroups.Values)
			{
				group.CompleteAllSteps();
			}

			Save();
		}

		//Clear completed step
		//@param groupName - tutorial group name
		//@param stepNumber - step number to show
		public void ClearCompletedStep(TutorialGroup group, int stepNumber)
		{
			group.ClearCompletedStep(stepNumber);
			Save();
		}

		//Clear all completed steps from group
		//@param groupName - tutorial group name
		public void ClearCompletedSteps(String groupName)
		{
			TutorialGroup group = _tutorialGroups[groupName];
			group.ClearAllSteps();
			Save();
		}

		//Clear all completed steps from all groups
		public void ClearAllCompletedSteps()
		{
			foreach (TutorialGroup group in _tutorialGroups.Values)
			{
				group.ClearAllSteps();
			}

			Save();
		}

		//Check whether tutorial is completed
		public bool IsTutorialCompleted()
		{
			foreach (TutorialGroup group in _tutorialGroups.Values)
			{
				if (!group.IsCompleted())
					return false;
			}

			return true;
		}

		//Is input blocked right now
		public bool IsInputBlocked()
		{
			return _shownStep != null && _shownStep.BlocksInput;
		}
	}
}
