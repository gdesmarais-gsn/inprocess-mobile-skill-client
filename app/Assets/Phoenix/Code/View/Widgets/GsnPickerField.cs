using UnityEngine;
using TMPro;
using GSN.Skill.Events;
using GSN.Skill.Utils;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.EventSystems;

namespace GSN.Skill.Phoenix.View
{
	[RequireComponent(typeof(Button))]
	public class GsnPickerField : BaseValidatableField
    {
		[SerializeField]
		private TextMeshProUGUI _displayField; // The text field to receive the current picker user selection.

		private Button _pickerButton;
		private GSNPicker _picker;

		private List<string> _rowData; // The row text for all entries to appear in the picker.
		private bool _showingPicker = false;

#if UNITY_EDITOR
		private int _selectedUnityPickerIndex = 0; // Selected row index only for use by the in-Unity dev version of the picker.
		private int _unityPickerIndexOnPickerOpen = 0;
		private Vector2 _unityPickerScrollPos = new Vector2();
#endif

		public override string GetFieldText()
		{
			return _displayField.text;
		}

		public void SetPickerRowData (List<string> rowData, int startingSelectedIndex = 0)
		{
			_rowData = rowData;
			if (startingSelectedIndex < _rowData.Count)
			{
				SetFieldText(_rowData[startingSelectedIndex]);
			}
			else
			{
				SetFieldText("");
			}
			OnUserEditFinished(GetFieldText());
		}

        void Awake()
        {
			if (!_displayField)
			{
				GsnDebug.LogError("Error! GsnPickerField on '" + gameObject.name + "' is missing the _displayField!" +
								  "More errors will occur until this property is set to a valid TextMeshProUGUI.");
			}

			_pickerButton = gameObject.GetComponent<Button>();

			if (!_picker)
			{
				_picker = gameObject.AddComponent<GSNPicker>();
			}
			_picker.SetParentName(gameObject.name);
        }

        override protected void OnEnable()
        {
			//Debug.Log("[GSNPicker:OnEnable]: " + gameObject.name);
			base.OnEnable();
			_pickerButton.onClick.AddListener(OnPickerButtonPressed);
			_picker.onDeselect.AddListener(OnPickerCollapsed);

			if ((controller != null) && (_rowData != null))
			{
				OnUserEditFinished(GetFieldText()); // Force a validation update since pickers should always start with valid input only.
			}
        }

		override protected void OnDisable()
		{
			base.OnDisable();
			_pickerButton.onClick.RemoveListener(OnPickerButtonPressed);
			_picker.onDeselect.RemoveListener(OnPickerCollapsed);
		}

		void OnGUI()
		{
#if UNITY_EDITOR
			if(_showingPicker && _rowData.Count > 0 )
			{
				// Dev-only Play-In-Unity-Editor picker support so the UI is still useable within Unity.
				Rect viewRect = new Rect(0, 0, Screen.width - 20, 30 + (_rowData.Count * 30));

				// Set up the Done and Cancel buttons.
				if (GUI.Button( new Rect(Screen.width - 150, Screen.height - 150, 50, 30), "DONE"))
				{
					OnPickerCollapsed(_rowData[_selectedUnityPickerIndex]);
				}
				if (GUI.Button( new Rect(Screen.width - 80, Screen.height - 150, 50, 30), "Cancel"))
				{
					OnPickerCancel();
				}

				// Set up a scroll view so list behavior roughly matches that of native iOS scrolling pickers.
				_unityPickerScrollPos = GUI.BeginScrollView(new Rect(0, Screen.height - 120, Screen.width, 100),
				                                            _unityPickerScrollPos,
				                                            viewRect);
				_selectedUnityPickerIndex = GUI.SelectionGrid(viewRect, _selectedUnityPickerIndex, _rowData.ToArray(), 1);
				GUI.EndScrollView();

				// Custom click outside of view handling just for this in editor picker.
				Rect fullViewRect = new Rect(0, Screen.height - 150, Screen.width, 100);
				Event currentUnityEvent = Event.current;
				if ((currentUnityEvent.type == EventType.MouseDown ) && !fullViewRect.Contains(currentUnityEvent.mousePosition))
				{
					OnPickerCollapsed(_rowData[_selectedUnityPickerIndex]);
				}
			}
#endif
		}

		void OnPickerButtonPressed()
		{
			//GsnDebug.Log("PICKER BUTTON PRESSED! Bring up the picker! _showingPicker = " + _showingPicker.ToString());
			if (_rowData.Count <= 0)
			{
				GsnDebug.LogError("ERROR! Tried to display picker with no list data set! (Parent GameObject:" +
									gameObject.name + ")");
				return; // If we happen to a get a button click while we're still building the list, just ignore it.
			}

			if (_showingPicker)
			{
				return; // We seem to get multiple button press events sometimes, so filter out the extra events received.
			}

			_showingPicker = true;

#if !UNITY_EDITOR
			string textToFind = GetFieldText();
			int selectedIndex = _rowData.FindIndex(x => x.StartsWith(textToFind));
			_picker.ShowPicker(gameObject.name, _rowData, selectedIndex);
#endif
			_pickerButton.onClick.RemoveListener(OnPickerButtonPressed);
		}

		void OnPickerCollapsed(string pickerValue)
		{
			//GsnDebug.Log("Picker collapsed and returned value: " + pickerValue);
			_showingPicker = false;

#if UNITY_EDITOR
			_unityPickerIndexOnPickerOpen = _selectedUnityPickerIndex;
#else
			// An empty string returned from the Deselect of a GSNPicker means that input was cancelled.
			if(pickerValue == string.Empty)
			{
				OnPickerCancel();
				return;
			}
#endif
			_pickerButton.onClick.AddListener(OnPickerButtonPressed);

			if(pickerValue == GetFieldText())
			{
				return;
			}
			
			SetFieldText(pickerValue);
			OnUserEditFinished(GetFieldText());
			ClearValidityFailure();
		}

		void OnPickerCancel()
		{
			//GsnDebug.Log("Picker cancelled!");
			_showingPicker = false;

#if UNITY_EDITOR
			_selectedUnityPickerIndex = _unityPickerIndexOnPickerOpen;
#endif
			_pickerButton.onClick.AddListener(OnPickerButtonPressed);
		}

		void SetFieldText(string text)
		{
			_displayField.text = text;
		}
    }
}