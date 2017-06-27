#if UNITY_EDITOR
//#define FORCE_DEBUG_EVAL
#endif
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Reflection;
#if UNITY_EDITOR
using UnityEditor;
#endif
namespace Stm.V1_1 { 

public static partial class ReflectionUtil
{
	// Eval(), reflection-powered C# evaluator
	// this version of Eval supports a limited subset of C# which should nevertheless be powerful enough for many use cases.
	// it basically just converts a string into a series of calls to type.GetMember()
	// followed by fieldInfo/propertyInfo.GetValue or methodInfo.Invoke.
	// this is a bit hacky, but is intended to support execution at runtime on device (even AOT'd),
	// thus we can't assume we can emit code, and we want to minimize memory fragmentation and to some extent performance impact
	//
	// command is the string to be evaluated (the substring of it between startIndex inclusively and endIndex exclusively, to be precise)
	// target can be an object (instance context), or null (static context or constant expressions), or a type or an array with a type in it (static context (or instance context on the type or array object)).
	// the return value is the result of evaluating the command as an expression in the context of the target, cast to expectedType if expectedType is given.
	// if expectedType is a delegate type and command evaluates to a method or property, a delegate of that type will be created and returned.
	// in case of an error, the error will be logged and System.DBNull.Value will be returned.
	// in case of a "void" result, System.DBNull.Value is returned.
	public static object Eval(string command, object target=null, Type expectedType=null, int startIndex=0, int endIndex=-1)
	{
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
		Eval_depth++;
		try {
#endif
		if(command == null) {
			return null;
		}
		
		// TODO: cleanup/refactor messy code
		
		if(endIndex < 0) {
			endIndex = command.Length + endIndex + 1;
		}
		Type type = null;
		bool isStatic = true;
		bool firstIdentifier = true;
		string identifier = "";
		
		if(target is UnityEngine.Object && (UnityEngine.Object)target == null) {
			target = null; // eliminate Unity's "fake null", since otherwise (target != null) will return true when target = "None (Object)"
		}
		
		if(target != null)
		{
			type = target.GetType();
//			if(typeof(Type).IsAssignableFrom(type)) {
//				type = (Type)target;
//			} else {
				isStatic = false;
//			}
		}
		object origTarget = target;
		bool wasStatic = isStatic;
//#if UNITY_EDITOR
		int origStartIndex = startIndex;
//#endif
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
		if(DebugEval) {
			Debug.Log(debugEvalPrefix + "Eval: " + command.Substring(startIndex,endIndex-startIndex) + ", target = " + ((object)target??"null") + (isStatic?" (static)":"") + ", type = " + ((object)type??"null") + (expectedType!=null ? (", expectedType = "+expectedType) : ""));
		}
#endif
		MemberInfo[] members = null;
		
		object hiddenFirstArg = null; // used for calling operator functions (or maybe other static functions that implicitly take a first argument)
		bool pendingOperator = false;
		bool unaryOperator = true;
		object lastEvaluatedTarget = null;
		MemberInfo lastEvaluatedMember = null;
		object[] lastEvaluatedIndex = null;
		last_Eval_lastEvaluatedMember = lastEvaluatedMember;
		last_Eval_lastEvaluatedIndex = lastEvaluatedIndex;
		last_Eval_lastEvaluatedTarget = lastEvaluatedTarget;
		//last_Eval_returned = false;
		last_Eval_broke = false;
		last_Eval_continued = false;
		
		if(typeof(MemberInfo[]).IsAssignableFrom(type)) {
			members = (MemberInfo[])target;
		} else if(typeof(MemberInfo).IsAssignableFrom(type)) {
			members = new MemberInfo[] { (MemberInfo)target, };
		}
		MemberInfo[] origMembers = members;
		object[] partialArgs = null;
		
		bool pendingConstructor = false;
		//Type pendingIs = null;
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
		string parentNamespaceForMessage = null;
#endif
		string pendingNamespace = null;
		bool haveResult = false;
		try
		{
			while(startIndex < endIndex)
			{
				if(command[startIndex] == '.' && !firstIdentifier && !pendingOperator) {
					members = null;
					startIndex++;
				}
				else
				{
					startIndex = ParseUtils.GetNextTokenStartIndex(command, startIndex, endIndex);
					if(startIndex == endIndex) {
						break;
					}
					
					bool isOp = pendingOperator;
					char c = command[startIndex];
					if(c == '(' || c == '{' || isOp) {
						int endBracketIndex = startIndex;
						bool shortCircuit = false;
						if(isOp) {
							//bool unary = unaryOperator;//(hiddenFirstArg == null);
							endBracketIndex = GetOperandEndIndex(command, startIndex, endIndex, identifier);
							if(endBracketIndex <= startIndex) {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
								if(DebugEval) {
									Debug.LogWarning(debugEvalPrefix + "No operand end found at " + command.Substring(startIndex, endIndex-startIndex));
								}
#endif
								isOp = false;
							} else {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
								if(DebugEval) {
									Debug.Log(debugEvalPrefix + "Operand: " + command.Substring(startIndex, endBracketIndex-startIndex) + ", identifier = " + identifier + ", unary = " + unaryOperator);
								}
#endif
								startIndex--; // because EvalArgs skips the first character, assuming it's a bracket
							}
							if(target is bool) {
								shortCircuit = (identifier == ((bool)target ? "op_LogicalOr" : "op_LogicalAnd"));
							}
						}
						if(!isOp) {
							endBracketIndex = ParseUtils.GetBracketEndIndex(command, startIndex, endIndex, c, (c == '(' ? ')' : '}'));
						}
					
						if(endBracketIndex > startIndex) {
							if(!shortCircuit) {
								last_Eval_lastEvaluatedMember = lastEvaluatedMember;
								last_Eval_lastEvaluatedIndex = lastEvaluatedIndex;
								last_Eval_lastEvaluatedTarget = lastEvaluatedTarget;
								object[] args = EvalArgs(origTarget, command, startIndex, endBracketIndex, hiddenFirstArg, !unaryOperator, ',', null, false, true);

								if(args != null /*&& args.Length != 0*/ && args[args.Length-1] == DBNull.Value && members != null) {
									// if we failed to evaluate arguments, propagate the failure (it's already been logged)
									return DBNull.Value;
								}
								
								if(pendingConstructor && type != null) {
									members = GetTypeConstructors(type, ref args);
									pendingConstructor = false;
								}

								if(endBracketIndex+1 >= endIndex && expectedType != null && typeof(Delegate).IsAssignableFrom(expectedType) && args != null && members != null && members.Length != 0)
								{
									// HACK/BUG: this breaks the case where we're calling a function that should return the delegate.
									// but we need it for the supplying of partial args to work,
									// and it's easy to work around this limitation by wrapping the function call in parentheses.
									// (e.g.  foo(x) ->  (foo(x)) )
									// TODO: maybe we should try calling the function, and if it doesn't return a delegate, then treat it as partial args?
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
									if(DebugEval) {
										if(isOp) {
											startIndex++;
										}
										string argsMsg = GetArgsDisplay(args, true, true);
										if(members != null && members.Length != 0) {
											Debug.Log("Binding: Skipped calling function " + members[0] + " with " + argsMsg + ", " + command.Substring(origStartIndex, startIndex - origStartIndex) + "\u275A" + command.Substring(startIndex));
										} else {
											Debug.Log("Binding: Skipped calling function " + command.Substring(origStartIndex, startIndex - origStartIndex) + " with " + argsMsg + " = " + command.Substring(startIndex));
										}
										if(isOp) {
											startIndex--;
										}
									}
#endif
									partialArgs = args;
									break;
								}
								
								pendingOperator = false;
								
								// call method
								haveResult = false;
								if(members != null || isOp) {
									int attempts = 0;
									int maxAttempts = 1;
									if(isOp && identifier == "op_Explicit") {
										maxAttempts = 2;
									}
									do {
										if(members != null) {
											MethodBase methodToInvoke = null;
											foreach(MemberInfo member in members) {
												MethodBase method = member as MethodBase;
												if(DoesMethodMatchArgsDirect(method, args, false) && !method.ContainsGenericParameters) {
													methodToInvoke = method;
													break;
												}
											}
											if(methodToInvoke == null) {
												// if no direct match found, try finding one with default arguments and (invoke-)implicit casts
												foreach(MemberInfo member in members) {
													MethodBase method = member as MethodBase;
													if(DoesMethodMatchArgsWithDefaults(method, args, true) && !method.ContainsGenericParameters) {
														object[] extendedArgs = ExtendArgs(args, method);
														if(DoesMethodMatchArgsDirect(method, extendedArgs, true)) {
															methodToInvoke = method;
															args = extendedArgs;
															break;
														}
													}
												}
											}
											if(methodToInvoke != null) {
												MethodBase method = methodToInvoke;
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
												if(DebugEval) {
													Debug.Log(debugEvalPrefix + "Invoke: " + (method.IsStatic?"static ":"") + method + " in " + method.DeclaringType.FullName.Replace('+','.') + " with " + GetArgsDisplay(args, true, true));
												}
#endif
												object invokeObj = isStatic ? null : target;
												if(invokeObj != null || method.IsStatic || method.IsConstructor) {
													target = method.Invoke(invokeObj, args);
													haveResult = true;
												} else {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
													if(!Eval_silent || DebugEval) {
														Debug.LogError("Evaluation Error: Tried to call " + method + " on a null " + GetTypeDisplayNameForDebug((type != null) ? type.Name : (hiddenFirstArg != null) ? hiddenFirstArg.GetType().FullName : null));
													}
#endif
												}
												if(method is MethodInfo && ((MethodInfo)method).ReturnType == typeof(void)) {
													target = DBNull.Value;
												}
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
												bool appliedOK = 
#endif
												ApplyByRefArgChanges(method, args, last_EvalArgs_targetAndMemberInfos);
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
												if(!appliedOK && (!Eval_silent || DebugEval)) {
													int actualStartIndex = isOp ? startIndex+1 : startIndex;
													Debug.LogWarning("Evaluation Warning: Failed to assign value when calling " + method + ", " + command.Substring(origStartIndex, actualStartIndex-origStartIndex) + "\u275A" + command.Substring(actualStartIndex,endIndex-actualStartIndex));
												}
#endif
												isStatic = false;
												type = (target != null) ? target.GetType() : null;
												members = null;
											}
										}
										if(isOp && !haveResult && args != null && attempts < maxAttempts) {
											// try finding the operator function in the RHS instead of the LHS argument
											// necessary for unary operator case or e.g. for op_Multiply(float, Vector3)
											object arg = args[args.Length-1];
											Type argType = (arg != null) ? arg.GetType() : typeof(object);
											members = GetTypeMember(argType, identifier, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static | BindingFlags.FlattenHierarchy);
											if(identifier == "op_Explicit") {
												if(attempts == 0) {
													ArrayHelper.AddRange(ref members, GetTypeMember(argType, "op_Implicit", BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static | BindingFlags.FlattenHierarchy));
												} else {
													//unaryOperator = false;
													ArrayHelper.Insert(ref args, 0, hiddenFirstArg);
												}
											}
											pendingNamespace = null;
											attempts++;
											continue;
										}
										break;
									} while(true);
									if(!haveResult) {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
										if(!Eval_silent || DebugEval) {
											if(isOp) {
												startIndex++;
											}
											string argsMsg = GetArgsDisplay(args, true, true);
											if(members != null && members.Length != 0) {
												Debug.LogError("Evaluation Error: Unable to call function " + members[0] + " with " + argsMsg + ", " + command.Substring(origStartIndex, startIndex - origStartIndex) + "\u275A" + command.Substring(startIndex));
											} else {
												Debug.LogError("Evaluation Error: Unable to call or find function " + command.Substring(origStartIndex, startIndex - origStartIndex) + " with " + argsMsg + " = " + command.Substring(startIndex));
											}
											if(isOp) {
												startIndex--;
											}
										}
#endif
										members = null;
										break;
									}
									hiddenFirstArg = null;
								} else {
									hiddenFirstArg = null;
									if(args != null && args.Length == 1) {
										// it was just a pair of parentheses (not a function call), which we've already evaluated the contents of,
										// so continue evaluating with the result of those contents as the new target
										target = args[0];
										type = (target != null) ? target.GetType() : null;
										//isStatic = (target != null) ? typeof(Type).IsAssignableFrom(type) : false;
										isStatic = (target is Type);
										if(isStatic) {
											// seems to be a cast operation
											// TODO: handle custom implicit casts better
											pendingOperator = true;
											identifier = "op_Explicit";
											members = GetTypeMember((Type)target, "op_Explicit", BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static | BindingFlags.FlattenHierarchy);
											ArrayHelper.AddRange(ref members, GetTypeMember((Type)target, "op_Implicit", BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static | BindingFlags.FlattenHierarchy));
											//ArrayHelper.AddRange(ref members, type.GetConstructors(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)); // doesn't work unless we change the isStatic check on invoke to method.IsStatic, and I don't think C# does this anyway
//											unaryOperator = false;
											unaryOperator = true;
											hiddenFirstArg = (Type)target;
//											if(members.Length != 0 /*&& members[0].ReflectedType == type*/)
//											{
//												unaryOperator = true;
//											}
//											else
//											{
//												unaryOperator = false;
//												hiddenFirstArg = (Type)target;
//											}
										}
										haveResult = true;
										lastEvaluatedMember = last_Eval_lastEvaluatedMember;
										lastEvaluatedIndex = last_Eval_lastEvaluatedIndex;
										lastEvaluatedTarget = last_Eval_lastEvaluatedTarget;
									} else {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
										if((members != null && members.Length != 0) || (members == null && firstIdentifier)) {
											if(!Eval_silent || DebugEval) {
												Debug.LogError("Evaluation Error: Unable to call " + command.Substring(origStartIndex, endBracketIndex+1 - origStartIndex) + "\n");
											}
										} // else we'll log an unidentified identifier error
#endif
										break;
									}
								}
							} else {
								// shortCircuit
								pendingOperator = false;
								hiddenFirstArg = null;
								members = null;
							}
							haveResult = true;
							unaryOperator = true;
							startIndex = endBracketIndex;
						}
						firstIdentifier = false;
						if(!isOp) {
							startIndex++;
						}
						continue;
					}
					if(c == '[') {
						int endBracketIndex = ParseUtils.GetBracketEndIndex(command, startIndex, endIndex, '[', ']');
						object[] args = null;
						if(endBracketIndex > startIndex) {
							args = EvalArgs(origTarget, command, startIndex, endBracketIndex, hiddenFirstArg, !unaryOperator, ',', /*typeof(int)*/null);
							hiddenFirstArg = null;
							pendingOperator = false;
							startIndex = endBracketIndex;
							if(pendingConstructor) {
								pendingConstructor = false;
								
								object[] contents = null;
								int startCurlyIndex = ParseUtils.GetNextTokenStartIndex(command, startIndex+1, endIndex);
								if(startCurlyIndex != endIndex && command[startCurlyIndex] == '{') {
									int endCurlyIndex = ParseUtils.GetBracketEndIndex(command, startCurlyIndex, endIndex, '{', '}');
									if(endCurlyIndex > startCurlyIndex) {
										contents = EvalArgs(origTarget, command, startCurlyIndex, endCurlyIndex, hiddenFirstArg, !unaryOperator, ',', type);
										startIndex = endCurlyIndex;
									}
								}
								
								int length = (args != null) ? args.Length : -1;
								if(contents != null) {
									length = MathUtil.Max(length, contents.Length);
								}
								
								if(args != null || contents != null) {
									// create a new array of the previously-specified type and the given length
									if(args != null) {
										int[] indexes = new int[args.Length];
										for(int i = 0 ; i < args.Length ; i++) {
											indexes[i] = Convert.ToInt32(args[i]);
										}
										target = Array.CreateInstance(type, indexes);
									} else {
										target = Array.CreateInstance(type, contents.Length);
									}
									if(contents != null && (args == null || args.Length == 1)) {
										Array array = (Array)target;
										int len = MathUtil.Min(contents.Length, array.GetLength(0));
										for(int i = 0 ; i < len ; i++) {
											array.SetValue(contents[i], i);
										}
									}
									type = target.GetType();
									isStatic = false;
									haveResult = true;
								}
								else {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
									if(!Eval_silent || DebugEval) {
										Debug.LogError("Array creation must have array size. " + type);
									}
#endif
									haveResult = false;
									members = null;
								}
							} else if(type != null && type.IsArray) {
								// get array element
								if(args != null) {
									int[] indexes = new int[args.Length];
									for(int i = 0 ; i < args.Length ; i++) {
										indexes[i] = Convert.ToInt32(args[i]);
									}
									Array array = (Array)target;
									target = array.GetValue(indexes);
									type = (target != null) ? target.GetType() : type.GetElementType();
									isStatic = false;
									haveResult = true;
									lastEvaluatedMember = array.GetType().GetProperty("Item");
									lastEvaluatedIndex = args;
									lastEvaluatedTarget = array;
								}
							} else if(target is IList) {
								// get other-type-of-list element
								if(args != null) {
									IList list = (IList)target;
									int index = Convert.ToInt32(args[0]);
									target = list[index];
									type = (target != null) ? target.GetType() : null;
									isStatic = false;
									haveResult = true;
									lastEvaluatedMember = list.GetType().GetProperty("Item");
									lastEvaluatedIndex = args;
									lastEvaluatedTarget = list;
								}
							} else if(type != null) {
								if(members == null) {
									members = GetTypeMember(type, "Item", BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
								}
								
								// get array element or call indexer
								if(members != null) {
									// call indexed property
									haveResult = false;
									foreach(MemberInfo member in members) {
										PropertyInfo property = member as PropertyInfo;
										if(property != null) {
											ParameterInfo[] paramInfos = property.GetIndexParameters();
											if(DoesMethodMatchArgsDirect(paramInfos, args, false)) {
												lastEvaluatedMember = property;
												lastEvaluatedIndex = args;
												lastEvaluatedTarget = isStatic ? null : target;
												try {
													target = property.GetValue(isStatic ? null : target, args);
												} catch(TargetInvocationException e) {
													Debug.LogException(e);
													target = BuiltinOperators.Keywords.@default(property.PropertyType);
												}
												isStatic = false;
												type = (target != null) ? target.GetType() : property.PropertyType;
												members = null;
												haveResult = true;
												break;
											}
										}
									}
//									if(!haveResult) { // try again with defaults
//										foreach(MemberInfo member in members) {
//											PropertyInfo property = member as PropertyInfo;
//											if(property != null) {
//												ParameterInfo[] paramInfos = property.GetIndexParameters();
//												if(DoesMethodMatchArgsWithDefaults(paramInfos, args, true)) {
//													object[] extendedArgs = ExtendArgs(args, paramInfos);
//													if(DoesMethodMatchArgsDirect(paramInfos, extendedArgs, true)) {
//														lastEvaluatedMember = property;
//														lastEvaluatedIndex = extendedArgs;
//														lastEvaluatedTarget = isStatic ? null : target;
//														try {
//															target = property.GetValue(isStatic ? null : target, extendedArgs);
//														} catch(Exception e) {
//															Debug.LogException(e);
//															target = BuiltinOperators.Keywords.@default(property.PropertyType);
//														}
//														isStatic = false;
//														type = (target != null) ? target.GetType() : property.PropertyType;
//														members = null;
//														haveResult = true;
//														break;
//													}
//												}
//											}
//										}
//									}
									if(!haveResult) {
//#if UNITY_EDITOR
//										Debug.LogError("Evaluation Error: Unable to call property indexer " + ((members.Length != 0) ? members[0].Name : "?") + " with " + command.Substring(startIndex) + "\nafter " + command.Substring(origStartIndex, startIndex-origStartIndex));
//#endif
//										break;
										if(args != null) {
											// get member element (optional, just to make func[0] behave like (func)[0])
											int[] indexes = new int[args.Length];
											for(int i = 0 ; i < args.Length ; i++) {
												indexes[i] = Convert.ToInt32(args[i]);
											}
											Array array = (Array)members;
											target = array.GetValue(indexes);
											type = (target != null) ? target.GetType() : type.GetElementType();
											isStatic = false;
											members = null;
											haveResult = true;
											lastEvaluatedMember = array.GetType().GetProperty("Item");
											lastEvaluatedIndex = args;
											lastEvaluatedTarget = array;
										} else if(type != null) { // []
											type = type.MakeArrayType();
											target = type;
											isStatic = false;
											members = null;
											haveResult = true;
										}
									}
								} else {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
									if(!Eval_silent || DebugEval) {
										Debug.LogError("Evaluation Error: Unable to evaluate indexer " + command.Substring(startIndex) + "\nafter " + command.Substring(origStartIndex, startIndex-origStartIndex));
									}
#endif
									break;
								}
							}
						}
						firstIdentifier = false;
						startIndex++;
						continue;
					}
					if(c == '<') {
						int endBracketIndex = ParseUtils.GetBracketEndIndex(command, startIndex, endIndex, '<', '>');
						object[] args = null;
						if(endBracketIndex > startIndex) {
							bool isTemplate = true;
							object origTargetStatic = (origTarget is Type) ? origTarget : (origTarget != null ? origTarget.GetType() : null);
							args = EvalArgs(origTargetStatic, command, startIndex, endBracketIndex, null,false, ',',typeof(Type), true);
							int numArgs = (args != null) ? args.Length : 0;
							if(numArgs != 0)
							{
								Type[] typeArgs = new Type[numArgs];
								for(int i = 0 ; i < numArgs ; i++) {
									object arg = args[i];
									if(arg is Type) {
										typeArgs[i] = (Type)arg;
									} else {
										isTemplate = false;
									}
								}
								if(isTemplate)
								{
									if(members != null)
									{
										int numMembers = members.Length;
										int numResolved = 0;
										for(int memberIndex = 0 ; memberIndex < numMembers ; memberIndex++)
										{
											MemberInfo member = members[memberIndex];
											MemberInfo resolvedMember = null;

											// select generic method
											MethodInfo method = member as MethodInfo;
											if(method != null && CountUnassignedGenericArguments(method) == typeArgs.Length) {
												resolvedMember = method.MakeGenericMethod(typeArgs);
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
												if(DebugEval) {
													Debug.Log(debugEvalPrefix + "Resolved generic method: " + resolvedMember + ", " + GetArgsDisplay(typeArgs,false,true));
												}
#endif
											}
											// select generic type
											Type typeInfo = member as Type;
											if(typeInfo != null && CountUnassignedGenericArguments(typeInfo) == typeArgs.Length) {
												resolvedMember = MakeGenericType(typeInfo, typeArgs);
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
												if(DebugEval) {
													Debug.Log(debugEvalPrefix + "Resolved generic type: " + resolvedMember + ", " + GetArgsDisplay(typeArgs,false,true));
												}
#endif
											}
											if(resolvedMember != null) {
												numResolved++;
											}
											members[memberIndex] = resolvedMember; // intentionally null out unresolved members
										}
										if(numResolved != numMembers) {
											MemberInfo[] updatedMembers = new MemberInfo[numResolved];
											numResolved = 0;
											for(int memberIndex = 0 ; memberIndex < numMembers ; memberIndex++)
											{
												MemberInfo member = members[memberIndex];
												if(member != null) {
													updatedMembers[numResolved++] = member;
												}
											}
											members = updatedMembers;
										}
									}
									else if(isStatic && type != null)
									{
										// select generic type
	//Debug.Log("CountUnassignedGenericArguments(" + type + ") = " + CountUnassignedGenericArguments(type) + " == " + typeArgs.Length);
										if(CountUnassignedGenericArguments(type) == typeArgs.Length) {
											bool targetWasType = (type == target);
											type = MakeGenericType(type, typeArgs);
											if(targetWasType) {
												target = type;
											}
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
											if(DebugEval) {
												Debug.Log(debugEvalPrefix + "Resolved generic type?: " + type + ", " + GetArgsDisplay(typeArgs,false,true));
											}
#endif
										}
									}
								}
							}
							if(isTemplate) {
								firstIdentifier = false;
								startIndex = endBracketIndex + 1;
								continue;
							}
						}
					}
					if(c == ';') {
						do {
							startIndex++;
							startIndex = ParseUtils.GetNextTokenStartIndex(command, startIndex, endIndex);
						} while(startIndex < endIndex && command[startIndex] == ';');
						if(startIndex == endIndex) {
							break;
						}
						members = origMembers;
						target = origTarget;
						type = (target != null) ? target.GetType() : null;
						isStatic = wasStatic;
						firstIdentifier = true;
						haveResult = false;
						hiddenFirstArg = null;
						pendingOperator = false;
						unaryOperator = true;
						pendingNamespace = null;
						continue;
					}
				}

				startIndex = ParseUtils.GetNextTokenStartIndex(command, startIndex, endIndex);
				if(startIndex == endIndex) {
					break;
				}

				int idEndIndex = ParseUtils.GetIdentifierEndIndex(command, startIndex, endIndex);
				identifier = "";
				
				if(idEndIndex > startIndex) {
					identifier = command.Substring(startIndex, idEndIndex - startIndex);
				}
				
				if(idEndIndex <= startIndex && startIndex < endIndex && pendingNamespace == null) {
					unaryOperator = firstIdentifier || !haveResult;
					int numCharsParsed = OperatorSymbolToMethodName(command, startIndex, endIndex, !unaryOperator, unaryOperator, ref identifier);
					if(numCharsParsed > 0) {
						idEndIndex = startIndex + numCharsParsed;
						isStatic = true;
						hiddenFirstArg = ((target != null) ? target : type);
						pendingOperator = true;
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
						if(DebugEval) {
							Debug.Log(debugEvalPrefix + "Op: " + command.Substring(startIndex,numCharsParsed) + ", " + identifier);
						}
#endif
					}
				}
				
				if(idEndIndex <= startIndex) {
					idEndIndex = ParseUtils.GetNumberEndIndex(command, startIndex, endIndex);
					if(idEndIndex > startIndex) { // number literal
						members = null;
						string s = command.Substring(startIndex, idEndIndex-startIndex);
						bool isSingle = true;
						int suffixIndex = s.IndexOf('f');
						if(suffixIndex == -1) {
							suffixIndex = s.IndexOf('F');
							if(suffixIndex != -1) { // <-- hack to e.g. parse 1.6 as float instead of a double, for convenience. so, 1.6F -> double, 1.6f or 1.6 -> float.
								isSingle = false;
							}
						}
						if(s.IndexOf('.') != -1 || suffixIndex != -1 || s.IndexOf('e') != -1 || s.IndexOf('E') != -1) {
							if(suffixIndex != -1) {
								s = s.Substring(0, suffixIndex);
							}
							if(isSingle) {
								float f;
								if(float.TryParse(s, out f)) {
									target = f;
									type = typeof(float);
									isStatic = false;
									haveResult = true;
								}
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
								else {
									if(!Eval_silent || DebugEval) {
										Debug.LogError("Evaluation Error: Failed to parse " + s + " as an floating-point number");
									}
								}
#endif
							} else {
								double d;
								if(double.TryParse(s, out d)) {
									target = d;
									type = typeof(double);
									isStatic = false;
									haveResult = true;
								}
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
								else {
									if(!Eval_silent || DebugEval) {
										Debug.LogError("Evaluation Error: Failed to parse " + s + " as a double-precision floating-point number");
									}
								}
#endif
							}
						} else {
							int i;
							if(int.TryParse(s, out i)) {
								target = i;
								type = typeof(int);
								isStatic = false;
								haveResult = true;
							} else {
								long l;
								if(long.TryParse(s, out l)) {
									target = l;
									type = typeof(long);
									isStatic = false;
									haveResult = true;
								} else {
									ulong ul;
									if(ulong.TryParse(s, out ul)) {
										target = ul;
										type = typeof(ulong);
										isStatic = false;
										haveResult = true;
									}
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
									else {
										if(!Eval_silent || DebugEval) {
											Debug.LogError("Evaluation Error: Failed to parse " + s + " as an integer");
										}
									}
#endif
								}
							}
						}
					} else {
						idEndIndex = ParseUtils.GetStringEndIndex(command, startIndex, endIndex, '\"');
						if(idEndIndex > startIndex) { // string literal
							startIndex++; // skip the "
							string s = command.Substring(startIndex, idEndIndex-startIndex);
							if(s.IndexOf('\\') != -1) {
								s = ParseUtils.UnescapeString(s);
							}
							target = s;
							type = typeof(string);
							isStatic = false;
							haveResult = true;
							idEndIndex++; // skip the end "
						} else { 
							idEndIndex = ParseUtils.GetStringEndIndex(command, startIndex, endIndex, '\'');
							if(idEndIndex > startIndex) { // char literal
								startIndex++; // skip the '
								char c = command[startIndex];
								if(c == '\\') {
									string s = command.Substring(startIndex, idEndIndex-startIndex);
									s = ParseUtils.UnescapeString(s);
									if(s.Length != 1) {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
										if(!Eval_silent || DebugEval) {
											Debug.LogError("Too many characters in character literal '" + command.Substring(startIndex, idEndIndex-startIndex) + "' -> \"" + s + "\"\nafter " + command.Substring(origStartIndex, startIndex-origStartIndex));
										}
#endif
										break;
									}
									c = s[0];
								}
								target = c;
								type = typeof(char);
								isStatic = false;
								haveResult = true;
								idEndIndex++; // skip the end '
							} else {
								idEndIndex = ParseUtils.GetRawStringEndIndex(command, startIndex, endIndex, '\"');
								if(idEndIndex > startIndex+1) { // raw string literal
									startIndex+=2; // skip the @"
									string s = command.Substring(startIndex, idEndIndex-startIndex);
									s = s.Replace("\"\"", "\""); // unescape ""
									target = s;
									type = typeof(string);
									isStatic = false;
									haveResult = true;
									idEndIndex++; // skip the end "
								} else {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL 
									if(!Eval_silent || DebugEval) {
										Debug.LogError("Evaluation Error: No identifier found after " + command.Substring(origStartIndex, startIndex-origStartIndex) + "\u275A" + command.Substring(startIndex,endIndex-startIndex) + "\nthis = " + target, target as UnityEngine.Object);
									}
#endif
									break;
								}
							}
						}
					}
					if(haveResult) {
						firstIdentifier = false;
					}
				}
				
				if(identifier.Length != 0)
				{
					bool globalIdentifier = (type == null);
					bool imperfectMatch = false;
					
					string typeIdentifier = identifier;

					if((isStatic || firstIdentifier) && idEndIndex < endIndex && command[idEndIndex] == '<') {
						// generics need to use their mangled type name for reflection of types
						int endBracketIndex = ParseUtils.GetBracketEndIndex(command, idEndIndex, endIndex, '<', '>');
						int numTypeArgs = ParseUtils.CountArgs(command, idEndIndex, endBracketIndex, ',', true);
						typeIdentifier += "`" + numTypeArgs;
					}

					if(!globalIdentifier) // type == null
					{
						BindingFlags commonFlags = BindingFlags.Public | BindingFlags.NonPublic;
						if(firstIdentifier) {
							commonFlags |= BindingFlags.Static | BindingFlags.FlattenHierarchy;
						}
						
						Type searchType = type;
						bool searchAgain = true;
						bool tryByTarget = true;
						while(searchAgain) // loop up from type through its BaseTypes until something is found
						{
							searchAgain = false;
							members = GetTypeMember(searchType, identifier, commonFlags | (isStatic ? (BindingFlags.Static | BindingFlags.FlattenHierarchy) : BindingFlags.Instance), out imperfectMatch);

							if(isStatic && members.Length == 0) {
								// maybe we're accessing an instance member through a static typename? (e.g. to inspect its reflection info)
								members = GetTypeMember(searchType, identifier, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance, out imperfectMatch);
							}
							
							if(members.Length != 0) {
								type = searchType;
								searchAgain = false;
							} else if(!searchAgain) {
								searchType = searchType.BaseType;
								if(searchType != null) {
									searchAgain = true;
								} else if(tryByTarget) {
									tryByTarget = false;
									
									// semi-hack: if not found in static context of class, try instance context of that class' type
									//            (this allows stuff like typeof(GC).GetMembers() and GC.GetMembers() (one of which should work, the other of which is convenient))
									if(members.Length == 0 && isStatic) {
										if(target is Type) {
											Type typeType = type.GetType();
											members = GetTypeMember(typeType, identifier, commonFlags | BindingFlags.Instance, out imperfectMatch);
											if(members.Length != 0) {
												isStatic = false;
												type = typeType;
												break;
											}
										}
									}
									
									// hack: if not found in instance context, and the target is a type or array of types, look inside the static context of that type.
									//       this lets us still work if someone passes in a type instead of null and expects it to find static functions in that type.
									if(members.Length == 0) {
										if(target is Type) {
											if(type != target) {
												searchType = (Type)target;
												isStatic = true;
												searchAgain = true;
											}
										} else if(type.IsArray) {
											Type elementType = type.GetElementType();
											if(elementType.IsAssignableFrom(typeof(Type)) || typeof(Type).IsAssignableFrom(elementType)) {
												Array array = (Array)target;
												int len = array.Length;
												for(int i = 0 ; i < len ; i++) {
													object val = array.GetValue(i);
													if(val is Type) {
														if(type != target) {
															searchType = (Type)val;
															isStatic = true;
															searchAgain = true;
															break;
														}
													}
												}
											}
										}
									}
								}
							}
						}

//#if UNITY_EDITOR || FORCE_DEBUG_EVAL
//						if(DebugEval) {
//							if(members.Length == 0) {
//								Debug.Log(debugEvalPrefix + identifier + " in " + type + "\n" + members.Length + " in " + type.Name);
//							} else {
//								Debug.Log(debugEvalPrefix + identifier + " in " + type + "\n" + members.Length + " in " + type.Name + " (" + members[0] + ", " + members[0].GetType().FullName + ")");
//							}
//						}
//#endif
						wasStatic = isStatic;
						haveResult = false;
						foreach(MemberInfo member in members)
						{
							if(member is FieldInfo) {
								lastEvaluatedMember = member;
								lastEvaluatedIndex = null;
								lastEvaluatedTarget = target;
								FieldInfo field = (FieldInfo)member;
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
								if(DebugEval) {
									Debug.Log(debugEvalPrefix + "Get: " + (field.IsStatic?"static ":"") + member + " in " + field.DeclaringType.FullName.Replace('+','.'));
								}
#endif
								if(!isStatic && target == null) {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
									if(!Eval_silent || DebugEval) {
										int back = (startIndex > origStartIndex && command[startIndex-1] == '.') ? 1 : 0;
										startIndex -= back;
										Debug.LogError("Evaluation Error: null reference at " + command.Substring(origStartIndex, startIndex-origStartIndex) + "\u275A" + command.Substring(startIndex,endIndex-startIndex));
										startIndex += back;
									}
#endif
									target = DBNull.Value;
									type = null;
								} else {
									target = field.GetValue(isStatic ? null : target);
									type = (target != null) ? target.GetType() : field.FieldType;
								}
								isStatic = false;
								members = null;
								haveResult = true;
								break;
							}
							if(member is PropertyInfo) {
								PropertyInfo property = (PropertyInfo)member;
								ParameterInfo[] paramInfos = property.GetIndexParameters();
								if(paramInfos == null || paramInfos.Length == 0) {
									lastEvaluatedMember = member;
									lastEvaluatedIndex = null;
									lastEvaluatedTarget = target;
									
									bool assigning = false;
									if(idEndIndex < endIndex)
									{
										int tempIndex = idEndIndex;
										tempIndex = ParseUtils.GetNextTokenStartIndex(command, tempIndex, endIndex);
										if(tempIndex < endIndex && command[tempIndex] == '='
										&& !(tempIndex+1 < endIndex && command[tempIndex+1] == '=')) {
											assigning = true;
										}
									}
									if(!assigning)
									{
										bool maybeCastingToDelegate = (expectedType != null && typeof(Delegate).IsAssignableFrom(expectedType));
										bool definitelyCastingToDelegate = (maybeCastingToDelegate && idEndIndex == endIndex);
										if(!definitelyCastingToDelegate) {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
											if(DebugEval) {
												MethodInfo method = property.GetGetMethod();
												if(method != null) {
													Debug.Log(debugEvalPrefix + "Invoke: " + (method.IsStatic?"static ":"") + method + " in " + member.DeclaringType.FullName.Replace('+','.'));
												} else {
													Debug.Log(debugEvalPrefix + "Get: " + member + " in " + member.DeclaringType.FullName.Replace('+','.'));
												}
											}
#endif
											target = property.GetValue(isStatic ? null : target, null);
											type = (target != null) ? target.GetType() : property.PropertyType;
											isStatic = false;
										}
										if(!maybeCastingToDelegate) {
											members = null;
										}
									}
									haveResult = true;
									break;
								}
							}
						}
						if(!haveResult) {
							Type nestedType = (members.Length == 1) ? (members[0] as Type) : ChooseClosestTypeMatch(members, typeIdentifier);
							if(nestedType != null) {
								Type parentType = type;
								type = nestedType;
								if(parentType.IsGenericType) {
									type = MakeGenericType(type, parentType.GetGenericArguments());
								}
								target = type;
								isStatic = true;
								members = null;
								haveResult = true;
							}
						}
						if(!haveResult) {
							if(identifier == "is" || identifier == "as") {
								// binary operator keywords
								members = GetTypeMember(typeof(BuiltinOperators.Keywords), identifier, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static);
								isStatic = true;
								hiddenFirstArg = (target != null) ? target : type;
								int tempIndex = idEndIndex;
								tempIndex = ParseUtils.GetNextTokenStartIndex(command, tempIndex, endIndex);
								pendingOperator = (tempIndex >= endIndex || command[tempIndex] != '(');
								unaryOperator = false;
								haveResult = false;
							}
						}
					}
					
					if(last_Eval_broke || last_Eval_continued) {
						members = null;
						break;
					}
					
					bool noResult = (!haveResult && (members==null || members.Length==0));
					if(globalIdentifier || ((isStatic || firstIdentifier) && (imperfectMatch || noResult)))
					{
						if(identifier == "false") {
							target = false;
							type = typeof(bool);
							isStatic = false;
							members = null;
							haveResult = true;
							firstIdentifier = false;
						} else if(identifier == "true") {
							target = true;
							type = typeof(bool);
							isStatic = false;
							members = null;
							haveResult = true;
							firstIdentifier = false;
						} else if(identifier == "null") {
							target = null;
							type = typeof(object);
							isStatic = false;
							members = null;
							haveResult = true;
							firstIdentifier = false;
						} else if(identifier == "this") {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
							if(target == null) {
								if(!Eval_silent || DebugEval) {
									Debug.LogWarning(debugEvalPrefix + "Evaluation Warning: Tried to access \"this\" in static context\n" + command.Substring(origStartIndex, endIndex-origStartIndex));
								}
							}
#endif
//							if(target != null) {
								isStatic = false;
								members = null;
								haveResult = true;
//							} else {
//#if UNITY_EDITOR
//								Debug.LogError("Evaluation Error: Can't access \"this\" in static context\n" + command.Substring(origStartIndex, endIndex-origStartIndex));
//#endif
//								haveResult = false;
//								break;
//							}
							firstIdentifier = false;
						} else if(identifier == "new") {
							pendingConstructor = true;
							type = null;
							isStatic = true;
							members = null;
							haveResult = false;
							globalIdentifier = true;
						} else if(identifier == "default" || identifier == "throw" || identifier == "typeof" || identifier == "sizeof") {
							// unary operator keywords
							members = GetTypeMember(typeof(BuiltinOperators.Keywords), identifier, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static);
							isStatic = true;
							hiddenFirstArg = null;
							int tempIndex = idEndIndex;
							tempIndex = ParseUtils.GetNextTokenStartIndex(command, tempIndex, endIndex);
							pendingOperator = (tempIndex >= endIndex || command[tempIndex] != '(');
							unaryOperator = true;
							haveResult = false;
							globalIdentifier = true;
						} else if(identifier == "if") {
							object result = EvalIfStatement(command, origTarget, ref idEndIndex, endIndex);
							startIndex = idEndIndex;
							if(last_Eval_returned) {
								target = result;
								type = (target != null) ? target.GetType() : typeof(object);
								haveResult = true;
								members = null;
								break;
							}
							globalIdentifier = true;
						} else if(identifier == "while") {
							object result = EvalWhileStatement(command, origTarget, ref idEndIndex, endIndex);
							startIndex = idEndIndex;
							if(last_Eval_returned) {
								target = result;
								type = (target != null) ? target.GetType() : typeof(object);
								haveResult = true;
								members = null;
								break;
							}
							globalIdentifier = true;
						} else if(identifier == "return") {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
							if(DebugEval) {
								int endStatement2Index = ParseUtils.GetStatementEndIndex(command, startIndex, endIndex, ';');
								Debug.Log(debugEvalPrefix + "Return: " + command.Substring(origStartIndex, endStatement2Index-origStartIndex) + "\u275A" + command.Substring(endStatement2Index,endIndex-endStatement2Index));
							}
#endif
							endIndex = ParseUtils.GetStatementEndIndex(command, startIndex, endIndex, ';');
							startIndex = ParseUtils.GetIdentifierEndIndex(command, startIndex, endIndex);
							last_Eval_returned = true;
							continue;
						} else if(identifier == "break") {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
							if(DebugEval) {
								int endStatement2Index = ParseUtils.GetStatementEndIndex(command, startIndex, endIndex, ';');
								Debug.Log(debugEvalPrefix + "Break: " + command.Substring(origStartIndex, endStatement2Index-origStartIndex) + "\u275A" + command.Substring(endStatement2Index,endIndex-endStatement2Index));
							}
#endif
							last_Eval_broke = true;
							members = null;
							break;
						} else if(identifier == "continue") {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
							if(DebugEval) {
								int endStatement2Index = ParseUtils.GetStatementEndIndex(command, startIndex, endIndex, ';');
								Debug.Log(debugEvalPrefix + "Continue: " + command.Substring(origStartIndex, endStatement2Index-origStartIndex) + "\u275A" + command.Substring(endStatement2Index,endIndex-endStatement2Index));
							}
#endif
							last_Eval_continued = true;
							members = null;
							break;
						} else if(identifier == "yield") {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
							if(DebugEval) {
								int endStatement2Index = ParseUtils.GetStatementEndIndex(command, startIndex, endIndex, ';');
								Debug.Log(debugEvalPrefix + "Yield: " + command.Substring(origStartIndex, endStatement2Index-origStartIndex) + "\u275A" + command.Substring(endStatement2Index,endIndex-endStatement2Index));
							}
#endif
							int startIndex1 = ParseUtils.GetIdentifierEndIndex(command, startIndex, endIndex);
							int endIndex1 = ParseUtils.GetStatementEndIndex(command, startIndex1, endIndex, ';');
							if(endIndex1 < endIndex && command[endIndex1] == ';') {
								endIndex1++;
							}
							endIndex1 = ParseUtils.GetNextTokenStartIndex(command, endIndex1, endIndex);
							object yieldInstruction = Eval(command, target, null, startIndex1, endIndex1);
							if(yieldInstruction != DBNull.Value) {
								target = UpdateMgr.InstGuaranteedEvenInEditMode.StartSequence(EvalAfter(yieldInstruction, command, target, null, endIndex1, endIndex, true));
								type = (target != null) ? target.GetType() : typeof(object);
								haveResult = true;
							}
							last_Eval_returned = true;
							members = null;
							break;
						} else if(identifier == "globals") {
							if(globals == null) {
								globals = new Dictionary<string,object>();
							}
							target = globals;
							type = target.GetType();
							isStatic = false;
							members = null;
							haveResult = true;
							firstIdentifier = false;
						} else if(globals != null && globals.ContainsKey(identifier)) {
							target = globals[identifier];
							type = (target != null) ? target.GetType() : typeof(object);
							isStatic = false;
							members = null;
							haveResult = true;
							firstIdentifier = false;
							lastEvaluatedMember = globals.GetType().GetProperty("Item");
							lastEvaluatedIndex = new object[]{ identifier };
							lastEvaluatedTarget = globals;
						} else {
							string searchIdentifier = typeIdentifier;
							if(pendingNamespace != null) {
								searchIdentifier = pendingNamespace + "." + searchIdentifier;
							}
							
							Type foundType = GetType(searchIdentifier);

							if(noResult || foundType != null) {
								type = foundType;

#if UNITY_EDITOR || FORCE_DEBUG_EVAL
								parentNamespaceForMessage = (pendingNamespace != null) ? pendingNamespace : GetTypeDisplayNameForDebug((type != null) ? type.Name : (hiddenFirstArg != null) ? hiddenFirstArg.GetType().FullName : null);
#endif
								// do nothing and keep parsing, since it might be a nested namespace
								target = type;
								haveResult = (type != null);
								if(!haveResult) {
									// maybe it's a namespace
									pendingNamespace = (pendingNamespace == null) ? typeIdentifier : (pendingNamespace + "." + typeIdentifier);
								} else {
									pendingNamespace = null;
								}
								isStatic = true;
								firstIdentifier = false;
								members = null;
							}
						}
					}
					else
					{
						firstIdentifier = false;
					}

					if(!haveResult && !globalIdentifier && members != null && members.Length == 0 /*&& pendingIs==null*/) {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
						// hack to print unidentified identifier warning with correct identifier
						if(pendingNamespace == null) {
							parentNamespaceForMessage = GetTypeDisplayNameForDebug((type != null) ? type.Name : (hiddenFirstArg != null) ? hiddenFirstArg.GetType().FullName : null);
							pendingNamespace = typeIdentifier;
						}
#endif
						members = null;
						break;
					}
				}

				startIndex = idEndIndex;

#if UNITY_EDITOR || FORCE_DEBUG_EVAL
				if(DebugEval && startIndex < endIndex) {
					Debug.Log(debugEvalPrefix + "Parse: " + command.Substring(origStartIndex, startIndex-origStartIndex) + "\u275A" + command.Substring(startIndex,endIndex-startIndex) + ", value = " + ((object)target??"null") + (isStatic?" (static)":"") + (haveResult?" (returnable)":"") + (members != null ? " ("+members.Length+"-match)" : "") + ", type = " + ((object)type??"null") + (pendingNamespace != null ? (", namespace = " + pendingNamespace) : ""));
				}
#endif
			}
			// done parsing+evaluating

			last_Eval_lastEvaluatedMember = lastEvaluatedMember;
			last_Eval_lastEvaluatedIndex = lastEvaluatedIndex;
			last_Eval_lastEvaluatedTarget = lastEvaluatedTarget;
			
			if(pendingNamespace != null) {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
				if(!Eval_silent || DebugEval) {
					string part2 = ", " + command.Substring(origStartIndex, endIndex-origStartIndex);
					bool ignore = false;
					if(pendingNamespace.Length > 2 && pendingNamespace[pendingNamespace.Length-2] == '`')
					{
						int ltCount = 0, gtCount = 0;
						foreach(char c in part2) {
							if(c == '<') {
								ltCount++;
							}
							if(c == '>') {
								gtCount++;
							}
						}
						if(ltCount > gtCount) {
							// suppress expected error messages like "Evaluation Error: Unidentified identifier "Dictionary`1", Dictionary<int"
							// when evaluating commands such as "typeof(Dictionary<int,int>)"
							ignore = true;
						}
					}
					if(!ignore) {
						string part1 = "Evaluation Error: Unidentified identifier \"" + pendingNamespace + "\"";
						if(parentNamespaceForMessage != null) {
							Debug.LogError(part1 + (" in " + parentNamespaceForMessage) + part2);
						} else {
							Debug.LogError(part1 + part2);
						}
					}
				}
#endif
				last_Eval_broke = true;
			}
			if(pendingConstructor) {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
				if(!Eval_silent || DebugEval) {
					Debug.LogError("Evaluation Error: A new expression requires () or [] after type. " + type);
					
				}
#endif
				haveResult = false;
			}

//			if(pendingIs != null && type != null) {
//				Type lhsType = pendingIs;
//				Type rhsType = type;
//				target = (rhsType != null && rhsType.IsAssignableFrom(lhsType));
//				haveResult = true;
//			}
			
			if(members != null)
			{
				// perform any final conversion (e.g. caching as delegate)
				
				if(isStatic || wasStatic) {
					target = null;
				}
				
				bool expectedTypeIsDelegate = (expectedType != null && typeof(Delegate).IsAssignableFrom(expectedType));
				bool expectedUnknownDelegate = (expectedType == typeof(Delegate));
				bool expectedSpecificDelegate = expectedTypeIsDelegate && !expectedUnknownDelegate;
				MethodInfo expectedMethodInfo = expectedSpecificDelegate ? expectedType.GetMethod("Invoke") : null;

				haveResult = false;
				if(expectedTypeIsDelegate) {
					foreach(MemberInfo member in members) {
						MethodInfo method = member as MethodInfo;
						if(method == null && member is PropertyInfo) {
							if(expectedSpecificDelegate && expectedMethodInfo.ReturnType == typeof(void)) {
								method = ((PropertyInfo)member).GetSetMethod(true);
							} else {
								method = ((PropertyInfo)member).GetGetMethod(true);
							}
						}
						if(method != null) {
							//ParameterInfo[] paramInfos = method.GetParameters();
							//Type returnType = method.ReturnType;
							if(expectedSpecificDelegate)
							{
								if(DoesMethodMatchSignature(method,expectedMethodInfo))
								{
									// give result as delegate of specific given type
									target = CreateDelegate(expectedType, target, method);
									haveResult = true;
									break;
								}
							}
						}
					}
					if(!haveResult) {
						Delegate del = null;
						Type delType = null;
						MethodInfo fullMethod = null;
						foreach(MemberInfo member in members) {
							MethodInfo method = member as MethodInfo;
							if(method == null && member is PropertyInfo) {
								if(expectedSpecificDelegate && expectedMethodInfo.ReturnType == typeof(void)) {
									method = ((PropertyInfo)member).GetSetMethod(true);
								} else {
									method = ((PropertyInfo)member).GetGetMethod(true);
								}
							}
							if(method != null) {
								//ParameterInfo[] paramInfos = method.GetParameters();
								//Type returnType = method.ReturnType;
								delType = MakeDelegateType(method);
								if(delType != null) {
									del = CreateDelegate(delType, target, method);
									fullMethod = method;
									break;
								}
							}
						}
						if(del != null && partialArgs != null && partialArgs.Length != 0)
						{
							ParameterInfo[] paramInfos = fullMethod.GetParameters();
							Type returnType = fullMethod.ReturnType;
							bool noReturn = (returnType == typeof(void));

							List<Type> typeArgs = new List<Type>();
							if(!noReturn) {
								typeArgs.Add(returnType);
							}
							foreach(ParameterInfo paramInfo in paramInfos) {
								typeArgs.Add(paramInfo.ParameterType);
							}

							int fromNumArgs = paramInfos.Length;
							int toNumArgs = fromNumArgs - partialArgs.Length;
							
							string methodName = "PartialApply" + fromNumArgs + "to" + toNumArgs + (noReturn ? "" : "R");
							
							MethodInfo partialApplyMethod = typeof(ReflectionUtil).GetMethod(methodName, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static);
							//if(partialApplyMethod != null) {
								partialApplyMethod = partialApplyMethod.MakeGenericMethod(typeArgs.ToArray());
								//if(partialApplyMethod != null) {
									delType = (partialApplyMethod != null) ? partialApplyMethod.ReturnType : null;

#if UNITY_EDITOR || FORCE_DEBUG_EVAL
									if(DebugEval) {
										Debug.Log(debugEvalPrefix + "Binding: Converting " + fromNumArgs + "-arg " + fullMethod + " to " + toNumArgs + "-arg " + (delType != null ? delType.GetMethod("Invoke").ToString().Replace("Invoke",fullMethod.Name) : ""));
									}
#endif

									//del = Delegate.CreateDelegate(delType, partialApplyMethod);
									ArrayHelper.Insert(ref partialArgs, 0, del);
									del = (Delegate)partialApplyMethod.Invoke(null, partialArgs);
								//}
							//}
						}
						if(del != null && (expectedUnknownDelegate || DoesMethodMatchSignature(delType.GetMethod("Invoke"),expectedMethodInfo)))
						{
							target = del;
							haveResult = true;
						}
					}
				}
//				if(!haveResult) {
//					foreach(MemberInfo member in members) {
//						if(member is Type) {
//							target = member;
//							haveResult = true;
//						}
//					}
//				}
				if(!haveResult) {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
#if !FORCE_DEBUG_EVAL
					if(DebugEval)
#endif
					{
						if(expectedType == null || (!expectedType.IsArray && !typeof(MemberInfo).IsAssignableFrom(expectedType))) {
							if(members.Length != 0) {
								foreach(MemberInfo member in members) {
									MethodInfo method = member as MethodInfo;
									if(method == null && member is PropertyInfo) {
										method = ((PropertyInfo)member).GetGetMethod(true);
									}
									if(method != null) {
										ParameterInfo[] paramInfos = method.GetParameters();
										Type returnType = method.ReturnType;
										string typeName = "Delegates.Action";
										if(returnType != typeof(void) || paramInfos.Length != 0) {
											if(returnType != typeof(void)) {
												typeName += "WithReturn<" + returnType.Name;
												if(paramInfos.Length != 0) {
													typeName += ",";
												}
											} else {
												typeName += "<";
											}
											for(int i = 0 ; i < paramInfos.Length ; i++) {
												typeName += paramInfos[i].ParameterType.Name;
												if(i != paramInfos.Length - 1) {
													typeName += ",";
												}
											}
											typeName += ">";
										}
										//Debug.LogError("Evaluation Error: Unable to create delegate. Please pass  typeof(" + typeName + ")  as the expectedType parameter.\n" + command.Substring(origStartIndex, endIndex-origStartIndex));
										Debug.LogWarning("Evaluation Warning: Suggest passing  typeof(" + typeName + ")  or  typeof(" + (member is MethodInfo ? "MethodInfo" : member is PropertyInfo ? "PropertyInfo" : member.GetType().FullName) + ")  as the expectedType parameter.\n" + command.Substring(origStartIndex, endIndex-origStartIndex));
									//} else {
										//Debug.LogError("Evaluation Error: Unable to represent " + member.Name + "\n" + command.Substring(origStartIndex, endIndex-origStartIndex));
									}
								}
							} else {
								Debug.LogError("Evaluation Error: Unidentified identifier \"" + identifier + "\"\n" + command.Substring(origStartIndex, endIndex-origStartIndex));
							}
						}
					}
#endif
////					foreach(MemberInfo member in members) {
////						MethodBase method = member as MethodBase;
////						if(method != null) {
////							if(method.ReturnType == typeof(void)) {
////								Delegates.Action<object[]> slowDel = (o) => {
////									method.Invoke(target, o);
////								};
////								target = slowDel;
////							} else {
////								Delegates.ActionWithReturn<object, object[]> slowDel = (o) => {
////									return method.Invoke(target, o);
////								};
////								target = slowDel;
////							}
////							haveResult = true;
////						}
////					}
					if(members != null) {
						if(members.Length == 0) {
							members = null;
							haveResult = false;
						} else {
							if(expectedType != null && typeof(MemberInfo).IsAssignableFrom(expectedType)) {
								if(members.Length != 0) {
									target = members[0];
									haveResult = true;
								}
							} else if(expectedType == null) {
								target = members;
								haveResult = true;
							} else {
								// if a specific type was requested and the result is a function that returns that type,
								// call the function and return its return value.
								foreach(MemberInfo member in members) {
									MethodBase method = member as MethodBase;
									Type returnType = null;
									if(method is MethodInfo) {
										returnType = ((MethodInfo)method).ReturnType;
									}
									if(method is ConstructorInfo) {
										returnType = ((ConstructorInfo)method).DeclaringType;
									}
									if(CanConvertToType(returnType, expectedType)) {
										if(DoesMethodMatchArgsWithDefaults(method, null, true) && !method.ContainsGenericParameters) {
											object[] extendedArgs = ExtendArgs(null, method);
											if(DoesMethodMatchArgsDirect(method, extendedArgs, true)) {
												target = method.Invoke(isStatic ? null : target, extendedArgs);
												haveResult = true;
												break;
											}
										}
									}
								}
								if(!haveResult) {
									target = members;
									haveResult = true;
								}
							}
						}
					}
				}
			}
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
			if(DebugEval && haveResult) {
				Debug.Log(debugEvalPrefix + "Done: " + command.Substring(origStartIndex, MathUtil.Min(startIndex,endIndex)-origStartIndex) + ", result = " + ((object)target??"null") + (isStatic?" (static)":"") + ", type = " + ((object)type??"null"));
			}
#endif
		}
		catch(Exception e)
		{
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
			if(!Eval_silent || DebugEval)
#endif
			{
				//Debug.LogError("Evaluation Error: " + command.Substring(origStartIndex, endIndex-origStartIndex) + " --->\n" + e);
				Debug.LogException(new InvalidOperationException("Evaluation Error: " + command.Substring(origStartIndex, endIndex-origStartIndex) + " --->", e));
			}
			haveResult = false;
		}

		if(!haveResult) {
			return DBNull.Value;
		}

		if(target is UnityEngine.Object && (UnityEngine.Object)target == null) {
			target = null; // eliminate Unity's "fake null", just in case
		}

		if(expectedType != null)
		{
			if(target == null && expectedType != typeof(bool))
			{
				if(expectedType.IsValueType) {
					haveResult = false;
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
					if(!Eval_silent || DebugEval) {
						Debug.LogError("Evaluation Error: Unable to cast null to " + expectedType + " in " + command.Substring(origStartIndex, endIndex-origStartIndex));
					}
#endif
				}
			}
			else
			{
				WrappedConvertToType(ref target, expectedType);
			}

			if(!haveResult) {
				return DBNull.Value;
			}
		}
		
		return target;

#if UNITY_EDITOR || FORCE_DEBUG_EVAL
		} finally {
			Eval_depth--;
		}
#endif
	}

