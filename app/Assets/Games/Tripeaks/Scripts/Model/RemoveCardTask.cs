using GSN.Skill.Games.Common.Tasks;

namespace GSN.Skill.Games.Tripeaks
{

	public class RemoveCardTask : GsnTaskBase
	{

		private GameModel _model;
		private int _cardId;
		public RemoveCardTask(GameModel model, int inCardId, int inDelay)
		{
			_cardId = inCardId;
			_model = model;
			wakeUpTime = model.GetStateTime() + inDelay; 
		}

		public override void Run()
		{
			_model.DispatchEvent (new RemoveCardEvent (_cardId));				
			UnSchedule();
		}
	}
}
