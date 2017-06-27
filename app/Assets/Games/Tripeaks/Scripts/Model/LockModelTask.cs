using System;
using GSN.Skill.Games.Common.Tasks;

namespace GSN.Skill.Games.Tripeaks
{

	public class LockModelTask : GsnTaskBase
	{

		private GameModel _model;
		public LockModelTask(GameModel model)
		{
			_model = model;
		}

		public override void Run()
		{
			_model.inputBlocked = false;
			UnSchedule();
		}
	}
}
