using System;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
namespace Stm.V1_1 { 

// stupid limitations call for desperate measures
// used by EventCallback
[Serializable]
public class SerializablePrimitive
{
	public enum Type
	{
		Unknown = 0,
		Invalid = 1,
		Int = 2,
		Float = 3,
		String = 4,
		Bool = 5,
		Enum = 6,
		Object = 7,
		Vector2 = 8,
		Vector3 = 9,
		Vector4 = 10,
		Color = 11,
		Quaternion = 12,
	}
	
	public Type type;
	
	public int i;
	public string s;
	public ObjectByPath o;
	public Vector4 v;
	
	public object Get()
	{
		switch(type)
		{
			case Type.Int: return i;
			case Type.Float: return v.x;
			case Type.String: return s;
			case Type.Bool: return i != 0;
			case Type.Enum: return i;
			case Type.Object: return o.Obj;
			case Type.Vector2: return new Vector2(v.x, v.y);
			case Type.Vector3: return new Vector3(v.x, v.y, v.z);
			case Type.Vector4: return v;
			case Type.Color: return new Color(v.x, v.y, v.z, v.w);
			case Type.Quaternion: return new Quaternion(v.x, v.y, v.z, v.w);
		}
		return null;
	}
	
	public void Set(object obj)
	{
		if(obj is float || obj is double) { v = new Vector4((float)obj, 0); type = Type.Float; }
		else if(obj is int || obj is long || obj is short || obj is byte || obj is uint || obj is ulong || obj is ushort || obj is sbyte) { i = (int)obj; type = Type.Int; }
		else if(obj is string) { s = (string)obj; type = Type.String; }
		else if(obj is bool) { i = (bool)obj ? 1 : 0; type = Type.Bool; }
		else if(obj is System.Enum) { i = Convert.ToInt32(obj); type = Type.Enum; }
		else if(obj is UnityEngine.Object || obj == null) { if(o == null) { o = new ObjectByPath(); } o.Obj = (UnityEngine.Object)obj; type = Type.Object; }
		else if(obj is Color) { Color c = (Color)obj; v = new Vector4(c.r, c.g, c.b, c.a); type = Type.Color; }
		else if(obj is Vector2) { Vector2 v2 = (Vector2)obj; v = new Vector4(v2.x, v2.y); type = Type.Vector2; }
		else if(obj is Vector3) { Vector3 v3 = (Vector3)obj; v = new Vector4(v3.x, v3.y, v3.z); type = Type.Vector3; }
		else if(obj is Vector4) { v = (Vector4)obj; type = Type.Vector4; }
		else if(obj is Quaternion) { Quaternion q = (Quaternion)obj; v = new Vector4(q.x, q.y, q.z, q.w); type = Type.Quaternion; }
		else {
			Debug.LogWarning("Serialize::Set unsupported Type: " + obj);
		}
	}
	
	public static Type ConvertType(System.Type t)
	{
		if(t == typeof(int)
		|| t == typeof(long)
		|| t == typeof(short)
		|| t == typeof(byte)
		|| t == typeof(uint)
		|| t == typeof(ulong)
		|| t == typeof(ushort)
		|| t == typeof(sbyte)
		  ) {
			return Type.Int;
		}
		if(t == typeof(float) || t == typeof(double)) {
			return Type.Float;
		}
		if(t == typeof(string)) {
			return Type.String;
		}
		if(t == typeof(bool)) {
			return Type.Bool;
		}
		if(t.IsEnum) {
			return Type.Enum;
		}
		if(typeof(UnityEngine.Object).IsAssignableFrom(t)) {
			return Type.Object;
		}
		if(t == typeof(Color)) {
			return Type.Color;
		}
		if(t == typeof(Vector2)) {
			return Type.Vector2;
		}
		if(t == typeof(Vector3)) {
			return Type.Vector3;
		}
		if(t == typeof(Vector4)) {
			return Type.Vector4;
		}
		if(t == typeof(Quaternion)) {
			return Type.Quaternion;
		}
		if(t == typeof(object)) {
			return Type.Unknown;
		}
		return Type.Invalid;
	}
	
