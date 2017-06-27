using System;
using GSN.Skill.Phoenix.Controller;
using GSN.Skill.Phoenix.View.Pool;

namespace GSN.Skill.Phoenix.View
{
	public abstract class BaseView : PooledGameObject
	{
		private static MainController _controller;
		public static MainController controller
		{
			protected get { return _controller; }

			set
			{
				if (_controller == null)
					_controller = value;
				else
					throw new Exception("Setting a controller that's already been set.");
			}
		}
	}
}
