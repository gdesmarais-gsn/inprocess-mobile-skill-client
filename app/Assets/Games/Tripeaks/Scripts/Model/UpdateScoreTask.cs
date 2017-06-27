using GSN.Skill.Games.Common.Tasks;

namespace GSN.Skill.Games.Tripeaks
{

	public class UpdateScoreTask : GsnTaskBase
	{

		private GameModel _model;
		private UpdateScoreEvent _updateScoreEvent;
		public UpdateScoreTask(GameModel model, UpdateScoreEvent inUpdateScoreEvent, int inDelay)
		{
			_updateScoreEvent = inUpdateScoreEvent;
			_model = model;
			wakeUpTime = model.GetStateTime() + inDelay; 
		}

		public override void Run()
		{
			_model.DispatchEvent (_updateScoreEvent);				
			UnSchedule();
		}
	}
}
