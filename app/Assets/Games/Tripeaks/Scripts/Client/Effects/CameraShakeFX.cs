using UnityEngine;
using System.Collections;

namespace GSN.Skill.Games.Tripeaks
{
	public class CameraShakeFX : MonoBehaviour {
			
		public void Shake(float duration)
		{
			StartCoroutine(DoShake(duration));
		}
		
		IEnumerator DoShake(float duration)
		{
			Vector3 origPos = transform.position;
			Vector3 shakePos = origPos;
			float shakeRad = 0f;
			for(float t=0f; t < duration; t+=Time.deltaTime)
			{
				shakePos.y += Mathf.Sin( shakeRad ) * 0.1f;
				shakePos.x += Mathf.Cos( shakeRad ) * 0.1f;
				transform.position = shakePos;
				shakeRad += Time.deltaTime * UnityEngine.Random.Range( 10.0f, 20.0f ) * Mathf.PI;

				yield return null;
			}
			transform.position = origPos;
		}
	}
}
