using GSN.Skill.Events;
using GSN.Skill.Phoenix;

namespace GSN.Skill.Phoenix.QA
{
	public class LoginTest_LoginSuccess : LoginTest_LoginBase
	{
		protected override void OnLoginSuccess(IEvent evt)
		{
			IntegrationTest.Pass();
		}

		protected override void OnWebFailure(IEvent evt)
		{
			var errEvt = evt as WebRequestErrorEvent;
			IntegrationTest.Fail(gameObject);
		}


		int inputFailCount = 0;
		protected override void OnInputFailure(IEvent evt)
		{
			++inputFailCount;
			if( inputFailCount > 1 )
			{
				var errEvt = evt as HandledInputErrorEvent;
				IntegrationTest.Fail(gameObject);
			}
		}
	}
}