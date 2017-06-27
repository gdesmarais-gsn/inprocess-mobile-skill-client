using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using System.Text;
using System.Linq;
using GSN.Skill.Games.Common.Tutorial;
using GSN.Skill.Games.Common.Tutorial.Unity;

public class Tutorial_EditorWindow : EditorWindow {

    [MenuItem("GSN Tools/Tutorial")]
    public static void ShowWindow() {
        GetWindow(typeof(Tutorial_EditorWindow), false, "Tutorial", true);
    }

    private const string DEFAULT_NAME_GROUP_FOR_CREATE = "New Group";
	private const string ASSET_FILE_EXTENSION = ".asset";

	private string _newTutorialGroupName = DEFAULT_NAME_GROUP_FOR_CREATE;

    private GUIStyle _foldoutStyleRed;
    private GUIStyle _lableStyleRed;

    private string _tutorialPath;
    private List<string> _tutorialPaths;
	private Dictionary<string, TutorialGroup> _tutorialGroups;

	private Dictionary<string, FoldoutGroup> _foldoutGroups;
	
    private Vector2 _scrolPosition;
    bool _isSkipNextGuiUpdate = false;

    //for saving with delay
    private TimeSpan _timeDelayForSave;
    private DateTime _timeStop;
    private bool _isSaveWithDelay = false;

    private void Awake() 
    {
        titleContent.text = "Tutorial";
    }

    //Reinit data for handling scripts recompilation
    private void OnFocus() 
    {
        Init();
    }

    private void OnLostFocus() 
    {
        Save();
    }

    private void OnGUI()
    {
        //for saving with delay
        if (_isSaveWithDelay) 
        {
            _timeDelayForSave += DateTime.Now - _timeStop;
            if (_timeDelayForSave.TotalSeconds >= 1d) 
            {
                _isSaveWithDelay = false;
                Save();
            }
        }

        if (_isSkipNextGuiUpdate == true) 
        {
            _isSkipNextGuiUpdate = false;
            return;
        }

        InitGuiStyles();

        EditorGUILayout.Space();
        ShowCreateGroup();
        EditorGUILayout.Space();
        ListGroupAndSteps();
    }

    private void InitGuiStyles() 
    {
        if (_foldoutStyleRed == null) 
        {
            _foldoutStyleRed = new GUIStyle(EditorStyles.foldout);
            _foldoutStyleRed.normal.textColor = Color.red;
            _foldoutStyleRed.onNormal.textColor = Color.red;
            _foldoutStyleRed.hover.textColor = Color.red;
            _foldoutStyleRed.onHover.textColor = Color.red;
            _foldoutStyleRed.focused.textColor = Color.red;
            _foldoutStyleRed.onFocused.textColor = Color.red;
            _foldoutStyleRed.active.textColor = Color.red;
            _foldoutStyleRed.onActive.textColor = Color.red;
        }

        if (_lableStyleRed == null) 
        {
            _lableStyleRed = new GUIStyle(EditorStyles.label);
            _lableStyleRed.normal.textColor = Color.red;
            _lableStyleRed.onNormal.textColor = Color.red;
        }
    }

    private void Init() 
    {
		if (_tutorialGroups == null)
		{
			_tutorialGroups = new Dictionary<string, TutorialGroup> ();
		}

		if (_foldoutGroups == null)
		{
			_foldoutGroups = new Dictionary<string, FoldoutGroup>();
		}

		_tutorialGroups.Clear ();

        LoadTutorials();
        LoadTutorialBuilders();
    }

    private void LoadTutorials() 
    {
		_tutorialPaths = new List<String> ();
		_tutorialPath = null;
		
		string[] guids = AssetDatabase.FindAssets("t:TutorialGroup", null);
		for (int i = 0; i < guids.Length; ++i)
		{
			string path = AssetDatabase.GUIDToAssetPath(guids[i]);
			_tutorialPaths.Add(path);
		}
		if (_tutorialPaths.Count > 0)
        {
            _tutorialPath = _tutorialPaths[0];
        }
    }

