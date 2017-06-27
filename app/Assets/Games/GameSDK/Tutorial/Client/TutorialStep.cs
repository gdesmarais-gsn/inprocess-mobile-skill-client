using System;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Tutorial.Unity;
using UnityEngine;

namespace GSN.Skill.Games.Common.Tutorial
{
    //Description of generic tutorial step
	[Serializable]
    public class TutorialStep 
	{
        public String                    	Id;                  //id of step
		public bool                      	BlocksInput;         //should input be blocked when step is shown
		public bool		                    AutoLaunchNextStep;  //should next tutorial step be launched after this step hides
		public bool        		            CompleteOnHide;      //complete step on hide
		protected bool                    	_isShown;        	  //is this step being shown in it's group
		protected TutorialGroup				_group;				  //which group is this step in
		protected ITutorialStepCallback     _callbacks;           //callback object
		[SerializeField]
        public TutorialStepMainPrefab 		Prefab;               //main prefab to show
		[SerializeField]
        public List<TutorialStepAdditionalPrefab> AdditionalPrefabs = new List<TutorialStepAdditionalPrefab>();   //additional prefabs to show
        public int 							_countCompletedPrefabs;

		//Show step
		//@param groupName - group name in which step will be shown
        public void Show(TutorialGroup group) 
        {            
            _group = group;
            _isShown = true;

            OnTutorialStepWillShow();
            TutorialManager.instance.OnStepWillShow(_group, this);

            Prefab.Shown = OnPrefabShown;
            Prefab.Show();

            foreach (var additionalPrefab in AdditionalPrefabs) 
            {
                additionalPrefab.Shown = OnPrefabShown;
                additionalPrefab.Show();
            };
        }

		//Hide step
        public void Hide(bool forceAnimate = false) 
        {
            OnTutorialStepWillHide();
            TutorialManager.instance.OnStepWillHide(_group, this);

            foreach (var additionalPrefab in AdditionalPrefabs) 
            {
                if (!additionalPrefab.HideWithStep && !forceAnimate) 
                {
                    _countCompletedPrefabs++;
                    continue;
                }
                additionalPrefab.Hidden = OnPrefabsHidden;
                additionalPrefab.Hide();
            }

            Prefab.Hidden = OnPrefabsHidden;
            Prefab.Hide((!AutoLaunchNextStep || forceAnimate));
        }

		//Hide step without calling callbacks
        public virtual void Dismiss() 
		{
            Prefab.Dismiss();

            foreach (var additionalPrefab in AdditionalPrefabs) 
            {
                additionalPrefab.Dismiss();
            }

            _isShown = false;
        }

        protected void OnTutorialStepWillShow() 
		{
            if (_callbacks == null) 
            {
                return;
            }

			_callbacks.OnTutorialStepWillShow(_group, Id);
        }

		protected void OnTutorialStepShown() 
		{
            if (_callbacks == null) {
                return;
            }
            
			_callbacks.OnTutorialStepShown(_group, Id);
        }

		protected void OnTutorialStepWillHide() 
		{
            if (_callbacks == null) {
                return;
            }
            
			_callbacks.OnTutorialStepWillHide(_group, Id);
        }

		protected void OnTutorialStepHidden() 
		{
            if (_callbacks == null) {
                return;
            }
            
			_callbacks.OnTutorialStepHidden(_group, Id);
        }

        private void OnPrefabShown() 
        {
            _countCompletedPrefabs++;

            if (_countCompletedPrefabs < AdditionalPrefabs.Count + 1) 
            {
                return;
            }

            _countCompletedPrefabs = 0;
            
            _callbacks = Prefab.gameObject.GetComponent<ITutorialStepCallback>();

            OnTutorialStepShown();
            TutorialManager.instance.OnStepShown(_group, this);
        }

        private void OnPrefabsHidden() {
            _countCompletedPrefabs++;

            if (_countCompletedPrefabs < AdditionalPrefabs.Count + 1) {
                return;
            }

            _countCompletedPrefabs = 0;

            OnTutorialStepHidden();
            TutorialManager.instance.OnStepHidden(_group, this);
        }

		public TutorialStep()
		{
			
		}

		public TutorialStep(string id)
		{
			Id = id;
			Prefab = new TutorialStepMainPrefab();
		}
    }
}
