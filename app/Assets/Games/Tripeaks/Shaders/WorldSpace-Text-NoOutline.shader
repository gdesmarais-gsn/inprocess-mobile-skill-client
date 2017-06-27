Shader "SilverTree/World Space (Text) (No Outline)" {
	Properties {
		_MainTex ("Atlas", 2D) = "white" {}
		_Color ("ModColor", Color) = (1,1,1,1)
		_OutlineColor ("OutlineColor", Color) = (0,0,0,0)
//		_CanvasWidth ("FlashResolutionWidth", Float) = 1280.0
//		_CanvasHeight("FlashResolutionHeight", Float) = 752
//		_RotationVector1("RotationVector1", Vector) = (1.0, 0.0, 0.0, 0.0)
//		_RotationVector2("RotationVector2", Vector) = (0.0, 1.0, 0.0, 0.0)
	}

	// cg version
	SubShader {
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

float4 frag (v2f i) : COLOR
{
	//return float4(_Color.xyz, tex2D(_MainTex, i.uv).y * _Color.w);

    fixed4 texcol = tex2D(_MainTex, i.uv);
	//return float4(_Color.rgb, texcol.r * _Color.a);
	return float4(_Color.rgb, texcol.r * _Color.a * 1.4); // HACK for brighter white on map screen, since we're not currently using this shader anywhere else
}
ENDCG

		}
	} 
}