	// convenience overloads for Eval when you don't care about certain things (e.g. no ability to detect error vs. null)
	// (overload for specific return type (returns null on error (returns null on error or null-result or void-result))
	public static T Eval<T>(string command, object target=null)
	{
		object rv = Eval(command, target, typeof(T));
		if(rv == DBNull.Value) {
			rv = default(T);
		}
		return (T)rv;
	}

	
	
	public static string ToCommaSeparatedCommandString(params object[] objects)
	{
		return ToSeparatedCommandString(",", objects);
	}

	public static string ToSeparatedCommandString(string separator, params object[] objects)
	{
		string rv = "";
		int len = objects.Length;
		for(int i = 0 ; i < len ; i++)
		{
			rv += ToCommandString(objects[i]);
			if(i != len - 1) {
				rv += separator;
			}
		}
		return rv;
	}
	
	public static string ToCommandString(object o)
	{
		if(o == null) {
			return "null";
		}
		Type type = o.GetType();
		if(type == typeof(bool)) {
			return (bool)o ? "true" : "false";
		}
		if(type == typeof(Color)) {
			var c = (Color)o;
			return "new Color(" + c.r + "," + c.g + "," + c.b + "," + c.a + ")";
		}
		if(type == typeof(Vector2)) {
			var v = (Vector2)o;
			return "new Vector2(" + v.x + "," + v.y + ")";
		}
		if(type == typeof(Vector3)) {
			var v = (Vector3)o;
			return "new Vector3(" + v.x + "," + v.y + "," + v.z + ")";
		}
		if(type == typeof(Vector4)) {
			var v = (Vector4)o;
			return "new Vector4(" + v.x + "," + v.y + "," + v.z + "," + v.w + ")";
		}
		if(type == typeof(Quaternion)) {
			var v = (Quaternion)o;
			return "new Quaternion(" + v.x + "," + v.y + "," + v.z + "," + v.w + ")";
		}
		if(o is UnityEngine.Object) {
			if((UnityEngine.Object)o == null) {
				return "null";
			}
			return "InstanceIDToObject(" + ((UnityEngine.Object)o).GetInstanceID() + "," + ToCommandString(o.GetType()) + ")";
		}
		if(type == typeof(char)) {
			return "(char)" + (int)(char)o;
		}
		if(type == typeof(Color32)) {
			var c = (Color32)o;
			return "new Color32(" + c.r + "," + c.g + "," + c.b + "," + c.a + ")";
		}
		string str = o.ToString();
		if(type == typeof(int)) {
			return str;
		}
		if(type == typeof(float)) {
			return str + "f";
		}
		if(type == typeof(string)) {
			return "@\"" + str.Replace("\"","\"\"") + "\"";
		}
		if(type == typeof(double)) {
			return str + "F";
		}
		if(type == typeof(long)) {
			return "(long)" + str;
		}
		if(type == typeof(ulong)) {
			return "(ulong)" + str;
		}
		if(type == typeof(short)) {
			return "(short)" + str;
		}
		if(type == typeof(ushort)) {
			return "(ushort)" + str;
		}
		if(type == typeof(byte)) {
			return "(byte)" + str;
		}
		if(type == typeof(sbyte)) {
			return "(sbyte)" + str;
		}
		if(o is Type) {
			// TODO: this is missing support for generics
			if(str.IndexOf('`') != -1) {
				while(true) {
					int index = str.IndexOf('`');
					if(index == -1 || index == str.Length - 1) {
						break;
					}
					str = str.Substring(0, index) + str.Substring(index + 2);
				}
				str = str.Replace('[','<').Replace(']','>');
			}
			return "typeof(" + str + ")";
		}
		return str;
	}






