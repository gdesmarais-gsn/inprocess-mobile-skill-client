using UnityEngine;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Client.DebugMenu;
using GSN.Skill.Games.Common.Client.Game;
using GSN.Skill.Games.Common.Client.Audio;

namespace GSN.Skill.Games.Tripeaks
{
#if DEBUG
	public class TriPeaksDebugMenu : CloseableDebugMenu
	{
		private bool streakLocked;
		private bool cardIdShown = false;

		const string GAME_VERSION = "default";
	
		[SerializeField] private CardIdDebug _CardIdDebugTemplate;

		private void sendAddCardCheat(int flags)
		{
			ViewBase.Instance.Send (new CheatAddCardMessage(flags));
		}
		
		public override void OnWindow(int windowID)
		{


			GUI.color = Color.white;

			GUILayout.BeginHorizontal();
			GUILayout.Label ("Game Version: " + GAME_VERSION);
			View view = (View)ViewBase.Instance;
			GUILayout.Label("Board Name:"+view._playfieldDB.playfieldDataDB [view.playfieldID].name);
			GUILayout.EndHorizontal();
	            
	        GUI.color = Color.cyan;
	        if(GUILayout.Button("Win Game Now")) 
			{
				ViewBase.Instance.Send (new CheatWinNowMessage());
			}
			GUILayout.BeginHorizontal();
			if(GUILayout.Button("Tiki Red")) 
			{
				sendAddCardCheat(GameModel.RED_TIKI_FLAG);
			}
			if(GUILayout.Button("Tiki Black")) 
			{
				sendAddCardCheat(GameModel.BLACK_TIKI_FLAG);
			}
			if(GUILayout.Button("Tiki Golden"))
			{
				sendAddCardCheat(GameModel.GOLDEN_TIKI_FLAG);
			}
			if(GUILayout.Button("Tiki Fire")) 
			{
			
			}
			GUILayout.EndHorizontal();
			GUILayout.BeginHorizontal();
			if(GUILayout.Button("Tiki Blossom"))
			{
				sendAddCardCheat(GameModel.FLOWER_TIKI_FLAG);
			}
			if(GUILayout.Button("Tiki Volcano")) 
			{
				sendAddCardCheat(GameModel.VOLCANO_TIKI_FLAG);
			}
			GUILayout.EndHorizontal();
			GUI.color = Color.white;

			GUILayout.BeginHorizontal();  
			bool soundState = AudioFactory.instance.ChannelIsEnabled(SoundChannels.CHAN_SFX);
			if(GUILayout.Button(soundState?"Toggle Sound Off":"Turn Sound On")) 
			{
				AudioFactory.instance.SetChannelEnabled(SoundChannels.CHAN_SFX, !soundState);
			}

			bool musicState = AudioFactory.instance.ChannelIsEnabled(SoundChannels.CHAN_MUSIC);
			if(GUILayout.Button(musicState?"Turn Music Off":"Turn Music On")) 
			{
				AudioFactory.instance.SetChannelEnabled(SoundChannels.CHAN_MUSIC, !musicState);
			}
			GUILayout.EndHorizontal();

			if(GUILayout.Button("Undo")) 
			{
				view.Send (new CheatUndoMessage());
			}

			GUILayout.BeginHorizontal();
			if (GUILayout.Button("Increase streak"))
			{
				view.Send(new CheatIncrementStreakMessage());
			}

			if (GUILayout.Button("Reset streak"))
			{
				view.Send(new CheatResetStreakMessage());
			}

			if (GUILayout.Button(streakLocked ? "Unlock streak resets" : "Lock streak resets"))
			{
				view.Send(new CheatToggleStreakResetLockMessage());
				streakLocked = !streakLocked;
			}
			GUILayout.EndHorizontal();
			
			GUILayout.BeginHorizontal();
			if(GUILayout.Button(cardIdShown?"Hide Card Info":"Show Card Info")) 
			{
				ToggleShowCard();
			}	
			GUILayout.EndHorizontal();
			base.OnWindow (windowID);
		}

		void ToggleShowCard()
		{
			cardIdShown = !cardIdShown;
			
			if (!cardIdShown)
			{
				// Destroy all current card ID's
				Component[] cardIdDebugs = FindObjectsOfType(typeof(CardIdDebug)) as CardIdDebug[];
				foreach (CardIdDebug cardIdDebug in cardIdDebugs)
					GameObject.Destroy(cardIdDebug.gameObject);
				
			}
			else
			{
				// Create card ids for each card
				Board board = ((View)ViewBase.Instance)._board;
				List<Card> cards = board.cards;
				
				// get parent of the new transform
				
				GameObject parentGO = GameObject.Find("UI_Game");
				foreach ( Card card in cards)
				{
					GameObject cardIDDebugGO = (GameObject)GameObject.Instantiate(_CardIdDebugTemplate.gameObject, Vector3.zero, Quaternion.identity );
					cardIDDebugGO.GetComponent<CardIdDebug>().Init(card);
					cardIDDebugGO.transform.SetParent(parentGO.transform);
				}
				
			}
		}
	}
#endif
}
