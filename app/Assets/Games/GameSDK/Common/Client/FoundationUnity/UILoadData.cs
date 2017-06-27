using System.Collections.Generic;
using GSN.Skill.Games.Common.Client;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace GSN.Skill.Games.Common.Utils
{
	public interface ILoadingData
	{
		float PercentDone { get; }
		string Dump();
	}

	public class GroupLoadingData : ILoadingData
	{
		private float toLoad;
		private float loaded;
		private string name;
		public GroupLoadingData(float toLoad, string name)
		{
			this.toLoad = toLoad;
			loaded = 0;
			this.name = name;
		}
		public void ItemLoaded()
		{
			loaded++;
		}
		public float PercentDone
		{
			get
			{
				return (toLoad > 0)?(loaded / toLoad) : 0;
			}
		}

		public string Dump()
		{
			return name + ": " + loaded + " of " + toLoad + ". percDone: " + loaded/toLoad;
		}
	}

	public class PercentLoading : ILoadingData
	{
		private string name;
		public PercentLoading(string name)
		{
			this.name = name;
		}

		float _percentDone;
		public float PercentDone
		{
			get
			{
				return _percentDone;
			}
			set
			{
				_percentDone = value;
			}
		}

		public string Dump()
		{
			return name + ": " + _percentDone;
		}
	}

	public class UILoadData : Singleton<UILoadData> 
	{
		public List<ILoadingData> loadingData = new List<ILoadingData>();

		public string NextSceneName;
			
		public delegate void LoadCompleteHandler();
		public event LoadCompleteHandler OnLoadingComplete;
		private bool oldLogic = false;

		public void ResetLoadProgress()
		{
			loadingData = new List<ILoadingData>();
			OnLoadingComplete = null;
		}

		public float PercentDone
		{
			get
			{
				float percDone = 0;
				foreach (ILoadingData ld in loadingData)
					percDone += ld.PercentDone;

				if (oldLogic)
				{
					percDone /= 3;
					if (percDone >= 99)
						percDone = 100;
				}

				return percDone;
			}
		}

		public string Dump()
		{
			string str = "";
			foreach (ILoadingData ld in loadingData)
			{
				if (str.Length > 0)
					str += "; ";
				str += ld.Dump();
			}
			return str;

		}
		
		public void LoadComplete()
		{	
			if (OnLoadingComplete != null)
				OnLoadingComplete();
		}			
		
		public void LoadNextScene(string NextSceneName, string loadScene = "Load")
		{
		   	this.NextSceneName = NextSceneName;
			ResetLoadProgress();
			SceneManager.LoadScene(loadScene);//Application.LoadLevel(loadScene);
		}

		protected override bool destroyOnGameComplete()
		{
			return false;
		}



		// Backwards compatible stuff below
		private PercentLoading _prefabLoadProgress;
		private PercentLoading _sceneProgress;
		private PercentLoading _preloaderProgress;

		[System.Obsolete("Do not use any more.")]
		public float PrefabLoadProgress
		{
			set
			{
				oldLogic = true;
				if (_prefabLoadProgress == null)
				{
					_prefabLoadProgress = new PercentLoading ("PrefabLoadProgress");
					loadingData.Add (_prefabLoadProgress);
				}

				_prefabLoadProgress.PercentDone = value;
			}

		}

		[System.Obsolete("Do not use any more")]
		public float PreloaderProgress
		{
			set
			{
				oldLogic = true;
				if (_preloaderProgress == null)
				{
					_preloaderProgress = new PercentLoading ("PreloaderProgress");
					loadingData.Add (_preloaderProgress);
				}

				_preloaderProgress.PercentDone = value;
			}
		}

		[System.Obsolete("Do not use any more.")]
		public float SceneProgress
		{
			set
			{
				oldLogic = true;
				if (_sceneProgress == null)
				{
					_sceneProgress = new PercentLoading ("SceneProgress");
					loadingData.Add (_sceneProgress);
				}
				_sceneProgress.PercentDone = value;
			}
		}
	}
}
