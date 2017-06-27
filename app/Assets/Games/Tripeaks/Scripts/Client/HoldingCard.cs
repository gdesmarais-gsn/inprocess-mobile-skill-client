using UnityEngine;
using System.Collections;
using GSN.Skill.Games.Common.Client.Game;

namespace GSN.Skill.Games.Tripeaks
{
	public class HoldingCard : MonoBehaviour 
	{
		public Card _CurrentCard;

		void OnMouseDown ()
		{
			ViewBase.Instance.Send (new HoldMessage());	
		}
	}
}
