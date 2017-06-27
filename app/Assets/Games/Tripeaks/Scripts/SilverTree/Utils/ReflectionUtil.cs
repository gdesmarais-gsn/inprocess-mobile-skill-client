//#define NO_SERIALIZABLE_PRIMITIVE // HACK: defined because SerializablePrimitive.cs isn't in this project yet
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Reflection;
#if UNITY_EDITOR
using UnityEditor;
#endif

#if ((DEVELOPMENT_BUILD || UNITY_EDITOR) && ENABLE_PROFILER)
using UnityEngine.Profiling;
#endif

namespace Stm.V1_1 { 

public static partial class ReflectionUtil
{
	public static Type GetType(string typeName)
	{
		if(typeLookupCache == null) {
			typeLookupCache = new Dictionary<string,Type>();
		}
		Type type;
		if(!typeLookupCache.TryGetValue(typeName, out type)) {
			type = FindType(typeName);
			typeLookupCache.Add(typeName, type);
		}
		return type;
	}
	
	// inverse of GetType
	public static string GetTypeName(Type type)
	{
		string name = type.Name;
		if(type != GetType(name)) {
			name = type.FullName;
		}
		return name;
	}

	public static MethodInfo[] GetMethods(Type type, BindingFlags bindingFlags = BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static)
	{
		if(getMethodsCache == null) {
			getMethodsCache = new Dictionary<KeyValuePair<Type,BindingFlags>,MethodInfo[]>();
		}
		KeyValuePair<Type,BindingFlags> key = new KeyValuePair<Type,BindingFlags>(type, bindingFlags);
		MethodInfo[] methodInfos;
		if(!getMethodsCache.TryGetValue(key, out methodInfos)) {
			methodInfos = type.GetMethods(bindingFlags);
			getMethodsCache.Add(key, methodInfos);
		}
		return methodInfos;
	}

	public static MethodInfo[] GetMethodsMatchingName(Type type, string name, BindingFlags bindingFlags = BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static)
	{
		if(getNamedMethodsCache == null) {
			getNamedMethodsCache = new Dictionary<int,MethodInfo[]>();
		}
		int key = name.GetHashCode() ^ type.GetHashCode() ^ (int)bindingFlags;
		MethodInfo[] methodInfos;
		if(!getNamedMethodsCache.TryGetValue(key, out methodInfos)) {
			List<MethodInfo> methodList = new List<MethodInfo>();
			foreach(MethodInfo method in GetMethods(type, bindingFlags)) {
				if(method.Name == name && !method.IsGenericMethod) {
					methodList.Add(method);
				}
			}
			methodInfos = methodList.ToArray();
			getNamedMethodsCache.Add(key, methodInfos);
		}
		return methodInfos;
	}
#if NO_SERIALIZABLE_PRIMITIVE
	// fake SerializablePrimitive class that cannot have any instances. must be null.
	public abstract class SerializablePrimitive { private SerializablePrimitive(){} }
#endif
	public static MethodInfo GetMethodMatchingNameAndArgs(Type type, string name, SerializablePrimitive[] args, BindingFlags bindingFlags = BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static)
	{
		foreach(MethodInfo method in GetMethodsMatchingName(type, name, bindingFlags)) {
			if(DoesMethodMatchArgs(method, args)) {
				return method;
			}
		}
		return null;
	}

	public static bool DoesMethodMatchArgs(MethodInfo method, SerializablePrimitive[] args)
	{
		ParameterInfo[] paramInfos = method.GetParameters();
		if(args == null) {
			return (paramInfos.Length == 0);
		}
		int nargs = args.Length;
		if(nargs != paramInfos.Length) {
			return false;
		}
#if !NO_SERIALIZABLE_PRIMITIVE
		for(int i = 0 ; i < nargs ; i++) {
			if(!args[i].CanCastToType(paramInfos[i].ParameterType)) {
				return false;
			}
		}
#endif
		return true;
	}

	public static MethodInfo GetMethodMatchingNameAndArgs(Type type, string name, Type firstArgType, bool allowUpcast, SerializablePrimitive[] otherArgs, BindingFlags bindingFlags = BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static)
	{
		foreach(MethodInfo method in GetMethodsMatchingName(type, name, bindingFlags)) {
			if(DoesMethodMatchArgs(method, firstArgType, allowUpcast, otherArgs)) {
				return method;
			}
		}
		return null;
	}

	public static bool DoesMethodMatchArgs(MethodInfo method, Type firstArgType, bool allowUpcast, SerializablePrimitive[] otherArgs)
	{
		ParameterInfo[] paramInfos = method.GetParameters();
		int numOtherArgs = (otherArgs != null) ? otherArgs.Length : 0;
		if(1+numOtherArgs != paramInfos.Length) {
			return false;
		}
		if(!CanInvokeCastType(firstArgType, paramInfos[0].ParameterType)
		&& !CanConvertToType(firstArgType, paramInfos[0].ParameterType, allowUpcast)) {
			return false;
		}
#if !NO_SERIALIZABLE_PRIMITIVE
		for(int i = 0 ; i < numOtherArgs ; i++) {
			if(!otherArgs[i].CanCastToType(paramInfos[i+1].ParameterType)) {
				return false;
			}
		}
#endif
		return true;
	}

	public static MethodInfo GetMethodMatchingNameAndArgsOfType(Type type, string name, Type[] args, BindingFlags bindingFlags = BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static)
	{
		foreach(MethodInfo method in GetMethodsMatchingName(type, name, bindingFlags)) {
			if(DoesMethodMatchArgsOfType(method, args)) {
				return method;
			}
		}
		return null;
	}

	public static bool DoesMethodMatchArgsOfType(MethodInfo method, Type[] args)
	{
		ParameterInfo[] paramInfos = method.GetParameters();
		if(args == null) {
			return (paramInfos.Length == 0);
		}
		int nargs = args.Length;
		if(nargs != paramInfos.Length) {
			return false;
		}
		for(int i = 0 ; i < nargs ; i++) {
			if(!CanInvokeCastType(args[i], paramInfos[i].ParameterType)) {
				return false;
			}
		}
		return true;
	}

	// CastToType
	// explicitly convert a value to a type.
	// note: in case of failure, sets target to System.DBNull.Value and returns false
	public static bool ConvertToType(ref object value, Type destinationType)
	{
		if(value is UnityEngine.Object && (UnityEngine.Object)value == null) {
			value = null; // eliminate Unity's "fake null"
		}
		
		if(value == null)
		{
			if(!destinationType.IsValueType) {
				return true;
			}
		}
		else
		{
			Type sourceType = value.GetType();
			if(destinationType.IsAssignableFrom(sourceType)) {
				return true;
			}
			
			if(sourceType == typeof(float) && IsIntegerType(destinationType)) {
				double temp = (double)(float)value;
				value = (float)Math.Truncate(temp);
				// no return here!
			} else if(sourceType == typeof(double) && IsIntegerType(destinationType)) {
				double temp = (double)value;
				value = Math.Truncate(temp);
				// no return here!
			}
			
			try {
				if(destinationType.IsEnum) {
					if(sourceType == typeof(string)) {
						value = Enum.Parse(destinationType, (string)value);
					} else {
						value = Enum.ToObject(destinationType, value);
					}
					return true;
				} else if(value is IConvertible) {
					if(sourceType == typeof(string) && IsNumericType(destinationType)) {
						// support e.g. (int)"1.6f" -> 1
						string s = (string)value;
						while(s.EndsWith("f") || s.EndsWith("F") || s.EndsWith(".")) {
							s = s.Substring(0,s.Length-1);
						}
						if(s.Contains(".") && IsIntegerType(destinationType)) {
							value = Convert.ToDouble(s);
							return ConvertToType(ref value, destinationType);
						} else {
							value = s;
						}
					}
					value = Convert.ChangeType(value, destinationType);
					return true;
				} else if(value is Delegate && typeof(Delegate).IsAssignableFrom(destinationType)) {
					Delegate del = (Delegate)value;
					value = CreateDelegate(destinationType, del.Target, del.Method, value);
					return true;
				} else if(value is MethodInfo && typeof(Delegate).IsAssignableFrom(destinationType)) {
					value = CreateDelegate(destinationType, null, (MethodInfo)value, null);
					return true;
				}
	//		} catch(Exception e) {
	//			Debug.LogError(e);
			} catch {
				// intentionally swallow exceptions here, since this can be normal user error, and logging the error to the console would be excessive.
				// (similarly to how int.TryParse works, failure is indicated via a return value, and nothing is logged or thrown.)
			}
			
			MethodInfo cast = SignatureMatchingCast(sourceType, destinationType, sourceType.GetMember("op_Implicit", MemberTypes.Method, BindingFlags.Public | BindingFlags.Static));
			if(cast == null) {
				cast = SignatureMatchingCast(sourceType, destinationType, destinationType.GetMember("op_Implicit", MemberTypes.Method, BindingFlags.Public | BindingFlags.Static));
			}
			if(cast == null) {
				cast = SignatureMatchingCast(sourceType, destinationType, sourceType.GetMember("op_Explicit", MemberTypes.Method, BindingFlags.Public | BindingFlags.Static));
			}
			if(cast == null) {
				cast = SignatureMatchingCast(sourceType, destinationType, destinationType.GetMember("op_Explicit", MemberTypes.Method, BindingFlags.Public | BindingFlags.Static));
			}
			if(cast != null) {
				value = cast.Invoke(null, new object[]{ value });
				return true;
			}
			
			// hack, allow unity component getting as a last resort
			if(ConvertComponentOrGameObject(ref value, destinationType)) {
				return true;
			}
		}

		if(destinationType == typeof(bool) && (value == null || value is UnityEngine.Object)) { // HACK, not sure why op_Implicit checks above won't catch this, but we need some special case at least if value is null if we're coercing fake-null to null anyway
			value = (bool)(UnityEngine.Object)value;
			return true;
		}
		
		value = DBNull.Value;
		return (destinationType == typeof(void));
	}

