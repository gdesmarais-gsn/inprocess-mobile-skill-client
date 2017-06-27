using GSN.Skill.Games.Common.Tasks;

namespace GSN.Skill.Games.Tripeaks
{

	public class EndReshuffleTask : GsnTaskBase
	{

		private GameModel _model;
		public EndReshuffleTask(GameModel model)
		{
			_model = model;
			wakeUpTime = model.GetStateTime() + _model.GetTweakable(GameModel.TWEAK_RESHUFFLE_TIME); 
		}

		public override void Run()
		{
			_model.EndReshuffle();
			UnSchedule();
		}
	}
}
