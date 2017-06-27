using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using GSN.Skill.Games.Common.Tutorial.Unity;
using GSN.Skill.Games.Common.Client.Game;
using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common.Tutorial;

namespace GSN.Skill.Games.Tripeaks
{
    public class TriPeaksTutorialStepController : TutorialStepController
    {
        public List<int> cardIdsToAdvance = new List<int>();
        public List<int> cardIdsToHighlightSelect = new List<int>();
        public List<int> cardIdsToHighlightDestination = new List<int>();

        public float autoHideDuration = 0;

        public bool animateIn = true;
        public bool animateOut = true;
        public Animator animator;

        private const float ANIMATE_IN_TIME = .3f;
        private const float OVERLAY_DELAY = .1f;
        private const float DIALOG_DELAY = .3f;

        private const string ANIM_TUTORIAL_IN = "Tutorial_In";
        private const string ANIM_TUTORIAL_IN_IDLE = "Tutorial_In_Idle";
        private const string ANIM_TUTORIAL_OUT = "Tutorial_Out";

        public override void OnShow()
        {
            StartCoroutine(AnimateTutorialIn());
        }

        private IEnumerator AnimateTutorialIn()
        {
            if (animateIn && animator != null)
            {
                yield return new WaitForSeconds(DIALOG_DELAY);
                animator.Play(ANIM_TUTORIAL_IN);
                yield return new WaitForSeconds(ANIMATE_IN_TIME);
            }
            else
                animator.Play(ANIM_TUTORIAL_IN_IDLE);

            // turn on any custom overlays
            StartCoroutine(AddOverlayHelper(cardIdsToHighlightSelect, CardType.TutorialSelect));

            yield return new WaitForSeconds(OVERLAY_DELAY);

            StartCoroutine(AddOverlayHelper(cardIdsToHighlightDestination, CardType.TutorialDestination));
            base.OnShow();

            if (autoHideDuration > 0)
            {
                yield return new WaitForSeconds(autoHideDuration);
                Advance();
            }
        }

        private IEnumerator AddOverlayHelper( List<int> cardList, CardType cardType)
        {
            View view = (View)ViewBase.Instance;
            foreach (int cardId in cardList)
            {
                Card card = view._board.FindCardWithCardID(cardId);
                if (card == null)
                {
                    GsnDebug.LogError("Missing Tutorial card " + cardId);
                }
                else
                {
                    view._board.AddOverlay(card, cardType);
                    yield return new WaitForSeconds(OVERLAY_DELAY);
                    card.OverlayAppear();
                }
            }
        }

        public override void OnHide(TutorialStepPrefabBase prefabBase)
        {
            StartCoroutine(AnimateTutorialOut(prefabBase));
        }

        private IEnumerator AnimateTutorialOut(TutorialStepPrefabBase prefabBase)
        {
            if (animateOut && animator != null)
            {
                animator.Play(ANIM_TUTORIAL_OUT);
                yield return new WaitForSeconds(ANIMATE_IN_TIME);
            }
            // Hide any overlays we created
            HideOverlayHelper(cardIdsToHighlightSelect);
            HideOverlayHelper(cardIdsToHighlightDestination);
            base.OnHide(prefabBase);
        }

        private void HideOverlayHelper(List<int> cardList)
        {
            View view = (View)ViewBase.Instance;
            foreach (int cardId in cardList)
            {
                Card card = view._board.FindCardWithCardID(cardId);
                if (card == null)
                {
                    GsnDebug.LogError("Missing Tutorial card " + cardId);
                }
                else
                {
                    card.ClearOverlay();
                }
            }
        }

        public void Advance()
        {
            TutorialManager.instance.HideShownStep();
        }

        public void EndTutorial()
        {
            View view = (View)ViewBase.Instance;
            view.TutorialComplete();
        }


        public bool CardWillAdvance(int cardId)
        {
            if (cardIdsToAdvance.Contains(cardId))
            {
                return true;
            }
            return false;            
        }

        public void ProcessCardClicked(int cardId)
        {
            if (cardIdsToAdvance.Contains(cardId))
            {
                Advance();
            }
        }
    }
}
