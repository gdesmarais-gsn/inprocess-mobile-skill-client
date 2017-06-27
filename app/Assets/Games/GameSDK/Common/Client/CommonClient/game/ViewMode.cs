using System.Collections.Generic;
using System.Collections;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Client.Game
{
	public interface IViewMode
	{
		string AbortTitle { get;}
		string AbortMessage { get;}

		void Configure(Dictionary<string, string> joinRecord);
		GameSessionExitMode exitMode { get;}
		void OnAbort();
		void ShowGameHud(UIHudBase hud);
		void Init(Dictionary<string, string> joinRecord);
		int GetPreloadCount();
		IEnumerator Preload(Dictionary<string, string> joinRecord);
		void OnLoadingComplete();
	}

	public class StandardViewMode : IViewMode
	{
		UIStartScreenBase _startScreen;
	
		private const string ABORT_TITLE = "ABORT_TITLE";
		private const string ABORT_MSG = "ABORT_MSG";
		
		public StandardViewMode(UIStartScreenBase startScreen)
		{
			_startScreen = startScreen;
		}
		
		public virtual string AbortTitle { get { return ABORT_TITLE;}}
		public virtual string AbortMessage { get { return ABORT_MSG;}}	

		public virtual void Configure(Dictionary<string, string> joinRecord) {}
		public virtual GameSessionExitMode exitMode { get{ return GameSessionExitMode.GameCompleteNormal; }}
		public virtual void OnAbort()
		{
			ViewBase.instance.SendEndGameMessage();
		}
		public virtual void ShowGameHud(UIHudBase hud) {}
		public virtual void Init(Dictionary<string, string> joinRecord) 
		{
			_startScreen.gameObject.SetActive(true);
		}
		public virtual int GetPreloadCount() 
		{ 
			return _startScreen.GetPreloadCount();
		}
		public virtual IEnumerator Preload(Dictionary<string, string> joinRecord) 
		{ 
			yield return ViewBase.instance.StartCoroutine(_startScreen.Preload(joinRecord));
		}
		public virtual bool IsTutorial() { return false; }
		public virtual void OnLoadingComplete()
		{
			ViewBase.instance.OnLoadingComplete();
		}
	}

	public class ReplayViewMode : IViewMode
	{
		private const string ABORT_TITLE = "ABORT_TITLE_REPLAY";
		private const string ABORT_MSG = "ABORT_MSG_REPLAY";

		public virtual string AbortTitle { get { return ABORT_TITLE;}}
		public virtual string AbortMessage { get { return ABORT_MSG;}}	
		public virtual void Configure(Dictionary<string, string> joinRecord) {}
		public virtual GameSessionExitMode exitMode { get{ return GameSessionExitMode.GameCompleteNormal; }}
		public virtual void OnAbort()
		{
			ViewBase.instance.GameClientComplete();
		}
		public virtual void ShowGameHud(UIHudBase hud) 
		{
			hud.ShowReplayHud();
		}
		public virtual void Init(Dictionary<string, string> joinRecord) {} 
		public virtual int GetPreloadCount() 
		{ 
			return 0;
		}
		public virtual IEnumerator Preload(Dictionary<string, string> joinRecord) 
		{ 
			yield return null;
		}

		public virtual bool IsTutorial() { return false;}

		public virtual void OnLoadingComplete()
		{
			NewViewBase.instance.StartGame();
		}
	}

	public class TutorialViewMode : IViewMode
	{
		private const string ABORT_TITLE = "ABORT_TITLE_TUTORIAL";
		private const string ABORT_MSG = "ABORT_MSG_TUTORIAL";
		public virtual string AbortTitle { get { return ABORT_TITLE;}}
		public virtual string AbortMessage { get { return ABORT_MSG;}}	
		public virtual void Configure(Dictionary<string, string> joinRecord) {}

		public virtual GameSessionExitMode exitMode { get { return GameSessionExitMode.Tutorial;}}
		public virtual void ShowGameHud(UIHudBase hud) {}
		public virtual void Init(Dictionary<string, string> joinRecord) {}
		public virtual int GetPreloadCount() 
		{ 
			return 0;
		}
		public virtual IEnumerator Preload(Dictionary<string, string> joinRecord) 
		{ 
			yield return null;
		}
		public virtual void OnLoadingComplete()
		{
			NewViewBase.instance.StartGame();
		}
		public virtual void OnAbort()
		{
			NewViewBase.instance.SendEndGameMessage();
		}
	}
}