	// returns false and doesn't change value on failure
	// value must be already rid of fake-null
	private static bool ConvertComponentOrGameObject(ref object value, Type destinationType)
	{
		if((value is GameObject || value is Component)
		&& (destinationType == typeof(GameObject) || typeof(Component).IsAssignableFrom(destinationType))
		) {
			GameObject sourceGo = (value is GameObject) ? (GameObject)value : ((Component)value).gameObject;
			if(destinationType == typeof(GameObject)) {
				value = sourceGo;
				return true;
			} else {
				Component destComponent = sourceGo.GetComponent(destinationType);
				if(destComponent) {
					value = destComponent;
					return true;
				}
			}
		}
		return false;
	}
	
	public static Delegate CreateDelegate(Type delegateType, object target, MethodInfo method, object delObj=null)
	{
		if(delObj != null && delegateType.IsAssignableFrom(delObj.GetType())) {
			return (Delegate)delObj;
		}
		if(method.ReturnType != typeof(void) && method.ReturnType.IsValueType) {
			MethodInfo toInvoke = delegateType.GetMethod("Invoke");
			if(toInvoke != null && toInvoke.ReturnType != method.ReturnType) {
				// have to box the return type... CreateDelegate unfortunately doesn't do this for us.
				// toInvoke.ReturnType should be of type "object" here.
				if(delObj == null) {
					delObj = CreateDelegate(MakeDelegateType(method), target, method);
				}
				if(ConvertToBoxingDelegate(ref delObj, method)) {
					return (Delegate)delObj;
				}
			}
		}
		return Delegate.CreateDelegate(delegateType, target, method);
	}


	static bool ConvertToBoxingDelegate(ref object delObj, MethodInfo method)
	{
		ParameterInfo[] fromParams = method.GetParameters();
		Type[] typeArgs = new Type[1+fromParams.Length];
		typeArgs[0] = method.ReturnType;
		for(int i = 0 ; i < fromParams.Length ; i++) {
			typeArgs[i+1] = fromParams[i].ParameterType;
		}
		string methodName = "BoxReturnValue" + fromParams.Length;
		MethodInfo boxReturnMethod = typeof(ReflectionUtil).GetMethod(methodName, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static);
		boxReturnMethod = boxReturnMethod.MakeGenericMethod(typeArgs);
		delObj = (Delegate)boxReturnMethod.Invoke(null, new object[]{ delObj });
		return true;
	}
	static Delegates.ActionWithReturn<object> BoxReturnValue0<R>(object delObj) {
		ConvertToType(ref delObj, typeof(Delegates.ActionWithReturn<R>));
		Delegates.ActionWithReturn<R> del = (Delegates.ActionWithReturn<R>)delObj;
		return (() => { return (object)del(); });
	}
	static Delegates.ActionWithReturn<object,T1> BoxReturnValue1<R,T1>(object delObj) {
		ConvertToType(ref delObj, typeof(Delegates.ActionWithReturn<R,T1>));
		Delegates.ActionWithReturn<R,T1> del = (Delegates.ActionWithReturn<R,T1>)delObj;
		return ((arg1) => { return (object)del(arg1); });
	}
	static Delegates.ActionWithReturn<object,T1,T2> BoxReturnValue2<R,T1,T2>(object delObj) {
		ConvertToType(ref delObj, typeof(Delegates.ActionWithReturn<R,T1,T2>));
		Delegates.ActionWithReturn<R,T1,T2> del = (Delegates.ActionWithReturn<R,T1,T2>)delObj;
		return ((arg1, arg2) => { return (object)del(arg1, arg2); });
	}



	// check whether ConvertToType can succeed for the given types.
	// (failures depending on the specific value being converted (e.g. overflow) cannot be detected)
	public static bool CanConvertToType(Type sourceType, Type destinationType, bool allowUpcast=false)
	{
		if(destinationType.IsAssignableFrom(sourceType)) {
			return true;
		}
		if(sourceType == null) {
			return false;
		}
		if(allowUpcast && sourceType.IsAssignableFrom(destinationType)) {
			return true;
		}

		try {
			if(destinationType.IsEnum) {
				TypeCode tc = Type.GetTypeCode(destinationType);
				return (tc != TypeCode.Empty && tc != TypeCode.Object
				     && tc != TypeCode.Single && tc != TypeCode.Double && tc != TypeCode.Decimal
				     && tc != TypeCode.DateTime && tc != TypeCode.String);
			} else if(typeof(IConvertible).IsAssignableFrom(sourceType)) {
				TypeCode tc = Type.GetTypeCode(destinationType);
				return (tc != TypeCode.Empty && tc != TypeCode.DBNull
					&& tc != TypeCode.Object // <-- converting to specific object type will fail in general
				);
			} else if(typeof(Delegate).IsAssignableFrom(sourceType) && typeof(Delegate).IsAssignableFrom(destinationType)) {
				MethodInfo fromInvoke = sourceType.GetMethod("Invoke");
				MethodInfo toInvoke = destinationType.GetMethod("Invoke");
				if(fromInvoke == null || toInvoke == null) {
					return false;
				}
				if(!CanInvokeCastType(fromInvoke.ReturnType, toInvoke.ReturnType, true)) {
					return false;
				}
				ParameterInfo[] fromParams = fromInvoke.GetParameters();
				ParameterInfo[] toParams = toInvoke.GetParameters();
				int fromParamsLength = fromParams.Length;
				if(fromParamsLength != toParams.Length) {
					return false;
				}
				for(int i = 0 ; i < fromParamsLength ; i++) {
					if(!CanInvokeCastType(toParams[i].ParameterType, fromParams[i].ParameterType)) {
						return false;
					}
				}
				return true;
			}
		} catch {}
		
		if(SignatureMatchingCast(sourceType, destinationType, sourceType.GetMember("op_Implicit", MemberTypes.Method, BindingFlags.Public | BindingFlags.Static)) != null
		|| SignatureMatchingCast(sourceType, destinationType, destinationType.GetMember("op_Implicit", MemberTypes.Method, BindingFlags.Public | BindingFlags.Static)) != null
		|| SignatureMatchingCast(sourceType, destinationType, sourceType.GetMember("op_Explicit", MemberTypes.Method, BindingFlags.Public | BindingFlags.Static)) != null
		|| SignatureMatchingCast(sourceType, destinationType, destinationType.GetMember("op_Explicit", MemberTypes.Method, BindingFlags.Public | BindingFlags.Static)) != null
		) {
			if(allowUpcast && destinationType == typeof(bool) && typeof(UnityEngine.Object).IsAssignableFrom(sourceType)) {
				// HACK, allowUpcast is true for senderArg/firstArg function matching, and we don't want UnityEngine.Object to count as bool in that context
				return false;
			}
			return true;
		}

		// another hack, allow unity component getting if allowing upcast (corresponds with call to ConvertComponentOrGameObject)
		if(allowUpcast
		&& (sourceType == typeof(GameObject) || typeof(Component).IsAssignableFrom(sourceType))
		&& (destinationType == typeof(GameObject) || typeof(Component).IsAssignableFrom(destinationType))
		) {
			return true;
		}
		
		return (destinationType == typeof(void));
	}

	// check whether a type can be automatically cast to another type at runtime.
	// ignores custom overloaded operators, because C# ignores those too in the absence of compile-time type info.
	// iff this returns true, that means:
	// - the cast (ToType)(object)fromObject will succeed (and not throw an exception)
	// - MethodBase.Invoke and Delegate.Invoke will consider the types compatible (but note that parameters and return types have opposite cast directions)
	public static bool CanInvokeCastType(Type from, Type to, bool allowBoxing=false, bool requireExactTypeMatch=false)
	{
		if(from == to) {
			return true;
		}
		
		bool fromIsByRef = from.IsByRef;
		bool toIsByRef = to.IsByRef;
		if(fromIsByRef || toIsByRef)
		{
			if(fromIsByRef) {
				from = from.GetElementType();
				requireExactTypeMatch = true;
			}

			if(toIsByRef) {
				to = to.GetElementType();
				// don't require exact type match here, otherwise things become harder
				// (e.g. we'd have to provide a separate op_Assign implementation per type of object)
			}

			if(from == to) {
				return true;
			}
		}

		if(requireExactTypeMatch) {
			return false;
		}

//		if(allowBoxing && to.IsGenericType && to.GetGenericTypeDefinition() == typeof(Nullable<>)) {
//			to = Nullable.GetUnderlyingType(to);
//			if(from == to) {
//				return true;
//			}
//		}

		TypeCode fromCode = Type.GetTypeCode(from);
		TypeCode toCode = Type.GetTypeCode(to);

		if(toCode == TypeCode.Object && (allowBoxing || !from.IsValueType)) {
			return to.IsAssignableFrom(from);
		}

		switch(fromCode)
		{
			// Invoke only performs implicit numeric conversion, not explicit
			// see "Implicit Numeric Conversions Table" online
			case TypeCode.Char:
				switch(toCode) {
					case TypeCode.SByte:
					case TypeCode.Byte:
					case TypeCode.Int16:
						return false;
				}
				return true;
			case TypeCode.SByte:
				switch(toCode) {
					case TypeCode.Char:
					case TypeCode.Byte:
					case TypeCode.UInt16:
					case TypeCode.UInt32:
					case TypeCode.UInt64:
						return false;
				}
				return true;
			case TypeCode.Byte:
				switch(toCode) {
					case TypeCode.Char:
					case TypeCode.SByte:
						return false;
				}
				return true;
			case TypeCode.Int16:
				switch(toCode) {
					case TypeCode.Int32:
					case TypeCode.Int64:
					case TypeCode.Single:
					case TypeCode.Double:
					case TypeCode.Decimal:
						return true;
				}
				return false;
			case TypeCode.UInt16:
				switch(toCode) {
					case TypeCode.Char:
					case TypeCode.SByte:
					case TypeCode.Byte:
					case TypeCode.Int16:
						return false;
				}
				return true;
			case TypeCode.Int32:
				switch(toCode) {
					case TypeCode.Int64:
					case TypeCode.Single:
					case TypeCode.Double:
					case TypeCode.Decimal:
						return true;
				}
				return false;
			case TypeCode.UInt32:
				switch(toCode) {
					case TypeCode.Int64:
					case TypeCode.UInt64:
					case TypeCode.Single:
					case TypeCode.Double:
					case TypeCode.Decimal:
						return true;
				}
				return false;
			case TypeCode.Int64:
			case TypeCode.UInt64:
				switch(toCode) {
					case TypeCode.Single:
					case TypeCode.Double:
					case TypeCode.Decimal:
						return true;
				}
				return false;
			case TypeCode.Single:
				switch(toCode) {
					case TypeCode.Double:
						return true;
				}
				return false;
			//case TypeCode.Double:
			//case TypeCode.Decimal:
			default:
				return false;
		}
	}

//	// check whether a type can be explicitly cast to another type according to C# typecast rules
//	// this includes checking whether the types have overloaded conversion operators.
//	// if this returns false, you can assume the cast (ToType)fromValue will throw an exception.
//	public static bool CanExplicitlyCastType(Type from, Type to)
//	{
//		if(CanInvokeCastType(from, to, true)) {
//			return true;
//		}
//		if(IsIntegerType(from) && IsIntegerType(to)) {
//			return true;
//		}
//		if(SignatureMatchingCast(from, to, from.GetMember("op_Implicit", MemberTypes.Method,  BindingFlags.Public | BindingFlags.Static, true)) != null) {
//			return true;
//		}
//		if(SignatureMatchingCast(from, to, to.GetMember("op_Implicit", MemberTypes.Method,  BindingFlags.Public | BindingFlags.Static, true)) != null) {
//			return true;
//		}
//		if(SignatureMatchingCast(from, to, from.GetMember("op_Explicit", MemberTypes.Method,  BindingFlags.Public | BindingFlags.Static, true)) != null) {
//			return true;
//		}
//		if(SignatureMatchingCast(from, to, to.GetMember("op_Explicit", MemberTypes.Method,  BindingFlags.Public | BindingFlags.Static, true)) != null) {
//			return true;
//		}
//		return false;
//	}

