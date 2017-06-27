using UnityEngine;
using System.Collections;
using GSN.Skill.Games.Common.Client.Audio;

namespace GSN.Skill.Games.Tripeaks
{
	public class TrapHazard : Hazard {

		public override void ShowOverlay()
		{
			base.ShowOverlay();
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TrapShow);
		}

		public override void HideOverlay()
		{
			base.HideOverlay();
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.TrapClear);
		}
	}
}
