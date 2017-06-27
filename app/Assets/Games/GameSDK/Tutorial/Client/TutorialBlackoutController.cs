using UnityEngine;
using System;

namespace GSN.Skill.Games.Common.Tutorial.Unity
{

	[ExecuteInEditMode]
	public class TutorialBlackoutController : MonoBehaviour
	{

		[HideInInspector]
		public Sprite blackoutTexture;
		[HideInInspector]
		public Color blackoutColor = new Color(1, 1, 1, 0.5f);

		private Transform _transform;
		private SpriteRenderer _backoutSpriteRenderer;

		private void OnEnable()
		{
			if (transform == null)
			{
				return;
			}

			Init();
			ConfigurateBlackout();
		}

		public void Init()
		{
			_transform = transform;
			_backoutSpriteRenderer = GetComponent<SpriteRenderer>();
			if (_backoutSpriteRenderer == null)
			{
				_backoutSpriteRenderer = gameObject.AddComponent<SpriteRenderer>();
			}
			if (_backoutSpriteRenderer != null && blackoutTexture == null)
			{
				blackoutTexture = _backoutSpriteRenderer.sprite;
			}
			else
			{
				_backoutSpriteRenderer.sprite = blackoutTexture;
			}
			_backoutSpriteRenderer.sortingOrder = -1;

			var camera = TutorialController.instance.GetStepCamera();
			if (camera == null)
			{
				camera = Camera.main;
			}
			if (camera == null)
			{
				return;
			}
			InitSize(camera);
		}

		private void InitSize(Camera camera)
		{
			float worldScreenHeight = camera.orthographicSize * 2;
			float worldScreenWidth = worldScreenHeight / Screen.height * Screen.width;

			if (_backoutSpriteRenderer.sprite == null)
			{
				return;
			}

			_transform.localScale = new Vector3(
				worldScreenWidth / _backoutSpriteRenderer.sprite.bounds.size.x,
				worldScreenHeight / _backoutSpriteRenderer.sprite.bounds.size.y, 1);
		}

		public void ConfigurateBlackout()
		{
			SetBlackoutColor(blackoutColor);
		}

		private void SetBlackoutColor(Color color)
		{
			if (_backoutSpriteRenderer == null)
			{
				Init();
			}
			_backoutSpriteRenderer.color = color;
		}
	}

}
