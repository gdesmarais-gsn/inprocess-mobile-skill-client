using GSN.Skill.Events;
using GSN.Skill.Phoenix;

namespace GSN.Skill.Phoenix.QA
{
	public class LoginTest_LoginFail : LoginTest_LoginBase
	{
		protected override void OnLoginSuccess(IEvent evt)
		{
			IntegrationTest.Fail();
		}

		protected override void OnWebFailure(IEvent evt)
		{

			var errEvt = evt as WebRequestErrorEvent;
			IntegrationTest.Pass(gameObject);
		}

		protected override void OnInputFailure(IEvent evt)
		{
			var errEvt = evt as HandledInputErrorEvent;
			IntegrationTest.Pass(gameObject);
		}
	}
}