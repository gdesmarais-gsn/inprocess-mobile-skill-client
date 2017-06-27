using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public static class GSNPickerIOS
{
#if UNITY_IOS
	[DllImport("__Internal")]
	private static extern void ShowIOSPicker(string callbackObjectName, string rowData, int rowIndexToStart);
#endif

	// Do any necessary initialization...
	public static void Init()
	{
#if UNITY_IOS

#endif
	}

	public static void ShowPicker(string parentName, string rowData, int rowIndexToStart)
	{
#if UNITY_IOS
		ShowIOSPicker(parentName, rowData, rowIndexToStart);
#endif
	}
}
