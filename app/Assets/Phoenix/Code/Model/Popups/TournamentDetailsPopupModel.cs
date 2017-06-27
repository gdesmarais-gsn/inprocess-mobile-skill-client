using System;
using GSN.Skill.Events;

namespace GSN.Skill.Phoenix.Model.Popups
{
	public class TournamentDetailsPopupModel : IPopupModel
	{
		public PopupType type { get { return PopupType.TournamentDetails; } }
        public int totalCashGamePlays { get { return _totalCashGamePlays; } }
        public int totalSpecificGamePlays { get { return _totalSpecificGamePlays; } }

		private TournamentGameListEvent.TournamentData _tournData;
        private int _totalCashGamePlays;
        private int _totalSpecificGamePlays;

		public TournamentDetailsPopupModel(TournamentGameListEvent.TournamentData tournData,
                                           int cashGamePlays,
                                           int specificGamePlays)
		{
			_tournData = tournData;
            _totalCashGamePlays = cashGamePlays;
            _totalSpecificGamePlays = specificGamePlays;
		}

		public void OnOpen()
		{
			TournamentDetailsReadyEvent evt = new TournamentDetailsReadyEvent();
			evt.details = _tournData;
            evt.totalCashGamePlays = _totalCashGamePlays;
            evt.totalSpecificGamePlays = _totalSpecificGamePlays;
			EventDispatcher.DispatchEvent(evt);
		}

		public void OnClose()
		{
			// handle functionality when the popup is closing
		}
	}
}