	public void SetType(System.Type t)
	{
		type = ConvertType(t);
#if UNITY_EDITOR
		if(type == Type.Invalid) {
			Debug.LogError("Cannot set the type to " + t, ReflectionUtil.FindPingableObjectContaining(this));
		}
#endif
	}

	public bool CanCastToType(System.Type t)
	{
		System.Type sourceType = null;
		switch(type)
		{
			case Type.Enum:
			case Type.Int: sourceType = typeof(int); break;
			case Type.Float: sourceType = typeof(float); break;
			case Type.String: sourceType = typeof(string); break;
			case Type.Bool: sourceType = typeof(bool); break;
			case Type.Object: {
				UnityEngine.Object obj = o.Obj;
				if(obj) {
					sourceType = obj.GetType();
				} else {
					if(!t.IsValueType) {
						return true; // can cast null to any object
					}
					sourceType = typeof(object);
				}
			}	break;
			case Type.Vector2: sourceType = typeof(Vector2); break;
			case Type.Vector3: sourceType = typeof(Vector3); break;
			case Type.Vector4: sourceType = typeof(Vector4); break;
			case Type.Color: sourceType = typeof(Color); break;
			case Type.Quaternion: sourceType = typeof(Quaternion); break;
		}
		return ReflectionUtil.CanConvertToType(sourceType, t);
	}

