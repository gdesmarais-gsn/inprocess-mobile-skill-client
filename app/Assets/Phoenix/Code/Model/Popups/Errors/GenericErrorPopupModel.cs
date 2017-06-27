using System;
using GSN.Skill.Events;

namespace GSN.Skill.Phoenix.Model.Popups
{
	public class GenericErrorPopupModel : IPopupModel
	{
		public PopupType type { get { return PopupType.ErrorWebRequest; } }

		private ErrorData _errorData;

		public GenericErrorPopupModel(ErrorData errorData)
		{
			_errorData = errorData;
		}

		public void OnOpen()
		{
			EventDispatcher.DispatchEvent(new WebRequestErrorEvent(_errorData));
		}

		public void OnClose()
		{
			ErrorManager.Instance.ClearCurrentError();
		}
	}
}
