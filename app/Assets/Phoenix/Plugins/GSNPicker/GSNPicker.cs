using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using GSN.Skill.Utils;

using TMPro;

public class GSNPicker : MonoBehaviour
{
	private const string DELIMITER_CHAR = "\n";

	private string _parentName;

	// NOTE: Using the TMP Input field objects so that other view code can still register for the same
	// UnityEvents with this GSNPicker that they do for other TMP UI objects. This does, however, couple
	// our picker implementation to the TMP library somewhat. If we decide to divorce ourselves from TMP,
	// we just need to implement our own UnityEvent class to replace the one below.
	[SerializeField]
	private TMP_InputField.SelectionEvent m_OnDeselect = new TMP_InputField.SelectionEvent();

	public TMP_InputField.SelectionEvent onDeselect { get { return m_OnDeselect; } set { SetPropertyUtility.SetClass(ref m_OnDeselect, value); } }

	void Awake()
	{
#if UNITY_IOS
		GSNPickerIOS.Init();
#elif UNITY_ANDROID
		// TODO[Doug]: We need an implementation to bring up the built-in picker on Android devices...
		//GSNPickerAndroid.Init();
#endif
	}

	// Use this for initialization
	void Start()
	{

	}
	
	// Update is called once per frame
	void Update()
	{
		
	}

	public void SetParentName(string parentName)
	{
		_parentName = parentName;
	}

	public void ShowPicker(string parentName, List<string> entries, int rowIndexToStart)
	{
#if UNITY_IOS
		//Debug.Log("[GSNPicker] ShowPicker() called!");

		if( _parentName == string.Empty )
		{
			GsnDebug.LogError("ERROR! A GSNPicker has been given picker entries with no parent object name set!");
			return;
		}

		if( entries.Count <= 0 )
		{
			GsnDebug.LogError("ERROR! [" + _parentName + "] has a GSNPicker that was given an empty list of picker entries!");
			return;
		}

		string rowData = entries[0];
		for(int i = 1; i < entries.Count; ++i)
		{
			rowData += DELIMITER_CHAR;
			rowData += entries[i];
		}

		if((rowIndexToStart < 0 ) || (rowIndexToStart >= entries.Count))
		{
			rowIndexToStart = 0;
		}

		GSNPickerIOS.ShowPicker(_parentName, rowData, rowIndexToStart);
#elif UNITY_ANDROID
		// TODO[Doug]: We need an implementation to bring up the built-in picker on Android devices...
#endif
	}

	public void OnNativePickerValue(string messageData)
	{
#if UNITY_IOS
		//Debug.Log("[GSNPicker] Received 'OnNativePickerValue'! messageData = " + messageData);

		onDeselect.Invoke(messageData);
#elif UNITY_ANDROID

#endif
	}

	public void OnNativePickerCancel(string ignore)
	{
#if UNITY_IOS
		//Debug.Log("[GSNPicker] Received 'OnNativePickerCancel'!");

		onDeselect.Invoke(string.Empty);
#elif UNITY_ANDROID

#endif
	}

	// Helper method for View objects to construct numerical sequence data for a UI picker.
	static public void GeneratePickerListForNumberRange( ref List<string> pickerEntries, int startingValue, int numEntries )
	{
		if (numEntries < 1)
		{
			GsnDebug.LogError("ERROR! GeneratePickerListForNumberRange was given an invalid numEntries value: " + numEntries);
			return;
		}

		for (int i = 0; i < numEntries; ++i)
		{
			pickerEntries.Add((startingValue + i).ToString());
		}
	}
}
