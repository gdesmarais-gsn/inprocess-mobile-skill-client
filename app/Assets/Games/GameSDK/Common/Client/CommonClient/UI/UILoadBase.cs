using UnityEngine;
using System.Collections;
using System;
using GSN.Skill.Games.Common.Utils;
using UnityEngine.SceneManagement;

namespace GSN.Skill.Games.Common.Client.Game
{
	public class SceneLoadingData : ILoadingData
	{
		AsyncOperation async;
		public SceneLoadingData(AsyncOperation async)
		{
			this.async = async;
		}
		public float PercentDone
		{
			get
			{
				return async.progress;
			}
		}

		public string Dump()
		{
			return "Scene Loading " + PercentDone*100 + " / 100";

		}

	}

	public abstract class UILoadBase : MonoBehaviour 
	{
		private bool loadCompleted = false;

		void Start() 
		{			
			StartCoroutine(LoadNextScene());
			loadCompleted = false;
		}

		protected abstract int stageCount { get;}

		protected abstract void UpdateUI(float percDone);

		// Fills the bar, once complete, removes self and calls OnLoadingComplete
		void Update () 
		{
			if (!loadCompleted)
			{
				float percDone = UILoadData.instance.PercentDone;

				UpdateUI(percDone/stageCount);

				//if ( percDone >= stageCount)
				{
		 			loadCompleted = true;
		 			StartCoroutine(LoadComplete());
	            }
	        }
		}			

		IEnumerator LoadComplete()
		{
			yield return new WaitForSeconds(0.2f);

			UILoadData.instance.LoadComplete();

			GameObject.Destroy(this.gameObject);
		}

		/// Loads the main scene when the join record is ready
		IEnumerator LoadNextScene()
		{
			AsyncOperation async = SceneManager.LoadSceneAsync(UILoadData.instance.NextSceneName);//Application.LoadLevelAdditiveAsync(UILoadData.instance.NextSceneName);
			SceneLoadingData sceneLoadingData = new SceneLoadingData(async);
			UILoadData.instance.loadingData.Add(sceneLoadingData);
			while(!async.isDone) 
			{
         		yield return async.isDone;
			}
			Resources.UnloadUnusedAssets();
			GC.Collect();
		} 
	}
}
