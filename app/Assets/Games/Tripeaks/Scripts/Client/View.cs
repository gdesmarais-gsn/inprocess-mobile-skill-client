using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using GSN.Skill.Games.Common.Client.Game;
using GSN.Skill.Games.Common.Client;
using GSN.Skill.Games.Common.Tutorial;
using GSN.Skill.Games.Common.Events;
using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common.Client.Audio;
using GSN.Skill.Games.Common;
using GSN.Skill.Games.Common.Model;
using GSN.Skill.Games.Common.Primitive.Card;

#if DEBUG
using GSN.Skill.Games.Common.Client.DebugMenu;
#endif

namespace GSN.Skill.Games.Tripeaks
{
	public class View : ViewBase
	{
		[SerializeField]private GameBase game;
		public PlayfieldDataDB _playfieldDB;

		public UIStartScreen _startScreen;
		public UIHud _hud;
		public UIResults _results;

		public Camera mainCamera;
		public Camera uiCamera;
		public Canvas canvas;
	   
		public Board _board;

		public Animator _backgroundCameraAnimator;
#if DEBUG
		public DebugMenu _dm; 
#endif
		private int _playfieldID = 0;
		private bool _holdEnabled = false;				 	
		private bool _reshuffleEnabled = true;
		private bool _oneShotWildEnabled = true;	
		public int backgroundDifficultyIndex = -1;

		public List<TriPeaksAudio> gameMusicList = new List<TriPeaksAudio>();
		public List<CutScene> cutScenes = new List<CutScene>();
		public List<Tutorial> tutorials = new List<Tutorial>();

		private int _currentTime;

		private const string BG_CAMERA_PAN_DOWN = "ANIM_CLIP_PanDown";

		const int SCORE_FLOAT_POOL_SIZE = 5;
		const int SCORE_FIRE_FX_POOL_SIZE = 2;
        const int TUTORIAL_TIMER = 120;

		private const string FIRE_FX_RESOURCE = "FX_Fireball";
		private const string SCORE_FLOAT_RESOURCE = "FX_ScoreFloat";
        public const string GAME_ASSET_BUNDLE = "tripeaks.game.assetbundle";

        private MonoBehaviourPool _scoreFloatPool;
		private MonoBehaviourPool _scoreFireFXPool;		
		private bool _poolsInitilized = false;
		private bool _inTutorial;
        private bool _reshuffleCompleteTutorialTriggered = false;
        private Tutorial _currentTutorial = null;

        private IEnumerator _coTutorialTimer;

		public int playfieldID
		{
			get { return _playfieldID;}
		}
		
		public bool poolsInitilized
		{
			get { return _poolsInitilized && _board.poolsInitilized;}
		}

        public bool CanSendInputToModel(int cardId)
        {
            // Check if in tutorial mode and triggers next step
            if (_inTutorial)
            {
                if (_currentTutorial != null) //tutorial system tutorial
                {
                    TriPeaksTutorialStepController tripeaksTutorialStepController = (TriPeaksTutorialStepController)FindObjectOfType(typeof(TriPeaksTutorialStepController));
                    if (tripeaksTutorialStepController != null)
                    {
                        if (tripeaksTutorialStepController.CardWillAdvance(cardId))
                            return true;
                        if (!TutorialManager.instance.IsInputBlocked())
                            return true;

                        return false;
                    }
                    // Step controllers are hidden but still in tutorial, let it play
                    return true;                    
                }
                else // Cutscene tutorial
                {
                    return false;
                }
            } 

            return true;
        }


        public void onCardClickedResult(IModelEvent e)
        {
            _board.onCardClickedResult(e);

            if (_inTutorial)
            {
                TriPeaksTutorialStepController tripeaksTutorialStepController = (TriPeaksTutorialStepController)FindObjectOfType(typeof(TriPeaksTutorialStepController));
                if (tripeaksTutorialStepController != null)
                {
                    CardClickResultEvent ccre = (CardClickResultEvent)e;
                    tripeaksTutorialStepController.ProcessCardClicked(ccre.cardID);
                }
            }
        }


