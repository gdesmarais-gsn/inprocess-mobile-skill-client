using UnityEngine;
using System;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;

namespace GSN.Skill.Phoenix.UI
{
	[RequireComponent(typeof(Toggle))]
	public class ToggleEx : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
	{
		private Toggle _toggle;
		public GameObject[] offImage;
		public GameObject[] onImage;
		public Animator animatedObject;
		public string stateNameOff;
		public string stateNameOn;

		private bool _lastToggleState;


		[Serializable]
		public class ToggleClickedEvent : UnityEvent { }

		// Event delegates triggered on click.
		[FormerlySerializedAs("onClick")]
		[SerializeField]
		private ToggleClickedEvent m_OnClick = new ToggleClickedEvent();

		public ToggleClickedEvent onClick
		{
			get { return m_OnClick; }
			set { m_OnClick = value; }
		}

		private void Press()
		{
			if (!_toggle.IsActive() || !_toggle.IsInteractable())
				return;

            		m_OnClick.Invoke();
		}

		// Trigger all registered callbacks.
		public virtual void OnPointerDown(PointerEventData eventData)
		{
			if (animatedObject != null && !_toggle.isOn)
			{
				animatedObject.SetTrigger("Pressed");
			}
		}

		public virtual void OnPointerUp(PointerEventData eventData)
		{ 
			Press();
		}

		// Use this for initialization
		void Awake()
		{
			_toggle = gameObject.GetComponent<Toggle>();
            		_toggle.onValueChanged.AddListener(OnToggleChange);

			_lastToggleState = _toggle.isOn;

			//Set initial toggle state
			if (animatedObject != null)
			{
				if (_toggle.isOn)
					animatedObject.SetBool("Active", true);
				else
					animatedObject.SetBool("Active", false);
			}
        }

		// Update is called once per frame
		void OnToggleChange(bool isOn = true)
		{
			if (_lastToggleState == _toggle.isOn)
				return;

			_lastToggleState = _toggle.isOn;

			if (_toggle.isOn)
			{
				for (int n = 0; n < offImage.Length; ++n)
				{
					if (offImage[n] != null)
						offImage[n].SetActive(false);
				}

				for (int n = 0; n < onImage.Length; ++n)
				{
					if (onImage[n] != null)
						onImage[n].SetActive(true);
				}
				if (animatedObject != null)
				{
                    			animatedObject.Play(stateNameOn);
					animatedObject.SetBool("Active", true);
				}
			}
			else
			{
				for (int n = 0; n < offImage.Length; ++n)
				{
					if (offImage[n] != null)
						offImage[n].SetActive(true);
				}
				for (int n = 0; n < onImage.Length; ++n)
				{
					if (onImage[n] != null)
						onImage[n].SetActive(false);
				}
				if (animatedObject != null)
				{
                    			animatedObject.Play(stateNameOff);
					animatedObject.SetBool("Active", false);
				}
			}
		}
	}
}
