Shader "SilverTree/Additive Blend" {
	Properties {
		_Color ("Main Color", Color) = (1,1,1,1)
		_MainTex ("Base (RGBA)", 2D) = "white" {}
	}
	SubShader {
		Tags { "Queue" = "Transparent+42" "RenderType"="Transparent" }
		Lighting Off
		Fog {Mode Off}
		Pass{
		    ZWrite Off Blend SrcAlpha One

GLSLPROGRAM


#ifdef VERTEX

varying mediump vec2 uv;

void main() {
	uv = gl_MultiTexCoord0.xy;
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
}

#endif

#ifdef FRAGMENT

varying mediump vec2 uv;
uniform sampler2D _MainTex;
uniform lowp vec4 _Color;

void main() {
	gl_FragColor = _Color * texture2D(_MainTex, uv);
}

#endif

ENDGLSL

		}
	} 
	SubShader {
		Tags { "Queue" = "Transparent+42" "RenderType"="Transparent" }
		Lighting Off
		Fog {Mode Off}
		Pass{
		    ZWrite Off ZTest Off Blend SrcAlpha One
			SetTexture [_MainTex] { constantColor[_Color] combine texture * constant }
		}
	} 
}
