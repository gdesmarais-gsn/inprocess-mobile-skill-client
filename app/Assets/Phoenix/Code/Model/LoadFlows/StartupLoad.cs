using System;
using GSN.Skill.Events;
using GSN.Skill.Requests;
using GSN.Skill.Requests.Config;
using GSN.Skill.Utils;
using UnityEngine;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.Model.LoadFlows
{
	public class StartupLoad : ISceneLoad
	{
		private const int TOTAL_GATES = 4;

		[Flags]
		private enum StartupGates
		{
			None = 0,
			APIDiscovery = 1 << 0, // 1
			VersionCheck = 1 << 1, // 2
			LoadMainScene = 1 << 2, // 4
			AutoLoginAttempt = 1 << 3, // 8
			InitializePools = 1 << 4, // 16
			InitialLoad = APIDiscovery | VersionCheck | LoadMainScene | InitializePools,
			All = InitialLoad | AutoLoginAttempt
		}

		private StartupGates _gateFlags = StartupGates.None;

		private SceneManager _sceneManager;
		private LoginFlowManager _loginFlowManager;

		private bool _showWelcomeScreen = true;

		private int _currentGatesCompleted = 0;

		public StartupLoad(SceneManager sceneManager, LoginFlowManager loginFlowManager)
		{
			_sceneManager = sceneManager;
			_loginFlowManager = loginFlowManager;
		}

		public void Start()
		{
			GsnDebug.Log("Startup Load Start. Fetch API and load MainScene");
			EventDispatcher.DispatchEvent(new SceneLoadBeginEvent(SceneLoadType.StartupLoad));

			_currentGatesCompleted = 0;

			WebRequests requests = new WebRequests();
			requests.Enqueue(APIReference.Instance.apiInfo);
			requests.Enqueue(RequestManager.Instance.configData);
			requests.OnRequestsCompleteHandler += OnRequestsComplete;
			requests.OnRequestsFailHandler += OnRequestsFail;

			// GATE 1: Start setup and call API Discovery & config data
			WebRequester.Instance.SequentialFetchRequests(requests);
			EventDispatcher.AddListener<VersionCheckEvent>(OnVersionCheckComplete);

		}

		private void OnVersionCheckComplete(IEvent evt)
		{
			EventDispatcher.RemoveListener<VersionCheckEvent>(OnVersionCheckComplete);
			VersionCheckEvent versionCheckEvent = (VersionCheckEvent)evt;
			// If we don't need an update, clear the gate. If we do need an update, don't ever clear this gate.
			// We handle showing a popup on the main model.
			if(!versionCheckEvent.updateRequired)
			{
				// GATE 2 Version Check Complete
				SetFlag(ref _gateFlags, StartupGates.VersionCheck);
				// GATE 3 Scene Load Start
				_sceneManager.LoadSceneAsyncAdditive(PhoenixScene.Main, OnMainSceneProgress, OnMainSceneLoaded);
			}
		}

		/// <summary>
		/// The load scene has finished animating out. handle what to do next
		/// </summary>
		public void Finish()
		{
			// loading into app from startup

			// set current scene to be the main
			_sceneManager.currentScene = PhoenixScene.Main;

			if (_showWelcomeScreen)
			{
				_loginFlowManager.ShowWelcomeScreen();
			}
			else
			{
				// we're done with scene loading early since we auto logged in
				EventDispatcher.DispatchEvent(new SceneLoadCompleteEvent(SceneLoadType.StartupLoad));
			}
		}

		// TODO: Figure out how to track a global progress
		private void OnMainSceneProgress(float progress)
		{
			EventDispatcher.DispatchEvent(new UnitySceneProgressEvent((_currentGatesCompleted + progress) / TOTAL_GATES));
		}

		// GATE 1 Complete
		private void OnRequestsComplete(WebRequests request)
		{
			SetFlag(ref _gateFlags, StartupGates.APIDiscovery);
			OnStepComplete();
		}

		private void OnRequestsFail(WebRequests requests)
		{
			ErrorManager.Instance.HandleWebRequestsError(requests, true);
		}

		// GATE 3 Complete
		private void OnMainSceneLoaded()
		{
			SetFlag(ref _gateFlags, StartupGates.LoadMainScene);

			// now that the mainscene is loaded, setup the pools
			EventDispatcher.DispatchEvent(new InitializePoolsEvent(OnInitializePoolsComplete));

			OnStepComplete();
		}

		void OnInitializePoolsComplete()
		{
			SetFlag(ref _gateFlags, StartupGates.InitializePools);

			OnStepComplete();
		}

		private void OnAutoLoginComplete(IWebRequest request)
		{
			EventDispatcher.DispatchEvent(new AutoLoginSuccessEvent());

			// auto login successful!
			SetFlag(ref _gateFlags, StartupGates.AutoLoginAttempt);

			_showWelcomeScreen = false;
			OnStepComplete();
		}

		private void ShowWelcomeScreen(IWebRequest request)
		{
			EventDispatcher.DispatchEvent(new ShowWelcomeScreenEvent());

			// handle normal login
			SetFlag(ref _gateFlags, StartupGates.AutoLoginAttempt);

			_showWelcomeScreen = true;
			OnStepComplete();
		}

		private void OnStepComplete()
		{
			// update current progress
			EventDispatcher.DispatchEvent(new UnitySceneProgressEvent((float)++_currentGatesCompleted / TOTAL_GATES));

			if (HasFlag(_gateFlags, StartupGates.All))
			{
				// everything is done. notify the view
				EventDispatcher.DispatchEvent(new UnitySceneLoadCompleteEvent());
			}
			else if (HasFlag(_gateFlags, StartupGates.InitialLoad))
			{
				// since the initial load is complete, attempt to auto login while we're still on the loading scene

				if (_loginFlowManager.autoLoginEnabled)
				{
					// attempt to auto login
					_loginFlowManager.AutoLogin(OnAutoLoginComplete, ShowWelcomeScreen);
				}
				else
				{
					// go straight to normal login
					ShowWelcomeScreen(null);
				}
			}
		}

		// TODO: Try to do enum extension class IF POSSIBLE
		#region Bit Flag Management

		private static bool HasFlag(StartupGates a, StartupGates b)
		{
			return (a & b) == b;
		}

		private static void SetFlag(ref StartupGates a, StartupGates b)
		{
			// a = a | b
			a |= b;
		}

		private static void UnsetFlag(ref StartupGates a, StartupGates b)
		{
			// a = a & (~b)
			a &= (~b);
		}

		#endregion
	}
}
