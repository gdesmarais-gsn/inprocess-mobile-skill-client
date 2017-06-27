﻿using UnityEngine;
using TMPro;
using System;
using UnityEngine.UI;
using GSN.Skill.Phoenix.View.Pool;

namespace GSN.Skill.Phoenix.View
{
	public class CreditCardTile : PooledGameObject
	{
		[SerializeField]
		private TextMeshProUGUI _creditCardText;
		[SerializeField]
		private TextMeshProUGUI _buttonText;
		[SerializeField]
		private Image _cardImage;

		[SerializeField]
		private Button _button;

		private Action<int>  _buttonAction;
		private int _cardID = -1;

		void OnEnable()
		{
			_button.onClick.AddListener(OnCardSelected);
		}

		void OnDisable()
		{
			_button.onClick.RemoveListener(OnCardSelected);
		}

		public void SetCardInfo(string ccInfo, string buttonText, Action<int> buttonAction, int cardID)
		{
			_creditCardText.text = ccInfo;
            if (_buttonText != null)
			    _buttonText.text = buttonText;
			_buttonAction = buttonAction;
			_cardID = cardID;
		}

		void OnCardSelected()
		{
			_buttonAction.Invoke(_cardID);
        }
	}
}