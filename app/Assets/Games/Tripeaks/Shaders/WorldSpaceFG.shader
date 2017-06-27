Shader "SilverTree/World Space (FG)" {
	Properties {
		_MainTex ("Atlas", 2D) = "white" {}
		_Color ("ModColor", Color) = (1,1,1,1)
		//_UVParams ("u0,v0,us,vs", Vector) = (0,0,1,1)
//		_CanvasWidth ("FlashResolutionWidth", Float) = 1280.0
//		_CanvasHeight("FlashResolutionHeight", Float) = 752
//		_RotationVector1("RotationVector1", Vector) = (1.0, 0.0, 0.0, 0.0)
//		_RotationVector2("RotationVector2", Vector) = (0.0, 1.0, 0.0, 0.0)
	}

	SubShader {
        Tags { "Queue"="Transparent+4" "IgnoreProjector"="True" "RenderType"="Transparent" }
		Pass {
			Blend SrcAlpha OneMinusSrcAlpha
			ZWrite Off
			Cull Off
			Lighting Off
			Fog {Mode Off}

GLSLPROGRAM

varying mediump vec2 uv;
varying mediump vec4 color;
#ifdef VERTEX

uniform lowp vec4 _Color;
//uniform mediump vec4 _UVParams;
//uniform float _CanvasWidth;
//uniform float _CanvasHeight;
//uniform vec4 _RotationVector1;
//uniform vec4 _RotationVector2;


void main() {
	uv = gl_MultiTexCoord0.xy;
	//uv = gl_MultiTexCoord0.xy * _UVParams.zw + _UVParams.xy;
	color = gl_Color * _Color;
//	mat4 canvas = mat4 (
//		2.0/_CanvasWidth, 0.0, 0.0, 0.0,
//		0.0, 2.0/_CanvasHeight, 0.0, 0.0,
//		0.0, 0.0, 1.0, 0.0,
//		-1.0, 1.0, 0.0, 1.0
//	);	
//
//	mat4 rot = mat4(
//		_RotationVector1,
//		_RotationVector2,
//		0.0, 0.0, 1.0, 0.0,
//		0.0, 0.0, 0.0, 1.0 
//		);
//
//
//	gl_Position = rot * canvas * gl_Vertex;
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
    gl_Position.z += -0.005;
}

#endif

#ifdef FRAGMENT

uniform sampler2D _MainTex;


void main() {
	gl_FragColor = color * texture2D(_MainTex, uv);
}

#endif

ENDGLSL

		}
	} 

	// cg version
	SubShader {
        Tags { "Queue"="Transparent+4" "IgnoreProjector"="True" "RenderType"="Transparent" }
		Pass {
			Blend SrcAlpha OneMinusSrcAlpha
			ZWrite Off
			Cull Off
			Lighting Off
			Fog {Mode Off}

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
    float2 uv : TEXCOORD0;
    float4 color : TEXCOORD1;
};

//float _CanvasWidth;
//float _CanvasHeight;
fixed4 _Color;
//half4 _UVParams;
//float4 _RotationVector1;
//float4 _RotationVector2;

v2f vert (vertIn v)
{
    v2f o;
	o.uv = v.texcoord.xy;
	//o.uv = v.texcoord.xy * _UVParams.zw + _UVParams.xy;
	o.color = v.color * _Color;
//	float4x4 canvas = float4x4 (
//		2.0/_CanvasWidth, 0.0, 0.0, 0.0,
//		0.0, 2.0/_CanvasHeight, 0.0, 0.0,
//		0.0, 0.0, 1.0, 0.0,
//		-1.0, 1.0, 0.0, 1.0
//	);	
//	float4x4 rot = float4x4(
//		_RotationVector1,
//		_RotationVector2,
//		0.0, 0.0, 1.0, 0.0,
//		0.0, 0.0, 0.0, 1.0 
//		);
//
//	float4 temp = mul(v.vertex, canvas);
//	o.vertex = mul(temp, rot);
//	//o.vertex = mul(v.vertex, canvas);
	o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
    o.vertex.z += -0.005;
    return o;
}

sampler2D _MainTex;

float4 frag (v2f i) : COLOR
{
	return i.color * tex2D(_MainTex, i.uv);
}
ENDCG

		}
	} 
}
