#if UNITY_EDITOR
using UnityEditor;
#endif
using GSN.Skill.Utils;

namespace GSN.Skill.Phoenix.Strings
{
	[InitializeOnLoad]
	class LoadStringTable
	{
		static LoadStringTable()
		{
			PhoenixStringTable.SetTable();
		}
		// TODO: Need to be able to refresh from back end data.
	}
}
