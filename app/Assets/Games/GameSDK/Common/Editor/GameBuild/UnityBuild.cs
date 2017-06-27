using System.Collections.Generic ;
using System.Xml;

namespace GSN.Skill.Games.Common.Build
{
	public class UnityBuild  {

		public UnityBuild(XmlNode node)
		{
			Games = new List<BuildGame> ();
		
			// Get the asset sets
			XmlNodeList xnList = node.SelectNodes ("Games");
				
			foreach (XmlNode games in xnList) {		
				XmlNodeList gamesList = games.SelectNodes ("Game");
				foreach (XmlNode game in gamesList) {
					Games.Add(new BuildGame(game));
				}
			}
		}
        
		public List<BuildGame> Games { get; private set; }
	}
}

