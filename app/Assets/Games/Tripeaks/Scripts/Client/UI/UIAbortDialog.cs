using UnityEngine;
using System.Collections;
using TMPro;
using GSN.Skill.Games.Common.Client.Game;
using GSN.Skill.Games.Common.Client;
using GSN.Skill.Games.Common.Client.Audio;

namespace GSN.Skill.Games.Tripeaks
{
	public class UIAbortDialog : MonoBehaviour {

		public TextMeshProUGUI headerText;
		public TextMeshProUGUI messageText;

		public Animator animator;

		private const string DIALOG_OPEN = "ANIM_CLIP_DialogOpen";
		private const string DIALOG_CLOSE = "ANIM_CLIP_DialogClose";

		private const float CLOSE_TIME = .5f;

		void Awake()
		{
			if (ViewBase.Instance.InReplay)
			{
				headerText.text = StringTable.instance.GetEntry("ABORT_TITLE_REPLAY");
				messageText.text = StringTable.instance.GetEntry("ABORT_MSG_REPLAY");
			}
			else
			{
				headerText.text = StringTable.instance.GetEntry("ABORT_TITLE");
				messageText.text = StringTable.instance.GetEntry("ABORT_MSG");
			}
		}

		public void onCancelClick()
		{
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.ButtonClick);
			StartCoroutine(animateDialogClose());
		}

		public void onConfirmClick()
		{
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.ButtonClick);
			StartCoroutine(animateDialogClose());
            ViewBase.Instance.OnAbort();
        }

		private IEnumerator animateDialogClose()
		{
			animator.Play(DIALOG_CLOSE);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.UITransitionQuick);

			yield return new WaitForSeconds (CLOSE_TIME);

			GameObject.Destroy(this.gameObject);
		}
	}
}
