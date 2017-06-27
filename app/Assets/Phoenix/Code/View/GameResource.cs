using GSN.Skill.Phoenix.Strings;
using UnityEngine;

namespace GSN.Skill.Phoenix.View
{
	/// <summary>
	/// Used to store references to game specific theming and resources
	/// </summary>
	public class GameResource : ScriptableObject
	{
		public GameObject gameTileButton;
		public GameObject gameTile;
		public GameObject tournamentHeader;
		public Sprite tournamentEndCap;
		public Sprite navBarGameTile;
		public Color textColor = Color.white;
		public Color tournamentFooterColor = Color.white;
		public Color loaderBackgroundColor = Color.white;
		public Color loaderReflectionColor = Color.white;
        public CategoryGameDescription tournamentHeaderText;
	}
}
