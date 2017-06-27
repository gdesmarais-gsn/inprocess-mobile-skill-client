using UnityEngine;
using System.Collections;

namespace GSN.Skill.Games.Tripeaks
{
	public class UIToggleSlider : MonoBehaviour {

		private Animator _animator;

		void Awake()
		{
			_animator = gameObject.GetComponent<Animator>();
		}

		public void isOn(bool isOn)
		{
			_animator.SetBool("isOn", isOn);
		}
	}
}
