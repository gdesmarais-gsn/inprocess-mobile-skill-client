using UnityEngine;

namespace GSN.Skill.Games.Common.Tutorial.Unity {

    [ExecuteInEditMode]
    public class TutorialActiveAreasController : MonoBehaviour {

        [HideInInspector]
        public Color Color = new Color(0, 0, 0, 0.9f);
        [HideInInspector]
        public float AlphaCutoff = 0.9f;

        private TutorialActiveArea[] _activeAreas;

        public TutorialActiveArea[] ActiveAreas {
            get {
                return _activeAreas;
            }
            set {
                _activeAreas = value;
            }
        }

        private void OnEnable() {
            if (transform == null) {
                return;
            }

            LoadActiveAreas();
            EnableActiveAreas();
            ConfigurateActiveAreas();

            if (!Application.isPlaying) {
                ConfigurateActiveAreas();
            }
        }

        private void OnDisable() {
            DisableActiveAreas();
        }

        public void EnableActiveAreas() {
            foreach (var activeArea in _activeAreas) {
                activeArea.gameObject.SetActive(true);
            }
        }

        public void DisableActiveAreas() {
            foreach (var activeArea in _activeAreas) {
                activeArea.gameObject.SetActive(false);
            }
        }

        public void ConfigurateActiveAreas() {
            SetActiveAreasColor(Color);
            SetActiveAreasCutoff(AlphaCutoff);
        }

        public void LoadActiveAreas() {
            _activeAreas = GetComponentsInChildren<TutorialActiveArea>(true);
        }

        public void SetActiveAreasColor(Color color) {
            if (_activeAreas == null) {
                LoadActiveAreas();
            }

            this.Color = color;

            foreach (var activeArea in _activeAreas) {
                var activeAreaSprite = activeArea.GetComponent<SpriteRenderer>();
                activeAreaSprite.sharedMaterial.SetColor("_MaxColor", color);
            }
        }

        public void SetActiveAreasCutoff(float cutoffValue) {
            AlphaCutoff = cutoffValue;
            foreach (var activeArea in _activeAreas) {
                var activeAreaSprite = activeArea.GetComponent<SpriteRenderer>();
                activeAreaSprite.sharedMaterial.SetFloat("_Cutoff", AlphaCutoff);
            }
        }
    }

}
