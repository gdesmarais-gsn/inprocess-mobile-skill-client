using UnityEngine;
using UnityEngine.UI;

namespace GSN.Skill.Phoenix.Strings
{
	public class StringBind : MonoBehaviour
	{
		[SerializeField]
		[UnityEngine.Serialization.FormerlySerializedAs("id")]
		private string _id;

		public string id
		{
			get
			{
				return _id;
			}

			set
			{
				_id = value;
				text = StringTable.Instance.GetEntry(_id);
				SetComponentText(text);
			}
		}

		public string text { get; protected set; }

		protected virtual void SetComponentText(string s)
		{
			Text canvasText = GetComponent<Text>();
			if (canvasText != null)
				canvasText.text = s;
			else
			{
				Debug.LogError("String Bind is missing text component!");
			}
		}

		void Start()
		{
			text = StringTable.Instance.GetEntry(id);
			SetComponentText(text);
		}

	}
}

