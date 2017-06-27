using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;
using System;
using GSN.Skill.Games.Common.Tutorial.Unity;

public class TutorialPrefabsStorage {

    public static GameObject LoadStepPrefab(string prefabPath) {
        var prefab = Resources.Load<GameObject>(prefabPath) as GameObject;
        if (prefab == null) {
            return null;
        }
        if (prefab.GetComponent<TutorialStepController>() == null) {
            return null;
        }
        return prefab;
    }


    public static GameObject LoadAditionalPrefab(string prefabPath) {
        var prefab = Resources.Load<GameObject>(prefabPath) as GameObject;
        if (prefab == null) {
            return null;
        }
        if (prefab.GetComponent<TutorialStepController>() != null) {
            return null;
        }
        return prefab;
    }

    public static GameObject CreateStepPrefabAndInstantiateToScene(string prefabPath) {
        var lacalPrefabPath = Path.GetDirectoryName(prefabPath + ".prefab");
        if (lacalPrefabPath != "") {
            var pathWithoutFileName = "Assets/" + "Resources" + "/" + lacalPrefabPath;
            if (!AssetDatabase.IsValidFolder(pathWithoutFileName)) {
                throw new DirectoryNotFoundException("Directory not found " + pathWithoutFileName);
            }
        }

        var prefabName = Path.GetFileName(prefabPath);
        var gameObject = new GameObject(prefabName, typeof(TutorialStepController), typeof(TutorialActiveAreasController));
        gameObject.transform.position = new Vector3(0, 100, -10);
        gameObject.transform.parent = TutorialPrefabUtills.RootGameObject.transform;
        var path = "Assets/" + "Resources" + "/" + prefabPath + ".prefab";
        var prefab = PrefabUtility.CreatePrefab(path, gameObject, ReplacePrefabOptions.ConnectToPrefab);
        return prefab;
    }

    public static GameObject CreateAdditionalPrefabAndInstantiateToScene(string additionalPrefabPath) {
        var lacalPrefabPath = Path.GetDirectoryName(additionalPrefabPath + ".prefab");
        if (lacalPrefabPath != "") {
            var pathWithoutFileName = "Assets/" + "Resources" + "/" + lacalPrefabPath;
            if (!AssetDatabase.IsValidFolder(pathWithoutFileName)) {
                throw new DirectoryNotFoundException("Directory not found " + pathWithoutFileName);
            }
        }

        var additionalPrefabName = Path.GetFileName(additionalPrefabPath);
        var gameObject = new GameObject(additionalPrefabName);
        gameObject.transform.position = new Vector3(0, 100, 0);
        gameObject.transform.parent = TutorialPrefabUtills.RootGameObject.transform;
        var path = "Assets/" + "Resources" + "/" + additionalPrefabPath + ".prefab";
        var prefab = PrefabUtility.CreatePrefab(path, gameObject, ReplacePrefabOptions.ConnectToPrefab);
        return prefab;
    }

    public static GameObject CreateBlackoutAdditionalPrefabAndInstantiateToScene(string additionalPrefabPath) {
        var lacalPrefabPath = Path.GetDirectoryName(additionalPrefabPath + ".prefab");
        if (lacalPrefabPath != "") {
            var pathWithoutFileName = "Assets/" + "Resources" + "/" + lacalPrefabPath;
            if (!AssetDatabase.IsValidFolder(pathWithoutFileName)) {
                throw new DirectoryNotFoundException("Directory not found " + pathWithoutFileName);
            }
        }

        var additionalPrefabName = Path.GetFileName(additionalPrefabPath);
        var gameObject = new GameObject(additionalPrefabName, typeof(TutorialBlackoutController));
        gameObject.transform.position = new Vector3(0, 100, 0);
        gameObject.transform.parent = TutorialPrefabUtills.RootGameObject.transform;
        var path = "Assets/" + "Resources" + "/" + additionalPrefabPath + ".prefab";
        var prefab = PrefabUtility.CreatePrefab(path, gameObject, ReplacePrefabOptions.ConnectToPrefab);
        return prefab;
    }

    public static GameObject FindTutorialStepPrefabObjectOnScene(string tutorialStepPrefabName) {
        var tutorialController = TutorialPrefabUtills.RootGameObject;

        int index = 0;
        while (index < tutorialController.transform.childCount) {
            var tutorialObject = tutorialController.transform.GetChild(index);
            if (tutorialObject.gameObject.name == tutorialStepPrefabName && tutorialObject.gameObject.GetComponent<TutorialStepController>()) {
                return tutorialObject.gameObject;
            }
            index++;
        }
        return null;
    }
}
