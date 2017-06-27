using GSN.Skill.Games.Common.Tasks;

namespace GSN.Skill.Games.Tripeaks
{
	public class ClickCardTask: GsnTaskBase
	{
		private bool _result;
		private int _cardID;
		private GameModel _model;
		public ClickCardTask(GameModel model, bool result, int cardID, int inWakeUpTime)
		{
			_model = model;
			_result = result;
			_cardID = cardID;
			wakeUpTime = model.GetStateTime() + inWakeUpTime;
		}
	
		public override void Run()
		{
			_model.DispatchEvent (new CardClickResultEvent (_result, _cardID));
			UnSchedule();
		}
	};
}
