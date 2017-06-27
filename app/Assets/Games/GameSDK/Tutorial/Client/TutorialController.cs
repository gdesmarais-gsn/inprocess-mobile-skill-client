using UnityEngine;

namespace GSN.Skill.Games.Common.Tutorial.Unity
{
    [ExecuteInEditMode]
    public class TutorialController : MonoBehaviour {

        private static TutorialController _instance;
        private TutorialStepController _stepController;
        private Camera _stepCamera;
        private TutorialBlackoutController _blackout;

        public static TutorialController instance {
            get {
                if (_instance == null) {
                    _instance = TutorialPrefabUtills.RootController;
                }
                return _instance;
            }
        }

        public Camera GetStepCamera() {
            if (_stepController == null) {
                _stepController = GetComponentInChildren<TutorialStepController>();
            }

            if (_stepController == null) {
                return null;
            }

            if (_stepCamera == null) {
                _stepCamera = _stepController.GetComponent<Camera>();
            }

            return _stepCamera;
        }

        public TutorialBlackoutController GetBlackout() {
            if (_blackout == null) {
                _blackout = GetComponentInChildren<TutorialBlackoutController>();
            }
            
            return _blackout;
        }
    }
}
