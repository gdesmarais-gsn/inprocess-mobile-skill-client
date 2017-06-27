using UnityEngine;
using UnityEngine.UI;

namespace GSN.Skill.Phoenix.UI
{
	[RequireComponent(typeof(Button))]
	public class TooltipToggle : MonoBehaviour
	{
		private Button _showButton;
		[SerializeField]
		private Button _hideButton;
		[SerializeField]
		private GameObject _tooltip;
		
		void Awake()
		{
			_showButton = GetComponent<Button>();
		}
		
		void Start()
		{
			_showButton.onClick.AddListener(this.ShowTooltip);
			_hideButton.onClick.AddListener(this.HideTooltip);
		}
		
		private void ShowTooltip()
		{
			_tooltip.SetActive(true);
			_hideButton.gameObject.SetActive(true);
		}
		
		private void HideTooltip()
		{
			_tooltip.SetActive(false);
			_hideButton.gameObject.SetActive (false);
			
		}
	}
}
