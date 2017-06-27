using GSN.Skill.Games.Common.Primitive.Card;

namespace GSN.Skill.Games.Tripeaks
{        
	public class TriPeaksCard : GsnStandardCard
	{         
		public const string TRIPEAKSTYPE = "TriPeaksCard";

		public int activationCounter { get; protected set; }
		private DynamiteCountdownTask _countdownTask;
		
		public TriPeaksCard(Suits suit, Ranks rank, int value, int flags, int sortValue)
		:base(suit ,rank, value, flags, sortValue, TRIPEAKSTYPE)
		{
			
		}
	
		public void ApplyFlagsFromData(GameModel gameModel, BaseCardData data)
		{
			if ( data.cardType == CardType.HazardDynamite && gameModel.HasOption(GameModel.OPTIONS_DYNAMITE_HAZARD_ID))
				SetFlag(GameModel.DYNAMITE_FLAG, true);
				
			if ( data.cardType == CardType.HazardTrap && gameModel.HasOption(GameModel.OPTIONS_TRAP_HAZARD_ID))
				SetFlag(GameModel.TRAP_FLAG, true);
				
		   //GsnDebug.Log("Apply flag "+data.cardType);
		}
		
		public void ActivateFaceUpEffects(GameModel gameModel, int cardId, int timeDelay = 0)
		{
			if ( HasFlag(GameModel.DYNAMITE_FLAG) )
			{
                
				int useTimeBasedBombs = gameModel.GetTweakable(GameModel.TWEAK_USE_TIME_BASED_BOMBS);      
				if (useTimeBasedBombs == 0 )
				{
					activationCounter = gameModel.GetTweakable(GameModel.TWEAK_BOMBS_TURNS_MAX);
					activationCounter += 1; // offset for the turn exposed
				}  
				else 
				{
					activationCounter = gameModel.GetTweakable(GameModel.TWEAK_BOMBS_TIME_MAX);  
					_countdownTask = new DynamiteCountdownTask(gameModel, activationCounter, cardId, this);    
					gameModel._scheduler.Add(_countdownTask); 
					_countdownTask.wakeUpTime += timeDelay;
				}
			}     
		}
		
		public void KillFaceUpEffectTimers()
		{
			if  (_countdownTask != null)
            {
				_countdownTask.UnSchedule();
            }
		}
		
		public void AdvanceTurn(GameModel gameModel)
		{
			if ( HasFlag(GameModel.DYNAMITE_FLAG) )  
			{
				int useTimeBasedBombs = gameModel.GetTweakable(GameModel.TWEAK_USE_TIME_BASED_BOMBS);      
				if (useTimeBasedBombs == 0 )
					--activationCounter;
			}	
		}
		
		public void SetActivationCounter(GameModel gameModel, int activationCounter)
		{
			if ( HasFlag(GameModel.DYNAMITE_FLAG) )  
				this.activationCounter = activationCounter;		
		}
		
		public void UpdateUI(GameModel gameModel, int cardID)
		{
			if ( HasFlag(GameModel.DYNAMITE_FLAG) )    
			{
				gameModel.DispatchEvent (new UpdateDynamiteCounterEvent (cardID, activationCounter));
			}
		}
		
		public bool EndsGame( GameModel gameModel )
		{
			if ( HasFlag(GameModel.DYNAMITE_FLAG))        
				return activationCounter <= 0;
			return false;
		}

		public void clearCountdownTask()
		{
            KillFaceUpEffectTimers();
			_countdownTask = null;
		}

		public override void Rewind(int stateTimeMS)
		{
			if (_countdownTask == null)
				return;

			_countdownTask.Rewind(stateTimeMS);
		}
	}
}
