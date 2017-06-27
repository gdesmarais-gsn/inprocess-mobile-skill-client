using System;
using System.IO;
using UnityEngine;

namespace GSN.Skill.Games.Common.Tutorial.Unity 
{
    public abstract class TutorialStepPrefabBase 
    {
        public Action Shown;
        public Action Hidden;

        public string                           Name;
		//TODO remove - needed to load from json
        public string 						_fullPath;
		public GameObject					prefab;
        public GameObject                   gameObject { get; private set;}

        //prefab full path
        public string FullPath 
        {
            get { return _fullPath; }
            set {
                _fullPath = value;
                Name = GetPrefabName();
            }
        }

        public void Show() 
        {
            gameObject = TutorialPrefabUtills.FindStepGameObjectOnScene(Name);

            if (gameObject != null) 
            {
                gameObject.SetActive(true);
                OnShown();
            }
            else 
            {
				if (prefab == null)
					LoadGameObjectReference ();
				gameObject = (GameObject)GameObject.Instantiate(prefab);
				TutorialPrefabUtills.SetNameAndParent(gameObject, TutorialPrefabUtills.RootGameObject.transform, prefab);
                OnShown();
            }
        }

        public void Hide(bool forceAnimate = false) 
        {
            TutorialStepController tutorialStepController = gameObject.GetComponent<TutorialStepController>();
            if (tutorialStepController != null)
            {
                // The step controller will hide this
                tutorialStepController.OnHide(this);
                return;
            }
            
            DismissAndHide();
        }
        
        public void DismissAndHide()
        {
            Dismiss();
            OnHidden();
        }

        public virtual void Dismiss() 
        {
            TutorialPrefabUtills.DestroyStepObject(gameObject);
        }

        protected virtual void OnShown() 
        {            
            if (Shown == null) 
            {
                return;
            }

            Shown();
        }

        protected virtual void OnHidden() 
        {
            if (Hidden == null) 
            {
                return;
            }

            Hidden();
        }

        protected string GetPrefabName() 
        {
            var name = Path.GetFileNameWithoutExtension(_fullPath);
            return name;
        }

        public TutorialStepPrefabBase()
        {
            
        }

		public void LoadGameObjectReference()
		{
			prefab = Resources.Load<GameObject>(_fullPath);
		}
    }

}
