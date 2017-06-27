using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Phoenix.Model.Screens;
using GSN.Skill.Requests;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.Model
{
	public enum ScreenType
	{
		None,
		Welcome,
		Home,
		TournamentSelect,
		GameHistory
	}

	public class ScreenManager
	{
		// TODO: Consider dictionary lookup
		// For game history, this is one of the screens that does double duty.  We want to be able to :
		// 1. Handle fetching data when we change screens (and the event returns a non-complete list of history back_
		// 2. Ask for additional history items that were fetched but not returned.
		// 3. Re-fetch data from the back end while on the game history screen.
		// This is why this guy is public.  We want the main model to be able to access this as well.
		public GameHistoryScreenModel gameHistoryScreen {get; private set;}
		public TournamentSelectScreenModel tournamentSelectScreen {get; private set;}
		private HomeScreenModel _homeScreen;
		private IScreenModel _currentScreen;
		private ScreenType _currentScreenType = ScreenType.None;

		public ScreenManager(GameListData gameListData)
		{
			_homeScreen = new HomeScreenModel(gameListData);
			tournamentSelectScreen = new TournamentSelectScreenModel(gameListData);
			gameHistoryScreen = new GameHistoryScreenModel(gameListData);
		}

		#region Public Functions

		public void HandleMainScreenPhoenixLoad()
		{
			// notify all "main screens" that the home scene is shown
			// TODO: Consider a Dictionary<ScreenType, IScreenModel>
			_homeScreen.OnPhoenixLoad();
			tournamentSelectScreen.OnPhoenixLoad();
			gameHistoryScreen.OnPhoenixLoad();
		}

		public ScreenType CurrentScreen
		{
			get
			{
				return _currentScreenType;
			}

			set
			{
				if (_currentScreenType == value)
					return; // we're already on this screen. ignore

				_currentScreenType = value;

				GsnDebug.Log("Model Screen: " + _currentScreenType.ToString());

				EventDispatcher.DispatchEvent(new ScreenChangeEvent(_currentScreenType));

				HandleSetScreen(_currentScreenType);
			}
		}

		public void Reset()
		{
			_currentScreenType = ScreenType.None;
		}

		#endregion

		private void HandleSetScreen(ScreenType type)
		{
			// TODO: Consider a Dictionary<ScreenType, IScreenModel>
			switch (type)
			{
				case ScreenType.Home:
					_currentScreen = _homeScreen;
					break;
				case ScreenType.TournamentSelect:
					_currentScreen = tournamentSelectScreen;
					break;
				case ScreenType.Welcome:
					// welcome screen doesn't need this for now
					break;
				case ScreenType.GameHistory:
					_currentScreen = gameHistoryScreen;
					break;
			}

			if (_currentScreen != null)
				_currentScreen.HandleScreenFlow();
		}
	}
}
