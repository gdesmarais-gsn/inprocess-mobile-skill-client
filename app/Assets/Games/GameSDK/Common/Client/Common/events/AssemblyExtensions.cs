using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;

namespace GSN.Skill.Games.Common.AssemblyExtensionsWorkaround
{
	public static class AssemblyExtensions
	{
		/*
		The Tripeaks solver is built with a newer version of Mono than Unity supports.
		This causes an exception to be thrown when EventDispatcher and InputMessageConverter try to look
		inside UnityEngine.dll for certain types.  This code is a workaround for that exception.

		http://stackoverflow.com/questions/7889228/how-to-prevent-reflectiontypeloadexception-when-calling-assembly-gettypes
		*/
		public static IEnumerable<Type> GetLoadableTypes(this Assembly assembly)
		{
			try
			{
				return assembly.GetTypes();
			}
			catch (ReflectionTypeLoadException e)
			{
				return e.Types.Where(t => t != null);
			}
		}
	}
}