    private void LoadTutorialBuilders()
    {
        if (_tutorialPaths == null || _tutorialPaths.Count == 0 || String.IsNullOrEmpty(_tutorialPath))
        {
            return;
        }

		_tutorialGroups.Clear();

		for (int i = 0; i < _tutorialPaths.Count; ++i)
		{
			TutorialGroup tutorialGroup = (TutorialGroup) AssetDatabase.LoadAssetAtPath(_tutorialPaths[i], typeof(TutorialGroup));
			if (_tutorialGroups.ContainsKey(tutorialGroup.Name))
			{
				StringBuilder str = new StringBuilder();
				str.AppendFormat("Cannot load second tutorial group with name {0} from {1}\n", tutorialGroup.Name, _tutorialPaths[i]);
				str.Append("Already loaded:");
				for (int j = 0; j < i; ++j)
				{
					str.Append("\t" + _tutorialPaths[j]);
				}
				Debug.LogWarning(str);
			}
			else
			{
				AddGroup(tutorialGroup);
			}
		}
    }

    private void Save() 
    {
		if (_tutorialGroups != null)
		{
			foreach (TutorialGroup tutorialGroup in _tutorialGroups.Values) 
			{
				EditorUtility.SetDirty(tutorialGroup);
			}
		}

		AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
    }

    private void SaveWithDelay() 
    {
        _timeStop = DateTime.Now;
        _isSaveWithDelay = true;
        _timeDelayForSave = new TimeSpan();
    }

    private void ShowCreateGroup() 
    {
        EditorGUI.indentLevel = 0;
        GUILayout.Label("Create Group");
        EditorGUI.indentLevel = 1;
        _newTutorialGroupName = EditorGUILayout.TextField("Name", _newTutorialGroupName);
        EditorGUILayout.BeginHorizontal();
        GUILayout.Space(20);
        if (GUILayout.Button("Create")) 
		{
            if (_tutorialGroups.ContainsKey(_newTutorialGroupName))
			{
                EditorUtility.DisplayDialog("Warning", "Tutorial group \"" + _newTutorialGroupName + "\" already exist!", "Ok");/*) {*/
                return;
            }

			string newPath = Application.dataPath;
			if (_tutorialPath != null)
				newPath = _tutorialPath;

			string path = EditorUtility.SaveFilePanel("Save Tutorial Group", newPath, _newTutorialGroupName + ".asset", "asset");
			path = FileUtil.GetProjectRelativePath(path);
			if (path.Length == 0)
			{
				return;
			}

			TutorialGroup newGroup = ScriptableObject.CreateInstance<TutorialGroup>();
			newGroup.Name = _newTutorialGroupName;
			AssetDatabase.CreateAsset(newGroup, path);
			AddGroup(newGroup);

			Save();

			_newTutorialGroupName = DEFAULT_NAME_GROUP_FOR_CREATE;
        }
	
        EditorGUILayout.EndHorizontal();
    }

	private void AddGroup(TutorialGroup group)
	{
		_tutorialGroups.Add (group.Name, group);
		if (!_foldoutGroups.ContainsKey(group.Name))
			_foldoutGroups.Add (group.Name, new FoldoutGroup ());
	}