	static object EvalIfStatement(string command, object target, ref int startIndex, int endIndex)
	{
		last_Eval_returned = false;
		object result = null;
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
		int origStartIndex = startIndex;
#endif
		startIndex = ParseUtils.GetNextTokenStartIndex(command, startIndex, endIndex);
		int endParenIndex = ParseUtils.GetBracketEndIndex(command, startIndex, endIndex, '(', ')');
		if(endParenIndex > startIndex) {
			object[] condArgs = EvalArgs(target, command, startIndex, endParenIndex, null, false, '\0', typeof(bool));
			if(condArgs != null && condArgs.Length == 1) {
				startIndex = MathUtil.Min(endParenIndex + 1, endIndex);
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
				if(DebugEval) {
					Debug.Log(debugEvalPrefix + "Branch: if(" + condArgs[0] + "), if" + command.Substring(origStartIndex, startIndex-origStartIndex) + "\u275A" + command.Substring(startIndex,endIndex-startIndex));
				}
#endif
				int endStatementIndex = ParseUtils.GetStatementEndIndex(command, startIndex, endIndex, ';');
				if(endStatementIndex > startIndex) {
					bool cond = (condArgs[0] is bool && (bool)condArgs[0]);
					if(cond)
					{
						// execute "if" branch
						result = Eval(command, target, null, startIndex, endStatementIndex);
					}
					startIndex = MathUtil.Min(endStatementIndex + 1, endIndex);
					startIndex = ParseUtils.GetNextTokenStartIndex(command, startIndex, endIndex);
					int id2EndIndex = ParseUtils.GetIdentifierEndIndex(command, startIndex, endIndex);
					if(id2EndIndex > startIndex && command.Substring(startIndex, id2EndIndex - startIndex) == "else")
					{
						startIndex = id2EndIndex;
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
						if(DebugEval && !cond) {
							Debug.Log(debugEvalPrefix + "Branch: else, " + command.Substring(origStartIndex, startIndex-origStartIndex) + "\u275A" + command.Substring(startIndex,endIndex-startIndex));
						}
#endif
						int endStatement2Index = ParseUtils.GetStatementEndIndex(command, startIndex, endIndex, ';');
						if(endStatement2Index > startIndex) {
							if(!cond)
							{
								// execute "else" branch
								result = Eval(command, target, null, startIndex, endStatement2Index);
							}
							startIndex = MathUtil.Min(endStatement2Index + 1, endIndex);
						}
					}
				}
			}
		}
		return result;
	}
	
