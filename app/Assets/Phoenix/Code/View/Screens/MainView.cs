using UnityEngine;
using GSN.Skill.Events;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Phoenix.View.Pool;
using UnityEngine.UI;
namespace GSN.Skill.Phoenix.View
{
	public class MainView : BaseView {

		[SerializeField]
		private MainScrollSnap _mainScrollView;
		[SerializeField]
		private Transform _popupAnchor;
		[SerializeField]
		private TournamentScreenView _tournamentScreen;
		[SerializeField]
		private GameObject _hud;
		[SerializeField]
		private NavbarView _navBar;
        [SerializeField]
        private HomeScreenView _homeScreen;
        [SerializeField]
		private GameObject _welcomeScreen;

		private const string POPUP_LOGIN = "POPUP_Login";
        private const string POPUP_PASSWORD_RESET = "POPUP_ForgotPassword";
		private const string POPUP_REGISTER = "POPUP_Registration";
		private const string POPUP_TOURNAMENT_RESULTS = "POPUP_TourneyResults";
		private const string POPUP_TOURNAMENT_DETAILS = "POPUP_TourneyDetails";
		private const string POPUP_DEPOSIT = "POPUP_Deposit";
        private const string POPUP_REWARDS = "POPUP_Rewards";
		private const string POPUP_PROFILE = "POPUP_Profile";

        private const int HOME_PAGE = 0;
		private const int TOURNAMENT_PAGE = 1;
		private const int HISTORY_PAGE = 2;

		private GameResource _activeGame;
		private string _resultsGameResourceName;

        private const string DEFAULT_PROMO_RESOURCE = "SPRITE_Promo_Default";
        private const string P1_PROMO_RESOURCE = "SPRITE_Promo_FTUE";


        [SerializeField]
		private PoolResources _resourcePool;

		void OnEnable()
		{

			EventDispatcher.AddListener<InitializePoolsEvent>(OnInitializePool);
			EventDispatcher.AddListener<ScreenChangeEvent>(OnScreenChange);
			EventDispatcher.AddListener<PopupEvent>(OnPopupEvent);
			EventDispatcher.AddListener<SelectedGameUpdateEvent>(OnSetTheme);
			EventDispatcher.AddListener<HistoryTileSelectViewEvent>(OnHistoryTileSelect);
			EventDispatcher.AddListener<P1ExperienceStateChangeEvent>(OnP1StateChange);
		}

		void OnDisable()
		{
			EventDispatcher.RemoveListener<InitializePoolsEvent>(OnInitializePool);
			EventDispatcher.RemoveListener<ScreenChangeEvent>(OnScreenChange);
			EventDispatcher.RemoveListener<PopupEvent>(OnPopupEvent);
			EventDispatcher.RemoveListener<SelectedGameUpdateEvent>(OnSetTheme);
			EventDispatcher.RemoveListener<HistoryTileSelectViewEvent>(OnHistoryTileSelect);
			EventDispatcher.RemoveListener<P1ExperienceStateChangeEvent>(OnP1StateChange);
		}

		void ShowMainScreen()
		{
			_mainScrollView.gameObject.SetActive(true);
		}

		void HideMainScreen()
		{
			_mainScrollView.gameObject.SetActive(false);
		}

		void ShowWelcomeScreen()
		{
			_welcomeScreen.SetActive(true);
		}

		void HideWelcomeScreen()
		{
			_welcomeScreen.SetActive(false);
		}

		void OnInitializePool(IEvent e)
		{
			InitializePoolsEvent evt = (InitializePoolsEvent)e;

			GameObjectPoolManager.Instance.InitAsync(_resourcePool.poolList, evt.OnCompleteCallback);
		}