	static MethodInfo SignatureMatchingCast(Type from, Type to, MemberInfo[] methods, bool allowBoxing=false)
	{
		foreach(MethodInfo method in methods) {
			if(CanInvokeCastType(method.ReturnType, to, allowBoxing)) {
				ParameterInfo[] parameters = method.GetParameters();
				if(parameters.Length == 1 && CanInvokeCastType(from, parameters[0].ParameterType)) {
					return method;
				}
			}
		}
		return null;
	}

	public static bool IsIntegerType(Type type)
	{
		switch(Type.GetTypeCode(type))
		{
			case TypeCode.Char:
			case TypeCode.SByte:
			case TypeCode.Byte:
			case TypeCode.Int16:
			case TypeCode.UInt16:
			case TypeCode.Int32:
			case TypeCode.UInt32:
			case TypeCode.Int64:
			case TypeCode.UInt64:
				return true;
		}
		return false;
	}

	public static bool IsNumericType(Type type)
	{
		switch(Type.GetTypeCode(type))
		{
			case TypeCode.Char:
			case TypeCode.SByte:
			case TypeCode.Byte:
			case TypeCode.Int16:
			case TypeCode.UInt16:
			case TypeCode.Int32:
			case TypeCode.UInt32:
			case TypeCode.Int64:
			case TypeCode.UInt64:
			case TypeCode.Single:
			case TypeCode.Double:
				return true;
		}
		return false;
	}



	public static UnityEngine.Object InstanceIDToObject(int instanceID, Type type=null)
	{
		Type uobjType = typeof(UnityEngine.Object);
		if(!uobjType.IsAssignableFrom(type)) {
			type = uobjType;
		}
		// TODO: add a cache for this if it becomes a performance issue
		foreach(UnityEngine.Object obj in Resources.FindObjectsOfTypeAll(type)) {
			if(instanceID == obj.GetInstanceID()) {
				return obj;
			}
		}
		return null;
	}



#if UNITY_EDITOR
#if !NO_SERIALIZABLE_PRIMITIVE	
	public static bool DoesMethodMatchArgsAll(MethodInfo method, SerializablePrimitive[][] multiArgs)
	{
		if(multiArgs == null) {
			return DoesMethodMatchArgs(method, null);
		}
		foreach(SerializablePrimitive[] args in multiArgs) {
			if(!DoesMethodMatchArgs(method, args)) {
				return false;
			}
		}
		return true;
	}
	
	public static bool DoesMethodMatchArgsAll(MethodInfo method, Type firstArgType, bool allowUpcast, SerializablePrimitive[][] multiArgs)
	{
		if(multiArgs == null) {
			return DoesMethodMatchArgs(method, firstArgType, allowUpcast, null);
		}
		foreach(SerializablePrimitive[] args in multiArgs) {
			if(!DoesMethodMatchArgs(method, firstArgType, allowUpcast, args)) {
				return false;
			}
		}
		return true;
	}
#endif // !NO_SERIALIZABLE_PRIMITIVE
#endif

	private static Dictionary<string,Type> typeLookupCache;
	private static Type FindType(string typeName)
	{
		// Try Type.GetType() first. This will work with types defined
		// by the Mono runtime, in the same assembly as the caller, etc.
		Type type = Type.GetType(typeName);
		
		// If it worked, then we're done here
		if(type != null) {
			return type;
		}
		
		// check aliases for built-in types
		switch(typeName) {
			case "string": return typeof(string);
			case "int": return typeof(int);
			case "bool": return typeof(bool);
			case "float": return typeof(float);
			case "double": return typeof(double);
			case "char": return typeof(char);
			case "uint": return typeof(uint);
			case "long": return typeof(long);
			case "ulong": return typeof(ulong);
			case "short": return typeof(short);
			case "ushort": return typeof(ushort);
			case "byte": return typeof(byte);
			case "sbyte": return typeof(sbyte);
			case "decimal": return typeof(decimal);
			case "object": return typeof(object);
			case "": return null;
		}
		
		string namespaceName = null;

		if(typeName.Contains(".")) {
			int dotIndex = typeName.LastIndexOf('.');
			namespaceName = typeName.Substring(0, dotIndex);
			typeName = typeName.Substring(dotIndex+1);
		}

		if(allAssemblies == null) {
			CacheAllAssemblies();
		}
		
		for(int iAllowNestedTypes = 0 ; iAllowNestedTypes <= 1 ; iAllowNestedTypes++) {
			bool allowNestedTypes = (iAllowNestedTypes == 1);
			for(int iAllowPartialNamespaceMatch = 0 ; iAllowPartialNamespaceMatch <= 1 ; iAllowPartialNamespaceMatch++) {
				bool allowPartialNamespaceMatch = (iAllowPartialNamespaceMatch == 1);
				for(int iCaseInsensitive = 0 ; iCaseInsensitive <= 1 ; iCaseInsensitive++) {
					bool caseInsensitive = (iCaseInsensitive == 1);

					// enumerate all of the assemblies and see if any of them define the type
					foreach(Assembly assembly in allAssemblies)
					{
						type = FindTypeInAssembly(assembly, typeName, allowNestedTypes, caseInsensitive, namespaceName, allowPartialNamespaceMatch);
						if(type != null) {
							return type;
						}
					}
				}
			}
		}

		// maybe it's an assembly-qualified name, rather than a namespace-prefixed one?
		if(namespaceName != null) {
			string assemblyName = namespaceName;
			
			// Attempt to load the indicated Assembly
			Assembly assembly = null;
			try
			{
				assembly = Assembly.Load(assemblyName);
			}
			catch(System.IO.FileNotFoundException)
			{
			}
			if(assembly != null)
			{
				// Ask that assembly to return the proper Type
				//type = assembly.GetType(typeName);
				for(int iAllowNestedTypes = 0 ; iAllowNestedTypes <= 1 ; iAllowNestedTypes++) {
					bool allowNestedTypes = (iAllowNestedTypes == 1);
					for(int iCaseInsensitive = 0 ; iCaseInsensitive <= 1 ; iCaseInsensitive++) {
						bool caseInsensitive = (iCaseInsensitive == 1);

						type = FindTypeInAssembly(assembly, typeName, allowNestedTypes, caseInsensitive, namespaceName);
						if(type != null) {
							return type;
						}
					}
				}
			}
		}
		
		// case-insensitively check aliases for built-in types that
		// aren't case-insensitive matches for the actual type name
		switch(typeName.ToLower()) {
			case "int": return typeof(int);
			case "bool": return typeof(bool);
			case "float": return typeof(float);
			case "uint": return typeof(uint);
			case "long": return typeof(long);
			case "ulong": return typeof(ulong);
			case "short": return typeof(short);
			case "ushort": return typeof(ushort);
		}
		
		// The type just couldn't be found...
		// "But... the future refused to change"
		return null;
	}
	
	private static Type[] GetTypesInAssembly(Assembly assembly) {
		try {
			return assembly.GetTypes();
		} catch(ReflectionTypeLoadException e) {
			Debug.LogException(new Exception("Unable to load types from assembly " + assembly, e));
			return new Type[0];
		}
	}

	private static Type FindTypeInAssembly(Assembly assembly, string typeName, bool allowNestedTypes, bool caseInsensitive, string namespaceName=null, bool allowPartialNamespaceMatch=false)
	{
		if(assembly != null)
		{
			//Type type = assembly.GetType(typeName); // won't find all types? wouldn't doesn't handle caseInsensitive either.
			StringComparison comparison = caseInsensitive ? StringComparison.OrdinalIgnoreCase : StringComparison.Ordinal;
			foreach(Type type in GetTypesInAssembly(assembly))
			{
				if(!allowNestedTypes && type.DeclaringType != null) {
					continue;
				}
				if(string.Equals(type.Name, typeName, comparison)
				&& ((namespaceName == null
				  && (type.Namespace == null
				   || allowPartialNamespaceMatch
				     )
				    )
				 || (type.Namespace != null
				  && (allowPartialNamespaceMatch
				    ? (type.Namespace.EndsWith(namespaceName, comparison) || type.Namespace.StartsWith(namespaceName, comparison))
				    : string.Equals(type.Namespace, namespaceName, comparison)
				     )
				    )
				   )
				) {
					return type;
				}
			}
		}
		return null;
	}

