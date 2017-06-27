using UnityEngine;
using System.Collections;

namespace GSN.Skill.Games.Common.Client
{
	public class ShineProjectorSpriteAssignment : MonoBehaviour 
	{
		#region Parameters
		[SerializeField] GameObject shineTarget;
		#endregion

		void Awake ()
		{
			SpriteRenderer spr = shineTarget.GetComponent<SpriteRenderer>();
			if(spr == null)
				return;

			Projector proj = GetComponent<Projector>();
			Material newMat = new Material(proj.material);
			newMat.SetTexture("_TargetTex", spr.sprite.texture);
			proj.material = newMat;
		}
	}
}