    private void ListGroupAndSteps() 
    {
        _scrolPosition = EditorGUILayout.BeginScrollView(_scrolPosition);

        foreach (TutorialGroup tutorialGroup in _tutorialGroups.Values) 
        {

            EditorGUI.indentLevel = 0;
            EditorGUILayout.BeginHorizontal();
			_foldoutGroups[tutorialGroup.Name].groupVisible = EditorGUILayout.Foldout(_foldoutGroups[tutorialGroup.Name].groupVisible, tutorialGroup.Name + "  [Steps: " + tutorialGroup.Steps.Count() + "]");
            GUILayout.FlexibleSpace();
			/*
            if (ButtonRemoveGroup(tutorialGroup)) 
            {
                _foldoutTutorialGroups.Remove(tutorialGroup.Name);
                break;
            }
			*/
            EditorGUILayout.EndHorizontal();

			if (!_foldoutGroups[tutorialGroup.Name].groupVisible)
			{
				continue;
			}

            int indexstep = -1;
            foreach (TutorialStep tutorialStep in tutorialGroup.Steps) 
            {
                indexstep++;

                var tutorialStepPrefab = TutorialPrefabsStorage.LoadStepPrefab(tutorialStep.Prefab.FullPath);

                EditorGUI.indentLevel = 1;
                EditorGUILayout.BeginHorizontal();
                bool isErrorAdditionalPrefabs = false;
                for (int i = 0; i < tutorialStep.AdditionalPrefabs.Count; i++) 
                {
                    var additionalPrefab = tutorialStep.AdditionalPrefabs[i];
                    if (TutorialPrefabsStorage.LoadAditionalPrefab(additionalPrefab.FullPath) == null) 
                    {
                        isErrorAdditionalPrefabs = true;
                    }
                }

				bool stepShown = _foldoutGroups[tutorialGroup.Name].IsStepVisible(indexstep);

                if (tutorialStepPrefab == null || isErrorAdditionalPrefabs) 
                {
					stepShown = EditorGUILayout.Foldout(stepShown, tutorialStep.Id, _foldoutStyleRed);
                }
                else 
                {
					stepShown = EditorGUILayout.Foldout(stepShown, tutorialStep.Id);
                }

				_foldoutGroups[tutorialGroup.Name].SetStepVisible(indexstep, stepShown);

                GUILayout.FlexibleSpace();

                ButtonInstantiateOrDestroyPrefabOnScene(tutorialStep);

                if (ButtonsSetStepsOrder(tutorialGroup, tutorialStep)) 
                {
                    EditorGUILayout.EndHorizontal();
                    break;
                }

                if (ButtonRemoveStep(tutorialGroup, tutorialStep)) 
                {
                    EditorGUILayout.EndHorizontal();
                    break;
                }

                EditorGUILayout.EndHorizontal();

				if (stepShown)
				{

	                EditorGUI.indentLevel = 2;

	                TutorialStepProperties(tutorialGroup, tutorialStep);
	                EditorGUILayout.Space();
				}
            }

			if (ShowButtonAddStep(tutorialGroup)) 
            {
				break;
			}
		}

        EditorGUILayout.EndScrollView();
    }

	/*
    private bool ButtonRemoveGroup(TutorialGroup group) 
    {
        if (GUILayout.Button("Remove group", GUILayout.Height(18))) 
        {
            if (EditorUtility.DisplayDialog("Warning", "Are you sure want remove tutorial group?", "Yes", "No")) {
                if (group.Steps.Count > 0)
                {
                    EditorUtility.DisplayDialog("Warning", "Group contains steps!", "Ok");
                    return false;
                }
				_tutorialBuilder.Remove(group.Name);
                Save();
                return true;
            }
        }
        return false;
    }
	*/