	private static Dictionary<KeyValuePair<Type,BindingFlags>,MethodInfo[]> getMethodsCache;
	private static Dictionary<int,MethodInfo[]> getNamedMethodsCache;



//	// Eval(), reflection-powered C# evaluator
//	// implemented in separate ReflectionUtil
//	public static object Eval(string command, object target=null, Type expectedType=null)
//	{
//		return Eval(command, target, expectedType);
//	}
//	// convenience overloads for Eval when you don't care about certain things (e.g. no ability to detect error vs. null)
//	// (overload for specific return type (returns null on error (returns null on error or null-result or void-result))
//	public static T Eval<T>(string command, object target=null)
//	{
//		return Eval<T>(command, target);
//	}
	// (overload for caching a property getter as a delegate (returns null on error))
	public static Delegates.ActionWithReturn<T> GetGetter<T>(string pathToProperty, object target=null)
	{
		return Eval<Delegates.ActionWithReturn<T>>(pathToProperty, target);
	}
	// (overload for caching a property setter as a delegate (returns null on error))
	public static Delegates.Action<T> GetSetter<T>(string pathToProperty, object target=null)
	{
		return Eval<Delegates.Action<T>>(pathToProperty, target);
	}
 

	public static T GetAttribute<T>(MemberInfo member, bool recurseUpwards=true) where T : Attribute
	{
		if(member == null) {
			return null;
		}
		if(memberAttributeCache == null) {
			memberAttributeCache = new Dictionary<KeyValuePair<MemberInfo,KeyValuePair<Type,bool>>,Attribute>();
		}
		KeyValuePair<MemberInfo,KeyValuePair<Type,bool>> key = new KeyValuePair<MemberInfo,KeyValuePair<Type,bool>>(member, new KeyValuePair<Type,bool>(typeof(T), recurseUpwards));
		Attribute attribute;
		if(!memberAttributeCache.TryGetValue(key, out attribute)) {
			MemberInfo m = member;
			object[] attributes;
			while(true) {
				attributes = m.GetCustomAttributes(typeof(T), recurseUpwards);
				if(!recurseUpwards || attributes.Length != 0 || !(m is Type)) {
					break;
				}
				// GetCustomAttributes with recurseUpwards doesn't actually work for Type, so we loop here to do it ourselves...
				m = ((Type)m).BaseType;
				if(m == null) {
					break;
				}
			}
			if(attributes.Length == 0) {
				attribute = null;
			} else {
				attribute = (Attribute)(attributes[0]);
			}
			memberAttributeCache.Add(key, attribute);
		}
		return (T)attribute;
	}

	public static bool HasAttribute<T>(MemberInfo member, bool recurseUpwards=true) where T : Attribute
	{
		return GetAttribute<T>(member, recurseUpwards) != null;
	}

	[System.NonSerialized] private static Dictionary<KeyValuePair<MemberInfo,KeyValuePair<Type,bool>>,Attribute> memberAttributeCache;



	public static void RegisterGenericType<T>()
	{
		Type closedGenericType = typeof(T);
//		if(closedGenericType.ContainsGenericParameters) {
//#if UNITY_EDITOR
//			Debug.LogError("ERROR: RegisterGenericType(" + closedGenericType + ")\nThe type needs to be fully-specified (closed).");
//#endif
//			return;
//		}
		if(!closedGenericType.IsGenericType) {
#if UNITY_EDITOR
			Debug.LogError("ERROR: RegisterGenericType(" + closedGenericType + ")\nThe type needs to be generic.");
#endif
			return;
		}
		RegisterGenericTypeUnsafe(closedGenericType);
	}

	public static void RegisterGenericTypeUnsafe(Type closedGenericType)
	{
		if(genericTypeCache == null) {
			InitGenericTypeCache();
		}
		int hash = CalculateTypesHash(closedGenericType.GetGenericTypeDefinition(), closedGenericType.GetGenericArguments());
		genericTypeCache[hash] = closedGenericType;
	}

	
	// calling
	//   ReflectionUtil.MakeGenericType(type, typeArgs)
	// gives similar results as calling
	//   type.MakeGenericType(typeArgs)
	// but it also makes use of a type result cache which can be populated by calling
	//   ReflectionUtil.RegisterGenericType<type<typeArgs>>()
	// beforehand. uncached results might not work on device due to AOT compiled code constraints.
	public static Type MakeGenericType(Type openGenericType, params Type[] typesArgs)
	{
		if(openGenericType == null || typesArgs == null || typesArgs.Length == 0) {
			return null;
		}
		if(!openGenericType.IsGenericType) {
#if UNITY_EDITOR
			Debug.LogWarning("WARNING: MakeGenericType(" + openGenericType + ")\nThe type was not generic.");
#endif
			return openGenericType;
		}
		if(!openGenericType.ContainsGenericParameters) {
#if UNITY_EDITOR
			Debug.LogWarning("WARNING: MakeGenericType(" + openGenericType + ")\nThe type was already closed (fully-specified).");
#endif
			return openGenericType;
		}
		if(genericTypeCache == null) {
			InitGenericTypeCache();
		}
		Type closedType;
		int hash = CalculateTypesHash(openGenericType, typesArgs);
		if(!genericTypeCache.TryGetValue(hash, out closedType))
		{
#if !MICRO_MSCORLIB_ONLY
#if !UNITY_EDITOR
			try
#endif
			{
				closedType = openGenericType.MakeGenericType(typesArgs);
			}
#if !UNITY_EDITOR
			catch
			{
				// possible failure if codegen is required on AOT'd build on device.
				// not sure which exception type(s) this can be yet.
				// we indicate failure by returning null.
			}
#endif
#endif
#if UNITY_EDITOR
			string argsMsg = "";
			for(int i = 0 ; i < typesArgs.Length ; i++) {
				argsMsg += typesArgs[i];
				if(i != typesArgs.Length - 1) {
					argsMsg += ", ";
				}
			}
			string name = openGenericType.ToString().Replace('+','.');
			int nameEndIndex = name.IndexOf('`');
			if(nameEndIndex != -1) {
				name = name.Substring(0, nameEndIndex);
			}
#if MICRO_MSCORLIB_ONLY
			Debug.LogError("Unable to create generic type at runtime. Consider calling ReflectionUtil.RegisterGenericType<" + name + "<" + argsMsg + ">>();");
#else
			if(Application.isPlaying) {
				Debug.LogWarning("Created generic type \"" + closedType + "\" at runtime. Consider calling ReflectionUtil.RegisterGenericType<" + name + "<" + argsMsg + ">>();");
			}
#endif
#endif
			genericTypeCache.Add(hash, closedType);
		}
		return closedType;
	}

	
    public static Type MakeDelegateType(MethodBase method)
    {
		if(method == null) {
			return null;
		}
		Type returnType = (method is MethodInfo) ? ((MethodInfo)method).ReturnType : typeof(void);
		ParameterInfo[] paramInfos = method.GetParameters();
		bool noReturn = (returnType == typeof(void));
		if(noReturn && paramInfos.Length == 0) {
			return typeof(Delegates.Action);
		}
		List<Type> typeArgs = new List<Type>();
		if(!noReturn) {
			typeArgs.Add(returnType);
		}
		foreach(ParameterInfo paramInfo in paramInfos) {
			typeArgs.Add(paramInfo.ParameterType);
		}
		Type genericType = null;
		if(noReturn) {
			switch(paramInfos.Length) {
				case 1: genericType = typeof(Delegates.Action<>); break;
				case 2: genericType = typeof(Delegates.Action<,>); break;
				case 3: genericType = typeof(Delegates.Action<,,>); break;
				case 4: genericType = typeof(Delegates.Action<,,,>); break;
				case 5: genericType = typeof(Delegates.Action<,,,,>); break;
				case 6: genericType = typeof(Delegates.Action<,,,,,>); break;
			}
		} else {
			switch(paramInfos.Length) {
				case 0: genericType = typeof(Delegates.ActionWithReturn<>); break;
				case 1: genericType = typeof(Delegates.ActionWithReturn<,>); break;
				case 2: genericType = typeof(Delegates.ActionWithReturn<,,>); break;
				case 3: genericType = typeof(Delegates.ActionWithReturn<,,,>); break;
				case 4: genericType = typeof(Delegates.ActionWithReturn<,,,,>); break;
				case 5: genericType = typeof(Delegates.ActionWithReturn<,,,,,>); break;
				case 6: genericType = typeof(Delegates.ActionWithReturn<,,,,,,>); break;
			}
		}
		return MakeGenericType(genericType, typeArgs.ToArray());
    }
	
	
	
	static int CalculateTypesHash(Type baseType, Type[] types)
	{
		int hash = baseType.GetHashCode();
		foreach(Type type in types) {
			hash = (hash << 4) | (hash >> 28);
			hash ^= type.GetHashCode();
		}
		return hash;
	}
	
	static void InitGenericTypeCache()
	{
		genericTypeCache = new Dictionary<int,Type>();
	}

	private static Dictionary<int,Type> genericTypeCache;

	private static void CacheAllAssemblies()
	{
		Assembly currentAssembly = Assembly.GetExecutingAssembly();
		// ensure all assemblies we reference are loaded (they probably are already, but...)
#if !ENABLE_IL2CPP
		foreach(AssemblyName assemblyName in currentAssembly.GetReferencedAssemblies()) {
			Assembly.Load(assemblyName);
		}
#endif
		Assembly[] allLoadedAssembies = AppDomain.CurrentDomain.GetAssemblies();
		List<Assembly> assemblyList = new List<Assembly>(allLoadedAssembies);

		// move current assembly to start of list
		assemblyList.Remove(currentAssembly);
		assemblyList.Insert(0, currentAssembly);

		// move Unity assembly to second in list
		Assembly unityEngineAssembly = typeof(UnityEngine.Object).Assembly;
		assemblyList.Remove(unityEngineAssembly);
		assemblyList.Insert(1, unityEngineAssembly);

		// move System assembly to third in list
		Assembly systemAssembly = typeof(object).Assembly;
		assemblyList.Remove(systemAssembly);
		assemblyList.Insert(2, systemAssembly);
		
		allAssemblies = assemblyList.ToArray();
	}

