using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace GSN.Skill.Games.Tripeaks
{
	public class PoiCharacter : MonoBehaviour {
		
		public Animator animator;
		
		public Renderer[] maskObjects;
		public Renderer bodyObject;
		
		public Material sunsetMask;
		public Material nightMask;
		public Material sunsetBody;
		public Material nightBody;

		public DustFX dustFX;
		
		public const string POI_ANNOUNCEMENT_SHOW = "announcement_show";
		public const string POI_ANNOUNCEMENT_EXIT = "announcement_exit";
		
		public void playAnimation(string animName, int animLayer)
		{
			animator.SetLayerWeight (animLayer, 1);
			animator.Play(animName);
		}
		
		public void setTimeOfDayTint(int timeIndex)
		{
			switch (timeIndex)
			{
			case 0:
				break;
			case 1:
				for (int i = 0; i < maskObjects.Length; i++)
					maskObjects[i].material = sunsetMask;
				bodyObject.material = sunsetBody;
				break;
			case 2:
				for (int i = 0; i < maskObjects.Length; i++)
					maskObjects[i].material = nightMask;
				bodyObject.material = nightBody;
				break;
			}
		}

		public void playDustFX()
		{
			if (dustFX != null)
				dustFX.PlayDustEffect();
		}
		
		public void stopDustFX()
		{
			if (dustFX != null)
				dustFX.StopDustEffect();
		}
	}
}
