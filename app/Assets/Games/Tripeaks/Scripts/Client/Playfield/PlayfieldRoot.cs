using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using GSN.Skill.Games.Tripeaks;
using GSN.Skill.Games.Common.Utils;

#if UNITY_EDITOR
using UnityEditor;
#endif

// class for an editor-only prefab that represents levels.
// only the PlayfieldData class is used at runtime.
public class PlayfieldRoot : MonoBehaviour
{
	public PlayfieldData playfieldData;
	
	public float collisionFudge = 0.1f;
	
	#if UNITY_EDITOR
	public void FindExistingPlayfieldData()
	{
		int numMatchingPaths;
		FindOrCreatePlayfieldData(FindExistingFilePath(GetRootDirectory(), out numMatchingPaths), false);
	}
	
	public void SavePlayfieldData(string folderPath="", int ID=0)
	{
		string root = GetRootDirectory();
		int numMatchingPaths;
		string filePath = FindExistingFilePath(root, out numMatchingPaths);
		
		if(folderPath=="" && (numMatchingPaths != 1 || filePath == ""))
		{
			if(numMatchingPaths == 0 || filePath == "") {
				filePath = gameObject.name;
			}
			
			// Opens the file panel with the .asset file path
			filePath = EditorUtility.SaveFilePanelInProject(
				"New Playfield Asset File",
				filePath.Replace('/', System.IO.Path.DirectorySeparatorChar),
				"asset",
				"Please enter a file name to save the new PlayfieldData asset file");
		}
		
		Card[] cardsInPlayfieldRoot = Stm.V1_1.SceneHelper.GetComponentsInChildrenIncludingEditorPrefabs<Card>(gameObject);
		
		if(filePath != "")
		{
			SaveCardsAsPlayfieldDataHelper(cardsInPlayfieldRoot, filePath.Replace('\\','/'), ID);
			GsnDebug.Log("New PlayfieldData saved successfully! New .ASSET file is located in: " + filePath + " with " + cardsInPlayfieldRoot.Length + " cards in the Playfield.");
		}
		else if(folderPath != "")
		{
			SaveCardsAsPlayfieldDataHelper(cardsInPlayfieldRoot, folderPath + "/" + gameObject.name + ".asset", ID);			
		}
	}
	
