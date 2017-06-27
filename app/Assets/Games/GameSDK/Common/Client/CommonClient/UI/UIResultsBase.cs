using GSN.Skill.Games.Common.Client.Game;
using UnityEngine;

namespace GSN.Skill.Games.Common.Client
{
	/// <summary>
	/// This class is the Base class for displaying results in the UI. 
	/// </summary>
	public abstract class UIResultsBase : MonoBehaviour
	{
		/// <summary>
		/// This function will be overriden in the game specific Results Screen.  This is called when the game is fully over
		/// </summary>
		/// <param name="ee">End Event.</param>
		public abstract void Show ();

		protected abstract void Hide ();

		protected void OnHidden()
		{
			ViewBase.Instance.GameClientComplete();
		}

		/// <summary>
		/// This function is called whent he results dialog is dismissed.
		/// </summary>
		public virtual void OnContinueClick()
		{
			Hide ();
		}
	}
}