	static object EvalWhileStatement(string command, object target, ref int startIndex, int endIndex)
	{
		last_Eval_returned = false;
		last_Eval_broke = false;
		object result = null;
		int origStartIndex = startIndex;
		startIndex = ParseUtils.GetNextTokenStartIndex(command, startIndex, endIndex);
		int startParenIndex = startIndex;
		int endParenIndex = ParseUtils.GetBracketEndIndex(command, startIndex, endIndex, '(', ')');
		if(endParenIndex > startIndex) {
			object[] condArgs = EvalArgs(target, command, startIndex, endParenIndex, null, false, '\0', typeof(bool));
			if(condArgs != null && condArgs.Length == 1) {
				startIndex = MathUtil.Min(endParenIndex + 1, endIndex);
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
				if(DebugEval) {
					Debug.Log(debugEvalPrefix + "Loop: while(" + condArgs[0] + "), while" + command.Substring(origStartIndex, startIndex-origStartIndex) + "\u275A" + command.Substring(startIndex,endIndex-startIndex));
				}
#endif
				int endStatementIndex = ParseUtils.GetStatementEndIndex(command, startIndex, endIndex, ';');
				if(endStatementIndex > startIndex) {
					const float timeout = 1.0f;
					float endTime = Time.realtimeSinceStartup + timeout;

					bool cond = (condArgs[0] is bool && (bool)condArgs[0]);
					while(cond)
					{
						last_Eval_continued = false;

						// execute "while" branch
						result = Eval(command, target, null, startIndex, endStatementIndex);
						if(last_Eval_returned) {
							if(result is CoroutineHandle) {
								int index = command.LastIndexOf("while", origStartIndex);
								if(index == -1) { // shouldn't happen...
									index = MathUtil.Max(0, origStartIndex - "while".Length);
								}
								result = UpdateMgr.InstGuaranteedEvenInEditMode.StartSequence(EvalAfter(result, command, target, null, index, endIndex, false));
							}
							break;
						}
						if(last_Eval_broke) {
							last_Eval_broke = false;
							break;
						}
						// update loop-to-top condition
						condArgs = EvalArgs(target, command, startParenIndex, endParenIndex, null, false, '\0', typeof(bool));
						cond = (condArgs != null && condArgs.Length == 1) && (condArgs[0] is bool && (bool)condArgs[0]);
						if(Time.realtimeSinceStartup > endTime) {
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
							if(!Eval_silent || DebugEval) {
								Debug.LogError("Aborted while loop due to " + timeout + " second timeout: while" + command.Substring(origStartIndex, endIndex-origStartIndex));
							}
#endif
							break;
						}
					}
					startIndex = MathUtil.Min(endStatementIndex + 1, endIndex);
				}
			}
		}
		return result;
	}

	static IEnumerator EvalAfter(object yieldInstruction, string command, object target, Type expectedType, int startIndex, int endIndex, bool waitForChain)
	{
		yield return yieldInstruction;
//		if(last_Eval_returned || last_Eval_broke) {
//			last_Eval_broke = false;
//			yield break;
//		}
		yieldInstruction = Eval(command, target, expectedType, startIndex, endIndex);
		if(waitForChain && yieldInstruction is CoroutineHandle) {
			yield return yieldInstruction;
		}
	}


	// note: in case of failure, sets target to DBNull.Value and returns false
	static bool WrappedConvertToType(ref object target, Type expectedType)
	{
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
		Type actualType = (target != null) ? target.GetType() : null;
		object displayValue = target;
		if(DebugEval && (actualType != expectedType)) {
			if(actualType == typeof(MemberInfo[])) {
				MemberInfo[] members = (MemberInfo[])target;
				if(members.Length != 0) {
					displayValue = members[0];
				}
				if(members.Length > 1) {
					displayValue = displayValue + " (" + displayValue.GetType() + ") (and " + (members.Length-1) + " others)";
				}
			}
			Debug.Log("Cast: Trying to cast from " + (actualType != null ? actualType.ToString() : "null") + " (value: " + displayValue + ") to " + expectedType);
		}
#endif
		if(ConvertToType(ref target, expectedType)) {
			return true;
		}

#if UNITY_EDITOR || FORCE_DEBUG_EVAL
		if(!Eval_silent || DebugEval) {
			if(target is MemberInfo[]) {
				MemberInfo[] targetInfos = (MemberInfo[])target;
				if(targetInfos.Length != 0) {
					string msg = "[";
					for(int i = 0 ; i < targetInfos.Length ; i++) {
						msg += targetInfos[i];
						if(i != targetInfos.Length - 1) {
							msg += ", ";
						}
					}
					msg += "]";
					displayValue = msg;
				}
			}
			Debug.LogError("Evaluation Error: Unable to cast \"" + (actualType != null ? actualType.ToString() : "null") + "\" (value: " + displayValue + ")" + " to \"" + expectedType + "\"");
		}
#endif
		return false;
	}


	static Delegates.Action PartialApply1to0<T>(Delegates.Action<T> del, T arg1) {
		return () => del(arg1);
	}

