using System;
using GSN.Skill.Games.Common.Tasks;

namespace GSN.Skill.Games.Tripeaks
{
	public class DynamiteCountdownTask: GsnTaskBase
	{
		private int _timeLeftMS;
		private int _cardID;
		private GameModel _model;
		private TriPeaksCard _card;
		private const int TIME_STEP = 100;
		public DynamiteCountdownTask(GameModel model, int countdownSecs, int cardID, TriPeaksCard card)
		{
			_model = model;
			// Conver this to MS.
			_timeLeftMS = countdownSecs * 1000;
			_cardID = cardID;
			wakeUpTime = model.GetStateTime() + TIME_STEP;
			_card = card;
		}
	
		public override void Run()
		{
			_timeLeftMS -= TIME_STEP;
			_model.AdvanceCountdownTimer(_cardID, _timeLeftMS/1000);
			if ( _timeLeftMS <= 0 )
			{
				_card.clearCountdownTask();
				UnSchedule();
			}
			else
				wakeUpTime += TIME_STEP;
		}
		
		public void Rewind(int absoluteTimeMS)
		{
			int timeSteps = (wakeUpTime - absoluteTimeMS) / TIME_STEP;
			
			SetWakeUpTime(wakeUpTime - timeSteps * TIME_STEP);
			_timeLeftMS += timeSteps * TIME_STEP;
		}

	};
}
