using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ShowPassword : MonoBehaviour {

	[SerializeField]
    private TMP_InputField _inputField;

	public void SwapInputFieldType(bool show)
	{
		if (show)
		{
            _inputField.contentType = TMP_InputField.ContentType.EmailAddress;
			_inputField.ForceLabelUpdate();
		}
		else
		{
            _inputField.contentType = TMP_InputField.ContentType.Password;
			_inputField.ForceLabelUpdate();
		}
	}
}