	static Delegates.Action PartialApply2to0<T,T2>(Delegates.Action<T,T2> del, T arg1, T2 arg2) {
		return () => del(arg1, arg2);
	}
	static Delegates.Action<T2> PartialApply2to1<T,T2>(Delegates.Action<T,T2> del, T arg1) {
		return (arg2) => del(arg1, arg2);
	}

	static Delegates.Action PartialApply3to0<T,T2,T3>(Delegates.Action<T,T2,T3> del, T arg1, T2 arg2, T3 arg3) {
		return () => del(arg1, arg2, arg3);
	}
	static Delegates.Action<T3> PartialApply3to2<T,T2,T3>(Delegates.Action<T,T2,T3> del, T arg1, T2 arg2) {
		return (arg3) => del(arg1, arg2, arg3);
	}
	static Delegates.Action<T2,T3> PartialApply3to1<T,T2,T3>(Delegates.Action<T,T2,T3> del, T arg1) {
		return (arg2, arg3) => del(arg1, arg2, arg3);
	}

	static Delegates.Action PartialApply4to0<T,T2,T3,T4>(Delegates.Action<T,T2,T3,T4> del, T arg1, T2 arg2, T3 arg3, T4 arg4) {
		return () => del(arg1, arg2, arg3, arg4);
	}
	static Delegates.Action<T4> PartialApply4to1<T,T2,T3,T4>(Delegates.Action<T,T2,T3,T4> del, T arg1, T2 arg2, T3 arg3) {
		return (arg4) => del(arg1, arg2, arg3, arg4);
	}
	static Delegates.Action<T3,T4> PartialApply4to2<T,T2,T3,T4>(Delegates.Action<T,T2,T3,T4> del, T arg1, T2 arg2) {
		return (arg3, arg4) => del(arg1, arg2, arg3, arg4);
	}
	static Delegates.Action<T2,T3,T4> PartialApply4to3<T,T2,T3,T4>(Delegates.Action<T,T2,T3,T4> del, T arg1) {
		return (arg2, arg3, arg4) => del(arg1, arg2, arg3, arg4);
	}



	static Delegates.ActionWithReturn<R> PartialApply1to0R<R,T>(Delegates.ActionWithReturn<R,T> del, T arg1) {
		return () => del(arg1);
	}

	static Delegates.ActionWithReturn<R> PartialApply2to0R<R,T,T2>(Delegates.ActionWithReturn<R,T,T2> del, T arg1, T2 arg2) {
		return () => del(arg1, arg2);
	}
	static Delegates.ActionWithReturn<R,T2> PartialApply2to1R<R,T,T2>(Delegates.ActionWithReturn<R,T,T2> del, T arg1) {
		return (arg2) => del(arg1, arg2);
	}

	static Delegates.ActionWithReturn<R> PartialApply3to0R<R,T,T2,T3>(Delegates.ActionWithReturn<R,T,T2,T3> del, T arg1, T2 arg2, T3 arg3) {
		return () => del(arg1, arg2, arg3);
	}
	static Delegates.ActionWithReturn<R,T3> PartialApply3to1R<R,T,T2,T3>(Delegates.ActionWithReturn<R,T,T2,T3> del, T arg1, T2 arg2) {
		return (arg3) => del(arg1, arg2, arg3);
	}
	static Delegates.ActionWithReturn<R,T2,T3> PartialApply3to2R<R,T,T2,T3>(Delegates.ActionWithReturn<R,T,T2,T3> del, T arg1) {
		return (arg2, arg3) => del(arg1, arg2, arg3);
	}

	static Delegates.ActionWithReturn<R> PartialApply4to0R<R,T,T2,T3,T4>(Delegates.ActionWithReturn<R,T,T2,T3,T4> del, T arg1, T2 arg2, T3 arg3, T4 arg4) {
		return () => del(arg1, arg2, arg3, arg4);
	}
	static Delegates.ActionWithReturn<R,T4> PartialApply4to1R<R,T,T2,T3,T4>(Delegates.ActionWithReturn<R,T,T2,T3,T4> del, T arg1, T2 arg2, T3 arg3) {
		return (arg4) => del(arg1, arg2, arg3, arg4);
	}
	static Delegates.ActionWithReturn<R,T3,T4> PartialApply4to2R<R,T,T2,T3,T4>(Delegates.ActionWithReturn<R,T,T2,T3,T4> del, T arg1, T2 arg2) {
		return (arg3, arg4) => del(arg1, arg2, arg3, arg4);
	}
	static Delegates.ActionWithReturn<R,T2,T3,T4> PartialApply4to3R<R,T,T2,T3,T4>(Delegates.ActionWithReturn<R,T,T2,T3,T4> del, T arg1) {
		return (arg2, arg3, arg4) => del(arg1, arg2, arg3, arg4);
	}

	
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
	private static string GetTypeDisplayNameForDebug(string typeName)
	{
		//return EditorGUIHelper.GetTypeDisplayName(typeName); // I'd call this, but non-editor scripts can't access EditorGUIHelper
		switch(typeName)
		{
			case "Boolean":
				return "bool";
			case "Int32":
				return "int";
			case "Single":
				return "float";
			case "Double":
				return "double";
			case "Int64":
				return "long";
			case "Int16":
				return "short";
			case "UInt32":
				return "uint";
			case "UInt64":
				return "ulong";
			case "UInt16":
				return "ushort";
			case "String":
				return "string";
			case "Void":
				return "void";
			case "MonoType":
				return "Type";
			case "MonoMethod":
				return "MethodInfo";
		}
		if(typeName != null && typeName.EndsWith("[]")) {
			return GetTypeDisplayNameForDebug(typeName.Substring(0,typeName.Length-2)) + "[]";
		}
		return typeName;
	}
	
	private static string GetArgsDisplay(object[] args, bool types, bool names)
	{
		string argsMsg = "(";
		if(args != null)
		{
			if(types)
			{
				for(int i = 0 ; i < args.Length ; i++) {
					object o = args[i];
					string typeName = (o == null) ? "object" : GetTypeDisplayNameForDebug(o.GetType().FullName);
					argsMsg += typeName;
					if(i != args.Length-1) {
						argsMsg += ", ";
					}
				}
			}
			if(types && names) {
				argsMsg += ") = (";
			}
			if(names)
			{
				for(int i = 0 ; i < args.Length ; i++) {
					object o = args[i];
					argsMsg += o ?? "null";
					if(i != args.Length-1) {
						argsMsg += ", ";
					}
				}
			}
		}
		argsMsg += ")";
		return argsMsg;
	}
#endif

	static int CountUnassignedGenericArguments(MethodBase member)
	{
		return member.GetGenericArguments().Length;
	}
	
	static int CountUnassignedGenericArguments(Type member)
	{
		return member.GetGenericArguments().Length;
	}
	
//	static bool TryMakeDelegate0Args<R>(object target, MethodInfo method, ref Delegate del)
//	{
//		if(typeof(R).IsAssignableFrom(method.ReturnType)) {
//			del = Delegate.CreateDelegate(typeof(Delegates.ActionWithReturn<R>), target, method);
//			return true;
//		}
//		return false;
//	}
//	static bool TryMakeDelegate1Arg<T>(object target, MethodInfo method, ref Delegate del)
//	{
//		if(method.GetParameters()[0].ParameterType.IsAssignableFrom(typeof(T))
//		//&& method.ReturnType == typeof(void)
//		) {
//			del = Delegate.CreateDelegate(typeof(Delegates.Action<T>), target, method);
//			return true;
//		}
//		return false;
//	}
	
	static Type ChooseClosestTypeMatch(MemberInfo[] members, string requestedName)
	{
		Type best = null;
		int bestCharsWrong = int.MaxValue;
		int nmembers = members.Length;
		for(int i = 0 ; i < nmembers ; i++) {
			MemberInfo member = members[i];
			if(member is Type) { // nested type
				Type type = (Type)member;
				if(nmembers == 1) {
					return type;
				}
				string typeName = type.Name;
				if(typeName == requestedName) {
					return type;
				}
				// if we got multiple types back (due to case insensitive match),
				// try to choose the one closest to the requested requestedName
				int wrong = 0;
				int len = MathUtil.Min(typeName.Length, requestedName.Length);
				for(int j = 0 ; j < len ; j++) {
					if(typeName[j] != requestedName[j]) {
						wrong++;
					}
				}
				if(wrong < bestCharsWrong) {
					bestCharsWrong = wrong;
					best = type;
				}
			}
		}
		return best;
	}
	


	// command[startIndex] should be the bracket/paren/whatever that's preceding the comma-separated list of args
	// will never return a 0-length array (either returns null or an array of evaluated arguments)
	static object[] EvalArgs(object target, string command, int startIndex, int endIndex, object firstArg=null, bool useFirstArg=false, char commaChar=',', Type expectedType=null, bool assumeMatchingAngledBrackets=false, bool set_last_EvalArgs_targetAndMemberInfos=false)
	{
		if(endIndex > startIndex + 1) {
			List<object> argsList = new List<object>();
			List<TargetAndMemberInfo> targetAndMemberInfosList = set_last_EvalArgs_targetAndMemberInfos ? new List<TargetAndMemberInfo>() : null;
			if(useFirstArg) {
				argsList.Add(firstArg);
				if(set_last_EvalArgs_targetAndMemberInfos) {
					targetAndMemberInfosList.Add(new TargetAndMemberInfo(){ target=last_Eval_lastEvaluatedTarget, member=last_Eval_lastEvaluatedMember, index=last_Eval_lastEvaluatedIndex, });
				}
			}
			int argStartIndex = startIndex + 1;
			int evalStartIndex = argStartIndex;
			while(argStartIndex < endIndex)
			{
				int commaIndex = ParseUtils.GetCommaIndex(command, argStartIndex, endIndex, commaChar, assumeMatchingAngledBrackets);
				int argEndIndex = (commaIndex == -1) ? endIndex : commaIndex;

				object val = Eval(command, target, expectedType, evalStartIndex, argEndIndex);

				if(val != DBNull.Value || argEndIndex + 1 >= endIndex) {
					argsList.Add(val);
					if(set_last_EvalArgs_targetAndMemberInfos) {
						targetAndMemberInfosList.Add(new TargetAndMemberInfo(){ target=last_Eval_lastEvaluatedTarget, member=last_Eval_lastEvaluatedMember, index=last_Eval_lastEvaluatedIndex, });
					}
					argStartIndex = argEndIndex + 1;
					evalStartIndex = argStartIndex;
				} else {
					// evaluation error... maybe we got the wrong comma index? e.g.
					// f1( 1, f2(1,2), n3<i3, n4>i4, f5<int,string>(1,"2,3"), 6)
					//                                     ^ wrong index, inside <int,string>
					// in which case we want to combine them into the next evaluation
					//                               f5<int,string>(1,"2,3")
					argStartIndex = argEndIndex + 1;
				}
			}
			if(set_last_EvalArgs_targetAndMemberInfos) {
				last_EvalArgs_targetAndMemberInfos = targetAndMemberInfosList.ToArray();
			}
			if(argsList.Count != 0) {
				return argsList.ToArray();
			}
		}
		return null;
	}
	
	static bool DoesMethodMatchArgsDirect(MethodBase method, object[] args, bool allowImplicitConversions)
	{
		if(method == null) {
			return false;
		}
		return DoesMethodMatchArgsDirect(method.GetParameters(), args, allowImplicitConversions);
	}
	static bool DoesMethodMatchArgsDirect(ParameterInfo[] paramInfos, object[] args, bool allowImplicitConversions)
	{
		if(args == null) {
			return (paramInfos.Length == 0);
		}
		int nargs = args.Length;
		if(nargs != paramInfos.Length) {
			return false;
		}
		for(int i = 0 ; i < nargs ; i++) {
			Type paramType = paramInfos[i].ParameterType;
			if(args[i] == null)
			{
				if(paramType.IsValueType) {
//Debug.Log("can't convert " + args[i] + " to " + paramType);
					return false;
				}
			}
			else
			{
				Type argType = args[i].GetType();
				if(!CanInvokeCastType(argType, paramType, true, !allowImplicitConversions)) {
//Debug.Log("can't convert " + args[i] + " to " + paramType);
					return false;
				}
			}
		}
		return true;
	}
	

	static bool DoesMethodMatchArgsWithDefaults(MethodBase method, object[] args, bool allowImplicitConversions)
	{
		if(method == null) {
			return false;
		}
		return DoesMethodMatchArgsWithDefaults(method.GetParameters(), args, allowImplicitConversions);
	}
	static bool DoesMethodMatchArgsWithDefaults(ParameterInfo[] paramInfos, object[] args, bool allowImplicitConversions)
	{
		int nparams = paramInfos.Length;
		for(int i = 0 ; i < nparams ; i++) {
			ParameterInfo paramInfo = paramInfos[i];
			Type paramType = paramInfo.ParameterType;
			if(args == null || i >= args.Length) {
				if(!paramInfo.IsOptional) {
					return false;
				}
			}
			else if(args[i] == null)
			{
				if(paramType.IsValueType) {
					return false;
				}
			}
			else
			{
				Type argType = args[i].GetType();
				if(!CanInvokeCastType(argType, paramType, true, !allowImplicitConversions)) {
					return false;
				}
			}
		}
		return true;
	}
	
	static object[] ExtendArgs(object[] args, MethodBase method)
	{
		if(method == null) {
			return args;
		}
		return ExtendArgs(args, method.GetParameters());
	}
	static object[] ExtendArgs(object[] args, ParameterInfo[] paramInfos)
	{
		int nargs = (args != null) ? args.Length : 0;
		int nparams = paramInfos.Length;
		if(nargs >= nparams) {
			return args;
		}
		object[] argsPlusDefaults = new object[nparams];
		for(int i = 0 ; i < nargs ; i++)
		{
			argsPlusDefaults[i] = args[i];
		}
		for(int i = nargs ; i < nparams ; i++)
		{
			ParameterInfo paramInfo = paramInfos[i];
			object defaultValue = paramInfo.DefaultValue;
			if(defaultValue == DBNull.Value) {
				Type paramType = paramInfo.ParameterType;
				defaultValue = paramType.IsValueType ? System.Activator.CreateInstance(paramType) : null;
			}
			argsPlusDefaults[i] = defaultValue;
		}
		return argsPlusDefaults;
	}

	static bool DoesMethodMatchSignature(MethodInfo method, MethodInfo signature/*, bool allowPartialMatch=false*/)
	{
		//if(!signature.ReturnType.IsAssignableFrom(method.ReturnType)) { // TODO: is this backwards?
		if(!CanInvokeCastType(method.ReturnType, signature.ReturnType, true, false)) { // TODO: is this backwards? (if so, both aren't)
			return false;
		}
		ParameterInfo[] methodParams = method.GetParameters();
		ParameterInfo[] signatureParams = signature.GetParameters();
		int numMethodParams = methodParams.Length;
		if(numMethodParams != signatureParams.Length/*
		&& (!allowPartialMatch || numMethodParams > signatureParams.Length)*/) {
			return false;
		}
		for(int i = 0 ; i < numMethodParams ; i++) {
			//if(!signatureParams[i].ParameterType.IsAssignableFrom(methodParams[i].ParameterType)) { // TODO: is this backwards?
			//if(!CanInvokeCastType(methodParams[i].ParameterType, signatureParams[i].ParameterType, true)) { // TODO: is this backwards? (if so, both aren't)
			if(!CanInvokeCastType(signatureParams[i].ParameterType, methodParams[i].ParameterType, true, false)) { // I think it was backwards, since from the caller's POV, args can't be required to be more specific than the signature
				return false;
			}
		}
		return true;
	}
	
	// returns false iff there's an error
	static bool ApplyByRefArgChanges(MethodBase method, object[] values, TargetAndMemberInfo[] targetAndMemberInfos)
	{
		ParameterInfo[] paramInfos = method.GetParameters();
		if(paramInfos.Length == 0) {
			return true;
		}
		bool ok = true;
		int nparams = paramInfos.Length;
//		if(nparams > values.Length) {
//			nparams = values.Length;
//		}
//		if(nparams > targetAndMemberInfos.Length) {
//			nparams = targetAndMemberInfos.Length;
//		}
		for(int i = 0 ; i < nparams ; i++) {
			if(paramInfos[i].ParameterType.IsByRef) {
				ok &= targetAndMemberInfos[i].SetValue(values[i]);
			}
		}
		return ok;
	}
	
	// GetTypeMembers / TypeGetMembers / type.GetMembers
	static MemberInfo[] GetTypeMember(Type type, string identifier, BindingFlags bindingFlags)
	{
		bool unused;
		return GetTypeMember(type, identifier, bindingFlags, out unused);
	}
	static MemberInfo[] GetTypeMember(Type type, string identifier, BindingFlags bindingFlags, out bool imperfectMatch)
	{
		if(typeMemberCache == null) {
			typeMemberCache = new Dictionary<TypeMemberCacheKey, KeyValuePair<MemberInfo[],bool>>(new TypeMemberCacheKey.Comparer());
		}
		TypeMemberCacheKey key = new TypeMemberCacheKey() { identifier=identifier, type=type, bindingFlags=bindingFlags, };
		KeyValuePair<MemberInfo[],bool> value;
		MemberInfo[] members;
		if(typeMemberCache.TryGetValue(key, out value)) {
			members = value.Key;
			imperfectMatch = value.Value;
		} else {
			imperfectMatch = true;
			members = type.GetMember(identifier, bindingFlags);
			if(members.Length == 0 && identifier.StartsWith("op_")) {
//Debug.Log("searching for " + identifier + " in " + type);
				members = GetBuiltinMembers(type, identifier, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static | BindingFlags.FlattenHierarchy);
			}
			if(members.Length == 0 && (bindingFlags & BindingFlags.IgnoreCase) == 0) {
				members = GetTypeMember(type, identifier, bindingFlags | BindingFlags.IgnoreCase, out imperfectMatch); // try again with case-insensitive search
			} else {
				imperfectMatch = false;
			}
			typeMemberCache.Add(key, new KeyValuePair<MemberInfo[],bool>(members, imperfectMatch));
		}
		return members;
	}
	