		void OnScreenChange(IEvent e)
		{
			ScreenType screenType = ((ScreenChangeEvent)e).type;
			int pageNumber = -1;

			switch (screenType)
			{
			    case ScreenType.Welcome:
				    HideMainScreen();
				    ShowWelcomeScreen();
				    break;
			    case ScreenType.Home:
				    ShowMainScreen();
				    HideWelcomeScreen();
                    _navBar.SetTheme(screenType, _activeGame);
					pageNumber = HOME_PAGE;
                    break;
                case ScreenType.TournamentSelect:
					ShowMainScreen();
					_navBar.SetTheme(screenType, _activeGame);
					pageNumber = TOURNAMENT_PAGE;
                    break;
                case ScreenType.GameHistory:
					ShowMainScreen();
					_navBar.SetTheme(screenType, _activeGame);
					pageNumber = HISTORY_PAGE;
                    break;
            }

			if (pageNumber >= 0)
				_mainScrollView.SetCurrentPage(pageNumber);
		}

		void OnPopupEvent(IEvent e)
		{
			PopupEvent evt = (PopupEvent)e;

			string popupResource = string.Empty;
			PopupType popupType = evt.type;
			switch (popupType)
			{
				case PopupType.Login:
					popupResource = POPUP_LOGIN;
					break;
				case PopupType.Registration:
					popupResource = POPUP_REGISTER;
					break;
				case PopupType.TournamentResult:
					popupResource = POPUP_TOURNAMENT_RESULTS;
					break;
				case PopupType.TournamentDetails:
					popupResource = POPUP_TOURNAMENT_DETAILS;
					break;
				case PopupType.Deposit:
					popupResource = POPUP_DEPOSIT;
					break;
                case PopupType.Rewards:
					popupResource = POPUP_REWARDS;
					break;
				case PopupType.Profile:
					popupResource = POPUP_PROFILE;
					break;
                case PopupType.ResetPassword:
                    popupResource = POPUP_PASSWORD_RESET;
                    break;
				default:
					return;
            }

			ClearPopupAnchor(_popupAnchor);
			PopupView popupView = CreatePopup(evt.popupUID, popupResource, _popupAnchor);

			// TODO: Refactor this to be done within TournamentResultsPopupView
			if (popupType == PopupType.TournamentResult)
			{
				((TournamentResultsPopupView)popupView).SetTheme(_resultsGameResourceName);
			}
		}

		void OnHistoryTileSelect(IEvent e)
		{
			_resultsGameResourceName = ((HistoryTileSelectViewEvent)e).gameResourceName;
		}
        private void OnP1StateChange(IEvent e)
        {
            bool showP1 = ((P1ExperienceStateChangeEvent)e).showP1Experience;
            _hud.SetActive(!showP1);
            _navBar.gameObject.SetActive(!showP1);
            //_mainScrollView.enabled = !showP1;
            _mainScrollView.GetComponent<ScrollRect>().enabled = !showP1;

            NavbarView navBar = _navBar.GetComponent<NavbarView>();

            Sprite promoSprite = new Sprite();
            if (showP1)
            {
                promoSprite = Resources.Load<Sprite>(P1_PROMO_RESOURCE);
                _homeScreen.SetPromoResource(promoSprite);
                navBar.SetPromoResource(promoSprite);
            }
            else
            {
                promoSprite = Resources.Load<Sprite>(DEFAULT_PROMO_RESOURCE);
                _homeScreen.SetPromoResource(promoSprite);
                navBar.SetPromoResource(promoSprite);
            }
        }

		void OnSetTheme(IEvent e)
		{
			string gameResource = ((SelectedGameUpdateEvent)e).selectedGame.resourceName;
			_activeGame = (GameResource)Resources.Load(gameResource);

			// default tournament result popup to the current active game
			_resultsGameResourceName = gameResource;

			_tournamentScreen.SetTheme(_activeGame);
			_navBar.SetGame(_activeGame);
		}

		void ClearPopupAnchor(Transform popupAnchor)
		{
			// This is a catch all just in case a popup does not self clear
			if (popupAnchor.childCount > 0)
			{
				GsnDebug.LogError("Previous popup did not self destroy. Force clearing the popup anchor.");

				foreach (Transform child in popupAnchor) 
				{
					child.gameObject.GetComponent<PooledGameObject>().Free();
				}
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
	}
}
