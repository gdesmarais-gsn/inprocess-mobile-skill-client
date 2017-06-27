using System;
using GSN.Skill.Phoenix.Requests.Account;
using GSN.Skill.Phoenix.Utils.GeoLocation;
using GSN.Skill.Requests;
using GSN.Skill.Utils;
using GSN.Skill.Phoenix.Strings;

namespace GSN.Skill.Phoenix.Model
{
	public enum LocationFailReason
	{
		UserDeclined,
		Gps,
		FailRequest,
		UnauthorizedGame,
		UnauthorizedTournamentFlavor,
		StateFullyIllegal
	}

	public class LocationManager
	{
		private CheckLocationLegalityRequestData _checkLocationLegality;

		private Action _successCallback;
		private Action<LocationFailReason> _failCallback;
		private int _gameId;
		private int _flavorTypeID;
		private bool _cardGamesAllowed = true; // Default to true if we haven't checked geolocation yet.
		private bool _allTournTypesAllowed = true; // Default to true if we haven't checked geolocation yet.
		private bool _locationCheckHasHappened = false;
		public LocationManager()
		{
			_checkLocationLegality = new CheckLocationLegalityRequestData();
		}

		public bool? areCardGamesAllowed()
		{
			if (_locationCheckHasHappened)
				return _cardGamesAllowed;
			return null;
		}
		public bool? areAllTournTypesAllowed()
		{
			if (_locationCheckHasHappened)
				return _allTournTypesAllowed;
			return null;
		}

		/// <summary>
		/// Validates the location.
		/// </summary>
		/// <param name="successCallback">Success callback.</param>
		/// <param name="failCallback">Fail callback.</param>
		/// <param name="gameID">Game ID used to validate a user trying to play a particular game. Default to -1</param>
		/// <param name="flavorTypeID">Flavor ID for a given game. Default to -1</param>
		public void ValidateLocation(Action successCallback, Action<LocationFailReason> failCallback, int gameID = -1, int flavorTypeID = -1)
		{
			_successCallback = successCallback;
			_failCallback = failCallback;

			_gameId = gameID;
			_flavorTypeID = flavorTypeID;

			Geolocation.Instance.GetLocation(StartValidateLocation, OnFailGetLocation);
		}

		private void OnFailGetLocation(GpsResult reason)
		{
			// TODO: Decide if we should provide reason? Don't think we need to at this point because geolocation has already dealt with it
			if (_failCallback != null)
				_failCallback(reason == GpsResult.Denied ? LocationFailReason.UserDeclined : LocationFailReason.Gps);
		}

		private void StartValidateLocation(string location, GeolocationParser geolocationParser)
		{
			GsnDebug.Log("Reverse Geolocation Success:", location);

			_checkLocationLegality.SetGPSData(geolocationParser(location));

			_checkLocationLegality.OnBeginHandler += GlobalFetchEventNotifier.OnBeginFetch;
			_checkLocationLegality.OnCompleteHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;
			_checkLocationLegality.OnFailHandler += GlobalFetchEventNotifier.OnFetchCompleteOrFail;

			_checkLocationLegality.OnCompleteHandler += OnStartValidateLocationFetchComplete;
			_checkLocationLegality.OnFailHandler += OnStartValidateLocationFetchFail;

			WebRequester.Instance.FetchRequest(_checkLocationLegality);
		}

		/// <summary>
		/// This is where we need to valid
		/// </summary>
		/// <param name="request">Request.</param>
		private void OnStartValidateLocationFetchComplete(IWebRequest request)
		{
			_checkLocationLegality.OnCompleteHandler -= OnStartValidateLocationFetchComplete;
			_checkLocationLegality.OnFailHandler -= OnStartValidateLocationFetchFail;
			_locationCheckHasHappened = true;
			ValidateLocation(_checkLocationLegality.Response);
		}

