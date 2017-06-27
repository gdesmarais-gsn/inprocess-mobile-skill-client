using UnityEngine;
using System.Collections;
using TMPro;
using GSN.Skill.Games.Common.Client.Audio;

namespace GSN.Skill.Games.Tripeaks
{
	public class DynamiteHazard : Hazard 
	{
		public TextMeshPro _textMesh;
		public GameObject _revealObject;
		public GameObject[] _fillObjects;
		public GameObject _bombEffect;

		private float _anglePerFillObject = 0;
		private float _lastAngle = 0;
		private int _startCounterValue = -1;
		private int _lastCounterValue = -1;

		private const string BLOW_HAZARD = "Blow";
		
		void Awake()
		{
			_anglePerFillObject = 360 / _fillObjects.Length;
		}
		
		public void UpdateCounter(int counterValue)
		{
			
			
			if (_startCounterValue < counterValue)
				_startCounterValue = counterValue;

			if ( _startCounterValue == 0)
				return;

			_textMesh.text = counterValue.ToString();

			if ( _lastCounterValue != counterValue)
			{
				updateFill(counterValue);

				if (counterValue != 0)
					AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.BombTick);
			}

			_lastCounterValue = counterValue;
			
			if (counterValue == 0)
				onExplode ();
		} 

		public void updateFill(int counterValue)
		{
			float fillPerc = 0;
			
			if ( counterValue > 0)
				fillPerc = 1 - ((float)counterValue/_startCounterValue);
				
			float angle = fillPerc * 315;
			//GsnDebug.Log("Fill Perc "+fillPerc);
			_revealObject.transform.Rotate( Vector3.back, angle - _lastAngle);
			
			int numFillObecjectsOn = (int)(angle / _anglePerFillObject) + 1;
			for (int x = 0; x < numFillObecjectsOn;++x)
				_fillObjects[x].gameObject.SetActive(true);
				
			_lastAngle = angle;
		}

		void onExplode()
		{
			if (animator != null)
				animator.Play(BLOW_HAZARD);

			_bombEffect.SetActive(true);
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.BombExplode);
		}

		public override void ClearOverlay()
		{
			base.ClearOverlay();
			AudioFactory.instance.PlaySoundEffect<TriPeaksAudio>(TriPeaksAudio.BombDiffuse);
		}

		public void ResetFill()
		{
			for(int i = 0; i < _fillObjects.Length; i++)
			{
				_fillObjects[i].SetActive(false);
			}
		}
	}
}