        public bool IsinTutorial()
        {
            return _inTutorial;
        }


        public override void Awake()
		{
			//AssetLoadingService.Initialize( new ResourceLoadingService() );   
			// This makes sure the AssetBundleManager object exists, which is needed for the service.
			//var dummy = PrefabLoaderManager.Instance;
			//AssetLoadingService.Initialize( new AssetBundleLoadingService() );	
			base.Awake ();

			_assetBundleNames.Add(GAME_ASSET_BUNDLE);
			_assetBundleNames.Add (BackgroundLoader.BACKGROUND_ASSET_BUNDLE_NAME);
			_assetBundleNames.Add (Board.DECK_ASSET_BUNDLE);

            /// Temporary change until we get Prefabs loaded in game.
            //UILoadData.instance.PrefabLoadProgress = 100;
		}

		public T LoadAsset<T>(string bundleName, string resourceName)
		{
			return (T)((object)Resources.Load(resourceName));
			//(T)AssetLoadingService.LoadAsset(new LoadAssetParams(bundleName, resourceName));

		}

		public IEnumerator initializePool(Dictionary<string, string> joinRecord)
		{	
			if ( _poolsInitilized )
				yield return null;		
	
			_poolsInitilized = true;
            GameObject parentObjPool = new GameObject("Parent Pool");
            parentObjPool.SetActive(false);

			_scoreFloatPool = CreateObjectPool(parentObjPool.transform, GAME_ASSET_BUNDLE, SCORE_FLOAT_RESOURCE, SCORE_FLOAT_POOL_SIZE);
			_scoreFireFXPool = CreateObjectPool(parentObjPool.transform, GAME_ASSET_BUNDLE, FIRE_FX_RESOURCE, SCORE_FIRE_FX_POOL_SIZE);
			
			yield return StartCoroutine(_board.initializePool(joinRecord));
		}

		public MonoBehaviourPool CreateObjectPool(Transform transform, string bundleName, string resourceName, int size)
		{
			GameObject obj = LoadAsset<GameObject>(bundleName, resourceName);
			return new MonoBehaviourPool(transform, size, obj);
        }

		public override void Configure (Dictionary<string, string> joinRecord)
		{
			base.Configure (joinRecord);

			if (joinRecord.ContainsKey (GameModel.OPTIONS_BOARD_ID)) 
			{
				int id = Convert.ToInt32(joinRecord[GameModel.OPTIONS_BOARD_ID]);
				_playfieldID = id - 1;//1 to 0 base offset
				if ( _playfieldID < 0 || _playfieldID >= _playfieldDB.playfieldDataDB.Length)
					_playfieldID = 0;					
			}
			
			if (joinRecord.ContainsKey (GameModel.OPTIONS_RESHUFFLE_ID)) 
			{
				int value = int.Parse(joinRecord[GameModel.OPTIONS_RESHUFFLE_ID]);
				_reshuffleEnabled = (value == 1)?true:false;
			}
			
			if (joinRecord.ContainsKey (GameModel.OPTIONS_HOLD_ID)) 
			{
				int value = int.Parse(joinRecord[GameModel.OPTIONS_HOLD_ID]);
				_holdEnabled = (value == 1)?true:false;
			}
			
			if (joinRecord.ContainsKey (GameModel.OPTIONS_ONE_SHOT_WILD_ID)) 
			{
				int value = int.Parse(joinRecord[GameModel.OPTIONS_ONE_SHOT_WILD_ID]);
				_oneShotWildEnabled = (value == 1)?true:false;
			}
		
			_hud.configure(_holdEnabled, _oneShotWildEnabled, _reshuffleEnabled);
		}

		public override void Init (Dictionary<string, string> joinRecord)
		{					
			base.Init (joinRecord); 
			_hud.setScoreValue (0);

			ReadyToStart();
		}	