	private static Assembly[] allAssemblies;
	
	public static Assembly[] AllAssemblies { get {
		if(allAssemblies == null) {
			CacheAllAssemblies();
		}
		return allAssemblies;
	} }


#if UNITY_EDITOR || DEVELOPMENT_BUILD
	// finds which Unity object contains the given instance of a Serializable class
	// NOTE: I think there's nothing editor-specific about this implementation,
	//       but I've made it UNITY_EDITOR-only for now since we probably shouldn't use it on device anyway.
	// it has to be in this file (instead of EditorGUIHelper) so that
	// non-editor classes such as SerializedCall can use it for debug info.
	public static UnityEngine.Object FindUnityObjectContaining(object obj)
	{
		string unused;
		return FindUnityObjectContaining(obj, out unused);
	}
	public static UnityEngine.Object FindUnityObjectContaining(object obj, out string propertyPath, UnityEngine.Object[] allObjects=null)
	{
		if(obj == null || obj == DBNull.Value) {
			propertyPath = "";
			return null;
		}
#if ((UNITY_EDITOR || DEVELOPMENT_BUILD) && ENABLE_PROFILER)
		Profiler.BeginSample("ReflectionUtil.FindUnityObjectContaining " + obj.GetType()); try {
#endif
		UnityEngine.Object uobj = obj as UnityEngine.Object;
		if(uobj) {
			propertyPath = "";
			return uobj;
		}
		
		if(objToOwnerUnityObjCache == null) {
			objToOwnerUnityObjCache = new Dictionary<object,KeyValuePair<UnityEngine.Object,string>>();
		}
		KeyValuePair<UnityEngine.Object,string> cachedKVP;
		if(objToOwnerUnityObjCache.TryGetValue(obj, out cachedKVP)) {
			uobj = cachedKVP.Key;
			propertyPath = cachedKVP.Value;
		} else {
			Type objType = obj.GetType();
			if(!IsSerializableReference(objType)) {
				propertyPath = "";
				objToOwnerUnityObjCache.Add(obj, new KeyValuePair<UnityEngine.Object,string>(null, propertyPath));
			} else {
				Type[] unityTypesSerializing;
				Type[] nonUnityTypesSerializing;
				GetSerializingTypes(objType, out unityTypesSerializing, out nonUnityTypesSerializing);
				
				if(allObjects == null) {
					Type searchType = (unityTypesSerializing.Length == 1) ? unityTypesSerializing[0] : typeof(UnityEngine.Object);
					allObjects = Resources.FindObjectsOfTypeAll(searchType);
				}
				propertyPath = "";
				foreach(UnityEngine.Object candidate in allObjects)
				{
					if(!candidate || Array.IndexOf(unityTypesSerializing, candidate.GetType()) == -1) {
						continue;
					}
					if(DoesObjectContain(candidate, obj, nonUnityTypesSerializing, ref propertyPath)) {
						uobj = candidate;
						break;
					}
				}
				objToOwnerUnityObjCache.Add(obj, new KeyValuePair<UnityEngine.Object,string>(uobj, propertyPath));
#if UNITY_EDITOR
//Debug.Log(obj + " -> " + uobj);
				if(uobj == null && !quiet_FindUnityObjectContaining) {
					Debug.LogWarning("Unable to find the Unity object containing " + obj + " (" + obj.GetType() + ")");
					// TODO: maybe we shouldn't add null to the cache in this case?
				}
#endif
			}
		}
		
		return uobj;
#if ((UNITY_EDITOR || DEVELOPMENT_BUILD) && ENABLE_PROFILER)
		} finally { Profiler.EndSample(); }
#endif
	}
	public static UnityEngine.Object FindUnityObjectContaining_OnlyIfCached(object obj, out string propertyPath)
	{
		propertyPath = "";
		if(obj == null || obj == DBNull.Value) {
			return null;
		}
		UnityEngine.Object uobj = obj as UnityEngine.Object;
		if(uobj) {
			return uobj;
		}
		KeyValuePair<UnityEngine.Object,string> cachedKVP;
		if(objToOwnerUnityObjCache != null && objToOwnerUnityObjCache.TryGetValue(obj, out cachedKVP)) {
			uobj = cachedKVP.Key;
			propertyPath = cachedKVP.Value;
		}
		return uobj;
	}
	
	public static string GetObjectPath(UnityEngine.Object owner, object subObj)
	{
		string propertyPath;
		if(FindUnityObjectContaining(subObj, out propertyPath, new UnityEngine.Object[] { owner, })) {
			return propertyPath;
		} else {
			return null;
		}
	}
	
#if UNITY_EDITOR
	public static bool quiet_FindUnityObjectContaining;
#endif

	private static Dictionary<object,KeyValuePair<UnityEngine.Object,string>> objToOwnerUnityObjCache;
	private static Dictionary<Type,KeyValuePair<Type[],Type[]>> typeCanBeSerializedInCache;
//	private static Dictionary<KeyValuePair<object,KeyValuePair<Type,Type[]>>,ObjectAndPath[]> objectsContainedCache;
	
	class ObjectAndPath
	{
		public object obj;
		public string path;
	}
	
	
	public static bool IsSerializable(Type type, bool inArray=false)
	{
		return type == typeof(int)
		|| type == typeof(bool)
		|| type == typeof(string)
		|| type == typeof(float)
		|| type == typeof(byte)
		|| type == typeof(double)
		|| type == typeof(Vector2)
		|| type == typeof(Vector3)
		|| type == typeof(Vector4)
		|| type == typeof(Quaternion)
		|| type == typeof(Color)
		|| type == typeof(Matrix4x4)
		|| type == typeof(Rect)
		|| type == typeof(Bounds)
		|| type == typeof(Gradient)
		|| type == typeof(LayerMask)
		|| type.IsEnum
		|| (typeof(UnityEngine.Object).IsAssignableFrom(type)
#if UNITY_EDITOR
		 && !ComesFromUnityEditor(type)
#endif
		   )
		|| (!type.IsValueType && type != typeof(string) && type != typeof(object) && type != typeof(Exception) && !type.IsArray && HasAttribute<SerializableAttribute>(type, false) && !typeof(MemberInfo).IsAssignableFrom(type))
		|| (!inArray && type.IsArray && IsSerializable(type.GetElementType(), true))
		|| (!inArray && type.IsGenericType && type.GetGenericTypeDefinition() == typeof(List<>) && IsSerializable(type.GetGenericArguments()[0], true))
		;
	}

	public static bool IsSerializableNonReference(Type type, bool inArray=false)
	{
		return type == typeof(int)
		|| type == typeof(bool)
		|| type == typeof(string)
		|| type == typeof(float)
		|| type == typeof(byte)
		|| type == typeof(double)
		|| type == typeof(Vector2)
		|| type == typeof(Vector3)
		|| type == typeof(Vector4)
		|| type == typeof(Quaternion)
		|| type == typeof(Color)
		|| type == typeof(Matrix4x4)
		|| type == typeof(Rect)
		|| type == typeof(Bounds)
		|| type == typeof(Gradient)
		|| type == typeof(LayerMask)
		|| type.IsEnum
		|| (!type.IsValueType && type != typeof(string) && type != typeof(object) && type != typeof(Exception) && !type.IsArray && HasAttribute<SerializableAttribute>(type, false) && !typeof(MemberInfo).IsAssignableFrom(type) && !typeof(UnityEngine.Object).IsAssignableFrom(type))
		|| (!inArray && type.IsArray && IsSerializableNonReference(type.GetElementType(), true))
		|| (!inArray && type.IsGenericType && type.GetGenericTypeDefinition() == typeof(List<>) && IsSerializableNonReference(type.GetGenericArguments()[0], true))
		;
	}

	public static bool IsSerializableReference(Type type)
	{
		return typeof(UnityEngine.Object).IsAssignableFrom(type)
		|| (!type.IsValueType && type != typeof(string) && type != typeof(object) && type != typeof(Exception) && !type.IsArray && HasAttribute<SerializableAttribute>(type, false) && !typeof(MemberInfo).IsAssignableFrom(type))
		|| (type.IsArray && !type.GetElementType().IsArray && IsSerializableReference(type.GetElementType()));
	}

	public static bool IsSerializableNonReferenceClass(Type type)
	{
		if(type.IsValueType || typeof(UnityEngine.Object).IsAssignableFrom(type)) {
			return false;
		}
		if(type.IsArray) {
			return !type.GetElementType().IsArray && IsSerializableNonReferenceClass(type.GetElementType());
		}
		if(type == typeof(string)) {
			return true; // unity deserializes into string, which is not really a value type
		}
		if(type == typeof(object)) {
			return false;
		}
		if(!HasAttribute<SerializableAttribute>(type, false)) {
			return false;
		}
		if(typeof(MemberInfo).IsAssignableFrom(type) || type == typeof(Exception)) {
			return false;
		}
		return true;
	}

	public static bool IsSerializable(FieldInfo field)
	{
		return (field != null
			&& (field.IsPublic || HasAttribute<SerializeField>(field, false))
			&& IsSerializable(field.FieldType)
			&& IsSerializableFieldPart2(field)
		);
	}

	public static bool IsSerializableReference(FieldInfo field)
	{
		return (field != null
			&& (field.IsPublic || HasAttribute<SerializeField>(field, false))
			&& IsSerializableReference(field.FieldType)
			&& IsSerializableFieldPart2(field)
		);
	}

	public static bool IsSerializableNonReference(FieldInfo field)
	{
		return (field != null
			&& (field.IsPublic || HasAttribute<SerializeField>(field, false))
			&& IsSerializableNonReference(field.FieldType)
			&& IsSerializableFieldPart2(field)
		);
	}

