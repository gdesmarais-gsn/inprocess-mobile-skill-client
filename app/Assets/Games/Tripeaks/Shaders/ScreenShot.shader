Shader "SilverTree/Screen Shot Background" {
	Properties {
		_MainTex ("Screenshot", 2D) = "white" {}
		_MixTex("Secondary", 2D) = "white" {}
		_CanvasWidth ("FlashResolutionWidth", Float) = 1280.0
		_CanvasHeight("FlashResolutionHeight", Float) = 752
		_Vignette("VignetteAmount", Float) = 1
		_RotationVector1("RotationVector1", Vector) = (1.0, 0.0, 0.0, 0.0)
		_RotationVector2("RotationVector2", Vector) = (0.0, 1.0, 0.0, 0.0)
	}
	SubShader {
		Tags {"Queue" = "Background" }
		Pass {
			//Blend SrcAlpha OneMinusSrcAlpha
			ZWrite Off
			ZTest Off
			Cull Off
			Lighting Off

GLSLPROGRAM

varying lowp vec2 uv;
#ifdef VERTEX

uniform float _CanvasWidth;
uniform float _CanvasHeight;
uniform vec4 _RotationVector1;
uniform vec4 _RotationVector2;

void main() {
	uv = gl_MultiTexCoord0.xy;
	mat4 canvas = mat4 (
		2.0/_CanvasWidth, 0.0, 0.0, 0.0,
		0.0, 2.0/_CanvasHeight, 0.0, 0.0,
		0.0, 0.0, 1.0, 0.0,
		-1.0, 1.0, 0.0, 1.0
	);	

	mat4 rot = mat4(
		_RotationVector1,
		_RotationVector2,
		0.0, 0.0, 1.0, 0.0,
		0.0, 0.0, 0.0, 1.0 
		);

	gl_Position = rot * canvas * gl_Vertex;
}

#endif

#ifdef FRAGMENT

uniform sampler2D _MainTex;
uniform sampler2D _MixTex;
uniform lowp float _Vignette;

void main() {
	gl_FragColor = mix(vec4(1.0, 1.0, 1.0, 1.0), texture2D(_MixTex, uv), _Vignette) * texture2D(_MainTex, uv);
}

#endif

ENDGLSL

		}
	} 

	// cg version
	SubShader {
		Tags {"Queue" = "Background" }
		Pass {
			//Blend SrcAlpha OneMinusSrcAlpha
			ZWrite Off
			ZTest Off
			Cull Off
			Lighting Off

CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_precision_hint_fastest
#include "UnityCG.cginc"

struct vertIn {
    float4 vertex : POSITION;
    float4 texcoord : TEXCOORD0;
    fixed4 color : COLOR;
};

struct v2f {
    float4 vertex : SV_POSITION;
    fixed2 uv : TEXCOORD0;
};

float _CanvasWidth;
float _CanvasHeight;
float4 _RotationVector1;
float4 _RotationVector2;

v2f vert (vertIn v)
{
    v2f o;
	o.uv = v.texcoord.xy;
	float4x4 canvas = float4x4 (
		2.0/_CanvasWidth, 0.0, 0.0, 0.0,
		0.0, 2.0/_CanvasHeight, 0.0, 0.0,
		0.0, 0.0, 1.0, 0.0,
		-1.0, 1.0, 0.0, 1.0
	);	
	float4x4 rot = float4x4(
		_RotationVector1,
		_RotationVector2,
		0.0, 0.0, 1.0, 0.0,
		0.0, 0.0, 0.0, 1.0 
		);

	float4 temp = mul(v.vertex, canvas);
	o.vertex = mul(temp, rot);
    return o;
}

sampler2D _MainTex;
sampler2D _MixTex;
fixed _Vignette;

float4 frag (v2f i) : COLOR
{
	return lerp(fixed4(1.0, 1.0, 1.0, 1.0), tex2D(_MixTex, i.uv), _Vignette) * tex2D(_MainTex, i.uv);
}

ENDCG

		}
	} 

}
