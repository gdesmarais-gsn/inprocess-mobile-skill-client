using System;
using UnityEngine.EventSystems;
using System.Collections.Generic;

namespace UnityEngine.UI.Extensions
{
    [RequireComponent(typeof(ScrollRect))]
    [AddComponentMenu("UI/Extensions/Horizontal Scroll Snap")]
    public class HorizontalScrollSnap : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler
    {
		[SerializeField]
		private int _startingPage = 1;
		[SerializeField]
		private int _pageSpacing = 0;

		[Tooltip("The gameobject that contains toggles which suggest pagination. (optional)")]
		[SerializeField]
		private GameObject _paginationObject;
		[SerializeField]
		private float _ChangeBulletsThreshold = 10f;

		[SerializeField]
		private Boolean UseFastSwipe = true;
		[SerializeField]
		private Boolean LoopScrolling = true;
		[SerializeField]
		private int FastSwipeThreshold = 100;

		private Transform _pagesContainer;

		private int _pages = 1;
		private int _actualPages = 1;
		private int _currentPage;

        private bool _fastSwipeTimer = false;
        private int _fastSwipeCounter = 0;
        private int _fastSwipeTarget = 30; //target is 30 frames

		protected List<Transform> _pageTransforms = new List<Transform>();
		private List<Vector3> _lerpPositions;
		private ScrollRect _scrollRect;
		private Vector3 _lerpTarget;
        private bool _lerp;

        private bool _startDrag = true;
        private Vector3 _startPosition = new Vector3();
       
        private int _pageWidth;

		private bool isFastSwipe = false; //to determine if a fast swipe was performed

        float _distanceToFirst;
        float _distanceToLast;


        // Use this for initialization
        void Awake()
        {
			_scrollRect = gameObject.GetComponent<ScrollRect>();
			_pagesContainer = _scrollRect.content;

			_pageWidth = (int)_pagesContainer.GetComponent<RectTransform>().rect.width;

			Init();
        }

		public void Init()
		{
			_pageTransforms = new List<Transform>();

			for (int i = 0; i < _pagesContainer.childCount; i++)
			{
				if (_pagesContainer.GetChild(i).gameObject.activeSelf)
					_pageTransforms.Add(_pagesContainer.GetChild(i));
			}
			_pages = _pageTransforms.Count;
			_actualPages = _pages;

			_lerp = false;

			DistributePages();

			_lerpPositions = new List<Vector3>();

			if (_pages > 0)
			{
				for (int i = 0; i < _pagesContainer.transform.childCount; ++i)
				{
					_lerpPositions.Add(_pagesContainer.transform.GetChild(i).localPosition);
				}
			}

			_scrollRect.horizontalNormalizedPosition = 0.0f;

			SetCurrentPage(_startingPage);
			CreateBullets();
			ChangeBulletsInfo(ActualPage());
		}

        void Update()
		{
			
            if (_lerp)
            {
				_pagesContainer.localPosition = Vector3.Lerp(_pagesContainer.localPosition, PagePostionToContainerPosition(_lerpTarget), 12.5f * Time.deltaTime);
                if (Vector3.Distance(_pagesContainer.localPosition, _lerpTarget) < .1f)
                {
                    _lerp = false;
                }

                // Change the info bullets at the bottom of the page. Just for visual effect
				if (Vector3.Distance(_pagesContainer.localPosition, PagePostionToContainerPosition(_lerpTarget)) < _ChangeBulletsThreshold)
                {
                    ChangeBulletsInfo(ActualPage());
                }
            }

            if (_fastSwipeTimer)
            {
                _fastSwipeCounter++;
            }

            if (LoopScrolling)
            {
                _distanceToFirst = Vector3.Distance(_pagesContainer.localPosition, PagePostionToContainerPosition(_lerpPositions[0]));
                _distanceToLast = Vector3.Distance(_pagesContainer.localPosition, PagePostionToContainerPosition(_lerpPositions[_lerpPositions.Count - 1]));

                if (_distanceToFirst <= _pageWidth / 2)
                    PopPage();
                if (_distanceToLast <= _pageWidth / 2)
                    PushPage();
            }
        }

        private void PushPage()
        {
            Vector3 newPagePosition = _lerpPositions[_lerpPositions.Count - 1];
            newPagePosition.x += _pageWidth;
            Transform page = _pagesContainer.GetChild(0);
            page.SetAsLastSibling();
            page.localPosition = newPagePosition;
            _lerpPositions.RemoveAt(0);
            _lerpPositions.Add(newPagePosition);
        }

        private void PopPage()
        {
            Vector3 newPagePosition = _lerpPositions[0];
            newPagePosition.x -= _pageWidth;
            Transform page = _pagesContainer.GetChild(_pagesContainer.childCount - 1);
            page.SetAsFirstSibling();
            page.localPosition = newPagePosition;
            _lerpPositions.RemoveAt(_lerpPositions.Count - 1);
            _lerpPositions.Insert(0, newPagePosition);
        }

        public void NextPageCommand()
        {
            if (_currentPage < _pages - 1)
            {
                _lerp = true;
                _lerpTarget = _lerpPositions[_currentPage + 1];
            }
			else if (!LoopScrolling && _currentPage == _pages - 1)
			{
				_lerp = true;
				_lerpTarget = _lerpPositions[_pages - 1];
			}
        }

