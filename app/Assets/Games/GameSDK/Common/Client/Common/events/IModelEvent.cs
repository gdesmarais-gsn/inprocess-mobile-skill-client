using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System;
using System.Reflection;

namespace GSN.Skill.Games.Common.Events
{
	/// A message from the model to the view
	public interface IModelEvent
	{
		/**
		\brief Unique int representing which type of event this is.
		\see CommonModelEventType
		For example, if your game has an events enum called MyModelEventType, each of your IModelEvents should
		return a different member of that enum, cast to an int.
		\code
		public int eventTypeInt { get { return (int)MyModelEventType.GizmoFrobbed; } }
		\endcode
		*/
		int eventTypeInt { get; }
		
		/**
		\brief Type of the enum used to implement eventTypeInt.  Used to prevent eventTypeInt collisions between games.
		Using the above eventTypeInt example, this would be
		\code
		public Type eventTypeEnum { get { return typeof(MyModelEventType); } }
		\endcode
		*/
		Type eventTypeEnum { get; }
	}

	public static class ModelEventExtenstions
	{
		/**
		\brief Uses reflection to print all public fields of an IModelEvent.

		Use for debugging only.  Reflection is too slow to use in game code.
		*/
		public static string ToString(this IModelEvent self)
		{
			Type type = self.GetType();
			FieldInfo[] info = type.GetFields(BindingFlags.Public | BindingFlags.Instance);
			System.Text.StringBuilder str = new System.Text.StringBuilder();
			str.AppendFormat("{0}: ", type.Name);
			foreach (FieldInfo i in info)
			{
				//Concats all public values of this instance of SolverResult:
				//seed,tiSeed,setup,...
				//and puts quotes around each value
				str.AppendFormat("{0} {1}", i.Name, i.GetValue(self));
			}
			return str.ToString();
		}
	}
}
