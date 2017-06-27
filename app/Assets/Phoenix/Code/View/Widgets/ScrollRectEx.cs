using System;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Serialization;

namespace UnityEngine.UI.Extensions
{
	[AddComponentMenu("UI/Extensions/ScrollRectEx")]
	public class ScrollRectEx : ScrollRect
	{
		private bool routeToParent = false;
        private const float SCROLL_PAST_THRESHOLD = 0.1f;

        // Events for detecting if the user has scrolled past the bottom or top of the scrol area
        public class ScrollPastTopEvent : UnityEvent { }
        public class ScrollPastBottomEvent : UnityEvent { }

        private ScrollPastTopEvent m_OnScrollPastTop = new ScrollPastTopEvent();
        private ScrollPastBottomEvent m_OnScrollPastBottom = new ScrollPastBottomEvent();

        public ScrollPastTopEvent onScrollPastTop
        {
            get { return m_OnScrollPastTop; }
            set { m_OnScrollPastTop = value; }
        }

        public ScrollPastBottomEvent onScrollPastBottom
        {
            get { return m_OnScrollPastBottom; }
            set { m_OnScrollPastBottom = value; }
        }

        private void ScrollPastTop()
        {
            m_OnScrollPastTop.Invoke();
        }

        private void ScrollPastBottom()
        {
            m_OnScrollPastBottom.Invoke();
        }

        /// <summary>
        /// Do action for all parents
        /// </summary>
        private void DoForParents<T>(Action<T> action) where T : IEventSystemHandler
		{
			Transform parent = transform.parent;
			while (parent != null)
			{
				foreach (var component in parent.GetComponents<Component>())
				{
					if (component is T)
						action((T)(IEventSystemHandler)component);
				}
				parent = parent.parent;
			}
		}

		/// <summary>
		/// Always route initialize potential drag event to parents
		/// </summary>
		public override void OnInitializePotentialDrag(PointerEventData eventData)
		{
			DoForParents<IInitializePotentialDragHandler>((parent) => { parent.OnInitializePotentialDrag(eventData); });
			base.OnInitializePotentialDrag(eventData);
		}

		/// <summary>
		/// Drag event
		/// </summary>
		public override void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
		{
			if (routeToParent)
				DoForParents<IDragHandler>((parent) => { parent.OnDrag(eventData); });
			else
				base.OnDrag(eventData);
		}

		/// <summary>
		/// Begin drag event
		/// </summary>
		public override void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
		{
			if (!horizontal && Math.Abs(eventData.delta.x) > Math.Abs(eventData.delta.y))
				routeToParent = true;
			else if (!vertical && Math.Abs(eventData.delta.x) < Math.Abs(eventData.delta.y))
				routeToParent = true;
			else
				routeToParent = false;

			if (routeToParent)
				DoForParents<IBeginDragHandler>((parent) => { parent.OnBeginDrag(eventData); });
			else
				base.OnBeginDrag(eventData);
		}

		/// <summary> 
		/// End drag event
		/// </summary>
		public override void OnEndDrag(UnityEngine.EventSystems.PointerEventData eventData)
		{
			if (routeToParent)
				DoForParents<IEndDragHandler>((parent) => { parent.OnEndDrag(eventData); });
			else
				base.OnEndDrag(eventData);
			routeToParent = false;

            if (verticalNormalizedPosition > (1 + CalculateContentRelativeThreshold()))
                ScrollPastTop();

            if (verticalNormalizedPosition < - CalculateContentRelativeThreshold())
                ScrollPastBottom();

        }

		public override void OnScroll(PointerEventData eventData)
		{
			if (!horizontal && Math.Abs(eventData.scrollDelta.x) > Math.Abs(eventData.scrollDelta.y))
			{
				routeToParent = true;
			}
			else if (!vertical && Math.Abs(eventData.scrollDelta.x) < Math.Abs(eventData.scrollDelta.y))
			{
				routeToParent = true;
			}
			else
			{
				routeToParent = false;
			}

			if (routeToParent)
				DoForParents<IScrollHandler>((parent) =>
				{
					parent.OnScroll(eventData);
				});
			else
				base.OnScroll(eventData);
		}

        float CalculateContentRelativeThreshold()
        {
            return SCROLL_PAST_THRESHOLD * Math.Abs(viewport.sizeDelta.y / content.sizeDelta.y);
        }
	}
}