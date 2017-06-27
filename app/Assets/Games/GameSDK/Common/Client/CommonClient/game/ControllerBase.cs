using System;
using System.Text;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using GSN.Skill.Games.Common.Model;
using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common.Client.Session;
using GSN.Skill.Games.Common.Events;

namespace GSN.Skill.Games.Common.Client.Game
{
	public class ControllerBase : MonoBehaviour
	{
		private static readonly JsonSerializerSettings _iinputMsgSerializerSettings;

		static ControllerBase()
		{
			_iinputMsgSerializerSettings = new JsonSerializerSettings();
			_iinputMsgSerializerSettings.ContractResolver = IInputMessageContractResolver.instance;
		}

		public virtual GameModelBase model { protected get; set;}
		public ViewBase view { private get; set;}
		private int _gameTime;

		private MovePlayer _replayer = null;

		public ControllerBase()
		{
		}

		/// This function is called with a JoinRecord, to initalize the Controller
		public virtual void Configure(Dictionary<string, string> joinRecord)
		{
		}

		/// This function will create a replayer.
		public void CreateMovePlayer(
			ReplayGameSession gameSession ///< Replay Session to get the gameLog from.
			)
		{
			_replayer = new MovePlayer(model, gameSession.logStream, gameSession.abortOnEnd);

			// do this so that the GameBase can give the datasafe to the model.
			gameSession.DataSafe = _replayer._dataSafe;

		}

		/// This function is called with time t every frame of the frame pump
		public virtual void UpdateTime(int t)
		{
			_gameTime = t;

			if (_replayer != null && _replayer.PlayMoves(t))
			{
				Time.timeScale = 1.0f;
				_replayer = null;
			}

			// yes, do this even if frozen, so the model knows what time to jump to after unfreeze.
			model.Update(t);

			// for now, don't update the view while the model is frozen. This may have to change.
			if (model._frozen) 
				return;

			view.Render(t);
		}

		/// This function is called whenever we want to send a message to our GSN.Skill.Games.Common.Model.GameModelBase. It will also add the move the Gsn.Game.SkillV_CUSTOM.Client.Session.IGameSession
		public virtual void Send(IInputMessage msg)
		{
			if (_replayer != null)
			{
				// We want any "X" to go through. Suppress everything else.
				if (msg.CommonMsgType() != CommonInputMessageType.UserAborted)
					return;
			}

			// while the model is frozen, we still update it to let it know what time to jump to when it unfreezes.
			if (model._frozen) {
				model.Update(_gameTime);
				return;
			}

			ArenaProxy.instance.gameSession.AddRecord ("input", Encoding.UTF8.GetBytes(JsonConvert.SerializeObject(msg, _iinputMsgSerializerSettings)), _gameTime);

			model.Receive(msg, _gameTime);
		}

		/// This function is called when we want to add a sync message to the Gsn.Game.SkillV_CUSTOM.Client.Session.IGameSession. A sync message will tell the model to update to time t.
		public void Sync(int t)
		{
			ArenaProxy.instance.gameSession.AddRecord("sync", null, t);
		}

		/// This function will add an event handler to the Model.
		public void AddEventListener<T>(T type, EventDispatcher.EventListener listener) where T : struct, IConvertible
		{
			model.AddEventListener(type,listener);
		}

		/// This function will remove an event handler from the Model.
		public void RemoveEventListener<T>(T type, EventDispatcher.EventListener listener) where T : struct, IConvertible
		{
			model.RemoveEventListener(type,listener);
		}
	}
}
