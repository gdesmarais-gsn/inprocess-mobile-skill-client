using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json.Serialization;
using System;
using System.Reflection;
using GSN.Skill.Games.Common.Events;

namespace GSN.Skill.Games.Common.Client.Game
{
	/**
	\cond INTERNAL

	Used by GameControllerBase to specifiy how to serialize IInputMessages
	http://www.newtonsoft.com/json/help/html/conditionalproperties.htm
	*/
	internal class IInputMessageContractResolver : DefaultContractResolver
	{
		public static readonly IInputMessageContractResolver instance = new IInputMessageContractResolver();

		protected override JsonProperty CreateProperty(MemberInfo member, MemberSerialization memberSerialization)
		{
			JsonProperty property = base.CreateProperty(member, memberSerialization);

			//Don't serialize property msgTypeEnum of IInputMessages
			if (property.PropertyName == "msgTypeEnum")
			{
				property.ShouldSerialize = (object instance) =>
				{
					return ! (instance is IInputMessage);
				};
			}
			return property;
		}
	}
	/// \endcond
}
