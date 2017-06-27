namespace GSN.Skill.Games.Tripeaks
{
	public class Hazard : OverlayBase
    {
		private const string DISPLAY_HAZARD = "Display";
		private const string CLEAR_HAZARD = "Clear";
		private const string HIDE_HAZARD = "Hide";

        public override void ShowOverlay()
        {
            if (animator != null)
                animator.Play(DISPLAY_HAZARD);
        }

        public override void HideOverlay()
        {
            if (animator != null)
                animator.Play(HIDE_HAZARD);
        }

        public override void ClearOverlay()
        {
            if (animator != null)
                animator.Play(CLEAR_HAZARD);
        }
	}
}
