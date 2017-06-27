using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model.Data;
using GSN.Skill.Requests;

namespace GSN.Skill.Phoenix.Model.Screens
{
	public class HomeScreenModel : IScreenModel
	{
		private GameListData _gameListData;

		public HomeScreenModel(GameListData gameListData)
		{
			_gameListData = gameListData;

			RequestManager.Instance.listGameTypes.OnBeginHandler += OnFetchHomeScreenBegin;
			RequestManager.Instance.listGameTypes.OnFailHandler += OnFetchHomeScreenFail;
			RequestManager.Instance.listGameTypes.OnCompleteHandler += OnFetchHomeScreenComplete;
		}

		public void OnPhoenixLoad()
		{
			DispatchHomeScreenEvents();
		}

		public void HandleScreenFlow()
		{
			WebRequester.Instance.FetchRequest(RequestManager.Instance.listGameTypes);
		}

		private void DispatchHomeScreenEvents()
		{
			// add all home screen events that need to be dispatched
			EventDispatcher.DispatchEvent(new GameListEvent(_gameListData.gameData)); // notify view about the game list
		}

		private void OnFetchHomeScreenBegin(IWebRequest request)
		{
			EventDispatcher.DispatchEvent(new FetchScreenBeginEvent(ScreenType.Home));
		}

		private void OnFetchHomeScreenComplete(IWebRequest request)
		{
			DispatchHomeScreenEvents();
			EventDispatcher.DispatchEvent(new FetchScreenCompleteEvent(ScreenType.Home));
		}

		private void OnFetchHomeScreenFail(IWebRequest request)
		{
			ErrorManager.Instance.HandleWebRequestError(ErrorType.RestTournament, request);
		}
	}
}
