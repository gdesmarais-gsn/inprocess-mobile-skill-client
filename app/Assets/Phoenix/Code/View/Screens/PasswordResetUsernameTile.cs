using UnityEngine.UI;
using GSN.Skill.Phoenix.View.Pool;
using TMPro;

namespace GSN.Skill.Phoenix.View
{
    public class PasswordResetUsernameTile : PooledGameObject
    {
        public TextMeshProUGUI username;
        public Toggle toggle;

		void OnEnable()
		{
            toggle.isOn = false;
		}

		void OnDisable()
		{
			
		}
    }
}