	public static bool IsSerializableNonReferenceClass(FieldInfo field)
	{
		return (field != null
			&& (field.IsPublic || HasAttribute<SerializeField>(field, false))
			&& IsSerializableNonReferenceClass(field.FieldType)
			&& IsSerializableFieldPart2(field)
		);
	}
	
	static bool IsSerializableFieldPart2(FieldInfo field)
	{
		if(HasAttribute<NonSerializedAttribute>(field, false)) {
			return false;
		}
		
		Type fieldType = field.FieldType;
		Type declaringType = field.DeclaringType;
		do {
			if(declaringType == fieldType) {
				// type is declared by parent,
				// so Unity can't serialize it since that would mean infinite recursion
				return false;
			}
			declaringType = declaringType.DeclaringType;
		} while(declaringType != null);
		
		if(field.IsLiteral) {
			return false;
		}
		
		return true;
	}

	public static void InitializeSerializablesIn(object obj)
	{
		Type containingType = obj.GetType();
		foreach(FieldInfo field in containingType.GetFields(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance))
		{
			if(!IsSerializableNonReferenceClass(field)) {
				continue;
			}
			object value = field.GetValue(obj);
			if(value == null)
			{
				Type fieldType = field.FieldType;
				if(fieldType == typeof(string)) {
					value = string.Empty;
				} else if(fieldType.IsArray) {
					value = Array.CreateInstance(fieldType.GetElementType(), 0);
				} else {
					value = System.Activator.CreateInstance(fieldType);
				}
				InitializeSerializablesIn(value);
				field.SetValue(obj, value);
			}
		}
	}

#if UNITY_EDITOR
	static bool ComesFromUnityEditor(Type type)
	{
		return ExistsInOrInheritsFromTypeInAssembly(type, typeof(UnityEditor.EditorWindow).Assembly);
	}
	static bool ExistsInOrInheritsFromTypeInAssembly(Type type, Assembly assembly)
	{
		while(type != null)
		{
			if(type.Assembly == assembly) {
				return true;
			}
			type = type.BaseType;
		}
		return false;
	}
#endif

	
	
	public static void GetSerializingTypes(Type objType, out Type[] unityTypesSerializing, out Type[] nonUnityTypesSerializing)
	{
		if(typeCanBeSerializedInCache == null) {
			typeCanBeSerializedInCache = new Dictionary<Type,KeyValuePair<Type[],Type[]>>();
		}
		KeyValuePair<Type[],Type[]> typesSerializing;
		if(typeCanBeSerializedInCache.TryGetValue(objType, out typesSerializing)) {
			unityTypesSerializing = typesSerializing.Key;
			nonUnityTypesSerializing = typesSerializing.Value;
		} else {
			Dictionary<Type,bool> dict = new Dictionary<Type,bool>();
			FindTypesReferencingTypeViaSerialization(objType, dict);
			List<Type> unityObjTypes = new List<Type>();
			List<Type> nonUnityObjTypes = new List<Type>();
			foreach(KeyValuePair<Type,bool> kvp in dict) {
				if(kvp.Value) {
					if(typeof(UnityEngine.Object).IsAssignableFrom(kvp.Key)) {
						unityObjTypes.Add(kvp.Key);
					} else {
						nonUnityObjTypes.Add(kvp.Key);
					}
				}
			}
			unityTypesSerializing = unityObjTypes.ToArray();
			nonUnityTypesSerializing = nonUnityObjTypes.ToArray();
			typeCanBeSerializedInCache.Add(objType, new KeyValuePair<Type[],Type[]>(unityTypesSerializing, nonUnityTypesSerializing));
		}
	}
	
//	private static bool DoesObjectContainUncached(object containingObj, object containedObj, Type[] typesToRecurseInto, List<object> stack, ref string propertyPath)
//	{
//		if(containingObj == null || containedObj == null || stack.Contains(containingObj)) {
//			return false;
//		}
//		Type containingType = containingObj.GetType();
//		Type containedType = containedObj.GetType();
//		foreach(FieldInfo field in containingType.GetFields(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance))
//		{
//			if(!IsSerializable(field)) {
//				continue;
//			}
//			Type fieldType = field.FieldType;
//			// note: I'd use IsAssignableFrom here (e.g. fieldType.IsAssignableFrom(referencedType)),
//			//       but unity serialization doesn't support polymorphism anyway
//			if(fieldType == containedType) {
//				if(field.GetValue(containingObj) == containedObj) {
//					// found the final field it is
//					propertyPath = field.Name;
//					return true;
//				}
//			} else if(fieldType.IsArray) {
//				Type elemType = fieldType.GetElementType();
//				if(elemType == containedType) {
//					System.Array array = (System.Array)field.GetValue(containingObj);
//					if(array != null) {
//						int index = Array.IndexOf(array, containedObj);
//						if(index != -1) {
//							// found the array that it's an element of
//							propertyPath = field.Name + ".Array.data[" + index + "]";
//							return true;
//						}
//					}
//				} else if(Array.IndexOf(typesToRecurseInto, elemType) != -1) {
//					System.Array array = (System.Array)field.GetValue(containingObj);
//					if(array != null) {
//						int count = array.Length;
//						if(count != 0)
//						{
//							stack.Add(containingObj);
//							try
//							{
//								for(int i = 0 ; i < count ; i++) {
//									if(DoesObjectContainUncached(array.GetValue(i), containedObj, typesToRecurseInto, stack, ref propertyPath)) {
//										// found the array that it's inside an element of
//										propertyPath = field.Name + ".Array.data[" + i + "]." + propertyPath;
//										return true;
//									}
//								}
//							}
//							finally
//							{
//								stack.RemoveAt(stack.Count - 1);
//							}
//						}
//					}
//				}
//			} else if(fieldType.IsGenericType && fieldType.GetGenericTypeDefinition() == typeof(List<>)) {
//				Type elemType = fieldType.GetGenericArguments()[0];
//				if(elemType == containedType) {
//					IList list = (IList)field.GetValue(containingObj);
//					if(list != null) {
//						int index = list.IndexOf(containedObj);
//						if(index != -1) {
//							// found the list that it's an element of
//							propertyPath = field.Name + ".Array.data[" + index + "]";
//							return true;
//						}
//					}
//				} else if(Array.IndexOf(typesToRecurseInto, elemType) != -1) {
//					IList list = (IList)field.GetValue(containingObj);
//					if(list != null) {
//						int count = list.Count;
//						if(count != 0)
//						{
//							stack.Add(containingObj);
//							try
//							{
//								for(int i = 0 ; i < count ; i++) {
//									if(DoesObjectContainUncached(list[i], containedObj, typesToRecurseInto, stack, ref propertyPath)) {
//										// found the list that it's inside an element of
//										propertyPath = field.Name + ".Array.data[" + i + "]." + propertyPath;
//										return true;
//									}
//								}
//							}
//							finally
//							{
//								stack.RemoveAt(stack.Count - 1);
//							}
//						}
//					}
//				}
//			} else if(Array.IndexOf(typesToRecurseInto, fieldType) != -1) {
//				object fieldObj = field.GetValue(containingObj);
//				if(fieldObj != null) {
//					stack.Add(containingObj);
//					try
//					{
//						if(DoesObjectContainUncached(fieldObj, containedObj, typesToRecurseInto, stack, ref propertyPath)) {
//							// found the field that contains it indirectly
//							propertyPath = field.Name + "." + propertyPath;
//							return true;
//						}
//					}
//					finally
//					{
//						stack.RemoveAt(stack.Count - 1);
//					}
//				}
//			}
//		}
//		return false;
//	}
	
	private static bool DoesObjectContain(object containingObj, object containedObj, Type[] typesToRecurseInto, ref string propertyPath)
	{
		if(containingObj == null || containedObj == null) {
			return false;
		}
		Type containedType = containedObj.GetType();
		ObjectAndPath[] contained = GetObjectsContained(containingObj, containedType, typesToRecurseInto);
		foreach(ObjectAndPath op in contained) {
			if(op.obj == containedObj) {
				propertyPath = op.path;
				return true;
			}
		}
		return false;
	}
	
