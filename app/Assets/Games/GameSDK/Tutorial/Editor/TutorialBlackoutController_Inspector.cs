using UnityEngine;
using UnityEditor;
using GSN.Skill.Games.Common.Tutorial.Unity;

[CustomEditor(typeof(TutorialBlackoutController))]
public class TutorialBlackoutController_Inspector : Editor {

    private TutorialBlackoutController _target;

    private void Awake() {
        _target = (TutorialBlackoutController)target;
    }

    public override void OnInspectorGUI() {
        DrawDefaultInspector();
        if (Application.isPlaying) {
            return;
        }

        if (!_target.enabled) {
            return;
        }

        var texture = (Sprite)EditorGUILayout.ObjectField("Blackout texture", _target.blackoutTexture, typeof(Sprite), false);
        if (texture != _target.blackoutTexture) {
            _target.blackoutTexture = texture;
            _target.Init();
        }

        var color = EditorGUILayout.ColorField("Blackout color", _target.blackoutColor);
        if (color != _target.blackoutColor) {
            _target.blackoutColor = color;
            _target.ConfigurateBlackout();
        }

        if (GUI.changed) {
            EditorUtility.SetDirty(_target);
        }
    }
}
