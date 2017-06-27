using UnityEngine;
using System.Collections;
using UnityEditor;
using GSN.Skill.Games.Common.Tutorial.Unity;

[CustomEditor(typeof(TutorialActiveAreasController))]
public class TutorialActiveAreasController_Inspector : Editor {

    private TutorialActiveAreasController _target;

    private GameObject _activeAreaEllipceDefault;
    private GameObject _activeAreaRectangleDefault;

    private bool[] _activeAreasFoldouts;
    private TutorialActiveAreaType _newActiveAreaType;

    private void Awake() {
        _target = (TutorialActiveAreasController)target;

        LoadActiveAreasDefaultPrefabs();
        if (_target.ActiveAreas != null) {
            InitActiveAreasFoldouts();
        }
    }

    public override void OnInspectorGUI() {
        DrawDefaultInspector();
        if (Application.isPlaying) {
            return;
        }

        if (!_target.enabled) {
            return;
        }

        EditorGUILayout.Space();

        var color = EditorGUILayout.ColorField("Color", _target.Color);
        if (color != _target.Color) {
            _target.SetActiveAreasColor(color);
        }

        var blackout = TutorialController.instance.GetBlackout();
        if (blackout != null) {
            if (GUILayout.Button("Set color from blackout")) {
                var blackoutSprite = blackout.GetComponent<SpriteRenderer>();
                _target.SetActiveAreasColor(blackoutSprite.color);
            }
        }

        var alphaCutoff = EditorGUILayout.Slider("Blackout alpha cutoff", _target.AlphaCutoff, 0, 1);
        if (alphaCutoff != _target.AlphaCutoff) {
            _target.SetActiveAreasCutoff(alphaCutoff);
        }

        DrawActiveAreEditor();

        if (GUI.changed) {
            EditorUtility.SetDirty(_target);
        }
    }

    private void LoadActiveAreas() {
        _target.LoadActiveAreas();
        InitActiveAreasFoldouts();
    }

    private void LoadActiveAreasDefaultPrefabs() {
        _activeAreaEllipceDefault = AssetDatabase.LoadAssetAtPath<GameObject>("Assets/Tutorial/Prefabs/ActiveAreaCircleDefault.prefab");
        _activeAreaRectangleDefault = AssetDatabase.LoadAssetAtPath<GameObject>("Assets/Tutorial/Prefabs/ActiveAreaRectangleDefault.prefab");
    }

    private void InitActiveAreasFoldouts() {
        _activeAreasFoldouts = new bool[_target.ActiveAreas.Length];
        for (int i = 0; i < _activeAreasFoldouts.Length; i++) {
            _activeAreasFoldouts[i] = true;
        }
    }

    private void DrawActiveAreEditor() {
        DrawCreatingActiveArea();
        EditorGUILayout.Space();
        DrawListActiveAreas();
    }

    private void DrawCreatingActiveArea() {
        EditorGUI.indentLevel = 0;
        EditorGUILayout.LabelField("Create active area");

        EditorGUI.indentLevel = 1;
        _newActiveAreaType = (TutorialActiveAreaType)EditorGUILayout.EnumPopup("Type", _newActiveAreaType);
        GUILayout.BeginHorizontal();
        GUILayout.Space(30);
        if (GUILayout.Button("Create")) {
            CreateActiveArea(_newActiveAreaType);
            LoadActiveAreas();
            _target.ConfigurateActiveAreas();
        }
        GUILayout.EndHorizontal();
    }

    private void DrawListActiveAreas() {
        EditorGUI.indentLevel = 0;

        if (_target.ActiveAreas == null) {
            return;
        }

        for (int i = 0; i < _target.ActiveAreas.Length; i++) {
            if (_target.ActiveAreas[i] == null) {
                LoadActiveAreas();
                return;
            }
            if (_target.ActiveAreas[i].gameObject == null) {
                continue;
            }

            _activeAreasFoldouts[i] = EditorGUILayout.InspectorTitlebar(_activeAreasFoldouts[i], _target.ActiveAreas[i].gameObject);

            if (_activeAreasFoldouts[i]) {
                continue;
            }

            EditorGUI.indentLevel = 1;

            EditorGUILayout.ObjectField("Object", _target.ActiveAreas[i].gameObject, typeof(GameObject), true);
            EditorGUILayout.LabelField("Type", _target.ActiveAreas[i].Type.ToString());
            _target.ActiveAreas[i].Tag = EditorGUILayout.TextField("Tag", _target.ActiveAreas[i].Tag);

            EditorGUILayout.LabelField("Transform", EditorStyles.boldLabel);
            EditorGUI.indentLevel = 2;
            _target.ActiveAreas[i].transform.localPosition = EditorGUILayout.Vector3Field("Position", _target.ActiveAreas[i].transform.localPosition);
            _target.ActiveAreas[i].transform.localEulerAngles = EditorGUILayout.Vector3Field("Rotation", _target.ActiveAreas[i].transform.localEulerAngles);
            _target.ActiveAreas[i].transform.localScale = EditorGUILayout.Vector3Field("Scale", _target.ActiveAreas[i].transform.localScale);
            EditorGUI.indentLevel = 1;

            GUILayout.BeginHorizontal();
            GUILayout.FlexibleSpace();
            if (GUILayout.Button("Remove")) {
                DestroyImmediate(_target.ActiveAreas[i].gameObject);
                LoadActiveAreas();
            }
            GUILayout.EndHorizontal();
        }
    }

    public void CreateActiveArea(TutorialActiveAreaType type) {
        GameObject activeAreaGameObject;
        TutorialActiveArea activeArea;
        if (type == TutorialActiveAreaType.ELLIPSE) {
            activeAreaGameObject = PrefabUtility.InstantiatePrefab(_activeAreaEllipceDefault) as GameObject;
            activeArea = activeAreaGameObject.GetComponent<TutorialActiveArea>();
            activeArea.Type = TutorialActiveAreaType.ELLIPSE;
        }
        else {
            activeAreaGameObject = PrefabUtility.InstantiatePrefab(_activeAreaRectangleDefault) as GameObject;
            activeArea = activeAreaGameObject.GetComponent<TutorialActiveArea>();
            activeArea.Type = TutorialActiveAreaType.RECTANGLE;
        }
        activeArea.name = "ActiveArea";
        activeAreaGameObject.transform.parent = _target.transform;
        var position = _target.transform.position;
        position.z = 0;
        activeAreaGameObject.transform.position = position;
    }
}