		IEnumerator CutsceneTutorialBegin(CutScene cutSceneActive)
		{
			while (_preloadComplete == false)
			{
				yield return null;
			}

			TriPeaksAnalytics.instance.ReportTutorialView(cutSceneActive.tutorialID, 0);

			
			_startScreen.gameObject.SetActive(false);
				
			_inTutorial = true;

			GameObject tutorialObjPrefab;

			tutorialObjPrefab = LoadAsset<GameObject>(GAME_ASSET_BUNDLE, cutSceneActive.resouceName);

			GameObject tutorialObj = null;
			if ( tutorialObjPrefab != null )
			{
				tutorialObj = (GameObject)Instantiate(tutorialObjPrefab, Vector3.zero, Quaternion.identity);
			
				// add it to parent transform
				tutorialObj.transform.SetParent(cutSceneActive.parentTranform, false);
				RectTransform rect = tutorialObj.GetComponent<RectTransform>();
				if ( rect != null)
				{
					rect.anchoredPosition = tutorialObjPrefab.GetComponent<RectTransform>().anchoredPosition;
				}
			}
			else
			{
				GsnDebug.LogError("Missing resource " + cutSceneActive.resouceName);
			}
			// start timer
			_coTutorialTimer = tutorialTimer (cutSceneActive.timeInSeconds, tutorialObj);
			StartCoroutine (_coTutorialTimer);
			CleanUpShadersInEditor();
		}
		
		IEnumerator TutorialBegin(Tutorial tutorial)
		{
			while (_preloadComplete == false)
			{
				yield return null;
			}
            
            _results.ContinueButtonEnabled(false);
			// Cards in tutorial do not come in until the end of the group
			_startScreen.gameObject.SetActive(false);
            _hud.setTutorialAnimController();		
			_inTutorial = true;

            _currentTutorial = tutorial;

			for (int i = 0; i < _currentTutorial.tutorialGroupOptions.Length; ++i)
			{
				string tutorialName = _currentTutorial.tutorialGroupOptions[i].tutorialGroup;
				TutorialGroup group = LoadAsset<TutorialGroup>(GAME_ASSET_BUNDLE, tutorialName);
				TutorialManager.instance.AddTutorial(group, tutorialName);
			}

            TriggerTutorialStep(Tutorial.TutorialStep.GameStart);			
			SkipStartScreen();
		}

        void TriggerTutorialStep(Tutorial.TutorialStep step)
        {
            if (_inTutorial && _currentTutorial != null)
            {
				TriPeaksAnalytics.instance.ReportTutorialView("Base", (int)step);
                foreach ( Tutorial.TutorialGroupOptions tutorialGroupOption in _currentTutorial.tutorialGroupOptions)
                if (tutorialGroupOption.triggerTutorialOnStep == step)
                {
                    TutorialManager.instance.ShowStep(tutorialGroupOption.tutorialGroup, 0);
                }
            }
        }
		
		private IEnumerator tutorialTimer(int secondsToWait, GameObject tutorialObject)
		{
			yield return new WaitForSeconds (secondsToWait);
			Destroy(tutorialObject);
			CutsceneTutorialComplete();
		}
		
		public void CutsceneTutorialComplete()
		{
			AudioFactory.instance.StopAudiosOnChan (SoundChannels.CHAN_MUSIC, 0.6f);

			StartGame();
            TutorialComplete();
        }

        public void TutorialComplete()
        {
            _inTutorial = false;
        }

        public bool IsOptionOn(Dictionary<string, string> joinRecord, string optionName)
		{
			string option;
			if (joinRecord.TryGetValue (optionName, out option)) 
			{
				int value = int.Parse(option);
				return (value == 1)?true:false;
			}
			
			return false;
		}
		
