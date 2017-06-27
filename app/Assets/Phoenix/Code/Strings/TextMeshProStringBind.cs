using GSN.Skill.Events;
using TMPro;

namespace GSN.Skill.Phoenix.Strings
{
	public class TextMeshProStringBind : StringBind
	{
		void Start()
		{
			SetText();
		}

		void OnEnable()
		{
			#if DEBUG
			EventDispatcher.AddListener<ToggleStringCheatEvent>(OnToggleStringCheat);
			#endif // #if DEBUG
		}

		void OnDisable()
		{
			#if DEBUG
			EventDispatcher.RemoveListener<ToggleStringCheatEvent>(OnToggleStringCheat);
			#endif // #if DEBUG
		}

		protected void OnToggleStringCheat(IEvent e)
		{
			SetText();
		}

		protected void SetText()
		{
			SetComponentText(StringTable.Instance.GetEntry(id));
		}

		protected override void SetComponentText(string s)
		{
			TextMeshPro tmPro = GetComponent<TextMeshPro>();
			if (tmPro != null)
				tmPro.text = s;
			else
			{
				TextMeshProUGUI tmProGUI = GetComponent<TextMeshProUGUI>();
				if (tmProGUI != null)
					tmProGUI.text = s;
				else
				{
					base.SetComponentText(s);
				}
			}
		}
	}
}
