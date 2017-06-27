using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GSN.Skill.Events;
using GSN.Skill.Phoenix.View.Pool;

namespace GSN.Skill.Phoenix.View
{
	public abstract class ScreenView : BaseView
	{

		[SerializeField]
		private GameObject _screenContents; //this should be a child object

		[SerializeField]
		private GameObject _activityIndicator;

		private float _screenInTime = 0.0f;
		private float _screenOutTime = 0.0f;

		protected bool _fetchingScreenData = false;

		protected virtual void OnEnable()
		{
			EventDispatcher.AddListener<FetchScreenBeginEvent>(OnFetchScreenBeginEvent);
			EventDispatcher.AddListener<FetchScreenCompleteEvent>(OnFetchScreenCompleteEvent);
		}

		protected virtual void OnDisable()
		{ 
			EventDispatcher.RemoveListener<FetchScreenBeginEvent>(OnFetchScreenBeginEvent);
			EventDispatcher.RemoveListener<FetchScreenCompleteEvent>(OnFetchScreenCompleteEvent);
		}

		protected virtual float AnimateScreenInTime 
		{  
			get { return _screenInTime; }
			set { _screenInTime = value; }  
		}

		protected virtual float AnimateScreenOutTime 
		{  
			get { return _screenOutTime; }
			set { _screenOutTime = value; }  
		}

		public virtual void OnShow()
		{
			StartCoroutine(AnimateScreenIn());
		}

		public virtual void OnHide()
		{
			StartCoroutine(AnimateScreenOut());
		}

		protected virtual IEnumerator AnimateScreenOut()
		{
			yield return new WaitForSeconds(AnimateScreenOutTime);
			Hide();
		}

		protected virtual IEnumerator AnimateScreenIn()
		{
			Show();
			yield return new WaitForSeconds(AnimateScreenInTime);
		}

		protected virtual void Hide()
		{
			if (_screenContents != null)
				_screenContents.SetActive(false);
		}

		protected void Show()
		{
			if (_screenContents != null)
				_screenContents.SetActive(true);
		}

		protected void ClearChildrenObjects(Transform listTransform)
		{
			if (listTransform.childCount > 0)
			{
                List<PooledGameObject> pooledObjects = new List<PooledGameObject>();
				for (int i = 0; i < listTransform.childCount; i++)
				{
					PooledGameObject poolOb = listTransform.GetChild(i).gameObject.GetComponent<PooledGameObject>();
                    if (poolOb != null)
                        pooledObjects.Add(poolOb);
                    else
                        Destroy(listTransform.GetChild(i).gameObject);
				}

                foreach (PooledGameObject poolObj in pooledObjects)
                {
                    poolObj.Free();
                }
			}
		}

		protected virtual void OnFetchScreenBeginEvent(IEvent e)
		{ 
		}

		protected virtual void OnFetchScreenCompleteEvent(IEvent e)
		{ 
		}

		protected void ShowActivityIndicator()
		{
			if (_activityIndicator != null)
				_activityIndicator.SetActive(true);
		}

		protected void HideActivityIndicator()
		{
			if (_activityIndicator != null)
				_activityIndicator.SetActive(false);
		}
	}
}