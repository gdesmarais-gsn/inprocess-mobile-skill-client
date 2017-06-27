using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using GSN.Skill.Games.Common.Client.DebugMenu;
using GSN.Skill.Games.Common.Client.Game;

namespace GSN.Skill.Games.Tripeaks
{
	public class TriPeaksCardCountDebugMenu : CloseableDebugMenu
	{
#if DEBUG
		public override void OnWindow(int windowID)
		{
			base.OnWindow (windowID);

			GUI.color = Color.white;

			GUILayout.BeginHorizontal();

			Board board = ((View)ViewBase.Instance)._board;

			// special card counts
			List<Card> cards = board.cards;		
			GUILayout.Label("Total Cards: " +cards.Count);
			GUILayout.EndHorizontal();
			
			int[] redTiki = {0,0};
			int[] blackTiki = {0,0};
			int[] blossomTiki = {0,0};
			int[] volanoTiki = {0,0};;		
			int[] goldenTiki = {0,0};
			int[] shark = {0,0};		
			int[] bait = {0,0};
			int[] trap = {0,0};		
			int[] dynamite = {0,0};
			
			int tableau = 0;	
			int waste = 0;
			int hold = 0;
			int deal = 0;
			int removedFromPlay = 0;
			
			foreach (var card in cards)
			{
				int removed = 0;
				switch (card.pileId)
				{
					case PileID.Removed:
						++removedFromPlay;
						removed = 1;
						break;
					case PileID.Tableau:
						++tableau;
						break;
					case PileID.Waste:
						++waste;
						break;			
					case PileID.Deal:
						++deal;
						break;
					case PileID.Hold:
						++hold;
						break;	
						
				}
				
				switch (card.flag )
				{
				case GameModel.GOLDEN_TIKI_FLAG:
					++goldenTiki[removed];;
					break;
				case GameModel.BLACK_TIKI_FLAG:
					++blackTiki[removed];;
					break;
				case GameModel.RED_TIKI_FLAG:
					++redTiki[removed];;
					break;
				case GameModel.FLOWER_TIKI_FLAG:
					++blossomTiki[removed];;
					break;
				case GameModel.VOLCANO_TIKI_FLAG:
					++volanoTiki[removed];;
					break;
				case GameModel.SHARK_FLAG:
					++shark[removed];
					break;
				case GameModel.SHARK_BAIT_FLAG:
					++bait[removed];;		
					break;
				case GameModel.TRAP_FLAG:
					++trap[removed];;
					break;
				case GameModel.DYNAMITE_FLAG:
					++dynamite[removed];;		
					break;			
				}
				

			}		
					
			GUILayout.BeginHorizontal();
			GUILayout.Label("Tableau: " + tableau.ToString());					
			GUILayout.Label("Deal: " + deal.ToString());
			GUILayout.Label("Waste: " + waste.ToString());
			GUILayout.Label("Hold: " + hold.ToString());
			GUILayout.Label("Removed: " + removedFromPlay.ToString());		
					
			GUILayout.EndHorizontal();
			
			GUI.color = Color.green;
			GUILayout.BeginHorizontal();
			GUILayout.Label("In Play");		
			GUILayout.EndHorizontal();
			
			GUILayout.BeginHorizontal();
			GUILayout.Label("Red: " + redTiki[0]);
			GUILayout.Label("Black: " + blackTiki[0]);	
			GUILayout.Label("Blossom: " + blossomTiki[0]);	
			GUILayout.Label("Volcano: " + volanoTiki[0]);	
			GUILayout.Label("Golden: " + goldenTiki[0]);		
			GUILayout.EndHorizontal();
			
			GUILayout.BeginHorizontal();
			GUILayout.Label("Shark: " + shark[0]);
			GUILayout.Label("Bait: " + bait[0]);	
			GUILayout.Label("Trap: " + trap[0]);
			GUILayout.Label("Dynamite: " + dynamite[0]);	
			GUILayout.EndHorizontal();
			
			GUI.color = new Color(1,1,.5f);
			GUILayout.BeginHorizontal();
			GUILayout.Label("Removed From Play");
			GUILayout.EndHorizontal();
			
			GUILayout.BeginHorizontal();
			GUILayout.Label("Total: " + removedFromPlay);
			GUILayout.EndHorizontal();
			
			GUILayout.BeginHorizontal();
			GUILayout.Label("Red: " + redTiki[1]);
			GUILayout.Label("Black: " + blackTiki[1]);	
			GUILayout.Label("Blossom: " + blossomTiki[1]);	
			GUILayout.Label("Volcano: " + volanoTiki[1]);	
			GUILayout.Label("Golden: " + goldenTiki[1]);		
			GUILayout.EndHorizontal();
			
			GUILayout.BeginHorizontal();
			GUILayout.Label("Shark: " + shark[1]);
			GUILayout.Label("Bait: " + bait[1]);	
			GUILayout.Label("Trap: " + trap[1]);
			GUILayout.Label("Dynamite: " + dynamite[1]);	
			GUILayout.EndHorizontal();
		}
#endif
	}
}
