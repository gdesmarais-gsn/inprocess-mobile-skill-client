// C# example
using UnityEditor;
using System.IO;
using System;
using System.Collections;
using UnityEngine;
using System.Collections.Generic;
using GSN.Skill.Games.Tripeaks;
using System.Linq;

class AddLevelsToDB
{
	[UnityEditor.MenuItem("GSN Tools/TriPeaks/Add Levels To DB")]
	static void FindAndAddLevelsToDB () //adds playfields to the playfieldDB  
	{
		int i = 0;
		//
		string[] files = Directory.GetFiles("Assets/Playfields/PlayfieldData", "PF_LVL*.asset"); // change to *.asset to add all playfields
		PlayfieldData[] Playfield = new PlayfieldData[files.Length];
		foreach (string file in files) {
			Playfield[i] = AssetDatabase.LoadAssetAtPath<PlayfieldData>(file);
			i++;
		}
		PlayfieldDataDB db = AssetDatabase.LoadAssetAtPath<PlayfieldDataDB>("Assets/Playfields/PlayfieldDataDB.asset");
		db.playfieldDataDB = Playfield;
		EditorUtility.SetDirty (db);
	}

	// finds all levels with overlapping card can create a text file of all results, if no file is specified it prints the total number of overlapped cards in the console
	[UnityEditor.MenuItem("GSN Tools/TriPeaks/Find Levels With Covered Cards")]
	static void FindLevelsWithCoveredCards ()
	{
		float buffer = 0.01f;
		List<string> LevelsToEdit = new List<string> ();
		List<string> LevelsOnly = new List<string> ();
		int i = 0;
		
		string[] files = Directory.GetFiles("Assets/Playfields/PlayfieldData", "PF_LVL*.asset"); // change to *.asset to add all playfields
		PlayfieldData[] Playfield = new PlayfieldData[files.Length];
		foreach (string file in files) {
			Playfield[i] = AssetDatabase.LoadAssetAtPath<PlayfieldData>(file);
			i++; 
			
		}
		foreach (PlayfieldData Field in Playfield) {
			foreach (PlayfieldData.CardData Card in Field.cardData){
				if (Card.coversCards.Count > 0)
				{
					foreach (int CoveredCard in Card.coversCards)
					{
						if ((Field.cardData[CoveredCard].cardPos.x <= Card.cardPos.x+buffer && Field.cardData[CoveredCard].cardPos.x >= Card.cardPos.x-buffer) && (Field.cardData[CoveredCard].cardPos.y <= Card.cardPos.y+buffer && Field.cardData[CoveredCard].cardPos.y >= Card.cardPos.y-buffer) && Field.cardData[CoveredCard].cardRot.z == Card.cardRot.z)
						{
							if(Card.cardID != CoveredCard){
								LevelsToEdit.Add(Environment.NewLine +Field.name+","+Field.cardData[CoveredCard].cardID.ToString()+ Environment.NewLine);
								string CombineText = "x:" + Field.cardData[CoveredCard].cardPos.x.ToString()+"," + Card.cardPos.x.ToString()+"  y:" +Field.cardData[CoveredCard].cardPos.y.ToString()+"," + Card.cardPos.y.ToString() + Environment.NewLine;
								LevelsToEdit.Add(CombineText);
								LevelsOnly.Add(Field.name);
							}
						}
					}
				}
			}
		}
		string Filepath = EditorUtility.OpenFilePanel ("Where to save list", "Assets/Playfields/levels.txt", "");
		File.WriteAllText(Filepath,string.Empty);
		//List<string> UniqueLevels = LevelsToEdit.Distinct ().ToList (); 
		List<string> UniqueLevelsOnly = LevelsOnly.Distinct ().ToList (); 
		if (Filepath.Length !=0) {
			foreach (string level in UniqueLevelsOnly) { //change this to UniqueLevels to print out the card id's as well
				File.AppendAllText (Filepath, level + ",");
			}
		}
		Debug.Log ("Total number of hidden cards: "+LevelsToEdit.Count.ToString());
		Debug.Log ("Total number of levels: "+UniqueLevelsOnly.Count.ToString());
	}
	// dumps of all the data about tevels to a text file
	[UnityEditor.MenuItem("GSN Tools/TriPeaks/Get Level Data")]
	static void FindLevelData ()
	{
		//float buffer = 0.01f;
		//List<string> LevelsToEdit = new List<string> ();
		//List<string> LevelsOnly = new List<string> ();
		int i = 0;
		
		string[] files = Directory.GetFiles("Assets/TriPeaksBundle/Playfields/PlayfieldData", "PF_LVL*.asset"); // change to *.asset to add all playfields
		PlayfieldData[] Playfield = new PlayfieldData[files.Length];
		foreach (string file in files) {
			Playfield[i] = AssetDatabase.LoadAssetAtPath<PlayfieldData>(file);
			i++; 
			
		}
		string Filepath = EditorUtility.OpenFilePanel ("Where to save list", "Assets/Playfields/levels.txt", "");
		File.WriteAllText(Filepath,string.Empty);
		foreach (PlayfieldData Field in Playfield) {
			Dictionary<string, int > cardVariety =  new Dictionary<string, int>();
			int faceUpCount = 0;
			int hazzardCount = 0;
			cardVariety.Add("Normal",0);
			foreach (PlayfieldData.CardData Card in Field.cardData){
				if (Card.coveredByCards.Count == 0)
				{
					faceUpCount++;
				}
				if(Card.cardType==CardType.HazardDynamite || Card.cardType==CardType.HazardShark || Card.cardType==CardType.HazardTrap )
				{
					hazzardCount++;
					if (cardVariety.ContainsKey(Card.cardType.ToString())==false)	
					{
						cardVariety.Add(Card.cardType.ToString(),1);
					}
					else{
						cardVariety[Card.cardType.ToString()]++;
					}
				}
				else 
				{
					cardVariety["Normal"]++;
				}

			} 
				File.AppendAllText(Filepath, Field.name.ToString() + " : ");
				File.AppendAllText(Filepath, "Starting Face Up Cards: " + faceUpCount.ToString() + " , ");
				File.AppendAllText(Filepath, "Active Hazard Cards: " + hazzardCount.ToString() + " , ");
				foreach(KeyValuePair<string, int> entry in cardVariety)
				{
					File.AppendAllText(Filepath, entry.Key+": "+entry.Value.ToString()+ ", ");
				}
				File.AppendAllText(Filepath, Environment.NewLine);
		}

		//List<string> UniqueLevels = LevelsToEdit.Distinct ().ToList (); 
		//List<string> UniqueLevelsOnly = LevelsOnly.Distinct ().ToList (); 
//		if (Filepath.Length !=0) {
//			foreach (string level in UniqueLevelsOnly) { //change this to UniqueLevels to print out the card id's as well
//				File.AppendAllText (Filepath, level + ",");
//			}
//		}
		//Debug.Log ("Total number of hidden cards: "+LevelsToEdit.Count.ToString());
		//Debug.Log ("Total number of levels: "+UniqueLevelsOnly.Count.ToString());
	}
	[UnityEditor.MenuItem("GSN Tools/TriPeaks/Save PlayField Data")] // saves selected prefab's data to a playfield 
	static void SavePlayfieldData ()
	{
		GameObject[] prefabs = Selection.gameObjects;
		Debug.Log (Selection.gameObjects);
		foreach (GameObject prefab in prefabs) {
			GameObject tempPrefab = PrefabUtility.InstantiatePrefab(prefab) as GameObject;
			tempPrefab.GetComponent<PlayfieldRoot>().SavePlayfieldData();
			Editor.DestroyImmediate (tempPrefab);
		}
		
		Debug.Log ("Finished Saving Playfield Data");
	}
	// Creates a object out of the data in a playfield, this allows easy editing. 
	[UnityEditor.MenuItem("GSN Tools/TriPeaks/Edit from playfield")]
	static void PlayfieldToPrefab ()
	{
		if (Selection.activeObject) {
			string file;
			if (Selection.activeObject.GetType () == typeof(PlayfieldData)) {
				file = AssetDatabase.GetAssetPath (Selection.activeObject);
				Debug.Log ("loading " + file);
				PlayfieldData loadedPlayefield;
				loadedPlayefield = AssetDatabase.LoadAssetAtPath<PlayfieldData> (file);
				GameObject newPlayfield = new GameObject ();
				PlayfieldRoot newPlayfieldRoot = newPlayfield.AddComponent<PlayfieldRoot> ();
				newPlayfieldRoot.playfieldData = loadedPlayefield;
				newPlayfield.name = loadedPlayefield.name;
				foreach (PlayfieldData.CardData card in loadedPlayefield.cardData) {
					GameObject newCard = new GameObject ();
					Card cardObj = newCard.AddComponent<Card> ();
					if(newCard){
					newCard.transform.SetParent (newPlayfield.transform);
					cardObj.cardType = card.cardType;
					newCard.transform.localPosition = new Vector3 (card.cardPos.x, card.cardPos.y, card.cardPos.z);
					newCard.transform.localRotation = new Quaternion (card.cardRot.x, card.cardRot.y, card.cardRot.z, card.cardRot.w);
					newCard.name = card.cardID.ToString ();
					}

				}
			} else {
				Debug.Log ("Please select a playfield first");
			}
		}
		else {
			Debug.Log ("Please select a playfield first");
		}
	}
	
}
