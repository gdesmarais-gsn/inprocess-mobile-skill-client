using GSN.Skill.Games.Common.Tasks;

namespace GSN.Skill.Games.Tripeaks
{

	public class RemoveTrapTask : GsnTaskBase
	{

		private GameModel _model;
		private int _cardId;
		public RemoveTrapTask(GameModel model, int inCardId, int inDelay)
		{
			_cardId = inCardId;
			_model = model;
			wakeUpTime = model.GetStateTime() + inDelay; 
		}

		public override void Run()
		{
			_model.DispatchEvent (new RemoveTrapEvent (_cardId));				
			UnSchedule();
		}
	}
}
