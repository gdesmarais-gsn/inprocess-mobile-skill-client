using UnityEngine;
using System.Collections;
using GSN.Skill.Games.Common.Client.Game;
using GSN.Skill.Games.Common.Client.Audio;

namespace GSN.Skill.Games.Tripeaks
{
	public class WildButton : MonoBehaviour 
	{
		void OnMouseDown ()
		{
			View view = (View)ViewBase.Instance;

			if ( view._board.InReshuffleCountdown())
				return;
			ViewBase.Instance.Send (new WildMessage());	

			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.OneShotWildUsed);
		}
	}
}