	static MemberInfo[] GetBuiltinMembers(Type type, string identifier, BindingFlags bindingFlags)
	{
		// maybe we should cache this stuff...
		if(type == typeof(int)) {
			type = typeof(BuiltinOperators.Int32);
		} else if(type == typeof(float)) {
			type = typeof(BuiltinOperators.Single);
		} else if(type == typeof(bool)) {
			type = typeof(BuiltinOperators.Boolean);
		} else if(type == typeof(string)) {
			type = typeof(BuiltinOperators.String);
		} else if(!type.IsValueType) {
			type = typeof(BuiltinOperators.Object);
		} else if(type == typeof(char)) {
			type = typeof(BuiltinOperators.Char);
		} else if(type == typeof(short)) {
			type = typeof(BuiltinOperators.Int16);
		} else if(type == typeof(long)) {
			type = typeof(BuiltinOperators.Int64);
		} else if(type == typeof(double)) {
			type = typeof(BuiltinOperators.Double);
		} else if(type == typeof(byte)) {
			type = typeof(BuiltinOperators.Byte);
		} else if(type == typeof(sbyte)) {
			type = typeof(BuiltinOperators.SByte);
		} else if(type == typeof(uint)) {
			type = typeof(BuiltinOperators.UInt32);
		} else if(type == typeof(ushort)) {
			type = typeof(BuiltinOperators.UInt16);
		} else if(type == typeof(ulong)) {
			type = typeof(BuiltinOperators.UInt64);
		} else {
			//return new MemberInfo[0];
			//type = typeof(BuiltinOperators.Base);
			type = typeof(BuiltinOperators.Object); // allows assignment to e.g. Color
		}
//Debug.Log("really searching for " + identifier + " in " + type + " with flags " + bindingFlags);
		return type.GetMember(identifier, bindingFlags);
	}
	
	class BuiltinOperators
	{
		public class Keywords
		{
			public static void @throw(Exception e)
			{
				throw(e);
			}
			
			public static object @default(Type t)
			{
				return t.IsValueType ? System.Activator.CreateInstance(t) : null;
			}
			
			public static Type @typeof(object o)
			{
				if(o is Type) {
					return (Type)o;
				}
				if(o != null) {
					return o.GetType();
				}
				return typeof(object);
			}
			
			public static bool @is(object a, object b)
			{
				if(a == null || b == null) {
					return (a == null && b == null);
				}
				if(a.Equals(b)) {
					return true;
				}
				if(!(b is Type)) {
					return false;
				}
				Type aType = a as Type;
				if(aType == null) {
					aType = a.GetType();
				}
				Type bType = (Type)b;
				return bType.IsAssignableFrom(aType);
			}
			
			public static object @as(object a, Type b)
			{
				if(a == null || b == null) {
					return a;
				}
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
				bool evalWasSilent = Eval_silent;
				Eval_silent = true;
				try {
#endif
					if(!WrappedConvertToType(ref a, b)) {
						return @default(b);
					}
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
				} finally {
					Eval_silent = evalWasSilent;
				}
#endif
				return a;
			}
			
