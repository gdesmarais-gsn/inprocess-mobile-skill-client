using UnityEngine;
using System.Collections;
using System.Linq;
using GSN.Skill.Games.Tripeaks;
#if UNITY_EDITOR
using UnityEditor;
#endif

public class PlayfieldRootManager : MonoBehaviour {
	
	public PlayfieldDataDB myDB;
	public PlayfieldRoot[] PlayfieldRootDB;
	
#if UNITY_EDITOR
	public void SaveAllPlayfieldData()
	{
		string folderPath = EditorUtility.SaveFolderPanel(
			"Save All Playfield Data",
			"",
			"");
		
		if(folderPath != "")
		{
			string trimmedPath = folderPath.Substring(folderPath.IndexOf("/Assets") + 1);
			int PlayfieldRootDBLength = PlayfieldRootDB.Length;
			for(int i = 0; i < PlayfieldRootDBLength; i++)
			{
				PlayfieldRootDB[i].SavePlayfieldData(trimmedPath, i);
				EditorUtility.DisplayProgressBar("Saving All Playfield Data", PlayfieldRootDB[i].name, (1.0f*i)/(float)PlayfieldRootDBLength);
			}
			AssetDatabase.SaveAssets();
		}
		EditorUtility.ClearProgressBar();
	}
	
	public void LoadAllPlayfieldDataIntoDB()
	{
		string folderPath = EditorUtility.SaveFolderPanel(
			"New PlayfieldDB Asset File",
			"PlayfieldDataDB",
			"");
		
		if(folderPath != "")
		{
			var playfieldDataFilePaths = System.IO.Directory.GetFiles(folderPath).Where(s => s.EndsWith(".asset"));
			myDB.playfieldDataDB = new PlayfieldData[playfieldDataFilePaths.Count()];
			int i = 0;
			foreach(string dataPath in playfieldDataFilePaths)
			{
				string trimmedPath = dataPath.Substring(dataPath.IndexOf("/Assets") + 1);
				PlayfieldData pfData = (PlayfieldData)AssetDatabase.LoadAssetAtPath(trimmedPath, typeof(PlayfieldData));
				//GsnDebug.Log(trimmedPath);
				if(pfData != null)
				{
					myDB.playfieldDataDB[pfData.GetID()] = pfData;
					EditorUtility.DisplayProgressBar("Loading Playfield Data Into PlayfieldDB", PlayfieldRootDB[i].name, (1.0f*i)/(float)playfieldDataFilePaths.Count());
					i++;
				}
			}
			EditorUtility.ClearProgressBar();
		}
	}
#endif
}
