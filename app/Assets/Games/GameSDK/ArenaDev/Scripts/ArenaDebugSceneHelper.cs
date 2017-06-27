using UnityEngine;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Client.DebugMenu
{
	public class ArenaDebugSceneHelper : MonoBehaviour
	{
		void Update()
		{
			GlobalActionQueue.instance.Process ();
		}
	}
}

