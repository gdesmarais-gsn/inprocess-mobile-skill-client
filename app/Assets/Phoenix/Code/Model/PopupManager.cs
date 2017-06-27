﻿using System.Collections.Generic;
using System.Linq;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.Model.Popups;
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.Model
{
	public enum PopupType
	{
		None,
		Login,
		Registration,
		TournamentResult,
		TournamentDetails,
		Deposit,
		Profile,
		ErrorWebRequest,
		ErrorVerifyPassword,
		ErrorGpsPermission,
		ErrorGpsDenied,
		ResetPassword,
		Rewards,
		WebView
	}

	public class PopupManager : Singleton<PopupManager>
	{
		/// <summary>
		/// Unique Identifier counter for every popup
		/// </summary>
		private static long _uidCounter = 0;

		private Queue<IPopupModel> _popupQueue = new Queue<IPopupModel>();

		/// <summary>
		/// This sorted dictionary represents all popups being displayed where the key is the unique identifier and the
		/// value is the popup itself. The top most item is the largest uid or the latest addition to the list
		/// </summary>
		private SortedDictionary<long, IPopupModel> _currentPopups = new SortedDictionary<long, IPopupModel>();

		public PopupManager() { }

		public PopupType GetTopPopupType()
		{
			return _currentPopups.Values.Last().type;
		}

		public void SetPopup(IPopupModel popup)
		{
			if (!ValidatePopup(popup.type))
			{
				// queue up this popup
				_popupQueue.Enqueue(popup);
				return;
			}

			long uid = GetUID();

			// add popup to the stack of popups
			_currentPopups.Add(uid, popup);

			GsnDebug.Log("Model Popup: " + popup.ToString());

			// dispatch popupevent so that the popup can be instantiated on the view
			EventDispatcher.DispatchEvent(new PopupEvent(uid, popup.type));
			// popup is instantiated on the view. setup the popup content
			popup.OnOpen();
		}

		public void RemovePopup(long uid)
		{
			if (_currentPopups.Count == 0)
			{
				GsnDebug.LogError("Cannot remove a popup that does not exist.");
				return;
			}

			if (!_currentPopups.ContainsKey(uid))
			{
				GsnDebug.LogError("Popup with uid:", uid, "does not exist.");
				return;
			}

			IPopupModel popup = _currentPopups[uid];
			popup.OnClose();
			EventDispatcher.DispatchEvent(new PopupCloseEvent(uid, popup.type));
			_currentPopups.Remove(uid);

			if (_currentPopups.Count == 0 && // no more popups are showing!
				_popupQueue.Count > 0) // there are popups that need to be shown
			{
				// show next popup
				SetPopup(_popupQueue.Dequeue());
			}
		}

		public void RemovePopup(IPopupModel popup)
		{
			foreach (var entry in _currentPopups)
			{
				if (entry.Value == popup)
				{
					// we've found the matching popup. remove it
					RemovePopup(entry.Key);
					break;
				}
			}
		}

		public void ClearQueuedPopups()
		{
			_popupQueue.Clear();
		}

		public void Reset()
		{
			ClearQueuedPopups();

			foreach (var entry in _currentPopups)
			{
				entry.Value.OnClose();
				_currentPopups.Remove(entry.Key);
			}
		}

		private long GetUID()
		{
			return ++_uidCounter;
		}

		private bool ValidatePopup(PopupType type)
		{
			if (_currentPopups.Count == 0)
				return true; // the queue is empty. show it

			// Queue is not empty, but it could be a subpopup that we allow,
			// which in most cases is an error popup
			switch (type)
			{
				case PopupType.ErrorWebRequest:
				case PopupType.ErrorVerifyPassword:
				case PopupType.ErrorGpsPermission:
				case PopupType.ErrorGpsDenied:
				case PopupType.WebView:
					return true;
				default:
					return false;
			}
		}
	}
}
