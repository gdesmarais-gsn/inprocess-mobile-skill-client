using GSN.Skill.Events;
using UnityEngine;

namespace GSN.Skill.Phoenix.View
{
	public class PopupView : ScreenView
	{
		protected long _uid { get; private set; }

		public virtual void Init(long uid)
		{
			_uid = uid;
		}

        protected override void OnEnable()
        {
            EventDispatcher.AddListener<FetchPopupBeginEvent>(OnFetchPopupBeginEvent);
            EventDispatcher.AddListener<FetchPopupCompleteEvent>(OnFetchPopupCompleteEvent);
        }

        protected override void OnDisable()
        {
			_uid = -1;

            EventDispatcher.RemoveListener<FetchPopupBeginEvent>(OnFetchPopupBeginEvent);
            EventDispatcher.RemoveListener<FetchPopupCompleteEvent>(OnFetchPopupCompleteEvent);
        }

        protected virtual void OnFetchPopupBeginEvent(IEvent e)
        {
        }

        protected virtual void OnFetchPopupCompleteEvent(IEvent e)
        {
        }

        protected override void Hide()
		{
			controller.RemovePopup(_uid);
			Free();
		}
	}
}