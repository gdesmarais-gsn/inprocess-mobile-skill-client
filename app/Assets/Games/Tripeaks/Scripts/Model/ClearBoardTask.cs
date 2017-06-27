using System;
using GSN.Skill.Games.Common.Tasks;

namespace GSN.Skill.Games.Tripeaks
{

	public class ClearBoardTask : GsnTaskBase
	{

		private GameModel _model;
		public ClearBoardTask(GameModel model, int inDelay)
		{
			_model = model;
			wakeUpTime = model.GetStateTime() + inDelay; 
		}

		public override void Run()
		{
			_model.OnGameSettled();			
			UnSchedule();
		}
	}
}
