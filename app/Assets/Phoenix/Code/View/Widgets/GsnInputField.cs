﻿using UnityEngine;
using TMPro;
using GSN.Skill.Events;
using System.Collections.Generic;
using System;

namespace GSN.Skill.Phoenix.View
{
    [RequireComponent(typeof(TMP_InputField))]
	public class GsnInputField : BaseValidatableField
    {
		private const int DESELECT_DELAY_IN_FRAMES = 2;

        private TMP_InputField _inputField;

		private int _selectedFrame = -1;

		public override string GetFieldText()
		{
			return _inputField.text;
		}

		public void SetFieldText(string newText)
		{
			if (_inputField != null)
			{
				_inputField.text = newText;
				OnUserEditFinished(newText);
			}
		}

        void Awake()
        {
            _inputField = gameObject.GetComponent<TMP_InputField>();
        }

        override protected void OnEnable()
        {
			base.OnEnable();

			_inputField.onSelect.AddListener(Select);
            _inputField.onDeselect.AddListener(Deselect);
            _inputField.onValueChanged.AddListener(OnValueChanged);
        }

        void OnDisable()
        {
			base.OnDisable();

			_inputField.onSelect.RemoveListener(Select);
			_inputField.onDeselect.RemoveListener(Deselect);
            _inputField.onValueChanged.RemoveListener(OnValueChanged);
        }

		void Select(string textFieldText)
		{
			// set frame that the selection started on
			_selectedFrame = Time.frameCount;
		}

        void Deselect(string textFieldText)
        {
			/// NOTE: There is a bug with text mesh pro where it triggers a deselect event 2 frames after a select occurred
			/// if the previous selection is from another input field.
			/// This is a HACK to ignore any deselect attempts if it happens within 2 frames
			if (_selectedFrame == -1 || // selected frame isn't set
			    Time.frameCount <= (_selectedFrame + DESELECT_DELAY_IN_FRAMES)) // selected frame is set and check if we're deselecting within the selected frame ignore threshold
			{
				// selected frame isn't set
				// OR we're attempting to deselect the input field way too fast! ignore!
				return;
			}

			// reset selected frame
			_selectedFrame = -1;
			OnUserEditFinished(textFieldText);
        }

        void OnValueChanged(string textFieldText)
        {
			ClearValidityFailure();
        }
    }
}