        public void PrevPageCommand()
        {
            if (_currentPage > 0)
            {
                _lerp = true;
                _lerpTarget = _lerpPositions[_currentPage - 1];
            }
			else if (!LoopScrolling && _currentPage == 0)
			{
				_lerp = true;
				_lerpTarget = _lerpPositions[_currentPage];
			}
        }

        private Vector3 PagePostionToContainerPosition(Vector3 pagePosition)
        {
            pagePosition.x = pagePosition.x * -1;
            return pagePosition;
        }

        //find the closest registered point to the releasing point
        private Vector3 FindClosestFrom(Vector3 start, List<Vector3> localPositions)
        {
            Vector3 closest = Vector3.zero;
            float distance = Mathf.Infinity;

            start.x = start.x * -1;

            foreach (Vector3 localPosition in _lerpPositions)
            {
                if (Vector3.Distance(start, localPosition) < distance)
                {
                    distance = Vector3.Distance(start, localPosition);
                    closest = localPosition;
                }
            }

            return closest;
        }

        //returns the current page that the is seeing
        public int CurrentPage()
        {
            Vector3 closestPage = FindClosestFrom(_pagesContainer.localPosition, _lerpPositions);
            int page = 0;
            for (int i = 0; i < _pages; i++)
            {
                if (closestPage == _lerpPositions[i])
                    page = i;
            }

            return page;
        }

        private int ActualPage()
        {
			int page = CurrentPage();
			Transform pageTransform = _pagesContainer.GetChild(page);
            
			int actPage = 0;
			for (int i = 0; i < _pageTransforms.Count; i++)
			{
				if (pageTransform == _pageTransforms[i])
					actPage = i;
			}

			return actPage;
        }

        //changes the bullets on the bottom of the page - pagination
        protected virtual void ChangeBulletsInfo(int currentPageIndex)
        {
            if (_paginationObject)
            {
                for (int i = 0; i < _paginationObject.transform.childCount; i++)
                {
                    bool pageOn = (currentPageIndex == i);
                    if (_paginationObject.transform.GetChild(i).GetComponent<Toggle>().isOn != pageOn)
                        _paginationObject.transform.GetChild(i).GetComponent<Toggle>().isOn = pageOn;
                }
            }
        }

        private void CreateBullets()
        {
            if (_paginationObject)
            {
                GameObject templateOject = _paginationObject.transform.GetChild(0).gameObject;


				for (int i = _paginationObject.transform.childCount; i < _actualPages; i++)
                {
                    GameObject newChild = (GameObject)Instantiate(templateOject);
                    newChild.transform.SetParent(_paginationObject.transform, false);
                }

				if (_actualPages <= 1)
                    _paginationObject.SetActive(false);
            }
        }

        //used for changing between screen resolutions
        private void DistributePages()
        {

			int _step = (int)_pagesContainer.GetComponent<RectTransform>().rect.width + _pageSpacing;
			int _offset = 0;//-1 * (_step);

            int currentXlocalPosition = 0;

			for (int i = 0; i < _pageTransforms.Count; i++)
            {
				RectTransform child = _pageTransforms[i].gameObject.GetComponent<RectTransform>();
				currentXlocalPosition = _offset + i * _step;
				child.anchoredPosition = new Vector2(currentXlocalPosition, 0f);
				child.sizeDelta = new Vector2(_pagesContainer.GetComponent<RectTransform>().rect.width, _pagesContainer.GetComponent<RectTransform>().rect.height);
            }
        }

		public void SetCurrentPage(int pageIndex)
		{
			_lerp = true;

            if (pageIndex < _pageTransforms.Count)
                _lerpTarget = _pageTransforms[pageIndex].transform.localPosition;
		}

        #region Interfaces
        public void OnBeginDrag(PointerEventData eventData)
        {
            _startPosition = _pagesContainer.localPosition;
            _fastSwipeCounter = 0;
            _fastSwipeTimer = true;
            _currentPage = CurrentPage();
        }

        public void OnEndDrag(PointerEventData eventData)
        {
            _startDrag = true;
            if (_scrollRect.horizontal)
            {
                if (UseFastSwipe)
                {
                    isFastSwipe = false;
                    _fastSwipeTimer = false;
                    if (_fastSwipeCounter <= _fastSwipeTarget)
                    {
                        if (Math.Abs(_startPosition.x - _pagesContainer.localPosition.x) > FastSwipeThreshold)
                        {
                            isFastSwipe = true;
                        }
                    }
                    if (isFastSwipe)
                    {
                        if (_startPosition.x - _pagesContainer.localPosition.x > 0)
                        {
                            NextPageCommand();
                        }
                        else
                        {
                            PrevPageCommand();
                        }
                    }
                    else
                    {
                        _lerp = true;
                        _lerpTarget = FindClosestFrom(_pagesContainer.localPosition, _lerpPositions);
                    }
                }
                else
                {
                    _lerp = true;
                    _lerpTarget = FindClosestFrom(_pagesContainer.localPosition, _lerpPositions);
                }
            }
        }

        public void OnDrag(PointerEventData eventData)
        {
            _lerp = false;
            if (_startDrag)
            {
                OnBeginDrag(eventData);
                _startDrag = false;
            }
        }
        #endregion
    }
}