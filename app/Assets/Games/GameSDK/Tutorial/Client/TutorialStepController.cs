using UnityEngine;
using UnityEngine.Events;

namespace GSN.Skill.Games.Common.Tutorial.Unity
{

	[ExecuteInEditMode]
	[DisallowMultipleComponent]
	public class TutorialStepController : MonoBehaviour
	{
		// TODO remove camera dependecy
		public Camera Camera { get; private set; }

		[SerializeField]
		public UnityEvent onShowEvent;
		[SerializeField]
		public UnityEvent onWillHideEvent;
		[SerializeField]
		public UnityEvent onHideEvent;


		void Start()
		{
			OnShow();
		}

		private void OnEnable()
		{
			if (transform == null)
			{
				return;
			}

			InitCamera();
		}

		private void InitCamera()
		{
			Camera = GetComponent<Camera>();

			if (Camera == null)
			{
				return; // we dont need a camera
			}

			var mainCamera = Camera.main;
			if (mainCamera == null)
			{
				return;
			}

			Camera.clearFlags = CameraClearFlags.Depth;
			Camera.orthographic = mainCamera.orthographic;
			Camera.orthographicSize = mainCamera.orthographicSize;
			Camera.nearClipPlane = mainCamera.nearClipPlane;
			Camera.farClipPlane = mainCamera.farClipPlane;
			Camera.fieldOfView = mainCamera.fieldOfView;
			Camera.depth = mainCamera.depth + 1;
		}

		public virtual void OnWillHide()
		{
			if (onWillHideEvent != null)
			{
				onWillHideEvent.Invoke();
			}
		}

		public virtual void OnShow()
		{
			if (onShowEvent != null)
			{
				onShowEvent.Invoke();
			}
		}

		public virtual void OnHide(TutorialStepPrefabBase prefabBase)
		{
			if (onHideEvent != null)
			{
				onHideEvent.Invoke();
			}
			prefabBase.DismissAndHide();
		}

	}

}
