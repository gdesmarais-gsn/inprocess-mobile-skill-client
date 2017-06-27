using UnityEngine;
using TMPro;
using System;
using UnityEngine.UI;
using GSN.Skill.Phoenix.View.Pool;

namespace GSN.Skill.Phoenix.View
{
	public class AddNewCardTile : PooledGameObject
	{
		[SerializeField]
		private Button _button;

		private Action _buttonAction;

		void OnEnable()
		{
			_button.onClick.AddListener(OnAddCard);
		}

		void OnDisable()
		{
			_button.onClick.RemoveListener(OnAddCard);
		}

		public void SetButtonAction(Action buttonAction)
		{
			_buttonAction = buttonAction;
		}

		void OnAddCard()
		{
			_buttonAction.Invoke();
        }
	}
}