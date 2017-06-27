using UnityEngine;
using System.Collections;
using UnityEngine.UI;

namespace GSN.Skill.Games.Tripeaks
{
	public class UIHelp : MonoBehaviour 
	{
		
		public GameObject[] helpPages;
		public Text headerText; 
		public ScrollRect scrollRect;
		
		private float _srollRectSizeX = 0;
		private int _currentPage = 0; 
		public float pageChangeSpeed = 1.0f;
		
		public void OnEnter()
		{
			// TODO animate in
			this.gameObject.SetActive(true);
			
			RectTransform scrollRectRectTrans = scrollRect.GetComponent<RectTransform>();
			_srollRectSizeX = scrollRectRectTrans.rect.width;
			
			// Reset the visible page
			for (int x = 0;x < helpPages.Length;++x)
			{
				if ( _currentPage != x )
					MovePageOffScreen(x,1);		
			}
			UpdateTitleText();
		}
		
		public void OnExit()
		{
			// TODO animate out
			this.gameObject.SetActive(false);
		}
		
		public void OnLeft()
		{
			SwitchToPage( -1 );
		}
		
		public void OnRight()
		{
			SwitchToPage( 1 );
		}
		
		void SwitchToPage( int direction)
		{
			int oldPage = _currentPage;
			_currentPage +=  direction;
			if ( _currentPage < 0 )
				_currentPage += helpPages.Length;
			else
				_currentPage = _currentPage%helpPages.Length;
				
			LeanTween.move(helpPages[oldPage].GetComponent<RectTransform>(), new Vector2(_srollRectSizeX * direction,0), pageChangeSpeed);
			
			MovePageOffScreen( _currentPage, direction * -1 );
			LeanTween.move(helpPages[_currentPage].GetComponent<RectTransform>(), new Vector2(0,0), pageChangeSpeed);
			UpdateTitleText();
		}
		
		void MovePageOffScreen(int page, int direction)
		{
			RectTransform rect = helpPages[page].GetComponent<RectTransform>();
			Vector3 pos = rect.localPosition;
			pos.x  = _srollRectSizeX * direction;
			rect.localPosition = pos;	
		}
		
		void UpdateTitleText()
		{
			headerText.text = helpPages[_currentPage].GetComponent<UIHelpPage>().headerText;
		}
	}
}