			public static int @sizeof(object o)
			{
				if(o == null) {
					return 0;
				}
				System.Type type = @typeof(o);
				if(type.IsEnum) {
					type = Enum.GetUnderlyingType(type);
				}
				if(type.IsValueType) {
					return System.Runtime.InteropServices.Marshal.SizeOf(type);
				}
				if(type.IsArray) {
					int length = (o is Array) ? ((Array)o).Length : 0;
					return 4 + length * @sizeof(type.GetElementType());
				}
				int size = 4;
				FieldInfo[] fields = type.GetFields(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
				if(type.IsValueType) {
					if(o is Type) {
						foreach(FieldInfo field in fields) {
							size += @sizeof(field.FieldType);
						}
					} else {
						foreach(FieldInfo field in fields) {
							size += @sizeof(field.GetValue(o));
						}
					}
				} else {
					if(o is Type) {
						foreach(FieldInfo field in fields) {
							size += field.FieldType.IsValueType ? @sizeof(field.FieldType) : 4;
						}
					} else {
						foreach(FieldInfo field in fields) {
							size += field.FieldType.IsValueType ? @sizeof(field.GetValue(o)) : 4;
						}
					}
				}
				PropertyInfo[] properties = type.GetProperties(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
				if(type.IsValueType) {
					if(o is Type) {
						foreach(PropertyInfo property in properties) {
							size += @sizeof(property.PropertyType);
						}
					} else {
						foreach(PropertyInfo property in properties) {
							size += @sizeof(property.GetValue(o,null));
						}
					}
				} else {
					if(o is Type) {
						foreach(PropertyInfo property in properties) {
							size += property.PropertyType.IsValueType ? @sizeof(property.PropertyType) : 4;
						}
					} else {
						foreach(PropertyInfo property in properties) {
							size += property.PropertyType.IsValueType ? @sizeof(property.GetValue(o,null)) : 4;
						}
					}
				}
				return size;
			}
		}
		
		public class SByte : Int16
		{
			public static sbyte op_Assign(ref sbyte a, sbyte b) { return a = b; }
			public static sbyte op_AdditionAssignment(ref sbyte a, sbyte b) { return a += b; }
			public static sbyte op_SubtractionAssignment(ref sbyte a, sbyte b) { return a -= b; }
			public static sbyte op_MultiplicationAssignment(ref sbyte a, sbyte b) { return a *= b; }
			public static sbyte op_DivisionAssignment(ref sbyte a, sbyte b) { return a /= b; }
			public static sbyte op_ModulusAssignment(ref sbyte a, sbyte b) { return a %= b; }
			public static sbyte op_BitwiseOrAssignment(ref sbyte a, sbyte b) { int aa = a; int bb = b; return a = (sbyte)(aa | bb); }
			public static sbyte op_BitwiseAndAssignment(ref sbyte a, sbyte b) { return a &= b; }
			public static sbyte op_ExclusiveOrAssignment(ref sbyte a, sbyte b) { return a ^= b; }
			public static sbyte op_LeftShiftAssignment(ref sbyte a, sbyte b) { return a <<= b; }
			public static sbyte op_RightShiftAssignment(ref sbyte a, sbyte b) { return a >>= b; }
			public static sbyte op_Increment(ref sbyte a, sbyte b) { return a++; }
			public static sbyte op_Decrement(ref sbyte a, sbyte b) { return a--; }
			
			public static int op_UnaryNegation(sbyte a) { return -a; }
			public static sbyte op_UnaryPlus(sbyte a) { return a; }
			public static int op_OnesComplement(sbyte a) { return ~a; }
			
			public static int op_Addition(sbyte a, sbyte b) { return a + b; }
			public static int op_Subtraction(sbyte a, sbyte b) { return a - b; }
			public static int op_Multiply(sbyte a, sbyte b) { return a * b; }
			public static int op_Division(sbyte a, sbyte b) { return a / b; }
			public static int op_Modulus(sbyte a, sbyte b) { return a % b; }
			public static int op_BitwiseAnd(sbyte a, sbyte b) { return a & b; }
			public static int op_BitwiseOr(sbyte a, sbyte b) { int aa = a; int bb = b; return (sbyte)(aa | bb); }
			public static int op_ExclusiveOr(sbyte a, sbyte b) { return a ^ b; }
			public static int op_LeftShift(sbyte a, sbyte b) { return a << b; }
			public static int op_RightShift(sbyte a, sbyte b) { return a >> b; }
			public static bool op_Equality(sbyte a, sbyte b) { return a == b; }
			public static bool op_Inequality(sbyte a, sbyte b) { return a != b; }
			public static bool op_LessThan(sbyte a, sbyte b) { return a < b; }
			public static bool op_LessThanOrEqual(sbyte a, sbyte b) { return a <= b; }
			public static bool op_GreaterThan(sbyte a, sbyte b) { return a > b; }
			public static bool op_GreaterThanOrEqual(sbyte a, sbyte b) { return a >= b; }
		}
		
		public class Int16 : Int32
		{
			public static short op_Assign(ref short a, short b) { return a = b; }
			public static short op_AdditionAssignment(ref short a, short b) { return a += b; }
			public static short op_SubtractionAssignment(ref short a, short b) { return a -= b; }
			public static short op_MultiplicationAssignment(ref short a, short b) { return a *= b; }
			public static short op_DivisionAssignment(ref short a, short b) { return a /= b; }
			public static short op_ModulusAssignment(ref short a, short b) { return a %= b; }
			public static short op_BitwiseOrAssignment(ref short a, short b) { return a |= b; }
			public static short op_BitwiseAndAssignment(ref short a, short b) { return a &= b; }
			public static short op_ExclusiveOrAssignment(ref short a, short b) { return a ^= b; }
			public static short op_LeftShiftAssignment(ref short a, short b) { return a <<= b; }
			public static short op_RightShiftAssignment(ref short a, short b) { return a >>= b; }
			public static short op_Increment(ref short a, short b) { return a++; }
			public static short op_Decrement(ref short a, short b) { return a--; }
			
			public static int op_UnaryNegation(short a) { return -a; }
			public static short op_UnaryPlus(short a) { return a; }
			public static int op_OnesComplement(short a) { return ~a; }
			
			public static int op_Addition(short a, short b) { return a + b; }
			public static int op_Subtraction(short a, short b) { return a - b; }
			public static int op_Multiply(short a, short b) { return a * b; }
			public static int op_Division(short a, short b) { return a / b; }
			public static int op_Modulus(short a, short b) { return a % b; }
			public static int op_BitwiseAnd(short a, short b) { return a & b; }
			public static int op_BitwiseOr(short a, short b) { return a | b; }
			public static int op_ExclusiveOr(short a, short b) { return a ^ b; }
			public static int op_LeftShift(short a, short b) { return a << b; }
			public static int op_RightShift(short a, short b) { return a >> b; }
			public static bool op_Equality(short a, short b) { return a == b; }
			public static bool op_Inequality(short a, short b) { return a != b; }
			public static bool op_LessThan(short a, short b) { return a < b; }
			public static bool op_LessThanOrEqual(short a, short b) { return a <= b; }
			public static bool op_GreaterThan(short a, short b) { return a > b; }
			public static bool op_GreaterThanOrEqual(short a, short b) { return a >= b; }
		}

		public class Int32 : Int64
		{
			public static int op_Assign(ref int a, int b) { return a = b; }
			public static int op_AdditionAssignment(ref int a, int b) { return a += b; }
			public static int op_SubtractionAssignment(ref int a, int b) { return a -= b; }
			public static int op_MultiplicationAssignment(ref int a, int b) { return a *= b; }
			public static int op_DivisionAssignment(ref int a, int b) { return a /= b; }
			public static int op_ModulusAssignment(ref int a, int b) { return a %= b; }
			public static int op_BitwiseOrAssignment(ref int a, int b) { return a |= b; }
			public static int op_BitwiseAndAssignment(ref int a, int b) { return a &= b; }
			public static int op_ExclusiveOrAssignment(ref int a, int b) { return a ^= b; }
			public static int op_LeftShiftAssignment(ref int a, int b) { return a <<= b; }
			public static int op_RightShiftAssignment(ref int a, int b) { return a >>= b; }
			public static int op_Increment(ref int a, int b) { return a++; }
			public static int op_Decrement(ref int a, int b) { return a--; }
			
			public static int op_UnaryNegation(int a) { return -a; }
			public static int op_UnaryPlus(int a) { return a; }
			public static int op_OnesComplement(int a) { return ~a; }
			
			public static int op_Addition(int a, int b) { return a + b; }
			public static int op_Subtraction(int a, int b) { return a - b; }
			public static int op_Multiply(int a, int b) { return a * b; }
			public static int op_Division(int a, int b) { return a / b; }
			public static int op_Modulus(int a, int b) { return a % b; }
			public static int op_BitwiseAnd(int a, int b) { return a & b; }
			public static int op_BitwiseOr(int a, int b) { return a | b; }
			public static int op_ExclusiveOr(int a, int b) { return a ^ b; }
			public static int op_LeftShift(int a, int b) { return a << b; }
			public static int op_RightShift(int a, int b) { return a >> b; }
			public static bool op_Equality(int a, int b) { return a == b; }
			public static bool op_Inequality(int a, int b) { return a != b; }
			public static bool op_LessThan(int a, int b) { return a < b; }
			public static bool op_LessThanOrEqual(int a, int b) { return a <= b; }
			public static bool op_GreaterThan(int a, int b) { return a > b; }
			public static bool op_GreaterThanOrEqual(int a, int b) { return a >= b; }

			public static long op_Addition(int a, long b) { return a + b; }
			public static long op_Subtraction(int a, long b) { return a - b; }
			public static long op_Multiply(int a, long b) { return a * b; }
			public static long op_Division(int a, long b) { return a / b; }
			public static long op_Modulus(int a, long b) { return a % b; }

			public static float op_Addition(int a, float b) { return a + b; }
			public static float op_Subtraction(int a, float b) { return a - b; }
			public static float op_Multiply(int a, float b) { return a * b; }
			public static float op_Division(int a, float b) { return a / b; }
			public static float op_Modulus(int a, float b) { return a % b; }
		}

		public class Int64 : Base
		{
			public static long op_Assign(ref long a, long b) { return a = b; }
			public static long op_AdditionAssignment(ref long a, long b) { return a += b; }
			public static long op_SubtractionAssignment(ref long a, long b) { return a -= b; }
			public static long op_MultiplicationAssignment(ref long a, long b) { return a *= b; }
			public static long op_DivisionAssignment(ref long a, long b) { return a /= b; }
			public static long op_ModulusAssignment(ref long a, long b) { return a %= b; }
			public static long op_BitwiseOrAssignment(ref long a, long b) { return a |= b; }
			public static long op_BitwiseAndAssignment(ref long a, long b) { return a &= b; }
			public static long op_ExclusiveOrAssignment(ref long a, long b) { return a ^= b; }
			public static long op_LeftShiftAssignment(ref long a, int b) { return a <<= b; }
			public static long op_RightShiftAssignment(ref long a, int b) { return a >>= b; }
			public static long op_Increment(ref long a, long b) { return a++; }
			public static long op_Decrement(ref long a, long b) { return a--; }
			
			public static long op_UnaryNegation(long a) { return -a; }
			public static long op_UnaryPlus(long a) { return a; }
			public static long op_OnesComplement(long a) { return ~a; }
			
			public static long op_Addition(long a, long b) { return a + b; }
			public static long op_Subtraction(long a, long b) { return a - b; }
			public static long op_Multiply(long a, long b) { return a * b; }
			public static long op_Division(long a, long b) { return a / b; }
			public static long op_Modulus(long a, long b) { return a % b; }
			public static long op_BitwiseAnd(long a, long b) { return a & b; }
			public static long op_BitwiseOr(long a, long b) { return a | b; }
			public static long op_ExclusiveOr(long a, long b) { return a ^ b; }
			public static long op_LeftShift(long a, int b) { return a << b; }
			public static long op_RightShift(long a, int b) { return a >> b; }
			public static bool op_Equality(long a, long b) { return a == b; }
			public static bool op_Inequality(long a, long b) { return a != b; }
			public static bool op_LessThan(long a, long b) { return a < b; }
			public static bool op_LessThanOrEqual(long a, long b) { return a <= b; }
			public static bool op_GreaterThan(long a, long b) { return a > b; }
			public static bool op_GreaterThanOrEqual(long a, long b) { return a >= b; }
		}

		public class Single : Double
		{
			public static float op_Assign(ref float a, float b) { return a = b; }
			public static float op_AdditionAssignment(ref float a, float b) { return a += b; }
			public static float op_SubtractionAssignment(ref float a, float b) { return a -= b; }
			public static float op_MultiplicationAssignment(ref float a, float b) { return a *= b; }
			public static float op_DivisionAssignment(ref float a, float b) { return a /= b; }
			public static float op_ModulusAssignment(ref float a, float b) { return a %= b; }
			public static float op_Increment(ref float a, float b) { return a++; }
			public static float op_Decrement(ref float a, float b) { return a--; }
			
			public static float op_Addition(float a, float b) { return a + b; }
			public static float op_Subtraction(float a, float b) { return a - b; }
			public static float op_Multiply(float a, float b) { return a * b; }
			public static float op_Division(float a, float b) { return a / b; }
			public static float op_Modulus(float a, float b) { return a % b; }
			public static bool op_Equality(float a, float b) { return a == b; }
			public static bool op_Inequality(float a, float b) { return a != b; }
			public static bool op_LessThan(float a, float b) { return a < b; }
			public static bool op_LessThanOrEqual(float a, float b) { return a <= b; }
			public static bool op_GreaterThan(float a, float b) { return a > b; }
			public static bool op_GreaterThanOrEqual(float a, float b) { return a >= b; }

			public static float op_UnaryNegation(float a) { return -a; }
			public static float op_UnaryPlus(float a) { return a; }
		}

		public class Double : Base
		{
			public static double op_Assign(ref double a, double b) { return a = b; }
			public static double op_AdditionAssignment(ref double a, double b) { return a += b; }
			public static double op_SubtractionAssignment(ref double a, double b) { return a -= b; }
			public static double op_MultiplicationAssignment(ref double a, double b) { return a *= b; }
			public static double op_DivisionAssignment(ref double a, double b) { return a /= b; }
			public static double op_ModulusAssignment(ref double a, double b) { return a %= b; }
			public static double op_Increment(ref double a, double b) { return a++; }
			public static double op_Decrement(ref double a, double b) { return a--; }
			
			public static double op_Addition(double a, double b) { return a + b; }
			public static double op_Subtraction(double a, double b) { return a - b; }
			public static double op_Multiply(double a, double b) { return a * b; }
			public static double op_Division(double a, double b) { return a / b; }
			public static double op_Modulus(double a, double b) { return a % b; }
			public static bool op_Equality(double a, double b) { return a == b; }
			public static bool op_Inequality(double a, double b) { return a != b; }
			public static bool op_LessThan(double a, double b) { return a < b; }
			public static bool op_LessThanOrEqual(double a, double b) { return a <= b; }
			public static bool op_GreaterThan(double a, double b) { return a > b; }
			public static bool op_GreaterThanOrEqual(double a, double b) { return a >= b; }
			
			public static double op_UnaryNegation(double a) { return -a; }
			public static double op_UnaryPlus(double a) { return a; }
		}

		public class Object : Base
		{
			public static object op_Assign(ref object a, object b) { return a = b; }
			//public static bool op_Equality(object a, object b) { return a == b; }
			//public static bool op_Inequality(object a, object b) { return a != b; }
			//public static bool op_Equality(object a, object b) { return object.Equals(a,b); }
			//public static bool op_Inequality(object a, object b) { return !object.Equals(a,b); }
			public static bool op_Not(object a) { return a == null || a == (object)false; } // HACK for implicit Unity.Object bool conversion
		}

		public class Boolean : Base
		{
			public static bool op_Assign(ref bool a, bool b) { return a = b; }
			public static bool op_Equality(bool a, bool b) { return a == b; }
			public static bool op_Inequality(bool a, bool b) { return a != b; }
			public static bool op_Not(bool a) { return !a; }
			
			public static bool op_LogicalAnd(bool a, bool b) { return a & b; } // short circuit is applied elsewhere
			public static bool op_BitwiseAnd(bool a, bool b) { return a & b; }
			public static bool op_LogicalOr(bool a, bool b) { return a | b; } // short circuit is applied elsewhere
			public static bool op_BitwiseOr(bool a, bool b) { return a | b; }
			public static bool op_ExclusiveOr(bool a, bool b) { return a ^ b; }
			public static bool op_BitwiseOrAssignment(ref bool a, bool b) { return a |= b; }
			public static bool op_BitwiseAndAssignment(ref bool a, bool b) { return a &= b; }
			public static bool op_ExclusiveOrAssignment(ref bool a, bool b) { return a ^= b; }
		}

		public class Char : Base
		{
			public static char op_Assign(ref char a, char b) { return a = b; }
			public static char op_AdditionAssignment(ref char a, char b) { return a += b; }
			public static char op_SubtractionAssignment(ref char a, char b) { return a -= b; }
			public static char op_MultiplicationAssignment(ref char a, char b) { return a *= b; }
			public static char op_DivisionAssignment(ref char a, char b) { return a /= b; }
			public static char op_ModulusAssignment(ref char a, char b) { return a %= b; }
			public static char op_BitwiseOrAssignment(ref char a, char b) { return a |= b; }
			public static char op_BitwiseAndAssignment(ref char a, char b) { return a &= b; }
			public static char op_ExclusiveOrAssignment(ref char a, char b) { return a ^= b; }
			public static char op_LeftShiftAssignment(ref char a, char b) { return a <<= b; }
			public static char op_RightShiftAssignment(ref char a, char b) { return a >>= b; }
			public static char op_Increment(ref char a, char b) { return a++; }
			public static char op_Decrement(ref char a, char b) { return a--; }
			
			public static int op_UnaryNegation(char a) { return -a; }
			public static char op_UnaryPlus(char a) { return a; }
			public static int op_OnesComplement(char a) { return ~a; }
			
			public static int op_Addition(char a, char b) { return a + b; }
			public static int op_Subtraction(char a, char b) { return a - b; }
			public static int op_Multiply(char a, char b) { return a * b; }
			public static int op_Division(char a, char b) { return a / b; }
			public static int op_Modulus(char a, char b) { return a % b; }
			public static int op_BitwiseAnd(char a, char b) { return a & b; }
			public static int op_BitwiseOr(char a, char b) { return a | b; }
			public static int op_ExclusiveOr(char a, char b) { return a ^ b; }
			public static int op_LeftShift(char a, char b) { return a << b; }
			public static int op_RightShift(char a, char b) { return a >> b; }
			public static bool op_Equality(char a, char b) { return a == b; }
			public static bool op_Inequality(char a, char b) { return a != b; }
			public static bool op_LessThan(char a, char b) { return a < b; }
			public static bool op_LessThanOrEqual(char a, char b) { return a <= b; }
			public static bool op_GreaterThan(char a, char b) { return a > b; }
			public static bool op_GreaterThanOrEqual(char a, char b) { return a >= b; }
		}

		public class String : Base
		{
			public static string op_Assign(ref string a, string b) { return a = b; }
			public static bool op_Equality(string a, string b) { return a == b; }
			public static bool op_Inequality(string a, string b) { return a != b; }
			public static string op_Addition(string a, string b) { return a + b; }
			public static string op_Addition(string a, object b) { return a + b; }
			public static string op_AdditionAssignment(ref string a, string b) { return a += b; }
			public static string op_AdditionAssignment(ref string a, object b) { return a += b; }
		}

		public class Base // hacks
		{
			public static bool op_Equality(object a, object b) { return object.Equals(a,b); }
			public static bool op_Inequality(object a, object b) { return !object.Equals(a,b); }
			public static string op_Addition(object a, string b) { return a + b; }
			public static object op_Coalesce(object a, object b) {
				if(a == DBNull.Value) { a = null; } // <-- hack to allow errors to be coalesced away
				// note: ?? actually doesn't work correctly with UnityEngine.Object, due to Unity's "fake null",
				// but we might as well make ?? work correctly in the evaluator by implementing it via object.Equals
				return object.Equals(a,null) ? b : a;
			}
			public static object op_Explicit(Type a, object b) {
				//Debug.Log("EXPLICIT CAST: " + b + " (" + b.GetType() + ")");
				WrappedConvertToType(ref b, a);
				return b;
			}
		}

		public class Byte : UInt16
		{
			public static byte op_Assign(ref byte a, byte b) { return a = b; }
			public static byte op_AdditionAssignment(ref byte a, byte b) { return a += b; }
			public static byte op_SubtractionAssignment(ref byte a, byte b) { return a -= b; }
			public static byte op_MultiplicationAssignment(ref byte a, byte b) { return a *= b; }
			public static byte op_DivisionAssignment(ref byte a, byte b) { return a /= b; }
			public static byte op_ModulusAssignment(ref byte a, byte b) { return a %= b; }
			public static byte op_BitwiseOrAssignment(ref byte a, byte b) { return a |= b; }
			public static byte op_BitwiseAndAssignment(ref byte a, byte b) { return a &= b; }
			public static byte op_ExclusiveOrAssignment(ref byte a, byte b) { return a ^= b; }
			public static byte op_LeftShiftAssignment(ref byte a, byte b) { return a <<= b; }
			public static byte op_RightShiftAssignment(ref byte a, byte b) { return a >>= b; }
			public static byte op_Increment(ref byte a, byte b) { return a++; }
			public static byte op_Decrement(ref byte a, byte b) { return a--; }
			
			public static byte op_UnaryPlus(byte a) { return a; }
			public static int op_OnesComplement(byte a) { return ~a; }
			
			public static int op_Addition(byte a, byte b) { return a + b; }
			public static int op_Subtraction(byte a, byte b) { return a - b; }
			public static int op_Multiply(byte a, byte b) { return a * b; }
			public static int op_Division(byte a, byte b) { return a / b; }
			public static int op_Modulus(byte a, byte b) { return a % b; }
			public static int op_BitwiseAnd(byte a, byte b) { return a & b; }
			public static int op_BitwiseOr(byte a, byte b) { return a | b; }
			public static int op_ExclusiveOr(byte a, byte b) { return a ^ b; }
			public static int op_LeftShift(byte a, byte b) { return a << b; }
			public static int op_RightShift(byte a, byte b) { return a >> b; }
			public static bool op_Equality(byte a, byte b) { return a == b; }
			public static bool op_Inequality(byte a, byte b) { return a != b; }
			public static bool op_LessThan(byte a, byte b) { return a < b; }
			public static bool op_LessThanOrEqual(byte a, byte b) { return a <= b; }
			public static bool op_GreaterThan(byte a, byte b) { return a > b; }
			public static bool op_GreaterThanOrEqual(byte a, byte b) { return a >= b; }
		}

		public class UInt16 : UInt32
		{
			public static ushort op_Assign(ref ushort a, ushort b) { return a = b; }
			public static ushort op_AdditionAssignment(ref ushort a, ushort b) { return a += b; }
			public static ushort op_SubtractionAssignment(ref ushort a, ushort b) { return a -= b; }
			public static ushort op_MultiplicationAssignment(ref ushort a, ushort b) { return a *= b; }
			public static ushort op_DivisionAssignment(ref ushort a, ushort b) { return a /= b; }
			public static ushort op_ModulusAssignment(ref ushort a, ushort b) { return a %= b; }
			public static ushort op_BitwiseOrAssignment(ref ushort a, ushort b) { return a |= b; }
			public static ushort op_BitwiseAndAssignment(ref ushort a, ushort b) { return a &= b; }
			public static ushort op_ExclusiveOrAssignment(ref ushort a, ushort b) { return a ^= b; }
			public static ushort op_LeftShiftAssignment(ref ushort a, ushort b) { return a <<= b; }
			public static ushort op_RightShiftAssignment(ref ushort a, ushort b) { return a >>= b; }
			public static ushort op_Increment(ref ushort a, ushort b) { return a++; }
			public static ushort op_Decrement(ref ushort a, ushort b) { return a--; }
			
			public static ushort op_UnaryPlus(ushort a) { return a; }
			public static int op_OnesComplement(ushort a) { return ~a; }
			
			public static int op_Addition(ushort a, ushort b) { return a + b; }
			public static int op_Subtraction(ushort a, ushort b) { return a - b; }
			public static int op_Multiply(ushort a, ushort b) { return a * b; }
			public static int op_Division(ushort a, ushort b) { return a / b; }
			public static int op_Modulus(ushort a, ushort b) { return a % b; }
			public static int op_BitwiseAnd(ushort a, ushort b) { return a & b; }
			public static int op_BitwiseOr(ushort a, ushort b) { return a | b; }
			public static int op_ExclusiveOr(ushort a, ushort b) { return a ^ b; }
			public static int op_LeftShift(ushort a, ushort b) { return a << b; }
			public static int op_RightShift(ushort a, ushort b) { return a >> b; }
			public static bool op_Equality(ushort a, ushort b) { return a == b; }
			public static bool op_Inequality(ushort a, ushort b) { return a != b; }
			public static bool op_LessThan(ushort a, ushort b) { return a < b; }
			public static bool op_LessThanOrEqual(ushort a, ushort b) { return a <= b; }
			public static bool op_GreaterThan(ushort a, ushort b) { return a > b; }
			public static bool op_GreaterThanOrEqual(ushort a, ushort b) { return a >= b; }
		}

		public class UInt32 : UInt64
		{
			public static uint op_Assign(ref uint a, uint b) { return a = b; }
			public static uint op_AdditionAssignment(ref uint a, uint b) { return a += b; }
			public static uint op_SubtractionAssignment(ref uint a, uint b) { return a -= b; }
			public static uint op_MultiplicationAssignment(ref uint a, uint b) { return a *= b; }
			public static uint op_DivisionAssignment(ref uint a, uint b) { return a /= b; }
			public static uint op_ModulusAssignment(ref uint a, uint b) { return a %= b; }
			public static uint op_BitwiseOrAssignment(ref uint a, uint b) { return a |= b; }
			public static uint op_BitwiseAndAssignment(ref uint a, uint b) { return a &= b; }
			public static uint op_ExclusiveOrAssignment(ref uint a, uint b) { return a ^= b; }
			public static uint op_LeftShiftAssignment(ref uint a, int b) { return a <<= b; }
			public static uint op_RightShiftAssignment(ref uint a, int b) { return a >>= b; }
			public static uint op_Increment(ref uint a, uint b) { return a++; }
			public static uint op_Decrement(ref uint a, uint b) { return a--; }
			
			public static uint op_UnaryPlus(uint a) { return a; }
			public static uint op_OnesComplement(uint a) { return ~a; }
			
			public static uint op_Addition(uint a, uint b) { return a + b; }
			public static uint op_Subtraction(uint a, uint b) { return a - b; }
			public static uint op_Multiply(uint a, uint b) { return a * b; }
			public static uint op_Division(uint a, uint b) { return a / b; }
			public static uint op_Modulus(uint a, uint b) { return a % b; }
			public static uint op_BitwiseAnd(uint a, uint b) { return a & b; }
			public static uint op_BitwiseOr(uint a, uint b) { return a | b; }
			public static uint op_ExclusiveOr(uint a, uint b) { return a ^ b; }
			public static uint op_LeftShift(uint a, int b) { return a << b; }
			public static uint op_RightShift(uint a, int b) { return a >> b; }
			public static bool op_Equality(uint a, uint b) { return a == b; }
			public static bool op_Inequality(uint a, uint b) { return a != b; }
			public static bool op_LessThan(uint a, uint b) { return a < b; }
			public static bool op_LessThanOrEqual(uint a, uint b) { return a <= b; }
			public static bool op_GreaterThan(uint a, uint b) { return a > b; }
			public static bool op_GreaterThanOrEqual(uint a, uint b) { return a >= b; }

			public static long op_Addition(uint a, long b) { return a + b; }
			public static long op_Subtraction(uint a, long b) { return a - b; }
			public static long op_Multiply(uint a, long b) { return a * b; }
			public static long op_Division(uint a, long b) { return a / b; }
			public static long op_Modulus(uint a, long b) { return a % b; }

			public static float op_Addition(uint a, float b) { return a + b; }
			public static float op_Subtraction(uint a, float b) { return a - b; }
			public static float op_Multiply(uint a, float b) { return a * b; }
			public static float op_Division(uint a, float b) { return a / b; }
			public static float op_Modulus(uint a, float b) { return a % b; }
		}

		public class UInt64 : Base
		{
			public static ulong op_Assign(ref ulong a, ulong b) { return a = b; }
			public static ulong op_AdditionAssignment(ref ulong a, ulong b) { return a += b; }
			public static ulong op_SubtractionAssignment(ref ulong a, ulong b) { return a -= b; }
			public static ulong op_MultiplicationAssignment(ref ulong a, ulong b) { return a *= b; }
			public static ulong op_DivisionAssignment(ref ulong a, ulong b) { return a /= b; }
			public static ulong op_ModulusAssignment(ref ulong a, ulong b) { return a %= b; }
			public static ulong op_BitwiseOrAssignment(ref ulong a, ulong b) { return a |= b; }
			public static ulong op_BitwiseAndAssignment(ref ulong a, ulong b) { return a &= b; }
			public static ulong op_ExclusiveOrAssignment(ref ulong a, ulong b) { return a ^= b; }
			public static ulong op_LeftShiftAssignment(ref ulong a, int b) { return a <<= b; }
			public static ulong op_RightShiftAssignment(ref ulong a, int b) { return a >>= b; }
			public static ulong op_Increment(ref ulong a, ulong b) { return a++; }
			public static ulong op_Decrement(ref ulong a, ulong b) { return a--; }
			
			public static ulong op_UnaryPlus(ulong a) { return a; }
			public static ulong op_OnesComplement(ulong a) { return ~a; }
			
			public static ulong op_Addition(ulong a, ulong b) { return a + b; }
			public static ulong op_Subtraction(ulong a, ulong b) { return a - b; }
			public static ulong op_Multiply(ulong a, ulong b) { return a * b; }
			public static ulong op_Division(ulong a, ulong b) { return a / b; }
			public static ulong op_Modulus(ulong a, ulong b) { return a % b; }
			public static ulong op_BitwiseAnd(ulong a, ulong b) { return a & b; }
			public static ulong op_BitwiseOr(ulong a, ulong b) { return a | b; }
			public static ulong op_ExclusiveOr(ulong a, ulong b) { return a ^ b; }
			public static ulong op_LeftShift(ulong a, int b) { return a << b; }
			public static ulong op_RightShift(ulong a, int b) { return a >> b; }
			public static bool op_Equality(ulong a, ulong b) { return a == b; }
			public static bool op_Inequality(ulong a, ulong b) { return a != b; }
			public static bool op_LessThan(ulong a, ulong b) { return a < b; }
			public static bool op_LessThanOrEqual(ulong a, ulong b) { return a <= b; }
			public static bool op_GreaterThan(ulong a, ulong b) { return a > b; }
			public static bool op_GreaterThanOrEqual(ulong a, ulong b) { return a >= b; }
		}
	}
	
