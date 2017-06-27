using System;
using System.Collections.Generic;
using UnityEngine;

namespace GSN.Skill.Games.Common.Tutorial
{
	//Completed steps stored as id/number pairs, so in case of tutorial will be changed changed steps will be shown
	[Serializable]
	public struct CompletedStep 
	{
		public String stepId;	 //completed step id
		public int	stepNumber; //completed step number

		public CompletedStep(String inStepId, int inStepNumber) {
			stepId = inStepId;
			stepNumber = inStepNumber;
		}
	}
}

namespace GSN.Skill.Games.Common.Tutorial 
{
	public class TutorialGroup : ScriptableObject
	{
		public string Name;

        [SerializeField]
		public List<TutorialStep> Steps = new List<TutorialStep>();

		[NonSerialized] 
		public List<CompletedStep> completedSteps = new List<CompletedStep>();

		//Add tutorial step for group
		//@param groupName - name of group to add step
		//@param step - step to add
		public void AddStep(TutorialStep step) 
		{
			TutorialStep oldStep = Steps.Find(f => f.Id == step.Id);
			if (oldStep != null)
		   		throw new ArgumentException("Step with id '" + step.Id + "' already exist", "step");
			Steps.Add(step);
		}

		//Add tutorial step for group
		//@param groupName - name of group to add step
		//@param step - step to remove
		public void RemoveStep(string stepName) 
		{
			TutorialStep step = Steps.Find(f => f.Id == stepName);
			if (step == null)
				throw new ArgumentException("Strep cannot be null");
		   	Steps.Remove(step);
		}

		//Set order step
		public void SetOrderStep(string stepName, int newOrder) 
		{
			TutorialStep step = Steps.Find(f => f.Id == stepName);
			Steps.Remove(step);
			Steps.Insert(newOrder, step);
		}

		public bool CompleteStep(int stepNumber)
		{
			TutorialStep step = Steps[stepNumber];

			foreach (CompletedStep completedStep in completedSteps) 
			{
				if (step.Id.Equals(completedStep.stepId) && stepNumber == completedStep.stepNumber)  //already added
					return false;
			}

			completedSteps.Add(new CompletedStep(step.Id, stepNumber));
			return true;
		}

		//Complete all tutorial steps from group (useful for skipping tutorial group)
		//@param groupName - tutorial group name
		public void CompleteAllSteps() 
		{
			for (int i = 0, count = Steps.Count; i < count; i++) 
			{
				completedSteps.Add(new CompletedStep(Steps[i].Id, i));
			}
		}

		//Clear completed step
		//@param groupName - tutorial group name
		//@param stepNumber - step number to show
		public void ClearCompletedStep(int stepNumber) 
		{
			TutorialStep step = Steps[stepNumber];

			for (int i = 0, count = completedSteps.Count; i < count; i++) 
			{
				CompletedStep completedStep = completedSteps[i];

				if (completedStep.stepId.Equals(step.Id) && completedStep.stepNumber == stepNumber)
				{
					completedSteps.RemoveAt(i);
					break;
				}
			}
		}

		public void ClearAllSteps()
		{
			completedSteps.Clear();
		}

			//Check whether tutorial step is completed
		//@param groupName - tutorial group name
		//@param stepNumber - step number
		public bool IsStepCompleted(int stepNumber) 
		{
			foreach (CompletedStep completedStep in completedSteps) 
			{
				if (completedStep.stepId.Equals(Steps[stepNumber].Id) &&
					completedStep.stepNumber == stepNumber) 
				{
					return true;
				}
			}

			return false;
		}

		//Check whether tutorial steps is completed
		//@param groupName - tutorial group name
		public bool IsCompleted() 
		{
			for (int i = 0, count = Steps.Count; i < count; i++) 
			{
				if (!IsStepCompleted(i))
					return false;
			}

			return true;
		}


		//Get tutorial step number by step id
		//@param groupName - tutorial group name
		//@param stepId - id of the step
		public int GetStepNumber(String stepId) 
		{
			return Steps.FindIndex(item => item.Id.Equals(stepId));
		}

		public void Load(JSONTutorialGroup jsonGroup) {
			jsonGroup.LoadStepGameObjectReferences();
			Name = jsonGroup.Name;
			Steps = jsonGroup.Steps;
			completedSteps = jsonGroup.completedSteps;
		}
	}

	//Deprecated class that can load from JSON
	public class JSONTutorialGroup
	{
		public string Name;

		public List<TutorialStep> Steps = new List<TutorialStep>();

		public List<CompletedStep> completedSteps = new List<CompletedStep>();

		public void LoadStepGameObjectReferences()
		{
			for (int i = 0; i < Steps.Count; ++i)
			{
				Steps[i].Prefab.LoadGameObjectReference();
				for (int j = 0; j < Steps[i].AdditionalPrefabs.Count; ++j)
				{
					Steps[i].AdditionalPrefabs[j].LoadGameObjectReference();
				}
			}
		}
	}
}
