using System;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Phoenix.Model;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.Utils
{
	public static class LoginUtilities
	{
		private const string CAPTCHA_ERROR_CODE = "loginFailedExceeded";

		public static bool HandleCaptchaError(AccountLoginData.Result loginResult)
		{
			if (!loginResult.info.HasValue)
				return false;

			if (loginResult.info.Value.code == CAPTCHA_ERROR_CODE)
			{

				ErrorManager.Instance.HandleUserError(ErrorType.Login, StringTable.Instance.GetEntry(CategoryLogin.ErrorTempLockedAccount));
			}
			else
			{
				GsnDebug.LogError("We got into a weird login state.  Code:", loginResult.info.Value.code);
			}

			return true;
		}
	}
}