		public override void AddEventHandlers()
		{
			base.AddEventHandlers ();

			controller.AddEventListener (CommonModelEventType.UpdateClock, onUpdateClock);
			controller.AddEventListener (ModelEventType.EndGame, onEndGame);
			controller.AddEventListener (CardModelEventType.DealCards, onDealCards);
			controller.AddEventListener (ModelEventType.CardClickResult, onCardClickedResult);
			controller.AddEventListener (ModelEventType.FlipCard, _board.onFlipCardResult);
			controller.AddEventListener (ModelEventType.MoveCardToHold, _board.onMoveCardToHoldEvent);
			controller.AddEventListener (ModelEventType.Reshuffle, _board.onReshuffleEvent);
			controller.AddEventListener (ModelEventType.GainDealCards, _board.onGainDealCards);
			controller.AddEventListener (ModelEventType.RemoveCard, _board.onRemoveCard);
			controller.AddEventListener (ModelEventType.UpdateDynamiteCounter, _board.onUpdateDynamiteCounter);						
			controller.AddEventListener (ModelEventType.UpdateScore, onScoreUpdate);
			controller.AddEventListener (ModelEventType.UpdateStreak, onStreakUpdate);
#if DEBUG
			foreach (int i in System.Enum.GetValues(typeof(UndoEventType)))
			{
				if (i != (int)UndoEventType.UndoEventTypeCount)
					controller.AddEventListener (i, _board.onUndoAction);
			}
#endif
			controller.AddEventListener (ModelEventType.RemoveTrap, _board.onRemoveTrap);
			controller.AddEventListener (ModelEventType.ShowReshuffleButton, _board.onShowReshuffleButton);
			controller.AddEventListener (ModelEventType.BuildPlayfield, onBuildPlayfieldEvent);
			controller.AddEventListener (ModelEventType.ShowBanner, _hud.onShowBannerEvent);
            controller.AddEventListener(ModelEventType.FirstDealComplete, onFirstDealComplete);
            controller.AddEventListener(ModelEventType.ReshuffleComplete, onReshuffleComplete);

            Events.EventDispatcher.AddListener<Phoenix.LoadSceneHiddenEvent>(OnLoadScreenHiddenEvent); // Phoenix event when load screen finishes hidding. Load is fully complete at this point.
        }	

		void onUpdateClock (IModelEvent e)
		{
			UpdateClockEvent ue = (UpdateClockEvent)e;
			_hud.setTimeValue(ue.remainingMS/1000);
			_currentTime = ue.remainingMS/1000;
		}
        
        public void StartTutorialClock()
        {
			_hud.animateTimerIn();
            StartCoroutine(TutorialClockUpdate());
        }

        private IEnumerator TutorialClockUpdate()
        {
            int tutorialTime = TUTORIAL_TIMER;
            while (tutorialTime > 0)
            {
                _hud.setTimeValue(tutorialTime);
                tutorialTime--;
                yield return new WaitForSeconds(1f);
            }
        }

		void onEndGame (IModelEvent e)
		{
			//if in tutorial. kill it
			if (_inTutorial && _currentTutorial != null)
			{
				TutorialManager.instance.HideShownStep(false);
			}
			EndGameEvent ee = (EndGameEvent)e;
			GsnDebug.Log ("The game is over.  The final score was " + ee.totalScore);

			ITournamentSessionData tournamentSession = ArenaProxy.instance.TournamentSessionData;
			tournamentSession.ClientCalculatedScore = ee.totalScore;
			
			// tell Arena the score we computed.
			// FIXME: The property on ITournamentSessionData should suffice.
			ArenaProxy.instance.SetClientScore(ee.totalScore);
			
			StartCoroutine(_board.ClearBoard (ee.endReason));

			showEndGameBanner(ee);

			StartCoroutine (showResults(ee, _currentTime));
		}
		
		public override void ReadyToStart()
		{
			if (InReplay || _inTutorial)
				return;
			
			_startScreen.gameObject.SetActive (true);
		}

		public IEnumerator hideStartScreen()
		{
			_startScreen.animateStartScreenOff();

			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.UITransitionQuick);
			AudioFactory.instance.StopAudiosOnChan (SoundChannels.CHAN_MUSIC, 0.6f);