	static MemberInfo[] GetTypeConstructors(Type type, ref object[] args)
	{
		MemberInfo[] members = type.GetConstructors(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
		
		if(args == null && type.IsValueType) {
			bool anyNoArgConstructor = false;
			foreach(MemberInfo member in members) {
				if(member is MethodBase) {
					if(((MethodBase)member).GetParameters().Length == 0) {
						anyNoArgConstructor = true;
						break;
					}
				}
			}
			if(!anyNoArgConstructor) {
				// there's no constructor with 0 args,
				// but since the type is a value type,
				// we can create a default object of that type anyway.
				members = GetTypeMember(typeof(BuiltinOperators.Keywords), "default", BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static);
				args = new object[] { type };
			}
		}
		
		return members;
	}
	
	struct TypeMemberCacheKey
	{
		public string identifier;
		public Type type;
		public BindingFlags bindingFlags;
		public class Comparer : IEqualityComparer<TypeMemberCacheKey>
		{
			public bool Equals(TypeMemberCacheKey a, TypeMemberCacheKey b)
			{
				return a.identifier == b.identifier && a.type == b.type && a.bindingFlags == b.bindingFlags;
			}
			public int GetHashCode(TypeMemberCacheKey a)
			{
				return a.identifier.GetHashCode();
			}
		}
//		public override int GetHashCode() {
//			return identifier.GetHashCode();
//		}
//		public override bool Equals(object obj) {
//			if(!(obj is TypeMemberCacheKey)) {
//				return false;
//			}
//			TypeMemberCacheKey other = (TypeMemberCacheKey)obj;
//			return identifier == other.identifier && type == other.type && bindingFlags == other.bindingFlags;
//		}
//		public bool FastEquals(TypeMemberCacheKey other) {
//			return identifier == other.identifier && type == other.type && bindingFlags == other.bindingFlags;
//		}
	}
	
	static Dictionary<TypeMemberCacheKey, KeyValuePair<MemberInfo[],bool>> typeMemberCache;
	
	// GetOperatorEndIndex
	static int GetOperandEndIndex(string command, int startIndex, int endIndex, string op)
	{
		int origStartIndex = startIndex;
		int basePrecedence = GetOpPrecedenceFromMethodName(op);
		// example / note to self: 1+(2)*3 should evaluate to 7, not 9
		int depth = 0;
		while(startIndex < endIndex) {
			char c = command[startIndex];
			if(depth == 0) {
				string identifier = null;
				int opLength = OperatorSymbolToMethodName(command, startIndex, endIndex, true, true, ref identifier);
				if(opLength > 0) {
					int precedence = GetOpPrecedenceFromMethodName(identifier);
					if(precedence <= basePrecedence && startIndex != origStartIndex) {
						break;
					}
					startIndex += opLength;
					continue;
				}
			}
			if(c == '(' || c == '[' || c == '{') {
				depth++;
			} else if(c == ')' || c == ']' || c == '}') {
				depth--;
			} else if(c == '\'') {
				int idx = ParseUtils.GetStringEndIndex(command, startIndex, endIndex, '\'');
				if(idx > startIndex) {
					startIndex = idx;
				}
			} else if(c == '\"') {
				int idx = ParseUtils.GetStringEndIndex(command, startIndex, endIndex, '\"');
				if(idx > startIndex) {
					startIndex = idx;
				}
			} else if(c == '@') {
				int idx = ParseUtils.GetRawStringEndIndex(command, startIndex, endIndex, '\"');
				if(idx > startIndex+1) {
					startIndex = idx;
				}
			} else if(c == ';' && depth == 0) {
				break;
			}
			if(depth < 0) {
				break;
			}
			startIndex++;
		}
		return startIndex;
	}
	
	static int GetOpPrecedenceFromMethodName(string op)
	{
		switch(op)
		{
			case "op_Increment":
			case "op_Decrement":
				return 13;
			case "op_UnaryNegation":
			case "op_UnaryPlus":
			case "op_OnesComplement":
			case "op_Not":
				return 12;
			case "op_Multiply":
			case "op_Division":
			case "op_Modulus":
				return 11;
			case "op_Addition":
			case "op_Subtraction":
				return 10;
			case "op_LeftShift":
			case "op_RightShift":
				return 9;
			case "op_LessThan":
			case "op_LessThanOrEqual":
			case "op_GreaterThan":
			case "op_GreaterThanOrEqual":
				return 8;
			case "op_Equality":
			case "op_Inequality":
			case "is":
			case "as":
				return 7;
			case "op_BitwiseAnd":
				return 6;
			case "op_ExclusiveOr":
				return 5;
			case "op_BitwiseOr":
				return 4;
			case "op_LogicalAnd":
				return 3;
			case "op_LogicalOr":
				return 2;
			case "op_Coalesce":
				return 1;
			case "op_Assign":
			case "op_AdditionAssignment":
			case "op_SubtractionAssignment":
			case "op_MultiplicationAssignment":
			case "op_DivisionAssignment":
			case "op_ModulusAssignment":
			case "op_BitwiseOrAssignment":
			case "op_BitwiseAndAssignment":
			case "op_ExclusiveOrAssignment":
			case "op_LeftShiftAssignment":
			case "op_RightShiftAssignment":
				return 0;
			default:
				return 9001;
		}
	}

	static int OperatorSymbolToMethodName(string command, int startIndex, int endIndex, bool binary, bool unary, ref string identifier)
	{
		int numCharsParsed = 0;
		char secondChar = (startIndex+1 < endIndex) ? command[startIndex+1] : (char)0;
		if(binary) {
			switch(command[startIndex]) {
				case '+':
					switch(secondChar) {
						default:
							numCharsParsed = 1;
							identifier = "op_Addition";
							break;
						case '+':
							numCharsParsed = 2;
							identifier = "op_Increment";
							break;
						case '=':
							numCharsParsed = 2;
							identifier = "op_AdditionAssignment";
							break;
					}
					break;
				case '-':
					switch(secondChar) {
						default:
							numCharsParsed = 1;
							identifier = "op_Subtraction";
							break;
						case '-':
							numCharsParsed = 2;
							identifier = "op_Decrement";
							break;
						case '=':
							numCharsParsed = 2;
							identifier = "op_SubtractionAssignment";
							break;
					}
					break;
				case '*':
					if(secondChar != '=') {
						numCharsParsed = 1;
						identifier = "op_Multiply";
					} else {
						numCharsParsed = 2;
						identifier = "op_MultiplicationAssignment";
					}
					break;
				case '/':
					if(secondChar != '=') {
						numCharsParsed = 1;
						identifier = "op_Division";
					} else {
						numCharsParsed = 2;
						identifier = "op_DivisionAssignment";
					}
					break;
				case '%':
					if(secondChar != '=') {
						numCharsParsed = 1;
						identifier = "op_Modulus";
					} else {
						numCharsParsed = 2;
						identifier = "op_ModulusAssignment";
					}
					break;
				case '&':
					switch(secondChar) {
						default:
							numCharsParsed = 1;
							identifier = "op_BitwiseAnd";
							break;
						case '&':
							numCharsParsed = 2;
							identifier = "op_LogicalAnd";
							break;
						case '=':
							numCharsParsed = 2;
							identifier = "op_BitwiseAndAssignment";
							break;
					}
					break;
				case '|':
					switch(secondChar) {
						default:
							numCharsParsed = 1;
							identifier = "op_BitwiseOr";
							break;
						case '|':
							numCharsParsed = 2;
							identifier = "op_LogicalOr";
							break;
						case '=':
							numCharsParsed = 2;
							identifier = "op_BitwiseOrAssignment";
							break;
					}
					break;
				case '^':
					if(secondChar != '=') {
						numCharsParsed = 1;
						identifier = "op_ExclusiveOr";
					} else {
						numCharsParsed = 2;
						identifier = "op_ExclusiveOrAssignment";
					}
					break;
				case '<':
					switch(secondChar) {
						case '<': {
							char thirdChar = (startIndex+2 < endIndex) ? command[startIndex+2] : (char)0;
							if(thirdChar != '=') {
								numCharsParsed = 2;
								identifier = "op_LeftShift";
							} else {
								numCharsParsed = 3;
								identifier = "op_LeftShiftAssignment";
							}
						}	break;
						case '=':
							numCharsParsed = 2;
							identifier = "op_LessThanOrEqual";
							break;
						default:
							numCharsParsed = 1;
							identifier = "op_LessThan";
							break;
					}
					break;
				case '>':
					switch(secondChar) {
						case '>': {
							char thirdChar = (startIndex+2 < endIndex) ? command[startIndex+2] : (char)0;
							if(thirdChar != '=') {
								numCharsParsed = 2;
								identifier = "op_RightShift";
							} else {
								numCharsParsed = 3;
								identifier = "op_RightShiftAssignment";
							}
						}	break;
						case '=':
							numCharsParsed = 2;
							identifier = "op_GreaterThanOrEqual";
							break;
						default:
							numCharsParsed = 1;
							identifier = "op_GreaterThan";
							break;
					}
					break;
				case '=':
					switch(secondChar) {
						case '=':
							numCharsParsed = 2;
							identifier = "op_Equality";
							break;
						default:
							numCharsParsed = 1;
							identifier = "op_Assign";
							break;
					}
					break;
				case '!':
					if(secondChar == '=') {
						numCharsParsed = 2;
						identifier = "op_Inequality";
					}
					break;
				case '?':
					if(secondChar == '?') {
						numCharsParsed = 2;
						identifier = "op_Coalesce";
					}
					break;
				case ' ': // "is" (actually " is" in this case so e.g. "this" isn't split into "th" "is")
					if(secondChar == 'i') {
						char thirdChar = (startIndex+2 < endIndex) ? command[startIndex+2] : (char)0;
						if(thirdChar == 's') {
							numCharsParsed = 3;
							identifier = "is";
						}
					}
					if(secondChar == 'a') {
						char thirdChar = (startIndex+2 < endIndex) ? command[startIndex+2] : (char)0;
						if(thirdChar == 's') {
							numCharsParsed = 3;
							identifier = "as";
						}
					}
					break;
			}
		}
		if(unary && numCharsParsed == 0)
		{
			switch(command[startIndex]) {
				case '+':
					if(secondChar != '+') {
						numCharsParsed = 1;
						identifier = "op_UnaryPlus";
					} else {
						numCharsParsed = 2;
						identifier = "op_Increment";
					}
					break;
				case '-':
					if(secondChar != '-') {
						numCharsParsed = 1;
						identifier = "op_UnaryNegation";
					} else {
						numCharsParsed = 2;
						identifier = "op_Decrement";
					}
					break;
				case '~':
					numCharsParsed = 1;
					identifier = "op_OnesComplement";
					break;
				case '!':
					numCharsParsed = 1;
					identifier = "op_Not";
					break;
			}
		}
		return numCharsParsed;
	}
	
//#if true && UNITY_EDITOR
//	[MenuItem("TEST/TESTCRAP")]
//	public static void TestCrap()
//	{
//		{
//			int iters = 100000;
//			double startTime = EditorApplication.timeSinceStartup;
//			Type intType = typeof(int);
//			for(int i = 0 ; i < iters ; i++)
//			{
//				object a = 1.0/3.0;
//				WrappedConvertToType(ref a, intType);
//			}
//			double endTime = EditorApplication.timeSinceStartup;
//			Debug.Log("DOUBLE: " + (endTime - startTime) / iters);
//		}
//		{
//			int iters = 100000;
//			double startTime = EditorApplication.timeSinceStartup;
//			Type intType = typeof(int);
//			for(int i = 0 ; i < iters ; i++)
//			{
//				object a = 1.0f/3.0f;
//				WrappedConvertToType(ref a, intType);
//			}
//			double endTime = EditorApplication.timeSinceStartup;
//			Debug.Log("FLOAT: " + (endTime - startTime) / iters);
//		}
//		Material m = new Material(Shader.Find("STM/Mobile Transparent"));
//		{
//			MemberInfo[] methods = typeof(Material).GetMember("SetColor");
//			MethodInfo method = methods[0] as MethodInfo;
//			//Debug.Log(method);
//			//Delegates.Action<Material,string,Color> a = Delegate.CreateDelegate(typeof(Delegates.Action<Material,string,Color>), method) as Delegates.Action<Material,string,Color>;
//			//Delegates.Action<object,string,Color> b = Delegate.CreateDelegate(typeof(Delegates.Action<object,string,Color>), method) as Delegates.Action<object,string,Color>;
//			Delegates.Action<string,Color> c = Delegate.CreateDelegate(typeof(Delegates.Action<string,Color>), m, method) as Delegates.Action<string,Color>;
//			Delegates.Action<Color> d = (arg2) => c("_MainColor",arg2);
//			//a(null,"_MainColor",new Color(0,1,1));
//			//b(null,"_MainColor",new Color(0,1,1));
//			d(new Color(0,1,1));
//		}
//		{
//			MemberInfo[] methods = typeof(Material).GetMember("GetColor");
//			MethodInfo method = methods[0] as MethodInfo;
//			Delegates.ActionWithReturn<Color,string> c = Delegate.CreateDelegate(typeof(Delegates.ActionWithReturn<Color,string>), m, method) as Delegates.ActionWithReturn<Color,string>;
//			Delegates.ActionWithReturn<Color> d = () => c("_MainColor");
//			Debug.Log(d());
//		}
//		UnityEngine.Object.DestroyImmediate(m,true);
////void SetColor(Material, string, Color)
////public void SetColor(string propertyName, Color color)
//	
////		Debug.Log(( ~((uint)1) ).GetType());
////		Debug.Log(( ~((ushort)1) ).GetType());
//	}
//#endif

	// having these out here is a hack to work around the lack of optional out params in C# without requiring duplicating whole functions
	static object last_Eval_lastEvaluatedTarget;
	static MemberInfo last_Eval_lastEvaluatedMember;
	static object[] last_Eval_lastEvaluatedIndex;
	static TargetAndMemberInfo[] last_EvalArgs_targetAndMemberInfos;
	private class TargetAndMemberInfo
	{
		public object target;
		public MemberInfo member;
		public object[] index;
		
		public bool SetValue(object value)
		{
			if(target == null) {
				return false;
			}
			if(member is FieldInfo)
			{
				FieldInfo field = (FieldInfo)member;
				field.SetValue(target, value);
				return true;
			}
			else if(member is PropertyInfo)
			{
				PropertyInfo property = (PropertyInfo)member;
				property.SetValue(target, value, index);
				return true;
			}
			return false;
		}
	}
	static bool last_Eval_returned;
	static bool last_Eval_broke;
	static bool last_Eval_continued;
	
	public static Dictionary<string,object> globals;
	
#if UNITY_EDITOR || FORCE_DEBUG_EVAL
	static int Eval_depth;
	static bool eval_debug_internal;
	public static bool DebugEval {
#if FORCE_DEBUG_EVAL
		get { return true; }
		set { }
#else
		get { return eval_debug_internal; }
		set { eval_debug_internal = value; }
#endif
	}
	static string debugEvalPrefix { get { return new string(' ',Eval_depth*2-2); } }
#endif
	static public bool Eval_silent; // quiet mode flag

	// release any memory used by the evaluator's caches
	static void StaticCleanupPart2()
	{
		last_Eval_lastEvaluatedTarget = null;
		last_Eval_lastEvaluatedMember = null;
		last_Eval_lastEvaluatedIndex = null;
		last_EvalArgs_targetAndMemberInfos = null;
		globals = null;
	}
}


// ReflectionProxy can be used to simplify creating a proxy class
// that exposes internal/private classes or members of another class (static or instance).
// example usage:
//
//	internal static class OSColorPickerProxy
//	{
//		public static bool visible {
//			get { return m_visible.Get("OSColorPicker.visible"); }
//		}
//		static ReflectionProxy<bool> m_visible = new ReflectionProxy<bool>();
//		
//		public static Color color {
//			get { return m_color.Get("OSColorPicker.color"); }
//			set { m_color.Set("OSColorPicker.color", value); }
//		}
//		static ReflectionProxy<Color> m_color = new ReflectionProxy<Color>();
//	}


//public class ReflectionProxy<T>
//{
//	string getterCommand;
//	object getterContext;
//	Delegates.ActionWithReturn<T> getter;
//	string setterCommand;
//	object setterContext;
//	Delegates.Action<T> setter;
//	
//	public void Set(string command, object value, object context=null)
//	{
//		if(WrappedConvertToType(ref value, typeof(T))) {
//			if(setterCommand != command || getterContext != context) {
//				InitSetter(command, context);
//			}
//			setter((T)value);
//		}
//	}
//	
//	public T Get(string command, object context=null)
//	{
//		if(getterCommand != command || setterContext != context) {
//			InitGetter(command, context);
//		}
//		return getter();
//	}
//	
//	void InitGetter(string command, object context)
//	{
//		getterCommand = command;
//		getterContext = context;
//		getter = GetGetter<T>(command, context);
//		if(getter == null) {
//			getter = () => default(T);
//		}
//	}
//	
//	void InitSetter(string command, object context)
//	{
//		setterCommand = command;
//		setterContext = context;
//		setter = GetSetter<T>(command, context);
//		if(setter == null) {
//			setter = (v) => {};
//		}
//	}
//}
}
