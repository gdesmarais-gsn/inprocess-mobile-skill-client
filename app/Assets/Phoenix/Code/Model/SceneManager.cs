using System;
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model.LoadFlows;
using GSN.Skill.Phoenix.WebObject;
using GSN.Skill.Utils;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace GSN.Skill.Phoenix.Model
{
	public enum SceneLoadType
	{
		StartupLoad,
		GameLoad,
		PhoenixLoad
	}

	// TODO: Can this be private now? If so, do we even need the event to notify the View?
	public enum PhoenixScene
	{
		Load,
		Main,
		WebGame,
		NativeGame, 
	}   

	public class SceneManager : MonoBehaviour
	{
		public delegate void LoadSceneProgressUpdate(float progress);

		private const string LOAD_PHOENIX_SCENE = "LoadScene";
		private const string MAIN_PHOENIX_SCENE = "MainScene";
		private const string WEB_GAME_SCENE     = "WebGameScene";

		private PhoenixScene _currentScene;
		private Dictionary<SceneLoadType, ISceneLoad> _sceneLoads;
		private ISceneLoad _currentSceneLoad;

		public void Init(Dictionary<SceneLoadType, ISceneLoad> sceneLoads)
		{
			_sceneLoads = sceneLoads;
		}

		#region Public Functions

		public PhoenixScene currentScene
		{
			get { return _currentScene; }

			set
			{
				_currentScene = value;

				// scene is officially loaded. dispatch event
				EventDispatcher.DispatchEvent(new SceneChangeEvent(_currentScene));
			}
		}

		public void LoadScene(SceneLoadType sceneLoadType, bool force = false)
		{
			// synchronously load the LoadScene on startup
			LoadScene(PhoenixScene.Load, LoadSceneMode.Single);

			HandleSceneLoad(sceneLoadType,force);
		}

		public void FinishLoadScene()
		{
			var sceneLoad = _currentSceneLoad;
			_currentSceneLoad = null;

			if (sceneLoad != null)
			{
				sceneLoad.Finish();
			}
			else
			{
				GsnDebug.LogError("There is no loaded scene to finish.");
			}
		}

		public void LoadSceneAsyncAdditive(PhoenixScene scene, Action<float> progressCallback, Action completeCallback)
		{
			string sceneName = GetSceneName(scene);
			StartCoroutine(InternalLoadSceneAsync(sceneName, LoadSceneMode.Additive, progressCallback, completeCallback));
		}

		public void LoadSceneAsyncAdditive(string sceneName, Action<float> progressCallback, Action completeCallback)
		{
			StartCoroutine(InternalLoadSceneAsync(sceneName, LoadSceneMode.Additive, progressCallback, completeCallback));
		}

		#endregion

		/// <summary>
		/// Handles Scene Loading. This considers all SceneLoadTypes such as:
		/// - Loading at Startup
		/// - Loading into Game
		/// - Loading into Phoenix (presumably from Game)
		/// </summary>
		private void HandleSceneLoad(SceneLoadType sceneLoadType, bool force = false)
		{
			if (!_sceneLoads.ContainsKey(sceneLoadType))
			{
				GsnDebug.LogError("SceneLoadType " + sceneLoadType + " hasn't been set.");
				return;
			}

			if (_currentSceneLoad != null)
			{
				if (force)
				{
					GsnDebug.LogWarning("A previous scene hasn't finished loading yet");
				}
				else 
				{	
					GsnDebug.LogError("A previous scene hasn't finished loading yet");
					return;
				}
			}

			_currentSceneLoad = _sceneLoads[sceneLoadType];
			_currentSceneLoad.Start();
		}

		private void LoadScene(PhoenixScene scene, LoadSceneMode loadSceneMode)
		{
			string sceneName = GetSceneName(scene);
			UnityEngine.SceneManagement.SceneManager.LoadScene(sceneName, loadSceneMode);
		}

		private IEnumerator InternalLoadSceneAsync(string sceneName, LoadSceneMode loadSceneMode, Action<float> progressCallback, Action completeCallback)
		{
			AsyncOperation asyncOperation = UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(sceneName, loadSceneMode);
			while (!asyncOperation.isDone)
			{
				progressCallback(asyncOperation.progress);
				yield return null;
			}

			completeCallback();
		}

		private string GetSceneName(PhoenixScene scene)
		{
			string returnValue = string.Empty;

			switch (scene)
			{
				case PhoenixScene.Load:
					returnValue = LOAD_PHOENIX_SCENE;
					break;
				case PhoenixScene.Main:
					returnValue = MAIN_PHOENIX_SCENE;
					break;
				case PhoenixScene.WebGame:
					returnValue = WEB_GAME_SCENE;
					break;
			}

			return returnValue;
		}
	}
}