	// note: type matching is exact. e.g. this will never find any result if containedType == typeof(Component)
	private static ObjectAndPath[] GetObjectsContained(object containingObj, Type containedType, Type[] typesToRecurseInto)
	{
		// this cache temporarily disabled due to concerns of correctness (nobody clears the cache?)
//		if(objectsContainedCache == null) {
//			objectsContainedCache = new Dictionary<KeyValuePair<object,KeyValuePair<Type,Type[]>>,ObjectAndPath[]>();
//		}
//		KeyValuePair<object,KeyValuePair<Type,Type[]>> key = new KeyValuePair<object,KeyValuePair<Type,Type[]>>(containingObj, new KeyValuePair<Type,Type[]>(containedType, typesToRecurseInto));
		ObjectAndPath[] rv;
//		if(!objectsContainedCache.TryGetValue(key, out rv)) {
			List<object> stack = new List<object>();
			List<ObjectAndPath> rvs = new List<ObjectAndPath>();
			FindObjectsContained(containingObj, containedType, typesToRecurseInto, stack, "", rvs);
			rv = rvs.ToArray();
//			objectsContainedCache.Add(key, rv);
//		}
		return rv;
	}
	private static void FindObjectsContained(object containingObj, Type containedType, Type[] typesToRecurseInto, List<object> stack, string propertyPath, List<ObjectAndPath> rvs)
	{
		if(stack.Contains(containingObj) || containingObj == null) {
			return;
		}
		Type containingType = containingObj.GetType();
		foreach(FieldInfo field in containingType.GetFields(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance))
		{
			if(!IsSerializable(field)) {
				continue;
			}
			Type fieldType = field.FieldType;
			// note: I'd use IsAssignableFrom here (e.g. fieldType.IsAssignableFrom(referencedType)),
			//       but unity serialization doesn't support polymorphism anyway
			if(fieldType == containedType) {
				object obj = field.GetValue(containingObj);
				if(obj != null && obj.GetType() == containedType) {
					// found a final field it is
					string path = propertyPath + field.Name;
					rvs.Add(new ObjectAndPath(){ path=path, obj=obj, });
				}
			} else if(fieldType.IsArray) {
				Type elemType = fieldType.GetElementType();
				if(elemType == containedType) {
					System.Array array = (System.Array)field.GetValue(containingObj);
					if(array != null) {
						int arrayLength = array.Length;
						for(int index = 0 ; index < arrayLength ; index++) {
							object obj = array.GetValue(index);
							if(obj != null && obj.GetType() == containedType) {
								// found an array that it's an element of
								string path = propertyPath + field.Name + ".Array.data[" + index + "]";
								rvs.Add(new ObjectAndPath(){ path=path, obj=obj, });
							}
						}
					}
				} else if(Array.IndexOf(typesToRecurseInto, elemType) != -1) {
					System.Array array = (System.Array)field.GetValue(containingObj);
					if(array != null) {
						int count = array.Length;
						if(count != 0) {
							stack.Add(containingObj);
							for(int i = 0 ; i < count ; i++) {
								// check for elements inside the array
								string path = propertyPath + field.Name + ".Array.data[" + i + "].";
								FindObjectsContained(array.GetValue(i), containedType, typesToRecurseInto, stack, path, rvs);
							}
							stack.RemoveAt(stack.Count - 1);
						}
					}
				}
			} else if(fieldType.IsGenericType && fieldType.GetGenericTypeDefinition() == typeof(List<>)) {
				Type elemType = fieldType.GetGenericArguments()[0];
				if(elemType == containedType) {
					IList list = (IList)field.GetValue(containingObj);
					if(list != null) {
						int listCount = list.Count;
						for(int index = 0 ; index < listCount ; index++) {
							object obj = list[index];
							if(obj != null && obj.GetType() == containedType) {
								// found a list that it's an element of
								string path = propertyPath + field.Name + ".Array.data[" + index + "]";
								rvs.Add(new ObjectAndPath(){ path=path, obj=obj, });
							}
						}
					}
				} else if(Array.IndexOf(typesToRecurseInto, elemType) != -1) {
					IList list = (IList)field.GetValue(containingObj);
					if(list != null) {
						int count = list.Count;
						if(count != 0) {
							stack.Add(containingObj);
							for(int i = 0 ; i < count ; i++) {
								// check for elements inside the list
								string path = propertyPath + field.Name + ".Array.data[" + i + "].";
								FindObjectsContained(list[i], containedType, typesToRecurseInto, stack, path, rvs);
							}
							stack.RemoveAt(stack.Count - 1);
						}
					}
				}
			} else if(Array.IndexOf(typesToRecurseInto, fieldType) != -1) {
				object fieldObj = field.GetValue(containingObj);
				if(fieldObj != null) {
					stack.Add(containingObj);
					// check for elements inside the field
					string path = propertyPath + field.Name + ".";
					FindObjectsContained(fieldObj, containedType, typesToRecurseInto, stack, path, rvs);
					stack.RemoveAt(stack.Count - 1);
				}
			}
		}
	}
	
	private static void FindTypesReferencingTypeViaSerialization(Type referencedType, Dictionary<Type,bool> dict)
	{
		if(allAssemblies == null) {
			CacheAllAssemblies();
		}
		Assembly systemAssembly = typeof(object).Assembly;
		Assembly unityEngineAssembly = typeof(UnityEngine.Object).Assembly;
		List<Type> allTypes = new List<Type>();
		foreach(Assembly assembly in allAssemblies)
		{
			if(assembly == systemAssembly) {
				continue;
			}
			if(assembly == unityEngineAssembly && referencedType.Assembly != unityEngineAssembly) {
				continue;
			}
			allTypes.AddRange(GetTypesInAssembly(assembly));
		}
		FindTypesReferencingTypeViaSerialization(referencedType, dict, new List<Type>(), allTypes.ToArray());
	}
	
	private static void FindTypesReferencingTypeViaSerialization(Type referencedType, Dictionary<Type,bool> dict, List<Type> stack, Type[] allTypes)
	{
		if(stack.Contains(referencedType)) {
			return;
		}
		
		//double startTime = EditorApplication.timeSinceStartup;
		
		Type typeOfUnityObject = typeof(UnityEngine.Object);
		
		List<Type> subTypes = new List<Type>();
		
		foreach(Type type in allTypes)
		{
			if(dict.ContainsKey(type)) {
				continue; // already calculated
			}
			
			bool isUnityType = typeOfUnityObject.IsAssignableFrom(type);
			if(!isUnityType) {
				// if it's not a Unity type, it needs [Serializable] on the class
				//if(!HasAttribute<SerializableAttribute>(type)) { // this would cache, like, everything
				if(type.GetCustomAttributes(typeof(SerializableAttribute), false).Length == 0) {
					continue;
				}
			}
			
			// we only check fields here because that's all Unity serializes
			// and we're using this function only to track down serialized references
			foreach(FieldInfo field in type.GetFields(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance))
			{
				if(!IsSerializableReference(field)) {
					continue;
				}
				bool match = false;
				
				Type fieldType = field.FieldType;

				// note: I'd use IsAssignableFrom here (e.g. fieldType.IsAssignableFrom(referencedType)),
				//       but unity serialization doesn't support polymorphism anyway
				if(fieldType == referencedType) {
					match = true;
				} else if(fieldType.IsArray && fieldType.GetElementType() == referencedType) {
					match = true;
				} else if(fieldType.IsGenericType && fieldType.GetGenericArguments()[0] == referencedType && fieldType.GetGenericTypeDefinition() == typeof(List<>)) {
					match = true;
				}
				
				if(match)
				{
					dict[type] = true;
					
					// if type isn't a unity object, it could itself be contained by another serialized type
					if(!isUnityType)
					{
						subTypes.Add(type);
					}
					
					break; // <-- optimization
				}
			}
		}
		
		int subTypeCount = subTypes.Count;
		if(subTypeCount > 0)
		{
			stack.Add(referencedType);
			for(int i = 0 ; i < subTypeCount ; i++)
			{
				FindTypesReferencingTypeViaSerialization(subTypes[i], dict, stack, allTypes);
			}
			stack.RemoveAt(stack.Count - 1);
		}

		//if(stack.Count == 0) { Debug.LogError(EditorApplication.timeSinceStartup - startTime + "\n" + referencedType); }
	}

	public static UnityEngine.Object FindPingableObjectContaining(object obj)
	{
#if UNITY_EDITOR		
		bool wasQuiet = quiet_FindUnityObjectContaining;
		quiet_FindUnityObjectContaining = true;
#endif		
		try {
			UnityEngine.Object uobj = FindUnityObjectContaining(obj);
			GameObject go = null;
			if(uobj is Component) {
				Component c = ((Component)uobj);
				if(c) {
					go = c.gameObject;
				}
			} else {
				go = uobj as GameObject;
			}
			if(go) {
				Transform t = go.transform;
				while((go.hideFlags & HideFlags.HideInHierarchy) != 0 && t.parent) {
					t = t.parent;
					go = t.gameObject;
					uobj = go;
				}
			}
			return uobj;
		} finally {
#if UNITY_EDITOR					
			quiet_FindUnityObjectContaining = wasQuiet;
#endif			
		}
	}



	public static Type[] FindAllTypesInAnyNamespace()
	{
		if(allAssemblies == null) {
			CacheAllAssemblies();
		}
		List<Type> typesFound = new List<Type>();
		foreach(Assembly assembly in allAssemblies) {
			foreach(Type type in GetTypesInAssembly(assembly)) {
				if(type.IsClass && !type.IsAbstract) {
					if(type.Namespace != null && type.Namespace.Length != 0) {
						typesFound.Add(type);
					}
				}
			}
		}
		return typesFound.ToArray();
	}

	public static Type[] FindAllTypesWithAttribute(Type attributeType)
	{
		if(findAttributeTypesCache == null) {
			findAttributeTypesCache = new Dictionary<Type,Type[]>();
		}
		Type[] rv;
		if(!findAttributeTypesCache.TryGetValue(attributeType, out rv)) {
			List<Type> typesFound = new List<Type>();
			if(allAssemblies == null) {
				CacheAllAssemblies();
			}
			foreach(Assembly assembly in allAssemblies) {
				foreach(Type type in GetTypesInAssembly(assembly)) {
					//if(HasAttribute<T>(type)) { // this would cache, like, everything
					if(type.GetCustomAttributes(attributeType, false).Length != 0) {
						typesFound.Add(type);
					}
				}
			}
			rv = typesFound.ToArray();
			findAttributeTypesCache.Add(attributeType, rv);
		}
		return rv;
	}
	private static Dictionary<Type,Type[]> findAttributeTypesCache;


#endif // UNITY_EDITOR

	private static Dictionary<Type,Type[]> typesImplementingCache;

	public static Type[] FindTypesImplementing(Type interfaceType)
	{
		if(typesImplementingCache == null) {
			typesImplementingCache = new Dictionary<Type,Type[]>();
		}
		Type[] rv;
		if(!typesImplementingCache.TryGetValue(interfaceType, out rv)) {
			List<Type> typesFound = new List<Type>();
			//TypeFilter filter = (m,c) => { return m == c; };
			foreach(Assembly assembly in AllAssemblies) {
				foreach(Type type in GetTypesInAssembly(assembly)) {
					if(type.IsClass && !type.IsAbstract) {
						if(Array.IndexOf(type.GetInterfaces(), interfaceType) != -1) {
							typesFound.Add(type);
						}
					}
				}
			}
			rv = typesFound.ToArray();
			typesImplementingCache.Add(interfaceType, rv);
		}
		return rv;
	}
	
	private static Dictionary<Type,Type[]> typesInheritingCache;

