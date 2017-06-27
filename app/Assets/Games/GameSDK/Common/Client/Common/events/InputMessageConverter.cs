using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using System.Linq;
using GSN.Skill.Games.Common.Utils;
using GSN.Skill.Games.Common.AssemblyExtensionsWorkaround;

namespace GSN.Skill.Games.Common.Events
{
	/// Converts serialized JSON to the correct type of IInputMessage
	internal class InputMessageConverter : JsonCreationConverter<IInputMessage>
	{
		//Lookup table by enum type, then msgTypeInt, returning the type of IInputMessage that should be created
		private static readonly Dictionary<Type, Dictionary<int, Type>> MSG_TYPE_LOOKUP = new Dictionary<Type, Dictionary<int, Type>>();

		// This function used to be a static constructor, but that meant it only got called with the first GameModel dll was loaded
		// into the MonoBox. Now it is called whenever an InputMessageConverter is constructed. That's almost certainly
		// OVERKILL. It's a HACK.
		static void Initialize_MSG_TYPE_LOOKUP()
		{
			MSG_TYPE_LOOKUP.Clear();

			//Get all types that implement IInputMessage
			//http://stackoverflow.com/questions/26733/getting-all-types-that-implement-an-interface
			IEnumerable<Type> types = AppDomain.CurrentDomain.GetAssemblies().
					SelectMany(s => s.GetLoadableTypes()).
					Where(p => typeof(IInputMessage).IsAssignableFrom(p)).
					Where(p => !p.IsInterface);

			//Record all IInputMessage types for use in InputMessageConverter's constructor
			foreach (Type type in types)
			{
				IInputMessage msg = (IInputMessage)Activator.CreateInstance(type);
				Dictionary<int, Type> msgTypeIntLookup;
				if (! MSG_TYPE_LOOKUP.TryGetValue(msg.msgTypeEnum, out msgTypeIntLookup))
				{
					msgTypeIntLookup = new Dictionary<int, Type>();
					MSG_TYPE_LOOKUP.Add(msg.msgTypeEnum, msgTypeIntLookup);
				}
				msgTypeIntLookup.Add(msg.msgTypeInt, type);
			}
		}

		private readonly Dictionary<int, Type> _msgTypeLookup;
		public InputMessageConverter(params Type[] msgTypeEnums)
		{
			// THIS IS A HACK to make sure that MSG_TYPE_LOOKUP is fully initialized whenever we want to construct an 
			// InputMessageConverter. Initialize_MSG_TYPE_LOOKUP used to be a static constructor, but that meant that it only
			// got run the FIRST time a GameModel dll was loaded and run. We need to be suer that MSG_TYPE_LOOKUP is fully
			// populated whenever a GameModel dll is loaded.
			Initialize_MSG_TYPE_LOOKUP();

			_msgTypeLookup = new Dictionary<int, Type>();
			for (int msgTypeEnumIndex = 0; msgTypeEnumIndex < msgTypeEnums.Length; ++msgTypeEnumIndex)
			{
				Dictionary<int, Type> intTypeLookup;
				if (!MSG_TYPE_LOOKUP.TryGetValue(msgTypeEnums[msgTypeEnumIndex], out intTypeLookup))
				{
					GsnDebug.LogWarning(msgTypeEnums[msgTypeEnumIndex], "Has no entry in MSG_TYPE_LOOKUP");
					continue;
				}
				foreach (KeyValuePair<int, Type> kvp in intTypeLookup)
				{
					_msgTypeLookup.Add(kvp.Key, kvp.Value);
				}
			}
		}

		protected override IInputMessage Create(Type objectType, JObject jObject)
		{
			Type instanceType;
			int msgTypeInt = (int)jObject["msgTypeInt"];
			if (! _msgTypeLookup.TryGetValue(msgTypeInt, out instanceType))
			{
				throw new KeyNotFoundException("Could not find msg type " + msgTypeInt + " in input message lookup table");
			}
			return (IInputMessage)Activator.CreateInstance(instanceType);
		}
	}
}
