using GSN.Skill.Games.Common.Tasks;

namespace GSN.Skill.Games.Tripeaks
{

	public class ConfigureGameBeginGameTask : GsnTaskBase
	{
		private GameModel _model;
		public ConfigureGameBeginGameTask(GameModel model)
		{
			_model = model;
			wakeUpTime = model.GetStateTime() + GameModel.START_BUILD_PLAYFIELD_TIME; // Delay this until the deal pile is done
		}

		public override void Run()
		{
			_model.ConfigureGameBeginGame();
			_model.inputBlocked = false;
			UnSchedule();
		}
	}
}
