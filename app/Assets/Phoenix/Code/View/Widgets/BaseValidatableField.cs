using UnityEngine;
using TMPro;
using GSN.Skill.Events;
using System.Collections.Generic;

namespace GSN.Skill.Phoenix.View
{
    public abstract class BaseValidatableField : BaseView
    {
        [SerializeField]
        private TextMeshProUGUI _errorLabel;
        [SerializeField]
        private GameObject _errorPanel;

		private List<BaseValidatableField> _linkedValidationFields = new List<BaseValidatableField> ();

        private bool _isValid = false;
        private string _textAtLastValidityFailure;

        [SerializeField]
        private bool _allowEmptyText = false;

        public Strings.InputFieldType _type = Strings.InputFieldType.None;

        public delegate void ValidateHandler();
        public ValidateHandler validateHandler;

		// Abstract methods to support.
		public abstract string GetFieldText ();

        virtual protected void OnEnable()
        {
			//Debug.Log("[BaseValidatableField:OnEnable]");
            EventDispatcher.AddListener<HandledInputErrorEvent>(OnInputFieldErrorEvent);
            EventDispatcher.AddListener<InputFieldValidEvent>(OnValidInputEvent);

            _errorPanel.SetActive(false);
            _errorLabel.text = "";
            _isValid = false;
        }

        virtual protected void OnDisable()
        {
            EventDispatcher.RemoveListener<HandledInputErrorEvent>(OnInputFieldErrorEvent);
            EventDispatcher.RemoveListener<InputFieldValidEvent>(OnValidInputEvent);
        }

		protected void OnUserEditFinished(string textFieldText)
        {
            controller.ValidateInputField(_type, textFieldText, _allowEmptyText);

            // Notify any other input fields that are 
			foreach (BaseValidatableField thisLinkedField in _linkedValidationFields)
            {
                thisLinkedField.RevalidateOnVisibleError();
            }
        }

		protected void ClearValidityFailure()
        {
            _textAtLastValidityFailure = string.Empty;
        }

        private void OnInputFieldErrorEvent(IEvent e)
        {
			//Debug.Log("[BaseValidationField] OnInputFieldErrorEvent received!");
            var evt = (HandledInputErrorEvent)e;

            Strings.InputFieldType type = evt.errorTranslation.inputField;

            if (_type == type)
            {
                _errorLabel.text = evt.errorTranslation.message;
                _errorPanel.SetActive(true);
                _isValid = false;
				_textAtLastValidityFailure = GetFieldText();

				if (validateHandler != null)
					validateHandler();
            }
        }

        private void OnValidInputEvent(IEvent e)
        {
			//Debug.Log("[BaseValidationField] OnValidInputEvent received!");
            var evt = (InputFieldValidEvent)e;

            Strings.InputFieldType type = evt.field;

            if (_type != type)
            {
                return;
            }

            // If we are attempting to mark a field as valid again because of client-checking, but the input
            // in the field is still the same as what triggered a server-detected error, be smart enough not
            // to actually mark this field as valid again until the user makes an actual change to the field.
            if (_textAtLastValidityFailure != string.Empty)
            {
				if (_textAtLastValidityFailure == GetFieldText())
                {
                    return;
                }
            }

            _errorPanel.SetActive(false);
            _isValid = true;
            _textAtLastValidityFailure = string.Empty;

            if (validateHandler != null)
                validateHandler();
        }

        public bool IsValid()
        {
            return _isValid;
        }

		// This method is intended only to help views dealing with individual BaseValidatableFields that are "sharing"
        // a notification about a validity error, such as the login screen. If this panel is asked to revalidate
        // because of changes in another field, we'll only do this if we already have a visible error on screen.
        public void RevalidateOnVisibleError()
        {
            if( !_errorPanel.activeSelf )
            {
                return;    
            }
            _textAtLastValidityFailure = string.Empty;
			controller.ValidateInputField(_type, GetFieldText(), _allowEmptyText);
        }

        // NOTE: This method is here so the view can determine if input field updates need to be linked. I didn't want
        // to over-complicate the script component interface for those working in Unity with a property that existed
        // just to fix one issue on one screen.
		public void SetRevalidateOnVisibleErrorTarget(BaseValidatableField fieldToLink)
        {
            // Strangely, I didn't see any generic containers that supported AddUnique. 
            if (!_linkedValidationFields.Contains(fieldToLink))
            {
                _linkedValidationFields.Add(fieldToLink);
            }
        }
    }
}