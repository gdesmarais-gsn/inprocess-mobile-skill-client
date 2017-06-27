Shader "SilverTree/World Space (Text)" {
	Properties {
		_MainTex ("Atlas", 2D) = "white" {}
		_Color ("ModColor", Color) = (1,1,1,1)
		_OutlineColor ("OutlineColor", Color) = (0,0,0,0)
//		_CanvasWidth ("FlashResolutionWidth", Float) = 1280.0
//		_CanvasHeight("FlashResolutionHeight", Float) = 752
//		_RotationVector1("RotationVector1", Vector) = (1.0, 0.0, 0.0, 0.0)
//		_RotationVector2("RotationVector2", Vector) = (0.0, 1.0, 0.0, 0.0)
	}

//	SubShader {
//        Tags { "Queue"="Transparent+5" "IgnoreProjector"="True" "RenderType"="Transparent" }
//		Pass {
//			Blend SrcAlpha OneMinusSrcAlpha
//			ZWrite Off
//			Cull Off
//			Lighting Off
//			Fog {Mode Off}
//
//GLSLPROGRAM
//
//varying mediump vec2 uv;
//
//#ifdef VERTEX
//
////uniform float _CanvasWidth;
////uniform float _CanvasHeight;
////uniform mat4 _Object2World;
////uniform vec4 _RotationVector1;
////uniform vec4 _RotationVector2;
//
//void main() {
//	uv = gl_MultiTexCoord0.xy;
////	mat4 canvas = mat4 (
////		2.0/_CanvasWidth, 0.0, 0.0, 0.0,
////		0.0, 2.0/_CanvasHeight, 0.0, 0.0,
////		0.0, 0.0, 1.0, 0.0,
////		-1.0, 1.0, 0.0, 1.0
////	);	
////
////	mat4 rot = mat4(
////		_RotationVector1,
////		_RotationVector2,
////		0.0, 0.0, 1.0, 0.0,
////		0.0, 0.0, 0.0, 1.0 
////		);
////
////	gl_Position = rot * (canvas * (_Object2World * gl_Vertex));
////	gl_Position = gl_ModelViewProjectionMatrix * (_Object2World * gl_Vertex);
//	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
//}
//
//#endif
//#ifdef FRAGMENT
//
//uniform sampler2D _MainTex;
//uniform lowp vec4 _Color;
//uniform lowp vec4 _OutlineColor;
//
//
//void main() {
//	//gl_FragColor = vec4(_Color.xyz, texture2D(_MainTex, uv).y * _Color.w);
//	
//	//lowp vec4 tmp = _Color;
//	//tmp.w = tmp.w * texture2D(_MainTex, uv).y;
//	//gl_FragColor = tmp;
//	
//	lowp vec4 texcol = texture2D(_MainTex, uv);
//	lowp vec4 tmp = _Color;
//	tmp.rgb = tmp.rgb * (texcol.r + _OutlineColor.rgb);
//	tmp.a = tmp.a * texcol.g;
//	gl_FragColor = tmp;
//}
//
//#endif
//
//ENDGLSL
//
//		}
//	} 

	// cg version
	SubShader {
//        Tags { "Queue"="Transparent+5" "IgnoreProjector"="True" "RenderType"="Transparent" }
        Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" }
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
};

struct v2f {
    float4 vertex : SV_POSITION;
    half2 uv : TEXCOORD0;
};

//float _CanvasWidth;
//float _CanvasHeight;
//float4 _RotationVector1;
//float4 _RotationVector2;

v2f vert (vertIn v)
{
    v2f o;
	o.uv = v.texcoord.xy;
//	float4x4 canvas = float4x4 (
//		2.0/_CanvasWidth, 0.0, 0.0, 0.0,
//		0.0, 2.0/_CanvasHeight, 0.0, 0.0,
//		0.0, 0.0, 1.0, 0.0,
//		-1.0, 1.0, 0.0, 1.0
//	);	
//
//	float4x4 rot = float4x4(
//		_RotationVector1,
//		_RotationVector2,
//		0.0, 0.0, 1.0, 0.0,
//		0.0, 0.0, 0.0, 1.0 
//		);
//
//	//o.vertex = mul(mul(_Object2World, v.vertex), canvas);
//	float4 temp = mul(mul(_Object2World, v.vertex), canvas);
//	o.vertex = mul(temp, rot);
//	o.vertex = mul(UNITY_MATRIX_MVP, mul(_Object2World, v.vertex));
	o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
    return o;
}

sampler2D _MainTex;
fixed4 _Color;
fixed4 _OutlineColor;

float4 frag (v2f i) : COLOR
{
	//return float4(_Color.xyz, tex2D(_MainTex, i.uv).y * _Color.w);

    fixed4 texcol = tex2D(_MainTex, i.uv);
	return float4(_Color.rgb * (texcol.r + _OutlineColor.rgb), texcol.g * _Color.a);
}
ENDCG

		}
	} 
}
