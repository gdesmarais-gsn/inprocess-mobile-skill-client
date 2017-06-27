using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using GSN.Skill.Events;
using GSN.Skill.Phoenix;
using GSN.Skill.Phoenix.Model;

namespace GSN.Skill.Phoenix.QA
{
	public class LoginTest_Popup : MonoBehaviour 
	{
		public string loginButtonName;

		void Start ()
		{
			EventDispatcher.AddListener<LoginPopupInitEvent>(OnLoginPopupInitEvent);
			EventDispatcher.AddListener<ScreenChangeEvent>(OnWelcomeScreen);
		}

		void OnWelcomeScreen(IEvent evt)
		{
			ScreenChangeEvent scEvt = evt as ScreenChangeEvent;

			if( ScreenType.Welcome == scEvt.type )
			{
				StartCoroutine( ClickSignIn() );
			}
		}

		IEnumerator ClickSignIn()
		{
			// the Welcome screen comes up in response to this event.  Give it a moment
			// to activate.
			yield return new WaitForEndOfFrame();

			GameObject loginBtn = GameObject.Find(loginButtonName);
			if( null == loginBtn )
			{
				IntegrationTest.Fail(gameObject, "Could not find LoginButton");
			}
			else
			{
				loginBtn.GetComponent<Button>().onClick.Invoke();
			}
		}

		void OnLoginPopupInitEvent(IEvent evt)
		{
			IntegrationTest.Pass(gameObject);
		}
	}
}