using UnityEngine;
using UnityEditor;
using System.Reflection;
using GSN.Skill.Games.Common.Utils;

namespace GSN.Skill.Games.Common.Editor.Utils
{

	public class EnumeratedArrayDrawer<T> : PropertyDrawer
	{
		//Experimentally derived
		private const int LABEL_INDENT = 29;
		private const int FIELD_INDENT = 14;

		private float _height = 0;

		public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
		{
			if (_height != 0) 
			{
				return _height;
			}

			string[] enumNames = GetEnumNames(property);
			if (enumNames == null)
			{
				return EditorGUIUtility.singleLineHeight;
			}
			else
			{
				int length = enumNames.Length;
				return EditorGUIUtility.singleLineHeight * (length + 1);
			}
		}
		
		public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
		{
			EditorGUI.BeginProperty(position, label, property);
			int indent = EditorGUI.indentLevel;
			EditorGUI.indentLevel = 0;

			//Array name
	        EditorGUI.PrefixLabel(position, GUIUtility.GetControlID(FocusType.Passive), label);
			
			string[] enumNames = GetEnumNames(property);
			if (enumNames == null)
			{
				return;
			}

			SerializedProperty data = property.FindPropertyRelative("_data");

			//Force this for when the enum changes size but the EnumeratedArray is not reinitialized
			data.arraySize = enumNames.Length;

			_height = EditorGUIUtility.singleLineHeight;
			for (int i = 0; i < enumNames.Length; ++i)
			{
				SerializedProperty arrayElement = data.GetArrayElementAtIndex(i);

				//Enum name
				Rect labelRect = new Rect(LABEL_INDENT, _height + position.yMin, position.width, EditorGUIUtility.singleLineHeight);
				EditorGUI.PrefixLabel(labelRect, GUIUtility.GetControlID(FocusType.Passive), new GUIContent(enumNames[i]));

				//Property field
				Rect fieldRect;
				if (arrayElement.propertyType == SerializedPropertyType.Generic) //arrayElement is a struct
				{
					fieldRect = new Rect(FIELD_INDENT, _height + position.yMin, position.width, EditorGUIUtility.singleLineHeight);
				}
				else
				{
					fieldRect = new Rect(EditorGUIUtility.labelWidth + FIELD_INDENT, _height + position.yMin,
							position.width - EditorGUIUtility.labelWidth, EditorGUIUtility.singleLineHeight);
				}
				EditorGUI.PropertyField(fieldRect, arrayElement, GUIContent.none, arrayElement.isExpanded);

				if (arrayElement.isExpanded)
				{
					_height += arrayElement.CountInProperty() * EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing;
				}
				else
				{
					_height += EditorGUIUtility.singleLineHeight;
				}
			}

			EditorGUI.indentLevel = indent;
		}

		protected string[] GetEnumNames(SerializedProperty property)
		{
			object o = property.serializedObject.targetObject;
			const BindingFlags FLAGS = BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance;
			string[] result = ((EnumeratedArray<T>)o.GetType().GetField(property.name, FLAGS).GetValue(o)).enumNames;
			return result;
		}
	}

	[CustomPropertyDrawer(typeof(EnumeratedArrayInt))]
	public class EnumeratedInteArrayDrawer : EnumeratedArrayDrawer<int>
	{}
	[CustomPropertyDrawer(typeof(EnumeratedArrayFloat))]
	public class EnumeratedFloateArrayDrawer : EnumeratedArrayDrawer<float>
	{}
	[CustomPropertyDrawer(typeof(EnumeratedArraySprite))]
	public class EnumeratedSpriteArrayDrawer : EnumeratedArrayDrawer<Sprite>
	{}
	[CustomPropertyDrawer(typeof(EnumeratedArrayUIImage))]
	public class EnumeratedUIImageArrayDrawer : EnumeratedArrayDrawer<UnityEngine.UI.Image> 
	{}
	[CustomPropertyDrawer(typeof(EnumeratedArrayUIButton))]
	public class EnumeratedUIButtonArrayDrawer : EnumeratedArrayDrawer<UnityEngine.UI.Button>
	{}
	[CustomPropertyDrawer(typeof(EnumeratedArrayColor))]
	public class EnumeratedColorArrayDrawer : EnumeratedArrayDrawer<Color>
	{}
	[CustomPropertyDrawer(typeof(EnumeratedArrayMaterial))]
	public class EnumeratedMaterialArrayDrawer : EnumeratedArrayDrawer<Material>
	{}
}
