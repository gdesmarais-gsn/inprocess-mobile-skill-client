// (fake) PRE-MULTIPLIED ALPHA
Shader "SilverTree/Hybrid AutoAlpha Glow" {
	Properties {
		_Color ("Main Color", Color) = (1,1,1,1)
		_MainTex ("Base (RGB)", 2D) = "white" {}
	}
	SubShader {
		Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
		Lighting Off
		ZWrite Off
		Fog {Mode Off}
		Pass{
			Blend One OneMinusSrcAlpha

GLSLPROGRAM

varying mediump vec2 uv;
varying lowp vec4 color;
uniform lowp vec4 _Color;
#ifdef VERTEX

void main() {
	uv = gl_MultiTexCoord0.xy;
	color = gl_Color.rgba * _Color.rgba;
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
}

#endif

#ifdef FRAGMENT

uniform sampler2D _MainTex;

void main() {
    lowp vec4 result = color.rgba * texture2D(_MainTex, uv).rgbg;
    mediump float a = result.a;
    a = a * 12.0 - 2.0;
    result.a = a;
	gl_FragColor = result;
}

#endif

ENDGLSL

		}
	}
	
	// cg version
	SubShader {
		Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
		Lighting Off
		ZWrite Off
		Fog {Mode Off}
		Pass{
			Blend One OneMinusSrcAlpha

CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_precision_hint_fastest
#include "UnityCG.cginc"

struct vertIn {
    float4 vertex : POSITION;
    float4 texcoord : TEXCOORD0;
    float4 color : COLOR;
};

struct v2f {
    float4 vertex : SV_POSITION;
    half2 uv : TEXCOORD0;
    fixed4 color : TEXCOORD1;
};

uniform fixed4 _Color;
uniform sampler2D _MainTex;

v2f vert (vertIn v)
{
	v2f o;
	o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
	o.uv = v.texcoord.xy;
	o.color = v.color.rgba * _Color.rgba;
	return o;
}

float4 frag (v2f i) : COLOR
{
    fixed4 result = i.color.rgba * tex2D(_MainTex, i.uv).rgbg;
    half a = result.a;
    a = a * 12.0 - 2.0;
    result.a = a;
	return result;
}
ENDCG
		}
	}
	
	SubShader {
		Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
		BindChannels {
			   Bind "Vertex", vertex
			   Bind "Texcoord", texcoord
			   Bind "Color", color
		}
		Lighting Off
		ZWrite Off
		Fog {Mode Off}
		Pass{
			Blend SrcColor OneMinusSrcColor
			SetTexture [_MainTex] { constantColor[_Color] combine primary * constant }
			SetTexture [_MainTex] { combine previous * texture }
		}
	}
}