	public static Type[] FindTypesInheriting(Type baseType)
	{
		if(typesInheritingCache == null) {
			typesInheritingCache = new Dictionary<Type,Type[]>();
		}
		Type[] rv;
		if(!typesInheritingCache.TryGetValue(baseType, out rv)) {
			List<Type> typesFound = new List<Type>();
			foreach(Assembly assembly in AllAssemblies) {
				foreach(Type type in GetTypesInAssembly(assembly)) {
					if(baseType.IsAssignableFrom(type) && baseType != type && !type.ContainsGenericParameters) {
						typesFound.Add(type);
					}
				}
			}
			rv = typesFound.ToArray();
			typesInheritingCache.Add(baseType, rv);
		}
		return rv;
	}

#if UNITY_EDITOR
	// these don't really need to be editor-only,
	// but it's probably for the best if runtime code doesn't need to use them.
	public static bool IsStatic(MemberInfo member)
	{
		switch(member.MemberType)
		{
			case MemberTypes.Field:
				return ((FieldInfo)member).IsStatic;
			case MemberTypes.Method:
				return ((MethodInfo)member).IsStatic;
			case MemberTypes.Property:
				{
					MethodInfo m = ((PropertyInfo)member).GetGetMethod(true);
					if(m != null && m.IsStatic) {
						return true;
					}
					m = ((PropertyInfo)member).GetSetMethod(true);
					if(m != null && m.IsStatic) {
						return true;
					}
					return false;
				}
			case MemberTypes.Event:
				{
					MethodInfo m = ((EventInfo)member).GetAddMethod(true);
					if(m != null && m.IsStatic) {
						return true;
					}
					m = ((EventInfo)member).GetRemoveMethod(true);
					if(m != null && m.IsStatic) {
						return true;
					}
					return false;
				}
			default:
				return false;
		}
	}
	
	public static bool IsPublic(MemberInfo member)
	{
		switch(member.MemberType)
		{
			case MemberTypes.Field:
				return ((FieldInfo)member).IsPublic;
			case MemberTypes.Method:
				return ((MethodInfo)member).IsPublic;
			case MemberTypes.Property:
				{
					MethodInfo m = ((PropertyInfo)member).GetGetMethod(true);
					if(m != null && m.IsPublic) {
						return true;
					}
					m = ((PropertyInfo)member).GetSetMethod(true);
					if(m != null && m.IsPublic) {
						return true;
					}
					return false;
				}
			case MemberTypes.Event:
				{
					MethodInfo m = ((EventInfo)member).GetAddMethod(true);
					if(m != null && m.IsPublic) {
						return true;
					}
					m = ((EventInfo)member).GetRemoveMethod(true);
					if(m != null && m.IsPublic) {
						return true;
					}
					return false;
				}
			default:
				return false;
		}
	}
	
	public static bool IsPrivate(MemberInfo member)
	{
		switch(member.MemberType)
		{
			case MemberTypes.Field:
				return ((FieldInfo)member).IsPrivate;
			case MemberTypes.Method:
				return ((MethodInfo)member).IsPrivate;
			case MemberTypes.Property:
				{
					MethodInfo m = ((PropertyInfo)member).GetGetMethod(true);
					if(m != null && m.IsPrivate) {
						return true;
					}
					m = ((PropertyInfo)member).GetSetMethod(true);
					if(m != null && m.IsPrivate) {
						return true;
					}
					return false;
				}
			case MemberTypes.Event:
				{
					MethodInfo m = ((EventInfo)member).GetAddMethod(true);
					if(m != null && m.IsPrivate) {
						return true;
					}
					m = ((EventInfo)member).GetRemoveMethod(true);
					if(m != null && m.IsPrivate) {
						return true;
					}
					return false;
				}
			default:
				return false;
		}
	}
	
	public static bool IsProtected(MemberInfo member)
	{
		switch(member.MemberType)
		{
			case MemberTypes.Field:
				return ((FieldInfo)member).IsFamily;
			case MemberTypes.Method:
				return ((MethodInfo)member).IsFamily;
			case MemberTypes.Property:
				{
					MethodInfo m = ((PropertyInfo)member).GetGetMethod(true);
					if(m != null && m.IsFamily) {
						return true;
					}
					m = ((PropertyInfo)member).GetSetMethod(true);
					if(m != null && m.IsFamily) {
						return true;
					}
					return false;
				}
			case MemberTypes.Event:
				{
					MethodInfo m = ((EventInfo)member).GetAddMethod(true);
					if(m != null && m.IsFamily) {
						return true;
					}
					m = ((EventInfo)member).GetRemoveMethod(true);
					if(m != null && m.IsFamily) {
						return true;
					}
					return false;
				}
			default:
				return false;
		}
	}
#endif

#if UNITY_EDITOR
	// this needs to be editor-only since it uses SerializedProperty.
	// it's only in this file (instead of EditorGUIHelper) so that
	// non-editor classes such as SerializedCall can use it for debug info.
	public static string GetDisplayPath(string propertyPath, UnityEngine.Object parentObject)
	{
		SerializedObject so = new SerializedObject(parentObject);
		if(so == null) {
			return propertyPath;
		}
		SerializedProperty sp = so.FindProperty(propertyPath);
		if(sp == null) {
			return propertyPath;
		}
		return GetDisplayPath(sp);
	}
	
	public static string GetDisplayPath(SerializedProperty sp)
	{
		string propertyPath = sp.propertyPath;
		// work backwards from end of propertyPath string searching for brackets, replacing stuff like
		//   states.Array.data[0].onEnter.callback
		// with
		//   states.Array.data.show.onEnter.callback
		// which will then become
		//   states.show.onEnter
		int searchIndex = propertyPath.Length - 1;
		while(searchIndex > 0)
		{
			int lastEndBracketIndex = propertyPath.LastIndexOf(']', searchIndex);
			if(lastEndBracketIndex == -1) {
				break;
			}
			searchIndex = lastEndBracketIndex - 1;
			string subPath = propertyPath.Substring(0, lastEndBracketIndex + 1);
			
			string replacementValue = null;

			SerializedProperty sp2 = sp.serializedObject.FindProperty(subPath);
			if(sp2 != null) {
				int sp2BaseDepth = sp2.depth;
				bool goIn = true;
				while(sp2.Next(goIn) && sp2.depth > sp2BaseDepth) {
					goIn = false;
					SerializedPropertyType propertyType = sp2.propertyType;
					if(propertyType == SerializedPropertyType.String) {
						string stringValue = sp2.stringValue;
						if(stringValue != null && stringValue.Length != 0) {
							string value = sp2.stringValue;
							if(value != null && value.Length != 0 && value.Length <= 32)
							{
#if !NO_SERIALIZABLE_PRIMITIVE
								if(sp2.name == "methodName")
								{
									string argsPropertyPath = subPath + ".args";
									SerializedProperty spArgs = sp.serializedObject.FindProperty(argsPropertyPath);
									if(spArgs == null || !spArgs.isArray || spArgs.arraySize == 0)
									{
										value += "()";
									}
									else
									{
										value += "(";
										//int spArgsBaseDepth = spArgs.depth;
										int arraySize = spArgs.arraySize;
										for(int i = 0 ; i < arraySize ; i++)
										{
											bool isLast = (i == arraySize-1);
											SerializedProperty spArg = spArgs.GetArrayElementAtIndex(i);
											string argDesc = SerializablePrimitive.GetPropertyDesc(spArg);
											value += (isLast) ? argDesc : (argDesc + ", ");
										}
										value += ")";
									}
								}
#endif
//Debug.Log("YAY found " + stringValue + " in-between " + propertyPath.Substring(0,ind) + " and " + propertyPath.Substring(lastEndBracketIndex + 1));
								//propertyPath = propertyPath.Substring(0,ind) + "." + value + propertyPath.Substring(lastEndBracketIndex + 1);
								if(replacementValue == null) {
									replacementValue = value;
								} else {
									if(sp2.name.StartsWith("to") || sp2.name.StartsWith("next")) {
										replacementValue += ">" + value;
									} else if(sp2.name.StartsWith("from") || sp2.name.StartsWith("prev")) {
										replacementValue = value + ">" + replacementValue;
									} else if(sp2.name.Contains("arent")) {
										replacementValue = "(" + value + "/)" + replacementValue;
									} else {
										replacementValue += "(" + value + ")";
									}
									break;
								}
								//break;
							}
						}
					}
				}
			}
			
			if(replacementValue != null) {
				int ind = propertyPath.LastIndexOf("[", searchIndex);
				propertyPath = propertyPath.Substring(0,ind) + "." + replacementValue + propertyPath.Substring(lastEndBracketIndex + 1);
			}
		}
		
		propertyPath = propertyPath.Replace(".Array.data", "").Replace(".target.obj", "");
//		if(propertyPath.EndsWith(".callback")) {
//			propertyPath = propertyPath.Substring(0, propertyPath.Length - ".callback".Length);
//		}
//		if(propertyPath.EndsWith(".event")) {
//			propertyPath = propertyPath.Substring(0, propertyPath.Length - ".event".Length);
//		}
		propertyPath += ".";
		propertyPath = propertyPath.Replace(".events.",".").Replace(".event.",".").Replace(".callbacks.",".").Replace(".callback.",".").Replace(".calls.",".").Replace(".call.",".");
		propertyPath = propertyPath.Substring(0, propertyPath.Length - 1);
		return propertyPath;
	}
#endif // UNITY_EDITOR

	// release any memory used by ReflectionUtil's caches
	// TODO: allow callbacks to be registered for this function (to be called when this function is called)
	public static void StaticCleanup()
	{
		typeLookupCache = null;
		getMethodsCache = null;
		getNamedMethodsCache = null;
		memberAttributeCache = null;
		genericTypeCache = null;
		typesImplementingCache = null;
		typesInheritingCache = null;
#if UNITY_EDITOR || DEVELOPMENT_BUILD
		objToOwnerUnityObjCache = null;
		typeCanBeSerializedInCache = null;
//		objectsContainedCache = null;
		findAttributeTypesCache = null;
#endif
		allAssemblies = null;
		StaticCleanupPart2();
	}
}
}
