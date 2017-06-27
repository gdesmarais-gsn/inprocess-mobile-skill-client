using System;
using GSN.Skill.Games.Common.Events;
using GSN.Skill.Games.Common.Model;
using GSN.Skill.Utils;

namespace GSN.Skill.Games.Common.Client.Game
{
	/// <summary>
	/// This class acts as a way to access the model without requiring a reference to the model directly. 
	/// It is a template class that will take as parameters the derived class and Model class which you are trying to access
	/// </summary>
	public class GameModelProxyBase : SingletonManual<GameModelProxyBase>
	{
		protected GameModelBase _model;
		/// <summary>
		/// Initializes a new instance of the <see cref="GSN.Skill.Games.Common.Model.GameModelProxyBase`2"/> class.
		/// </summary>
		public GameModelProxyBase()
		{
			_model = null;
		}
	
		/// <summary>
		/// Sets the model.
		/// </summary>
		/// <value>The model.</value>
		public GameModelBase model
		{
			set
			{
				if (value != null && _model != null)
				{
					throw new Exception("Model has already been set");
				}
				
				_model = value;
			}
		}
	
		/// <summary>
		/// Clear the model pointer.
		/// </summary>
		public void Clear()
		{
			_model = null;
		}
	
		/// <summary>
		/// Adds the event listener.
		/// </summary>
		/// <param name="type">Type.</param>
		/// <param name="listener">Listener.</param>
		/// <typeparam name="T">The 1st type parameter.</typeparam>
		public void AddEventListener<T>(T type, EventDispatcher.EventListener listener) where T : struct, IConvertible
		{
			_model.AddEventListener(type, listener);
		}

		/// <summary>
		/// Removes the event listener.
		/// </summary>
		/// <param name="type">Type.</param>
		/// <param name="listener">Listener.</param>
		/// <typeparam name="T">The 1st type parameter.</typeparam>
		public void RemoveEventListener<T>(T type, EventDispatcher.EventListener listener) where T : struct, IConvertible
		{
			_model.RemoveEventListener(type, listener);
		}

		public int GetScore()
		{
			return _model.GetScore();
		}

		public int GetEndGameReason()
		{
			return _model.endGameReason;
		}
		public int GetStateTime()
		{
			return _model.GetStateTime ();
		}
	};
}