			yield return new WaitForSeconds(.6f);

			_startScreen.gameObject.SetActive(false);
			StartGame();
		}
		
		protected override void SkipStartScreen()
		{
			AudioFactory.instance.StopAudiosOnChan (SoundChannels.CHAN_MUSIC, 0.6f);
			_startScreen.gameObject.SetActive(false);
			StartGame();	
		}		

		public override void ImmediatelyStartGameWhenLoadingCompletes()
		{
			SkipStartScreen();
		}

		private void StartGame()
		{
			game.StartGame();
		}

		IEnumerator showGameHud()
		{
			_hud.gameObject.SetActive(true);

			if (InReplay)
				_hud.showReplayHud();

			yield return new WaitForSeconds(.5f);

			// Moved this to a separate call as we may need to restart the music when in WebGL
			playGameHudMusic ();

			_hud.animateHUDIn();
		}

#if UNITY_WEBGL
		public delegate AudioSource AudioCallback(int index = -1);
		private IEnumerator DelayedCallback(float time, AudioCallback callback, int index)
		{
			yield return new WaitForSeconds(time);
			callback(index);
		}
#endif //if UNITY_WEBGL

		public override AudioSource playGameHudMusic(int index = -1) {
			AudioOptions sOptions = AudioFactory.DefaultOptions();
			sOptions.volume = 0;
			sOptions.fadeInSecs = 0.5f;
			sOptions.loop = true;
			index = (index == -1) ? UnityEngine.Random.Range( 0,gameMusicList.Count) : index;


#if UNITY_WEBGL
			sOptions.loop = false;
			AudioSource source = AudioFactory.instance.PlayMusic( gameMusicList[ index ], sOptions);
			StartCoroutine(DelayedCallback(source.clip.length, playGameHudMusic, index));
#else 
			AudioSource source = AudioFactory.instance.PlayMusic( gameMusicList[ UnityEngine.Random.Range( 0,gameMusicList.Count)], sOptions);
#endif //if UNITY_WEBGL
			return source;
		}

		IEnumerator hideGameHUD()
		{
			_hud.animateHUDOut();

			yield return new WaitForSeconds(1f);

			_hud.gameObject.SetActive(false);
		}

		void showEndGameBanner(EndGameEvent ee)
		{
			if (ee.endReason != (int)GameModelBase.BaseEndGameReason.EARLY_EXIT)
			{
				string bannerText = _results.getEndGameReason (ee.endReason);
				_hud.showEndGameBanner(bannerText);
			}
		}

		IEnumerator showResults(EndGameEvent ee, int timeRemaining)
		{
			yield return new WaitForSeconds(1f);

			StartCoroutine(hideGameHUD());
			AudioFactory.instance.StopAudiosOnChan (SoundChannels.CHAN_MUSIC, 2.5f);

			yield return new WaitForSeconds(2.5f);

			_backgroundCameraAnimator.Play(BG_CAMERA_PAN_DOWN);
			_results.setupPanel (ee, backgroundDifficultyIndex, timeRemaining);
			_results.gameObject.SetActive(true);
			_results.tikiCharacter.gameObject.SetActive(true);
			_results.poiCharacter.gameObject.SetActive(true);
			StartCoroutine(_results.AnimateResultsIn());
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.UITransition);

			AudioOptions sOptions = AudioFactory.DefaultOptions();
			sOptions.loop = true;
			AudioFactory.instance.PlayMusic(TriPeaksAudio.MenuMusic, sOptions);

            yield return new WaitForSeconds(1f);

            TriggerTutorialStep(Tutorial.TutorialStep.UIResultsShown);

