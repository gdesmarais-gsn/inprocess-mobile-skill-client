using GSN.Skill.Games.Common.Client.Game;
using GSN.Skill.Games.Common.Model;
using GSN.Skill.Games.Common.Utils;
using UnityEngine;

namespace GSN.Skill.Games.Tripeaks
{
	public class Game : GameBase
	{
		public override void Awake()
		{
			new TriPeaksStringTable();
			new TriPeaksAnalytics ();
			base.Awake ();
		}

		public override string GetGameName() {
			return "TriPeaks";
		}

		public override GameModelBase CreateModel(string dataPath)
		{
			return new GameModel(dataPath);
		}
		
		public override ViewBase CreateView()
		{
			return GetComponentInChildren<View>();
		}
		
		public override ControllerBase CreateController()
		{
			GameObject obj = new GameObject ("Controller");
			ControllerBase con = obj.AddComponent<Controller> ();
			return con;
		}

		protected override void CreateAnalyticsSender ()
		{
			
		}

		protected override void CreateGameModelProxy ()
		{
			new GameModelProxyBase ();
		}
   }
}
