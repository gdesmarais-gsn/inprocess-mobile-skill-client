using UnityEditor;
using UnityEngine;
using GSN.Skill.Games.Common.Editor.Utils;

namespace GSN.Skill.Games.Common.Client.Audio
{
	[CustomPropertyDrawer(typeof(EnumeratedUIInfoTab))]
    public class EnumeratedUITabDrawer : EnumeratedArrayDrawer<UIInfoTab> {
    }

	[CustomPropertyDrawer(typeof(EnumeratedGameObjectArray))]
	public class EnumeratedGameObjectArrayDrawer : EnumeratedArrayDrawer<GameObject> {
	}
}

