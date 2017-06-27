using UnityEngine;
using System.Collections;

namespace GSN.Skill.Games.Tripeaks
{
	public class DustFX : MonoBehaviour {

		public Transform transformToFollow;
		public Transform lockPosY;

		public bool followCharacter = false;

		private Vector3 _followPos;
		private ParticleSystem dustFX;

		void Awake()
		{
			_followPos = transformToFollow.position;
			dustFX = this.gameObject.GetComponent<ParticleSystem>();
		}

		void Update() 
		{
			if (followCharacter)
			{
				_followPos.x = transformToFollow.position.x;
				_followPos.y = lockPosY.position.y;
				_followPos.z = transformToFollow.position.z;
				this.transform.position = _followPos;
			}
		}

		public void PlayDustEffect()
		{
			if (!followCharacter)
			{
				_followPos.x = transformToFollow.position.x;
				_followPos.y = lockPosY.position.y;
				_followPos.z = transformToFollow.position.z;
				this.transform.position = _followPos;
			}

			dustFX.Play();
		}

		public void StopDustEffect()
		{
			dustFX.Stop();
		}
	}
}