    private void ButtonInstantiateOrDestroyPrefabOnScene(TutorialStep tutorialStep) 
    {
        GameObject tutorialStepSceneObject = TutorialPrefabsStorage.FindTutorialStepPrefabObjectOnScene(tutorialStep.Prefab.Name);
        GameObject prefab = TutorialPrefabsStorage.LoadStepPrefab(tutorialStep.Prefab.FullPath);

        GUILayout.Label("[Instantiate", GUILayout.Width(100));
        GUILayout.Space(-40);

        bool toogleResult = EditorGUILayout.Toggle(!(tutorialStepSceneObject == null), GUILayout.Width(30));

        if (prefab != null) 
        {
            if (toogleResult && tutorialStepSceneObject == null) 
            {
                GameObject instantiatedTutorialStepGameObject = (GameObject)PrefabUtility.InstantiatePrefab(prefab);
                TutorialPrefabUtills.SetNameAndParent(instantiatedTutorialStepGameObject, TutorialPrefabUtills.RootGameObject.transform, prefab);
                       
                foreach (TutorialStepAdditionalPrefab additionalPrefab in tutorialStep.AdditionalPrefabs) 
                {
                    GameObject additionalPrefabSceneObject = TutorialPrefabUtills.FindStepGameObjectOnScene(additionalPrefab.Name);
                    if (additionalPrefabSceneObject != null) 
                    {
                        continue;
                    }
                    
                    GameObject additionalPref = TutorialPrefabsStorage.LoadAditionalPrefab(additionalPrefab.FullPath);
                    GameObject instantiatedTutorialStepAdditionalGameObject = (GameObject)PrefabUtility.InstantiatePrefab(additionalPref);
                    TutorialPrefabUtills.SetNameAndParent(instantiatedTutorialStepAdditionalGameObject, TutorialPrefabUtills.RootGameObject.transform, additionalPref);

                }
            }
            else if (!toogleResult && tutorialStepSceneObject != null) 
            {
                DestroyImmediate(tutorialStepSceneObject);

                foreach (var additionalPrefab in tutorialStep.AdditionalPrefabs) 
                {
                    var additionalPrefabSceneObject = TutorialPrefabUtills.FindStepGameObjectOnScene(additionalPrefab.Name);
                    DestroyImmediate(additionalPrefabSceneObject);
                }
            }
        }
        GUILayout.Label("]", GUILayout.Width(30));
    }
    
    private void SetParent(GameObject prefab, Transform parentTransform)
    {
        
    }
	
    private bool ButtonsSetStepsOrder(TutorialGroup group, TutorialStep step) 
    {
        GUILayout.Label("[", GUILayout.Width(30));
        GUILayout.Space(-25);
        GUILayout.Label("Order ", GUILayout.Width(65));
        GUILayout.Space(-20);
        if (GUILayout.Button("▲", GUILayout.Width(45), GUILayout.Height(16))) 
        {
            var currentStepIndex = group.Steps.FindIndex(f => f == step);
            if (currentStepIndex >= 1) 
			{
                group.SetOrderStep(step.Id, currentStepIndex - 1);
				_foldoutGroups[group.Name].SwapStep(currentStepIndex, currentStepIndex - 1);
                return true;
            }
        }
        if (GUILayout.Button("▼", GUILayout.Width(45), GUILayout.Height(16))) 
        {
            var currentStepIndex = group.Steps.FindIndex(f => f == step);
            if (currentStepIndex < group.Steps.Count - 1) 
            {
                group.SetOrderStep(step.Id, currentStepIndex + 1);
				_foldoutGroups[group.Name].SwapStep(currentStepIndex, currentStepIndex + 1);
                return true;
            }
        }
        GUILayout.Label("]", GUILayout.Width(30));
        return false;
    }

    private bool ButtonRemoveStep(TutorialGroup tutorialGroup, TutorialStep tutorialStep) 
    {
        if (GUILayout.Button("Remove step", GUILayout.Height(18))) 
        {
            if (EditorUtility.DisplayDialog("Warning", "Are you sure want remove tutorial step?", "Yes", "No")) 
            {
                tutorialGroup.RemoveStep(tutorialStep.Id);
                Save();
                return true;
            }
        }
        return false;
    }

