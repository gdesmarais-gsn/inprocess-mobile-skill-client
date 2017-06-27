using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.Serialization;

namespace GSN.Skill.Games.Common.Client
{
	/// Component to allow the Arena debug menu to set join and start record options. 
	/**
		Arena Debug menu looks all object with this component and fills in the join and/or start record with the string or bool property.
		These names also get saved to playerprefs and reloaded on open, allowing the user to keep settings from game to game.
		 
		Link in a _overrideToggle to control if the option us used. This is useful for options like replay, where you want to keep the text but not use it.
		
		_jSONName is the name of the option, this should match what is used in gamemodel.
	*/
	public class OptionJSONName : MonoBehaviour 
	{
		public string _jSONName;
		public Toggle _overrideToggle;		
		
		[FormerlySerializedAs("inJoinRecord")]
	    [SerializeField]
		public bool startRecord;
		
		[FormerlySerializedAs("inStartRecord")]
	    [SerializeField]
		public bool joinRecord;

		public object defaultValue;
	}
}
