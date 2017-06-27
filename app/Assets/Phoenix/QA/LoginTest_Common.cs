using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using GSN.Skill.Events;
using GSN.Skill.Phoenix;

using GSN.Skill.Phoenix.View;

namespace GSN.Skill.Phoenix.QA
{
	public abstract class LoginTest_LoginBase : MonoBehaviour 
	{
		public string loginUser;
		public string loginPassword;
		public string loginUserFieldName;
		public string loginPasswordFielddName;
		public string submitCredsButtonName;

		// Use this for initialization
		protected virtual void Start ()
		{
			EventDispatcher.AddListener<LoginSuccessEvent>(OnLoginSuccess);
			EventDispatcher.AddListener<WebRequestErrorEvent>(OnWebFailure);
			EventDispatcher.AddListener<HandledInputErrorEvent>(OnInputFailure);

			StartCoroutine( DoLoginInput() );
		}

		protected virtual void OnDisable()
		{
			EventDispatcher.RemoveListener<LoginSuccessEvent>(OnLoginSuccess);
			EventDispatcher.RemoveListener<WebRequestErrorEvent>(OnWebFailure);
			EventDispatcher.RemoveListener<HandledInputErrorEvent>(OnInputFailure);
		}

		protected IEnumerator DoLoginInput()
		{
			yield return new WaitForSeconds(2);

			GameObject userField = GameObject.Find(loginUserFieldName);
			GameObject passwordField = GameObject.Find(loginPasswordFielddName);

			userField.GetComponent<GsnInputField>().SetFieldText(loginUser);
			passwordField.GetComponent<GsnInputField>().SetFieldText(loginPassword);

			GameObject submitBtn = GameObject.Find(submitCredsButtonName);
			submitBtn.GetComponent<Button>().onClick.Invoke();
		}

		protected abstract void OnLoginSuccess(IEvent evt);
		protected abstract void OnWebFailure(IEvent evt);
		protected abstract void OnInputFailure(IEvent evt);
	}
}