using System;
using System.Reflection;

// [DisableTraceReferences] for fields for e.g. ReferencedBy/DeletionWarning subinspectors
[AttributeUsage(AttributeTargets.Field)]
public sealed class DisableTraceReferencesAttribute : Attribute
{
    public DisableTraceReferencesAttribute()
    {
    }
}

namespace Stm.V1_1 { 

// [HideFromEvents] for methods for SerializedCallDrawer
[AttributeUsage(AttributeTargets.Method)]
public sealed class HideFromEventsAttribute : EventDisplayPriorityAttribute {
    public HideFromEventsAttribute() : base(-100) {}
}

// [EventDisplayPriority(#)] for methods for SerializedCallDrawer
// higher-numbered priorities display closer to the top
// positive priorities will appear in the actions section too
// negative priorities will be hidden except in advanced display (control held)
// submenu display is preferred if number of options > priority
[AttributeUsage(AttributeTargets.Method, AllowMultiple = false)]
public class EventDisplayPriorityAttribute : Attribute
{
	public readonly int priority;
    public EventDisplayPriorityAttribute(int prio)
    {
		priority = prio;
    }
}

// [HideUnless] for fields for STMTransformInspector Events section
[AttributeUsage(AttributeTargets.Field)]
public sealed class HideUnlessAttribute : Attribute
{
	public readonly string fieldName;
	public readonly int parentDepth; // 0 to run in class, 1 to run in parent class, 2 to run in grandparent class, etc.
    public HideUnlessAttribute(string boolName, int contextUp=0)
    {
		fieldName = boolName;
		parentDepth = contextUp;
    }
}

// [EventSenderArgument] for fields of type EventCallback or SerializedCall
// the given type becomes an optional first argument of the target function,
// and the caller (in code) is required to pass an argument of that type to the Invoke method.
[AttributeUsage(AttributeTargets.Field)]
public sealed class EventSenderArgumentAttribute : Attribute
{
	public readonly Type type;
    public EventSenderArgumentAttribute(Type type)
    {
		this.type = type;
    }
}

// [ObjectType] for fields of type ObjectByPath, used by ObjectByPathDrawer
// specifies which type of object the inspector will allow to be dragged in
[AttributeUsage(AttributeTargets.Field)]
public sealed class ObjectTypeAttribute : Attribute
{
	public readonly Type type;
    public ObjectTypeAttribute(Type type)
    {
		if(!typeof(UnityEngine.Object).IsAssignableFrom(type)) {
			type = typeof(UnityEngine.Object);
		}
		this.type = type;
    }
}

// [Waitable] for methods for SerializedCallDrawer
// specifies which type of object the inspector will allow to be dragged in
[AttributeUsage(AttributeTargets.Method)]
public sealed class WaitableAttribute : Attribute
{
	public readonly bool waitable;
    public WaitableAttribute(bool waitable=true)
    {
		this.waitable = waitable;
    }
}

// [ExposeStaticMethodsAsEvents] for classes for SerializedCallDrawer
[AttributeUsage(AttributeTargets.Class)]
public sealed class ExposeStaticMethodsAsEventsAttribute : Attribute {
	public readonly bool includingBaseClasses;
    public ExposeStaticMethodsAsEventsAttribute(bool includingBaseClasses=false)
    {
		this.includingBaseClasses = includingBaseClasses;
    }
}

// [SceneName] for string fields for SceneNameDrawer
public sealed class SceneNameAttribute : UnityEngine.PropertyAttribute
{
	public readonly string extraName;
	public readonly bool showDisabledScenes;
	public SceneNameAttribute(string extraName=null, bool showDisabledScenes=false)
	{
		this.extraName = extraName;
		this.showDisabledScenes = showDisabledScenes;
	}
}

// [ExcludeFromBuild] for classes for GlobalAutoPrefabLister
[AttributeUsage(AttributeTargets.Class)]
public sealed class ExcludeFromBuildAttribute : Attribute
{
	public ExcludeFromBuildAttribute()
	{
	}
}

}
