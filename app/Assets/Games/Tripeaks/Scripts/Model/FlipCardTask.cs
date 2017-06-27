using System.Collections.Generic;
using GSN.Skill.Games.Common.Tasks;

namespace GSN.Skill.Games.Tripeaks
{

	public class FlipCardTask : GsnTaskBase
	{
		private GameModel _model;
		private List<int> _faceUpCards;
		
		public FlipCardTask(GameModel model, List<int> inFaceUpCards, int inDelay)
		{
			_model = model;
			_faceUpCards = inFaceUpCards;
			wakeUpTime = model.GetStateTime() + inDelay; 
		}

		public override void Run()
		{
			_model.DispatchEvent (new FlipCardEvent (_faceUpCards));
			UnSchedule();
		}
	}
}