	public PlayfieldData SaveCardsAsPlayfieldDataHelper(Card[] cardsInPlayfieldRoot, string filePath, int ID=0)
	{
		//GsnDebug.Log(filePath + " " + cardsInPlayfieldRoot.Length + " Cards.");
		
		if(playfieldData == null)
		{
			FindOrCreatePlayfieldData(filePath, true);
		}
		
		playfieldData.SetID(ID);
		
		int playfieldCardCount = cardsInPlayfieldRoot.Length;
		if(playfieldCardCount > 0)
		{
			playfieldData.cardData = new PlayfieldData.CardData[playfieldCardCount];
			
			for(int i = 0; i < playfieldCardCount; i++)
			{
				Card card = cardsInPlayfieldRoot[i];
				Transform cardTransform = card.transform;
				
				Transform tempTrans = null;
				if(cardTransform.parent != cardTransform.root)
				{
					tempTrans = cardTransform.parent;
					cardTransform.parent = cardTransform.root;
				}
				
				PlayfieldData.CardData cardData = new PlayfieldData.CardData();
				cardData.cardPos = cardTransform.localPosition;
				cardData.cardRot = cardTransform.localRotation;
				//GsnDebug.Log(cardTransform.localEulerAngles.z);
				//.obb = new OBB2D(cardTransform.localPosition, 0.6f, 0.9f, ((cardTransform.localEulerAngles.z != 0f) ? (360f-cardTransform.localEulerAngles.z) : cardTransform.localEulerAngles.z));
				cardData.obb = new OBB2D(cardTransform.localPosition, 0.6f-collisionFudge, 0.9f-collisionFudge, (cardTransform.localRotation.eulerAngles.z*Mathf.PI/180f));//(cardTransform.localEulerAngles.z < 0f) ? (cardTransform.localEulerAngles.z+360f) : cardTransform.localEulerAngles.z );
				cardData.cardType = card.cardType;
				//cardData.cardFaceValue = card.faceValue;
				//cardData.cardSuit = card.suit;
				cardData.coversCards = new List<int>();
				cardData.coveredByCards = new List<int>();

				playfieldData.cardData[i] = cardData;
				
				if(tempTrans != null)
				{
					cardTransform.parent = tempTrans;
				}
			}
			
			PlayfieldData.CardData[] sortedCardData = playfieldData.cardData.OrderByDescending(card => card.cardPos.z).ThenByDescending(card => card.cardPos.x).ToArray();//.ThenByDescending(x => x.cardPos.y);
			//Card[] sortedCards = cardsInPlayfieldRoot.OrderByDescending(card => card.transform.position.z).ThenBy(card => card.transform.position.x).ToArray();//.ThenByDescending(x => x.cardPos.y);
			
			// Set sorted card IDs
			for(int i = playfieldCardCount-1; i >= 0; i--)
			{
				sortedCardData[i].cardID = i;
			}
			
			// Calculate coversCards and coveredByCards list
			for(int i = playfieldCardCount-1; i >= 0; i--)
			{
				PlayfieldData.CardData cardData = sortedCardData[i];
				
				// Since the CardData is already sorted, check only cards after your index
				for(int j = i-1; j >= 0; j--)
				{
					// Check collision with other cards in the coversCards list
					//if(cardData.transform.collider.bounds.Intersects(sortedCardData[j].cardGO.transform.collider.bounds))
					//if(TestIntersection(cardData, sortedCardData[j]) || TestIntersection(sortedCardData[j], cardData))
					if(cardData.obb.overlaps(sortedCardData[j].obb))
					{
						bool collidedWithCoversCards = false;
						if(cardData.coveredByCards.Count > 0)
						{
							for(int k = 0; k < cardData.coversCards.Count; k++)
							{
								//sortedCardData[j].cardBounds.
								//if(sortedCardData[j].cardGO.transform.collider.bounds.Intersects(cardData.coversCards[k].cardGO.transform.collider.bounds))
								//if(TestIntersection(sortedCardData[j], cardData.coversCards[k]) || TestIntersection(cardData.coversCards[k], sortedCardData[j]))
								if(sortedCardData[j].obb.overlaps(sortedCardData[cardData.coversCards[k]].obb))
								{
									collidedWithCoversCards = true;
									break;
								}
							}
						}
						
						// Didn't collide with other cards in the coversCards list, add it to the list
						if(!collidedWithCoversCards)
						{
							//GsnDebug.Log("coversCards.Add():" + " i:" + i + " j:" + j);
							cardData.coversCards.Add(sortedCardData[j].cardID);
							sortedCardData[j].coveredByCards.Add(cardData.cardID);
						}
					}
				}
			}
			
			playfieldData.cardData = sortedCardData;
		}

		
		EditorUtility.SetDirty(this);
		if(playfieldData) {
			EditorUtility.SetDirty(playfieldData);
		}
		//AssetDatabase.SaveAssets(); // let's let our caller do this, since it's slow to do it in a loop
		return playfieldData;
	}
	
	string GetRootDirectory()
	{
		return System.IO.Directory.GetCurrentDirectory().Replace('\\','/') + "/"; // "C:/_UAS/HelloAnrdoid/"
	}
	
	string FindExistingFilePath(string root, out int numMatchingPaths)
	{
		string filePath = "";
		string[] paths = System.IO.Directory.GetFiles(root + "Assets/", gameObject.name + ".asset", System.IO.SearchOption.AllDirectories);
		if(paths.Length > 0)
		{
			filePath = paths[0].Replace('\\','/').Replace(root,"");
		}
		numMatchingPaths = paths.Length;
		return filePath;
	}
	