	private bool ShowButtonAddStep(TutorialGroup tutorialGroup)
	{
		FoldoutGroup foldoutGroup = _foldoutGroups [tutorialGroup.Name];
		foldoutGroup.newStepName = EditorGUILayout.TextField("Step Name", foldoutGroup.newStepName);
		if (GUILayout.Button("Add step to " + tutorialGroup.Name, GUILayout.Height(18), GUILayout.Width(180))) 
		{
			var step = tutorialGroup.Steps.Find(f => f.Id == foldoutGroup.newStepName);
			if (step != null) 
            {
				EditorUtility.DisplayDialog("Warning", "Tutorial step \"" + foldoutGroup.newStepName + "\" already exist!", "Ok");
				return false;
			}

			TutorialStep tutorialStep = new TutorialStep(foldoutGroup.newStepName);

			tutorialStep.Prefab.FullPath = tutorialStep.Id;
			
			tutorialGroup.AddStep(tutorialStep);

			_foldoutGroups[tutorialGroup.Name].AddStep();
			
			Save();

			foldoutGroup.newStepName = FoldoutGroup.DEFAULT_NAME_STEP_FOR_CREATE;
		}
		return false;
	}


    private void TutorialStepProperties(TutorialGroup tutorialGroup, TutorialStep tutorialStep) 
    {
        tutorialStep.Id = EditorGUILayout.TextField("Id", tutorialStep.Id);
        EditorGUI.indentLevel = 2;

        var blocksInput = EditorGUILayout.Toggle("Blocks input", tutorialStep.BlocksInput);
        if (blocksInput != tutorialStep.BlocksInput) 
        {
            tutorialStep.BlocksInput = blocksInput;
            SaveWithDelay();
        }

        var autoLaunchNextStep = EditorGUILayout.Toggle("Auto launch next step", tutorialStep.AutoLaunchNextStep);
        if (tutorialGroup.Steps.FindIndex(p => p.Id == tutorialStep.Id) == tutorialGroup.Steps.Count - 1) 
        {
            autoLaunchNextStep = false;
        }
        if (autoLaunchNextStep != tutorialStep.AutoLaunchNextStep) 
        {
            tutorialStep.AutoLaunchNextStep = autoLaunchNextStep;
            SaveWithDelay();
        }
        
        var completeOnHide = EditorGUILayout.Toggle("Complete on hide", tutorialStep.CompleteOnHide);
        if (completeOnHide != tutorialStep.CompleteOnHide) 
        {
            tutorialStep.CompleteOnHide = completeOnHide;
            SaveWithDelay();
        }            
        
        TutorialStepPrepertiesPrefab(tutorialGroup, tutorialStep);

        TutorialStepPrepertiesAdditionalPrefabs(tutorialGroup, tutorialStep);
    }

	private bool SetTutorialStepPrefab(TutorialStep step, GameObject prefab)
	{
		var tutorialStepPrefab = TutorialPrefabsStorage.LoadStepPrefab(step.Prefab.FullPath);        
		if (prefab != null && prefab != tutorialStepPrefab) 
		{
			var fullPath = GetFullPathByPrefab(prefab);
			if ( prefab.GetComponent<TutorialStepController>() != null) 
			{
				step.Prefab.FullPath = MakePrefabFullPath(fullPath);
				Save();
			}
			else
				return false;
		}
		else if (prefab == null)
		{
			step.Prefab.FullPath = null;
		}
		return true;
	}
    
    private void TutorialStepPrepertiesPrefab(TutorialGroup tutorialGroup, TutorialStep tutorialStep) 
    {

        var tutorialStepPrefab = TutorialPrefabsStorage.LoadStepPrefab(tutorialStep.Prefab.FullPath);        

        EditorGUILayout.BeginHorizontal();
		EditorGUILayout.LabelField("Prefab Object", (tutorialStepPrefab == null) ? _lableStyleRed : GUI.skin.label);

		GameObject prefab = EditorGUILayout.ObjectField(tutorialStepPrefab, typeof(GameObject), false) as GameObject;
		if (!SetTutorialStepPrefab (tutorialStep, prefab))
		{
			Debug.LogError(tutorialStep.Id + " " + prefab.name + "doesn't have a tutorial step controller!");
		}

		EditorGUILayout.EndHorizontal();
		EditorGUI.indentLevel = 2;
    }


