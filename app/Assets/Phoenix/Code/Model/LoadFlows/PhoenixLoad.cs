using System;

using GSN.Skill.Events;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.Model.LoadFlows
{
	public class PhoenixLoad : ISceneLoad
	{
		private const int TOTAL_GATES = 1;

		private SceneManager _sceneManager;

		private int _currentGatesCompleted = 0;

		public PhoenixLoad(SceneManager sceneManager)
		{
			_sceneManager = sceneManager;
		}

		public void Start()
		{
			_currentGatesCompleted = 0;
			EventDispatcher.DispatchEvent(new SceneLoadBeginEvent(SceneLoadType.PhoenixLoad));

			GsnDebug.Log("PhoenixLoad.Start");
			_sceneManager.LoadSceneAsyncAdditive(PhoenixScene.Main, OnSceneProgress, OnSceneLoaded);
		}

		public void Finish()
		{
			GsnDebug.Log("PhoenixLoad.Finish");
			_sceneManager.currentScene = PhoenixScene.Main;

			EventDispatcher.DispatchEvent(new SceneLoadCompleteEvent(SceneLoadType.PhoenixLoad));
		}

		private void OnSceneProgress(float progress)
		{
			EventDispatcher.DispatchEvent(new UnitySceneProgressEvent((_currentGatesCompleted + progress) / TOTAL_GATES));
		}

		private void OnSceneLoaded()
		{
			EventDispatcher.DispatchEvent(new UnitySceneProgressEvent((float)++_currentGatesCompleted / TOTAL_GATES));

			EventDispatcher.DispatchEvent(new UnitySceneLoadCompleteEvent());
		}
	}
}