		private void OnStartValidateLocationFetchFail(IWebRequest request)
		{
			_checkLocationLegality.OnCompleteHandler -= OnStartValidateLocationFetchComplete;
			_checkLocationLegality.OnFailHandler -= OnStartValidateLocationFetchFail;

			// dispatch event notifying that LocationCheckResult.LocationVerificationError;
			ErrorManager.Instance.HandleUserError(ErrorType.RestAccount, StringTable.Instance.GetEntry(CategoryCommon.GeneralCommunicationError), () =>
			{
				if (_failCallback != null)
					_failCallback(LocationFailReason.FailRequest);
			});
		}

		/// <summary>
		/// Validates the location.
		/// </summary>
		/// <param name="data">Data.</param>
		private void ValidateLocation(LocationLegalityData data)
		{
			// If we are in a legal location, we are done.
			if (data.result.legal_location)
			{
				_allTournTypesAllowed = true;
				_cardGamesAllowed = true;
				_successCallback();
				return;
			}

			// Otherwise, we have some checking to do.

			if (data.result.allowed_tourn_types != null)
			{
				// we have "allowed tourn type" data, which means card games (and other future types) are allowed, but not "allowed tournament types" type
				_cardGamesAllowed = true;
				_allTournTypesAllowed = false;
			}
			else if (data.result.games_blocked != null)
			{
				// we have "games blocked" data, which means all tournament types (and other future types) are allowed, but not "games blocked" type
				_allTournTypesAllowed = true;
				_cardGamesAllowed = false;
			}

			/// If we have an illegal location, first check to see if we have a game id.  If we don't, we are in the deposit flow.
			if (_gameId == -1)
			{
				// If we get here, then we are in the deposit flow.
				// If we don't have allowed_tourn_types and games_blocked, we are fully illegal.
				if (!_cardGamesAllowed && !_allTournTypesAllowed)
				{
					_failCallback(LocationFailReason.StateFullyIllegal);
				}
				else
				{
					// If we get here, we are partially legal.  Good enough for a deposit.
					_successCallback();
				}

				return; // we finished handling deposit scenario
			}

			// If we get here, the user is trying to sign up for a tournament.

			// See if the response payload has a games_blocked array.
			if (data.result.games_blocked != null )
			{
				// If it does, lets see if we are allowed to play this game for cash.
				for (int i = 0; i < data.result.games_blocked.Length; i++)
				{
					try
					{
						// If we get here, the user can play for cash in other games, just not this one.
						if (Convert.ToInt32(data.result.games_blocked[i]) == _gameId)
						{
							_failCallback(LocationFailReason.UnauthorizedGame);
							return;
						}
					}
					catch
					{
						GsnDebug.LogError("Failed to parse data in locationLegality call:  something in the games_blocked couldn't be converted to an int.  ", data.result.games_blocked[i]);
					}
				}
				// If we get here, then the user can actually play the game!
				_successCallback();
			}
			// Check to see if we have a allowed_tourn_types block
			else if (data.result.allowed_tourn_types != null)
			{
				// If there is, lets see if the flavor id is in the list.
				for (int i = 0; i < data.result.allowed_tourn_types.Length; i++)
				{
					try
					{
						// If we get here, Check to see if this user can play this tournament type.
						if (Convert.ToInt32(data.result.allowed_tourn_types[i]) == _flavorTypeID)
						{
							_successCallback();
							return;
						}
					}
					catch
					{
						GsnDebug.LogError("Failed to parse data in locationLegality call:  something in the allowed_tourn_types couldn't be converted to an int.  ", data.result.allowed_tourn_types[i]);
					}
				}
				// If we've gone over everything in the allowed_tourn_types array, we know that they are trying to sign up for a tournament that isn't available to them.
				_failCallback(LocationFailReason.UnauthorizedTournamentFlavor);
			}
			else
			{
				// Finally, if we get here, the state is fully illegal
				_failCallback(LocationFailReason.StateFullyIllegal);
			}
		}
	}
}
