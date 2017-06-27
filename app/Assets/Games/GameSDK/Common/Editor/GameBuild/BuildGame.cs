using System;
using System.Collections.Generic ;
using System.Xml;

namespace GSN.Skill.Games.Common.Build {
	public class BuildGame {
		public List<string> Scenes { get; private set; }

		public BuildGame(XmlNode node)
		{
			if (node == null) 
			{
				throw new Exception("Node is null");
			}
			String gameId = node.Attributes ["id"].Value;
			string basePath = node.Attributes["basePath"].Value;
			string title = node.Attributes["title"].Value;
          
            if (String.IsNullOrEmpty (gameId) || String.IsNullOrEmpty (basePath) || String.IsNullOrEmpty (title))
				throw new Exception("Node is malformed");

			GameId = gameId ;
			BasePath = basePath ;
			Title = title ;
			// Get the asset sets

			Scenes = new List<string>();

			XmlNodeList xnList = node.SelectNodes("Scenes");

			foreach(XmlNode scenes in xnList) 
			{		
				XmlNodeList sceneList = scenes.SelectNodes("Scene");
				foreach(XmlNode scene in sceneList)
				{
					string path = scene.Attributes["path"].Value;
					Scenes.Add(path);
                }
            }
  		}

		#region Properties
		/// <summary>
		/// Get the game identifier.
		/// </summary>
		/// <value>
		/// The game identifier.
		/// </value>
		public string GameId { get ; private set ; }

		/// <summary>
		/// Get the base path to game assets relative to the <c>Assets</c> folder
		/// </summary>
		/// <value>
		/// The base asset path
		/// </value>
		public string BasePath { get ; private set ; }

		/// <summary>
		/// Get the title of the game
		/// </summary>
		/// <value>
		/// The game title
		/// </value>
		public string Title { get ; private set ; }

		#endregion
	}
}

