using UnityEngine;
using System.Collections;

namespace GSN.Skill.Games.Tripeaks
{
	public class TutorialOverlay : OverlayBase
    {
		private const string DISPLAY_OVERLAY = "TutorialOverlay_In";
		private const string HIDE_OVERLAY = "TutorialOverlay_Out";
		
		
		public override void ShowOverlay()
		{
			if (animator != null)
				animator.Play(DISPLAY_OVERLAY);
		}
		
		public override void HideOverlay()
		{
			if (animator != null)
				animator.Play(HIDE_OVERLAY);
		}

        public override void ClearOverlay()
        {
            if (animator != null)
                animator.Play(HIDE_OVERLAY);
            this.gameObject.SetActive(false);
        }
    }
}