    private void TutorialStepPrepertiesAdditionalPrefabs(TutorialGroup tutorialGroup, TutorialStep tutorialStep) 
    {
        var stepIndexInGroup = tutorialGroup.Steps.FindIndex(e => e.Id == tutorialStep.Id);

        bool isErrorAdditionalPrefabs = false;
        for (int i = 0; i < tutorialStep.AdditionalPrefabs.Count; i++) 
        {
            var additionalPrefab = tutorialStep.AdditionalPrefabs[i];
            if (TutorialPrefabsStorage.LoadAditionalPrefab(additionalPrefab.FullPath) == null) 
            {
                isErrorAdditionalPrefabs = true;
            }
        }

        EditorGUILayout.LabelField("Additional Prefabs", (isErrorAdditionalPrefabs) ? _lableStyleRed : GUI.skin.label);

        for (int i = 0; i < tutorialStep.AdditionalPrefabs.Count; i++) 
        {
            EditorGUI.indentLevel = 3;
            var additionalPrefab = tutorialStep.AdditionalPrefabs[i];
            var additionalPrefabObject = TutorialPrefabsStorage.LoadAditionalPrefab(additionalPrefab.FullPath);
            var isBlackout = isAdditionalPrefabBlackout(additionalPrefab);

            EditorGUILayout.BeginHorizontal();
            if (isBlackout) 
            {
                EditorGUILayout.LabelField("[Blackout]", GUILayout.Width(120));
                GUILayout.Space(-60);
            }
            EditorGUILayout.LabelField((!String.IsNullOrEmpty(additionalPrefab.Name)) ? additionalPrefab.Name : "[name]",
                                       (additionalPrefabObject == null) ? _lableStyleRed : GUI.skin.label);
            if (GUILayout.Button("Remove prefab", GUILayout.Height(18), GUILayout.Width(100))) 
            {
                tutorialStep.AdditionalPrefabs.RemoveAt(i);
                Save();
                break;
            }
            EditorGUILayout.EndHorizontal();

            EditorGUI.indentLevel = 4;

            EditorGUILayout.BeginHorizontal();
            if (!String.IsNullOrEmpty(additionalPrefab.FullPath) && additionalPrefabObject == null) 
            {
                if (GUILayout.Button("Create empty prefab", GUILayout.Width(130))) 
                {
                    TutorialPrefabsStorage.CreateAdditionalPrefabAndInstantiateToScene(additionalPrefab.FullPath);
                    Save();
                }
                if (!tutorialStepContainsBlackout(tutorialStep) && GUILayout.Button("Create blackout prefab", GUILayout.Width(145))) 
                {
                    TutorialPrefabsStorage.CreateBlackoutAdditionalPrefabAndInstantiateToScene(additionalPrefab.FullPath);
                    Save();
                }
            }

            EditorGUILayout.EndHorizontal();

            EditorGUILayout.BeginHorizontal();
			GameObject prefab = EditorGUILayout.ObjectField("Prefab object", additionalPrefabObject, typeof(GameObject), false) as GameObject;
            if (prefab != null && prefab != additionalPrefabObject) 
            {
                string fullPath = GetFullPathByPrefab(prefab);
                if (!tutorialStep.AdditionalPrefabs.Exists(p => p.FullPath == fullPath) && prefab.GetComponent<TutorialStepController>() == null) 
                {
                    additionalPrefab.FullPath = MakePrefabFullPath(fullPath);
                    Save();
                }
            }
			else if (prefab == null)
			{
				additionalPrefab.FullPath = null;
			}

            EditorGUILayout.EndHorizontal();
            
            additionalPrefab.HideWithStep = EditorGUILayout.Toggle("Hide with step", additionalPrefab.HideWithStep);
            if ((!additionalPrefab.HideWithStep && stepIndexInGroup == tutorialGroup.Steps.Count - 1) ||
                !tutorialStep.AutoLaunchNextStep) 
            {
                additionalPrefab.HideWithStep = true;
            }
            else if (additionalPrefab.HideWithStep == false) 
            {
				TutorialStep nextStep = (TutorialStep)tutorialGroup.Steps[stepIndexInGroup + 1];
                if (nextStep.AdditionalPrefabs.FindIndex(p => p.FullPath == additionalPrefab.FullPath) == -1) 
                {
					TutorialStepAdditionalPrefab newPref = new TutorialStepAdditionalPrefab(additionalPrefab.FullPath);

                    nextStep.AdditionalPrefabs.Add(newPref);
                    Save();
                }
            }
        }

        TutorialStepPrepertiesAddAdditionalPrefab(tutorialGroup, tutorialStep);
    }

