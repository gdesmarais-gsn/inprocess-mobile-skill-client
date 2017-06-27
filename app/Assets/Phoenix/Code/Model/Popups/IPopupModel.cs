namespace GSN.Skill.Phoenix.Model.Popups
{
	public interface IPopupModel
	{
		/// <summary>
		/// Provides the type of popup this is
		/// </summary>
		/// <value>The type.</value>
		PopupType type { get; }

		/// <summary>
		/// Initialize the popup when the popup is being displayed
		/// </summary>
		void OnOpen();

		/// <summary>
		/// Handle any model data while closing the popup
		/// </summary>
		void OnClose();
	}
}
