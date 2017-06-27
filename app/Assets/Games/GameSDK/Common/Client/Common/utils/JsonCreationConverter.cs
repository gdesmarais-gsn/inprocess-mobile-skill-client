using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

namespace GSN.Skill.Games.Common.Utils
{
	/**
	\brief Common code used to convert JSON to C# objects.

	http://stackoverflow.com/questions/8030538/how-to-implement-custom-jsonconverter-in-json-net-to-deserialize-a-list-of-base
	\see InputMessageConverter

	\cond INTERNAL

	*/
	internal abstract class JsonCreationConverter<T> : JsonConverter
	{
		/**
		\brief Create an instance of objectType, based properties in the JSON object
		\param objectType type of object expected
		\param jObject contents of JSON object that will be deserialized
		*/
		protected abstract T Create(Type objectType, JObject jObject);

		/// Used by JSON.NET to see if this is the appropriate Converter to operate on a given JSON object
		public override bool CanConvert(Type objectType)
		{
			return typeof(T).IsAssignableFrom(objectType);
		}

		/// Called by JSON.NET to convert a JSON object to a C# object.
		public override object ReadJson(JsonReader reader,
										Type objectType,
										object existingValue,
										JsonSerializer serializer)
		{
			// Load JObject from stream
			JObject jObject = JObject.Load(reader);

			// Create target object based on JObject
			T target = Create(objectType, jObject);

			// Populate the object properties
			serializer.Populate(jObject.CreateReader(), target);

			return target;
		}

		/**
		\brief Can be used by JSON.NET to have this class also function as a JSON writer.
		Generally, JSON.NET's default serialization is good enough, so we can leave this unimplemented.
		\throws NotImplementedException
		*/
		public override void WriteJson(JsonWriter writer,
									object value,
									JsonSerializer serializer)
		{
			throw new NotImplementedException();
		}
	}
	/// \endcond
}
