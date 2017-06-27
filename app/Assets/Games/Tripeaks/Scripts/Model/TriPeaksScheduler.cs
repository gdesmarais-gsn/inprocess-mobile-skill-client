using GSN.Skill.Games.Common.Tasks;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Tripeaks
{
	public class TriPeaksScheduler: GsnScheduler
	{
		private GameModel _gameModel;
		private bool _sentClearEvent = false;
		public TriPeaksScheduler(GameModel gameModel)
		{
			GsnDebug.Log("TriPeaksScheduler");
			_gameModel = gameModel;
		}

		public override void OnIdle(int t)
		{
			GsnDebug.Log("onIdle");
			if (!_sentClearEvent && _gameModel.triggerClearBoardEvent)
			{
				_sentClearEvent = true;
				Add(new ClearBoardTask(_gameModel, 100));
			}
			
		}
	
	};
}