	// note: can return System.DBNull.Value if cast fails.
	public object GetAsType(System.Type t)
	{
		object value = null;
		switch(type)
		{
			case Type.Enum:
			case Type.Int: value = i; break;
			case Type.Float: value = v.x; break;
			case Type.String: value = s; break;
			case Type.Bool: value = (i != 0); break;
			case Type.Object: value = o.Obj; break;
			case Type.Vector2: value = new Vector2(v.x, v.y); break;
			case Type.Vector3: value = new Vector3(v.x, v.y, v.z); break;
			case Type.Vector4: value = new Vector4(v.x, v.y, v.z, v.w); break;
			case Type.Color: value = new Color(v.x, v.y, v.z, v.w); break;
			case Type.Quaternion: value = new Quaternion(v.x, v.y, v.z, v.w); break;
		}
#if UNITY_EDITOR
		object origValue = value;
#endif
		if(!ReflectionUtil.ConvertToType(ref value, t))
		{
#if UNITY_EDITOR
			Debug.LogError("Failed cast from " + type + " (value = " + origValue + ") to " + t.Name + "\n"+ReflectionUtil.FindPingableObjectContaining(this), ReflectionUtil.FindPingableObjectContaining(this));
#endif
		}
		return value;
	}

#if UNITY_EDITOR
	// note: sp must represent a SerializablePrimitive
	static public string GetPropertyDesc(SerializedProperty sp)
	{
		if(sp == null) {
			return "";
		}
		SerializedProperty spType = sp.FindPropertyRelative("type");
		string desc = "?";
		if(spType != null && spType.propertyType == SerializedPropertyType.Enum)
		{
			switch(spType.enumValueIndex)
			{
				case (int)SerializablePrimitive.Type.String:
				{
					SerializedProperty sps = sp.FindPropertyRelative("s");
					if(sps != null && sps.propertyType == SerializedPropertyType.String) {
						desc = sps.stringValue;
					}
				}	break;
				case (int)SerializablePrimitive.Type.Int:
				{
					SerializedProperty sps = sp.FindPropertyRelative("i");
					if(sps != null && sps.propertyType == SerializedPropertyType.Integer) {
						desc = sps.intValue.ToString();
					}
				}	break;
				case (int)SerializablePrimitive.Type.Bool:
				{
					SerializedProperty sps = sp.FindPropertyRelative("i");
					if(sps != null && sps.propertyType == SerializedPropertyType.Integer) {
						desc = (sps.intValue == 0) ? "false" : "true";
					}
				}	break;
				case (int)SerializablePrimitive.Type.Float:
				{
					SerializedProperty sps = sp.FindPropertyRelative("v.x");
					if(sps != null && sps.propertyType == SerializedPropertyType.Float) {
						desc = sps.floatValue.ToString();
					}
				}	break;
				case (int)SerializablePrimitive.Type.Enum:
				{
					SerializedProperty sps = sp.FindPropertyRelative("i");
					if(sps != null && sps.propertyType == SerializedPropertyType.Integer) {
						//desc = Enum.ToObject(typeof(???), sps.intValue).ToString();
						desc = sps.intValue.ToString();
					}
				}	break;
				case (int)SerializablePrimitive.Type.Object:
				{
					SerializedProperty sps = sp.FindPropertyRelative("o.gameObjectPath");
					if(sps != null && sps.propertyType == SerializedPropertyType.String) {
						string s = sps.stringValue;
						int pathLastSlash = s.LastIndexOf('/');
						if(pathLastSlash != -1) {
							s = s.Substring(pathLastSlash + 1);
						}
						desc = s;
					}
				}	break;
				case (int)SerializablePrimitive.Type.Vector2:
				{
					SerializedProperty sps1 = sp.FindPropertyRelative("v.x");
					SerializedProperty sps2 = sp.FindPropertyRelative("v.y");
					if(sps1 != null && sps1.propertyType == SerializedPropertyType.Float
					&& sps2 != null && sps2.propertyType == SerializedPropertyType.Float) {
						desc = "(" + sps1.floatValue + ", " + sps2.floatValue + ")";
					}
				}	break;
				case (int)SerializablePrimitive.Type.Vector3:
				{
					SerializedProperty sps1 = sp.FindPropertyRelative("v.x");
					SerializedProperty sps2 = sp.FindPropertyRelative("v.y");
					SerializedProperty sps3 = sp.FindPropertyRelative("v.z");
					if(sps1 != null && sps1.propertyType == SerializedPropertyType.Float
					&& sps2 != null && sps2.propertyType == SerializedPropertyType.Float
					&& sps2 != null && sps3.propertyType == SerializedPropertyType.Float) {
						desc = "(" + sps1.floatValue + ", " + sps2.floatValue + ", " + sps3.floatValue + ")";
					}
				}	break;
				case (int)SerializablePrimitive.Type.Vector4:
				case (int)SerializablePrimitive.Type.Color:
				case (int)SerializablePrimitive.Type.Quaternion:
				{
					SerializedProperty sps1 = sp.FindPropertyRelative("v.x");
					SerializedProperty sps2 = sp.FindPropertyRelative("v.y");
					SerializedProperty sps3 = sp.FindPropertyRelative("v.z");
					SerializedProperty sps4 = sp.FindPropertyRelative("v.w");
					if(sps1 != null && sps1.propertyType == SerializedPropertyType.Float
					&& sps2 != null && sps2.propertyType == SerializedPropertyType.Float
					&& sps2 != null && sps3.propertyType == SerializedPropertyType.Float
					&& sps2 != null && sps4.propertyType == SerializedPropertyType.Float) {
						desc = "(" + sps1.floatValue + ", " + sps2.floatValue + ", " + sps3.floatValue + ", " + sps4.floatValue + ")";
					}
				}	break;
				default:
					break;
			}
			if(desc == "?") {
				desc = ((Type)(spType.enumValueIndex)).ToString();
			}
		}
		return desc;
	}
#endif
	public override string ToString()
	{
		object o = Get();
		if(o == null || (o is UnityEngine.Object && !(UnityEngine.Object)o)) {
			return "SerializablePrimitive(null)";
		}
		if(o is string) {
			return "SerializablePrimitive(\"" + (string)o + "\")";
		}
		return "SerializablePrimitive(" + o.ToString() + ")";
	}
}
}
