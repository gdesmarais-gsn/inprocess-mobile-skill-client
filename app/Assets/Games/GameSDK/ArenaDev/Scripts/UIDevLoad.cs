using UnityEngine;
using UnityEngine.UI;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Client.Game
{
	public class UIDevLoad : UILoadBase 
	{
        public Image progressFill;

		private const int STAGE_COUNT = 2;

        private void Awake()
        {
            progressFill.fillAmount = 0.0f;
        }

        // Fills the bar, once complete, removes self and calls OnLoadingComplete
        protected override void UpdateUI(float percDone)
		{
			// update the loading bar
            if (progressFill != null)
                progressFill.fillAmount = percDone;

		}		

		protected override int stageCount 
		{
			get 
			{
				if (UILoadData.instance.NextSceneName == "DebugArena")
					return 1;
				return STAGE_COUNT;
			}
		}
	}
}
