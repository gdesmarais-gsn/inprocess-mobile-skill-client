using System.Collections.Generic;
using System.IO;
using System;

namespace GSN.Skill.Games.Common.Model {

	public interface IDataSafePlugin {
		void FetchData(Dictionary<string, string> request, Action<Dictionary<string, string> > doneAction);

		void Initialize(byte [] data);

	}

	// The attribute used to flag the game specific model
	[AttributeUsage( AttributeTargets.Class, Inherited = false)]
	public class GsnDataSafePluginAttribute : Attribute
	{

	}

}