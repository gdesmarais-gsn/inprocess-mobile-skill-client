using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[Serializable]
public class Glyph {
	public string letter;
	public float u0;
	public float u1;
	public float v0;
	public float v1;
	public float pixelOffsetX;
	public float pixelOffsetY;
	public float pixelWidth;
	public float pixelHeight;
	public float actualWidth; // offset to next letter horizontally
}


public class FontAtlas : MonoBehaviour, IAssetExposer {

	const int kAsciiStart = 32;
	const int kAsciiEnd = 127;

	public int fontSize;
	public float ascent;
	public Glyph[] glyphs;
	public Texture2D image;

	Dictionary<char, Glyph> mDict = null;

	public void ReleaseTexture(){
#if !UNITY_EDITOR
		DestroyImmediate( image );
		image = null;
#endif
	}

	public float Descent {
		get { return fontSize - ascent; }
	}

	public void SortGlyphs() {
		var sorted = new Glyph[kAsciiEnd-kAsciiStart];
		for (int i=0; i<glyphs.Length; i++) {
			sorted[glyphs[i].letter[0] - kAsciiStart] = glyphs[i];
		}
		glyphs = sorted;
	}

	public Glyph GlyphFor(char c) {
		if( mDict == null ){
			mDict = new Dictionary<char, Glyph>();
			for( int i = 0 ; i < glyphs.Length ; ++i ){
				mDict.Add( glyphs[i].letter[0], glyphs[i] );
			}
		}
		Glyph rv;
		if(!mDict.TryGetValue(c, out rv)) {
			rv = mDict[' '];
		}
		return rv;
	}

	public float ComputeWidthOf(string msg) {
		int msgLen = msg.Length;
		if(msgLen == 0)
			return 0.0f;
		float result = 0f;
		for(int i=0; i<msgLen-1; ++i) {
			char c = msg[i];
			if (c != '\n') {
				result += GlyphFor(msg[i]).actualWidth;
			}
		}
		for(int i=msgLen-1; i<msgLen; ++i) {
			char c = msg[i];
			if (c != '\n') {
				Glyph g = GlyphFor(msg[i]);
				result += g.pixelOffsetX + g.pixelWidth;
			}
		}
		return result;
	}

	public float ComputeFixedWidthOf(string msg, char baseChar) {
		float result = 0f;
		float baseWidth = GlyphFor(baseChar).actualWidth;
		int msgLen = msg.Length;
		for(int i=0; i<msgLen; ++i) {
			char c = msg[i];
			if (c != '\n') {
				if(c == ',' || c == ':' || c == '.') {
					Glyph g = GlyphFor(msg[i]);
					result += (i == msgLen - 1) ? (g.pixelOffsetX + g.pixelWidth) : g.actualWidth;
				} else {
					result += baseWidth;
				}
			}
		}
		result += baseWidth * 0.375f; // hack for hud text
		return result;
	}

	void IAssetExposer.GetExposedAssetKeys(System.Collections.Generic.List<string> list)
	{
		if(image)
			list.Add("image");
	}

	UnityEngine.Object IAssetExposer.GetExposedAsset(string key)
	{
		if(key == "image")
			return image;
		return null;
	}

	static bool recursionGuard;
	void IAssetExposer.SetExposedAsset(string key, UnityEngine.Object value)
	{
		if(value && !(value is Texture2D))
		{
			return;
		}

		if(key == "image")
		{
			image = (Texture2D)value;
			
			{
				Renderer r = GetComponent<Renderer>();
				if(r && r.sharedMaterial)
					r.sharedMaterial.mainTexture = image;
			}

//			// mega hack: if we're a prefab, try to update our instances
//			if(!recursionGuard)
//			{
//				recursionGuard = true;
//				try
//				{
//					foreach(FontAtlas a in GameObject.FindObjectsOfType(typeof(FontAtlas)))
//					{
//						if(a.gameObject.name == name + "(Clone)")
//						{
//							((IAssetExposer)a).SetExposedAsset(key, value);
//						}
//					}
//				}
//				finally
//				{
//					recursionGuard = false;
//				}
//			}
#if UNITY_EDITOR
			UnityEditor.EditorUtility.SetDirty(this);
#endif
		}
	}
}