    private void TutorialStepPrepertiesAddAdditionalPrefab(TutorialGroup tutorialGroup, TutorialStep tutorialStep) 
    {
        EditorGUI.indentLevel = 3;
        
        EditorGUILayout.BeginHorizontal();
        GUILayout.Space(38);
        if (GUILayout.Button("Add additional prefab")) 
        {
            AddEmptyAdditionalPrefabForStep(tutorialStep);
            Save();
        }
        EditorGUILayout.EndHorizontal();
    }

    private void AddEmptyAdditionalPrefabForStep(TutorialStep tutorialStep) 
    {        
		TutorialStepAdditionalPrefab newPref = new TutorialStepAdditionalPrefab (""); 
        tutorialStep.AdditionalPrefabs.Add(newPref);
    }

    private bool tutorialStepContainsBlackout(TutorialStep tutorialStep)
    {
        foreach (var additionalPrefab in tutorialStep.AdditionalPrefabs)
        {
            var prefabObject = TutorialPrefabsStorage.LoadAditionalPrefab(additionalPrefab.FullPath);
            if (prefabObject == null) 
            {
                continue;
            }
            if(prefabObject.GetComponent<TutorialBlackoutController>() != null)
            {
                return true;
            }
        }
        return false;
    }

    private bool isAdditionalPrefabBlackout(TutorialStepAdditionalPrefab additionalPrefab) 
    {
        var prefabObject = TutorialPrefabsStorage.LoadAditionalPrefab(additionalPrefab.FullPath);
        if (prefabObject == null) 
        {
            return false;
        }
        if (prefabObject.GetComponent<TutorialBlackoutController>() != null) 
        {
            return true;
        }
        return false;
    }

    private string GetFullPathByPrefab(GameObject prefab) 
    {
        var fullpath = AssetDatabase.GetAssetPath(prefab);
        return fullpath;
    }

    private string MakePrefabFullPath(string path) 
    {
        // Remove everything before resources
        int index = path.IndexOf("Resources");
        if ( index > 0)
        {
            int indexDot = path.LastIndexOf(".");
            if ( indexDot < 0 )
            {
                Debug.LogError("Invalid file "+path);
                return path;
            }
            int start = index + "Resources".Length + 1;
            return path.Substring(start, indexDot - start);
        }
        Debug.LogError("Not under Resources");
        return path;

    }
}

class FoldoutGroup 
{
	public bool groupVisible = true;
	private List< bool> _steps = new List<bool>();
	public const string DEFAULT_NAME_STEP_FOR_CREATE = "New Step";// TODO: remove
	public string newStepName = DEFAULT_NAME_STEP_FOR_CREATE;

	public bool IsStepVisible(int index)
	{
		bool visible = false;
		if (index < _steps.Count)
			visible = _steps [index];
		else 
		{
			SetStepVisible(index, visible);
		}
		return visible;
	}

	public void SetStepVisible(int index, bool b)
	{
		if (index >= _steps.Count)
		{
			for (int i = _steps.Count; i <= index; ++i)
			{
				_steps.Add (false);
			}
		}

		_steps[index] = b;
	}

	public void AddStep()
	{
		_steps.Add (true);
	}

	public void SwapStep(int a, int b)
	{
		bool tmp = _steps [a];
		_steps [a] = _steps [b];
		_steps [b] = tmp;
	}

}
