using System;
using UnityEngine;
using System.Collections;

namespace GSN.Skill.Games.Common.Client
{
	/// <summary>
	///  This class is a generic yes no dialog class.  Deriving this will allow you to create a dialog with a header and a message. 
	/// You can also override the Yes and No Buttons to do what you want
	/// </summary>
	public abstract class UIGenericYesNoDialog : MonoBehaviour
	{
		public Action CancelAction;
		public Action ConfirmAction;

		/// <summary>
		/// Sets the header.
		/// </summary>
		/// <value>The header.</value>
		public abstract string header { set;}

		/// <summary>
		/// Sets the message.
		/// </summary>
		/// <value>The message.</value>
		public abstract string message { set;}

		/// <summary>
		/// This is called when the user clicks cancel
		/// </summary>
		public virtual void OnCancelClick()
		{
			StartCoroutine(Hide (CancelAction));
		}

		/// <summary>
		/// This is called when the user clicks confirm
		/// </summary>
		public virtual void OnConfirmClick()
		{
			StartCoroutine(Hide (ConfirmAction));
		}
		
		public virtual IEnumerator AnimateOut()
		{
			yield return null;
		}

		/// <summary>
		/// This is called whent the dialog is dismissed. It will trigger the Dismiss action if set.
		/// </summary>
		private IEnumerator Hide(Action doneAction)
		{
			yield return StartCoroutine(AnimateOut());

			Debug.Log("Animate out done!");
			
			if (doneAction != null)
			{
				Debug.Log("Called done Action!");

				doneAction();
			}

			gameObject.SetActive(false);

			// TODO: figure out why button hitboxes are off when we don't do this
			transform.SetParent(null, false);

			Debug.Log("Gone Away!");
		}
	}
}