	void FindOrCreatePlayfieldData(string filePath, bool allowCreate)
	{
		PlayfieldData newPlayfieldData = null;
		
		if(filePath != "" && filePath != null)
		{
			newPlayfieldData = AssetDatabase.LoadAssetAtPath(filePath, typeof(PlayfieldData)) as PlayfieldData;
		}
		
		if(allowCreate && newPlayfieldData == null)
		{
			newPlayfieldData = PlayfieldData.CreateInstance<PlayfieldData>();
			AssetDatabase.CreateAsset(newPlayfieldData, filePath);
		}
		
		if(newPlayfieldData != null)
		{
			playfieldData = newPlayfieldData;
		}
	}
	
	#endif
	
	
	#if UNITY_EDITOR
	void OnDrawGizmos() 
	{
		Transform transform = this.transform;
		float rootScale = (transform.localScale.x/0.403f);
		
		Vector3 topleft 	= new Vector3(-1.32f, +1.025f, 0.0f) * rootScale + transform.position;
		Vector3 topright 	= new Vector3(+1.32f, +1.025f, 0.0f)  * rootScale + transform.position;
		Vector3 bottomleft 	= new Vector3(-1.32f, -0.73f, 0.0f) * rootScale + transform.position;
		Vector3 bottomright	= new Vector3(+1.32f, -0.73f, 0.0f) * rootScale + transform.position;
		
		Vector3 topleftSafeZone 	= new Vector3(-1.075f, +0.82f, 0.0f) * rootScale + transform.position;
		Vector3 toprightSafeZone 	= new Vector3(+1.075f, +0.82f, 0.0f) * rootScale + transform.position;
		Vector3 bottomleftSafeZone 	= new Vector3(-1.075f, -0.29f, 0.0f) * rootScale + transform.position;
		Vector3 bottomrightSafeZone	= new Vector3(+1.075f, -0.29f, 0.0f) * rootScale + transform.position;
		
		Gizmos.color = Color.magenta;
		
		Gizmos.DrawLine(topleft, topright);
		Gizmos.DrawLine(bottomleft, bottomright);
		
		Gizmos.DrawLine(topleft, bottomleft);
		Gizmos.DrawLine(topright, bottomright);
		
		GizmoHelper.DrawText(topleft, "Apple iPhone 4/4S");
		
		Gizmos.color = Color.green;
		
		Gizmos.DrawLine(topleftSafeZone, toprightSafeZone);
		Gizmos.DrawLine(bottomleftSafeZone, bottomrightSafeZone);
		
		Gizmos.DrawLine(topleftSafeZone, bottomleftSafeZone);
		Gizmos.DrawLine(toprightSafeZone, bottomrightSafeZone);
		
		GizmoHelper.DrawText(topleftSafeZone, "Safezone");
		
		Card[] cardsInPlayfieldRoot = gameObject.GetComponentsInChildren<Card>();
		if(cardsInPlayfieldRoot != null)
		{
			Gizmos.matrix = transform.localToWorldMatrix;
			
			int playfieldCardCount = cardsInPlayfieldRoot.Length;
			for(int i = playfieldCardCount-1; i >= 0; i--)
			{
				
				Card card = cardsInPlayfieldRoot[i];
				Transform cardTransform = card.transform;
				
				Transform tempTrans = null;
				if(cardTransform.parent != cardTransform.root)
				{
					tempTrans = cardTransform.parent;
					cardTransform.parent = cardTransform.root;
				}

				Vector3 localPos = cardTransform.localPosition;
				Vector3 v = localPos.normalized;
				GizmoHelper.DrawText(localPos, cardTransform.GetComponent<Card>().name.ToString());
				Gizmos.color = new Color((v.z<=0 ? v.z*-1 : v.z), (v.y<=0 ? v.y*-1 : v.y), (v.x<=0 ? v.x*-1 : v.x), 0.75f);
				OBB2D obb = new OBB2D(localPos, 0.6f-collisionFudge, 0.9f-collisionFudge, (cardTransform.localRotation.eulerAngles.z*Mathf.PI/180f));//(cardTransform.localEulerAngles.z < 0f) ? (cardTransform.localEulerAngles.z+360f) : cardTransform.localEulerAngles.z );

				obb.OnDrawGizmos();
				if(tempTrans != null)
				{
					cardTransform.parent = tempTrans;
				}
			}
		}
		
	}
	#endif
}
