using System;
using UnityEngine;

namespace GSN.Skill.Games.Common.Tutorial.Unity 
{
    public class TutorialPrefabUtills 
    {
        private const string TUTORIAL_ROOT_GAME_OBJECT_NAME = "Tutorial";

        private static GameObject _rootGameObject;
        private static TutorialController _rootController;

        public static GameObject RootGameObject 
        {
            get 
            {
                if (_rootGameObject == null) 
                {
                    _rootGameObject = GameObject.Find(TUTORIAL_ROOT_GAME_OBJECT_NAME);
                    if (_rootGameObject == null) 
                    {
                        _rootGameObject = new GameObject(TUTORIAL_ROOT_GAME_OBJECT_NAME, typeof(TutorialController));
                    }
                }
                return _rootGameObject;
            }
        }

        public static TutorialController RootController 
        {
            get 
            {
                if (_rootController == null) 
                {
                    _rootController = RootGameObject.GetComponent<TutorialController>();
                }
                return _rootController;
            }
        }

        public static GameObject InstantiateStepPrefab(string prefabName) 
        {
            GameObject prefab = Resources.Load<GameObject>(prefabName);

            if (prefab == null) 
            {
                throw new NullReferenceException("Tutorial step prefab [\"" + prefabName + "\"] is null.");
            }
            
            GameObject gameObject = MonoBehaviour.Instantiate(prefab);
            SetNameAndParent(gameObject, RootGameObject.transform, prefab);
            return gameObject;
        }

        public static void SetNameAndParent(GameObject gameObject, Transform parentTransform, GameObject prefabObject)
        {
            gameObject.name = prefabObject.name;
            gameObject.transform.SetParent(parentTransform, false );
        }
        
        public static void DestroyStepObject(GameObject _stepObject) 
        {
            _stepObject.transform.SetParent(null);
            if (Application.isPlaying) 
            {
                MonoBehaviour.Destroy(_stepObject);
            }
            else 
            {
                MonoBehaviour.DestroyImmediate(_stepObject);
            }
        }

        public static GameObject FindStepGameObjectOnScene(string stepPrefabName) 
        {
            var rootTransform = RootGameObject.transform;
            int index = 0;
            while (index < rootTransform.childCount) 
            {
                var childTransform = rootTransform.GetChild(index);
                if (childTransform.name == stepPrefabName) 
                {
                    return childTransform.gameObject;
                }
                index++;
            }
            return null;
        }
    }
}
