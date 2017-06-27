using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Games.Common.Client.Game;

namespace GSN.Skill.Games.Tripeaks
{	
	public class CardIdDebug : MonoBehaviour 
	{
		private Text _valueText;
		
		private Card _parentCard;
		private Camera _camera;
		private RectTransform _rectTransform;
		private RectTransform _rectTransformCanvas;
		private Board _board;
		
		public void Init( Card parentCard )
		{
			_parentCard = parentCard;
			GameObject cameraObject = GameObject.Find("MainCamera");
			_camera = cameraObject.GetComponent<Camera>();
			_rectTransform = GetComponent<RectTransform>();
			
			_valueText = GetComponent<Text>();
						
			GameObject canvasObject = GameObject.Find("CANVAS");
			_rectTransformCanvas = canvasObject.GetComponent<RectTransform>();
			
			_board = ((View)ViewBase.Instance)._board;
		}
		
		void Update () 
		{
						
			Vector2 viewportPosition = _camera.WorldToViewportPoint( _parentCard.transform.position );
			Vector2 screenPosition = new Vector2(
						((viewportPosition.x * _rectTransformCanvas.sizeDelta.x) - (_rectTransformCanvas.sizeDelta.x * 0.5f)),
						((viewportPosition.y * _rectTransformCanvas.sizeDelta.y) - (_rectTransformCanvas.sizeDelta.y * 0.5f)));
			
						 
			//Check if a offset is needed
			float yOffset = 0;
			List<Card> dealPile = _board.dealPile;
			if ( dealPile.Contains(_parentCard) )
			{
				yOffset = dealPile.FindIndex(d=>d == _parentCard);
			}
			else if ( _parentCard.pileId == PileID.Waste)
			{
				// we can use the Z value to shift data down
				float zLevel = _parentCard.transform.position.z;
				yOffset = _board.wasteCount  - (zLevel / -.04f);
			}
			else if ( _parentCard.pileId == PileID.Removed)
			{
				_valueText.text = "";
				return;
			}

			screenPosition.y -= yOffset * 25;			
			_rectTransform.anchoredPosition3D = Vector3.zero; 
			_rectTransform.anchoredPosition = screenPosition;
			
			float scale = 1;
			if (yOffset != 0)
				scale = 1.0f - (.1f * yOffset);
			
			_rectTransform.localScale = new Vector3(scale, scale, scale );
			
			 
			_valueText.text = _parentCard.GetPrettyString();
       	}
	}
}