			TriPeaksAnalytics.instance.ReportLevelEnd(_playfieldID, ee.endReason, ee.totalScore, timeRemaining, ee.matches, ee.streaks, ee.time, ee.totalScore);
			TriPeaksAnalytics.instance.ReportGameEnd(ee.endReason, ee.totalScore, timeRemaining, ee.matches, ee.streaks, ee.time, ee.totalScore);
		}

		void onDealCards (IModelEvent e)
		{
			DealCardsEvent dce = (DealCardsEvent)e;
		
			StartCoroutine(showGameHud());

			TriPeaksAnalytics.instance.SendLevelStart (_playfieldID);

			_board.screenWorldLeftSide = mainCamera.ScreenToWorldPoint(new Vector3(0, 0, 0)).x;
			_board.Init (dce.deck, _playfieldDB.playfieldDataDB [_playfieldID], _oneShotWildEnabled, backgroundDifficultyIndex );
		}

		public void onBuildPlayfieldEvent(IModelEvent e )
		{
			_board.onBuildPlayfieldEvent(e, _playfieldDB.playfieldDataDB [_playfieldID]);
		}
		
		void onScoreUpdate(IModelEvent e)
		{
			_hud.setScoreValue (((UpdateScoreEvent)e).score);
			createFloatingScore (((UpdateScoreEvent)e).pointsEarned, ((UpdateScoreEvent)e).streakCount, ((UpdateScoreEvent)e).cardID);
		}

		void onStreakUpdate (IModelEvent e)
		{
			_hud.setStreak (((UpdateStreakEvent)e).currentStreak);
		}

        void onFirstDealComplete(IModelEvent e)
        {
            TriggerTutorialStep(Tutorial.TutorialStep.CardsDoneDealing);
        }

        void onReshuffleComplete(IModelEvent e)
        {
            if (!_reshuffleCompleteTutorialTriggered)
            {
                TriggerTutorialStep(Tutorial.TutorialStep.ReshuffleComplete);
                _reshuffleCompleteTutorialTriggered = true;
            }
        }
        

        void createFloatingScore(int pointsEarned, int streak, int cardID)
		{
			Vector3 cardPosition = _board.FindCardWithCardID(cardID).transform.position;

			RectTransform canvasRect = canvas.GetComponent<RectTransform>();
			Vector2 viewportPosition = mainCamera.WorldToViewportPoint( cardPosition );
			Vector2 screenPosition = new Vector2(
								((viewportPosition.x * canvasRect.sizeDelta.x) - (canvasRect.sizeDelta.x * 0.5f)),
								((viewportPosition.y * canvasRect.sizeDelta.y) - (canvasRect.sizeDelta.y * 0.5f)));

			GameObject scoreFloat = _scoreFloatPool.getObject().gameObject;
            scoreFloat.transform.SetParent(this.transform, false);
			scoreFloat.gameObject.SetActive(true);
			scoreFloat.transform.SetParent(canvas.transform);
			scoreFloat.transform.localScale = Vector3.one;
			scoreFloat.transform.localPosition = new Vector3(screenPosition.x, screenPosition.y, 0);
			if (streak > 0)
			{
				GameObject fireballObject = _scoreFireFXPool.getObject().gameObject;
                fireballObject.transform.SetParent(this.transform, false);
				scoreFloat.GetComponent<ScoreFloat>().setScore(pointsEarned, streak, _hud.streakCards[streak - 1].transform.position, fireballObject);
				StartCoroutine(FreePoolObjectInTime(fireballObject, 3.0f));
			}

			StartCoroutine(FreePoolObjectInTime(scoreFloat, 3.0f));
		}
	
		IEnumerator FreePoolObjectInTime(GameObject pooledGameObject, float killTime)
		{
			yield return new WaitForSeconds(killTime);
			pooledGameObject.gameObject.SetActive(false);
			pooledGameObject.GetComponent<PooledMonoBehaviour>().Free();
		}
		
		public void OnReshuffleButton()
		{
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.ButtonClick);
			ViewBase.Instance.Send (new ReshuffleMessage());
			TriPeaksAnalytics.instance.ReportReshuffleActivatedUsed (_currentTime);

            if (_inTutorial)
                TutorialManager.instance.HideShownStep();
        }

        void OnLoadScreenHiddenEvent(Events.IEvent e)
		{
            OnLoadingComplete();
		}

		public override void OnLoadingComplete()
        {
			_startScreen.OnLoadingComplete();
			if (!InReplay)
			{
				AudioOptions sOptions = AudioFactory.DefaultOptions();
				sOptions.loop = true;
				AudioFactory.instance.PlayMusic(TriPeaksAudio.MenuMusic,sOptions);
			}
		}

		protected override int GamePreloadCount ()
		{
			return 2;
		}
		
		
		protected override IEnumerator GamePreload()
		{                        
			IGameSession gameSession = ArenaProxy.instance.gameSession;			
					
			yield return StartCoroutine(initializePool(gameSession.JoinRecord));

			IncrementItemLoaded ();
			// Tell the LoadScreenView that pool load progress is complete
			Events.EventDispatcher.DispatchEvent(new Phoenix.UnitySceneProgressEvent(.66f));

			BackgroundLoader backgroundLoader = (BackgroundLoader)FindObjectOfType(typeof(BackgroundLoader));

			int backgroundIndex = -1;
			if ( gameSession.JoinRecord.ContainsKey(GameModel.OPTIONS_BACKGROUND_ID))
				backgroundIndex = int.Parse(gameSession.JoinRecord[GameModel.OPTIONS_BACKGROUND_ID]) - 1;//1 to 0 based
			
			if ( gameSession.JoinRecord.ContainsKey(GameModel.OPTIONS_BACKGROUND_DIFFICULTY_ID))
				backgroundDifficultyIndex = int.Parse(gameSession.JoinRecord[GameModel.OPTIONS_BACKGROUND_DIFFICULTY_ID]) - 1;

			// if out of range use a random, setting this here because cards should match.cutsce
			if (backgroundDifficultyIndex < 0 || backgroundDifficultyIndex >= BackgroundLoader.NUM_TIMES_OF_DAY)
				backgroundDifficultyIndex = 0;
				
			backgroundLoader.loadBackground(backgroundIndex,backgroundDifficultyIndex);

			IncrementItemLoaded ();
			// Tell the LoadScreenView that background load progress is complete
			Events.EventDispatcher.DispatchEvent(new Phoenix.UnitySceneProgressEvent(1.0f));

			CleanUpShadersInEditor();


			Dictionary<string, string> joinRecord = gameSession.JoinRecord;

			// Check for Tutorial steps
			foreach (Tutorial tutorial in tutorials)
			{
				if ( IsOptionOn(joinRecord, tutorial.tutorialID))
				{
					_inTutorial = true;
					ArenaProxy.instance.gameSession.ExitMode = GameSessionExitMode.Tutorial;
					StartCoroutine(TutorialBegin(tutorial));
					break;

				}	
			}

			// Check for cutscenes
			foreach (CutScene cutScene in cutScenes)
			{
				if ( IsOptionOn(joinRecord, cutScene.tutorialID))
				{
					ArenaProxy.instance.gameSession.ExitMode = GameSessionExitMode.Tutorial;
					StartCoroutine(CutsceneTutorialBegin(cutScene));
					break;
					// There is a chance they will want to play more than one of these.
				}
			}

            // Game is done loading. Tell the LoadScreenView that it can hide
            Events.EventDispatcher.DispatchEvent(new Phoenix.UnitySceneLoadCompleteEvent());
		}

		protected override IEnumerator LoadBundles(){yield return null;}
		protected override void UnloadBundles(){}
			
		private void CleanUpShadersInEditor()
		{
			#if UNITY_EDITOR
			Material[] materialArray = Resources.FindObjectsOfTypeAll<Material>();
			if (materialArray == null)
				return;
			
			for (int matIdx = 0; matIdx < materialArray.Length; ++matIdx)
			{
				Shader shader = Shader.Find(materialArray[matIdx].shader.name);
				if (shader == null)
					continue;
				
				materialArray[matIdx].shader = Shader.Find(materialArray[matIdx].shader.name);
			}
			#endif
		}
	}
} 
