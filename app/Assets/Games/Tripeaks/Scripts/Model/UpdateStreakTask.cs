using GSN.Skill.Games.Common.Tasks;

namespace GSN.Skill.Games.Tripeaks
{

	public class UpdateStreakTask : GsnTaskBase
	{

		private GameModel _model;
		private UpdateStreakEvent _updateStreakEvent;
		public UpdateStreakTask(GameModel model, UpdateStreakEvent inUpdateStreakEvent, int inDelay)
		{
			_updateStreakEvent = inUpdateStreakEvent;
			_model = model;
			wakeUpTime = model.GetStateTime() + inDelay; 
		}

		public override void Run()
		{
			_model.DispatchEvent (_updateStreakEvent);				
			UnSchedule();
		}
	}
}
