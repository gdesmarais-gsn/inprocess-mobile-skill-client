using UnityEngine;
using System.Collections;
using UnityEngine.UI;

// Exposes attributes of materials using the UIAlphaMask shader to animators

[ExecuteInEditMode]
[RequireComponent (typeof (Image))]
public class AnimMAT : MonoBehaviour {
	
	private Material _material;

	public float texOffsetX;
	public float textOffsetY;
	public float alphaOffsetX;
	public float alphaOffsetY;
	public float texScaleX;
	public float texScaleY;

	private float _tex_offset_X = 0.0f;
	private float _tex_offset_Y = 0.0f;
	private float _alpha_offset_X = 0.0f;
	private float _alpha_offset_Y = 0.0f;
	private float _tex_scale_X = 1.0f;
	private float _tex_scale_Y = 1.0f;

	private Image _image;
	
	void Awake() {
		
		_image = gameObject.GetComponent<Image> ();
		_material = _image.material;

		//_material = Instantiate (_image.material);
		//_image.material = _material;
	}

	void  Update ()
	{
		if (texOffsetX != _tex_offset_X || textOffsetY != _tex_offset_Y) 
		{
			_tex_offset_X = texOffsetX;
			_tex_offset_Y = textOffsetY;
			_material.SetTextureOffset ("_MainTex", new Vector2 (texOffsetX, textOffsetY));
		}

		if (alphaOffsetX != _alpha_offset_X || alphaOffsetY != _alpha_offset_Y) 
		{
			_alpha_offset_X = alphaOffsetX;
			_alpha_offset_Y = alphaOffsetY;
			_material.SetTextureOffset ("_Alpha", new Vector2 (alphaOffsetX, alphaOffsetY));
		}

		if (texScaleX != _tex_scale_X || texScaleY != _tex_scale_Y) 
		{
			_tex_scale_X = texScaleX;
			_tex_scale_Y = texScaleY;
			_material.SetTextureScale ("_MainTex", new Vector2 (texScaleX, texScaleY));
		}
	}
}