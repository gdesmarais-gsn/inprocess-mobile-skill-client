using System.Collections;
using UnityEngine;
using TMPro;
using GSN.Skill.Events;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Phoenix.View.Pool;
using UnityEngine.UI;

namespace GSN.Skill.Phoenix.View
{
    public class LoadScreenView : ScreenView
    {
        [SerializeField]
        private Transform _progressBar;

        [SerializeField]
        private Transform _progressBarReflection;

        [SerializeField]
        private TextMeshProUGUI _progressPercentText;

        [SerializeField]
        private float _barStartOffSet = 520f;
        private Vector3 _scratchVector = Vector3.zero;

        [SerializeField]
        private Transform _errorPopupAnchor;

        [SerializeField]
        private GameObject _globalaActivityIndicator;

        [SerializeField]
        private GameObject _landscapeBackground;

        [SerializeField]
        private CanvasScaler _canvasScaler;

        private const string POPUP_ERROR = "POPUP_Error";
        private const string POPUP_TOURNAMENT_SIGNUP_PASSWORD = "POPUP_Password";
        private const string POPUP_GPS_DENIED = "POPUP_GeoNoPermissions";
        private const string POPUP_GPS_PERMISSIONS = "POPUP_GeoPrePermissions";
        private const string POPUP_WEBVIEW = "POPUP_WebView";

        private const float FULL_LOADING_BAR_DURATION_IN_SECONDS = 2.5f;

#if DEBUG
        private bool _transparentToggle = true;
#endif

        private float _currentProgress = 0;

        public LoadScreenView()
        {
            // Example for setting custom screen animation times
            //AnimateScreenInTime = 1.0f;
            AnimateScreenOutTime = 1.0f;
        }

        void Awake()
        {

#if UNITY_WEBGL
            _landscapeBackground.SetActive(true);
#endif
            UpdateProgressBar(0.0f);
			_progressPercentText.text = "0%";
		}

		protected override void OnEnable()
		{
			EventDispatcher.AddListener<UnitySceneLoadCompleteEvent>(OnStartupLoadComplete);
			EventDispatcher.AddListener<UnitySceneProgressEvent>(OnUpdateProgressBar);
			EventDispatcher.AddListener<PopupEvent>(OnPopupEvent);
			EventDispatcher.AddListener<FetchGlobalBeginEvent>(ShowGlobalActivityIndicator);
			EventDispatcher.AddListener<FetchGlobalCompleteEvent>(HideGlobalActivityIndicator);

		}

		protected override void OnDisable()
		{
			EventDispatcher.RemoveListener<UnitySceneLoadCompleteEvent>(OnStartupLoadComplete);
			EventDispatcher.RemoveListener<UnitySceneProgressEvent>(OnUpdateProgressBar);
			EventDispatcher.RemoveListener<PopupEvent>(OnPopupEvent);
			EventDispatcher.RemoveListener<FetchGlobalBeginEvent>(ShowGlobalActivityIndicator);
			EventDispatcher.RemoveListener<FetchGlobalCompleteEvent>(HideGlobalActivityIndicator);
		 
		}
 
		void OnStartupLoadComplete(IEvent e)
		{
			OnHide();
		}

		protected override IEnumerator AnimateScreenOut()
		{
			while ((int)_currentProgress != 1)
			{
				// make sure the loading bar has been fully loaded before continuing
				yield return null;
			}

			// Add screen specific build out animations here
			
			
			yield return base.AnimateScreenOut();

            //TODO: handle load complete for a null controller. Maybe need a webgl controller
            if (controller != null)
			    controller.LoadComplete();
            
            EventDispatcher.DispatchEvent(new LoadSceneHiddenEvent()); //Games can listen for this event to start music, etc. Indicates load screen is out of the way and the game can fully take over.
		}

		protected override IEnumerator AnimateScreenIn()
		{
			// Add screen specific build in animations here
			yield return base.AnimateScreenIn();
		}

		void OnUpdateProgressBar(IEvent e)
		{
			float currentPercent = ((UnitySceneProgressEvent)e).progress;

			UpdateProgressBar(currentPercent);
		}

		void UpdateProgressBar(float progress)
		{
			// cancel previous loading bar animation
			LeanTween.cancel(this.gameObject);

			// Animate loading bar relative to how much progress has been made
			// i.e. a full animation from 0 to 100 should take FULL_LOADING_BAR_DURATION_IN_SECONDS seconds.
			// i.e. an animation from 35 to 50 should animate at a rate of FULL_LOADING_BAR_DURATION_IN_SECONDS * .5 seconds.
			LeanTween.value(this.gameObject, AnimateBar, _currentProgress, progress, FULL_LOADING_BAR_DURATION_IN_SECONDS * progress);
		}

		void AnimateBar(float progress)
		{
			_currentProgress = progress;

			_progressPercentText.text = (int)(_currentProgress * 100) + "%";

			float barPos = _barStartOffSet * _currentProgress;
			_scratchVector = _progressBar.transform.localPosition;
			_scratchVector.x = barPos;
			_progressBar.transform.localPosition = _scratchVector;
            _progressBarReflection.transform.localPosition = _scratchVector;
		}

		void OnPopupEvent(IEvent e)
		{
			PopupEvent evt = (PopupEvent)e;

			string popupResource = string.Empty;
			PopupType popupType = evt.type;
			switch (popupType)
			{
				case PopupType.ErrorWebRequest:
					popupResource = POPUP_ERROR;
					break;
				case PopupType.ErrorVerifyPassword:
					popupResource = POPUP_TOURNAMENT_SIGNUP_PASSWORD;
					break;
				case PopupType.ErrorGpsPermission:
					popupResource = POPUP_GPS_PERMISSIONS;
					break;
				case PopupType.ErrorGpsDenied:
					popupResource = POPUP_GPS_DENIED;
					break;
				case PopupType.WebView:
					popupResource = POPUP_WEBVIEW;
					break;
				default:
					return;
			}

			PopupView popupView = CreatePopup(evt.popupUID, popupResource, _errorPopupAnchor);
			if (popupView is WebViewPopupView)
			{
				// TODO: make popupview accept custom Init for a given popup
				((WebViewPopupView)popupView).Init(_canvasScaler);
			}
		}

		PopupView CreatePopup(long uid, string popupResource, Transform popupAnchor)
		{
			if (!string.IsNullOrEmpty(popupResource))
			{
				PopupView popup = GameObjectPoolManager.Instance.GetObject<PopupView>(popupResource);
				popup.Init(uid);
				popup.transform.SetParent(popupAnchor, false);
				return popup;
			}
			else
			{
				GsnDebug.LogError("Popup resource name is null or empty");
				return null;
			}
		}

		void ShowGlobalActivityIndicator(IEvent e)
		{
			_globalaActivityIndicator.SetActive(true);
		}

		void HideGlobalActivityIndicator(IEvent e)
		{
			if (((FetchGlobalCompleteEvent)e).numberOfActiveRequests == 0)
				_globalaActivityIndicator.SetActive(false);
		}
	}
}