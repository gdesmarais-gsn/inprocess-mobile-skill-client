Shader "SilverTree/World Space Mask (Text)" {
	Properties {
		_MainTex ("Atlas", 2D) = "white" {}
		_MaskTex ("Mask", 2D) = "white" {}
		_Color ("Color", Color) = (1,1,1,1)
		_OutlineColor ("OutlineColor", Color) = (0,0,0,0)
//		_CanvasWidth ("FlashResolutionWidth", Float) = 1280.0
//		_CanvasHeight("FlashResolutionHeight", Float) = 752
//		_RotationVector1("RotationVector1", Vector) = (1.0, 0.0, 0.0, 0.0)
//		_RotationVector2("RotationVector2", Vector) = (0.0, 1.0, 0.0, 0.0)
	}


	// cg version
	SubShader {
        //Tags { "Queue"="Transparent+5" "IgnoreProjector"="True" "RenderType"="Transparent" }
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
    fixed2 uv : TEXCOORD0;
    half4 uvmask : TEXCOORD1;
};

//float _CanvasWidth;
//float _CanvasHeight;
//float4 _RotationVector1;
//float4 _RotationVector2;

uniform float4x4 _ScreenToMaskUV;
uniform float4x4 _ScreenToRootLocalCamDir;

v2f vert (vertIn v)
{
    v2f o;
	float4 spos = mul(UNITY_MATRIX_MVP, v.vertex);
	o.vertex = spos;
	o.uv.xy = v.texcoord.xy;
	float3 mpos = mul(_ScreenToMaskUV, spos).xyz;
	float3 cpos = mul(_ScreenToRootLocalCamDir, spos).xyz;
	o.uvmask = half4(mpos.xy*cpos.z - cpos.xy*mpos.z, cpos.zz);
    return o;
}

sampler2D _MainTex;
uniform sampler2D _MaskTex;
fixed4 _Color;
fixed4 _OutlineColor;

float4 frag (v2f i) : COLOR
{
    fixed4 texcol = tex2D(_MainTex, i.uv.xy);
    return float4(_Color.rgb * (texcol.r + _OutlineColor.rgb), texcol.g * _Color.a * tex2Dproj(_MaskTex, UNITY_PROJ_COORD(i.uvmask)).a);
}
ENDCG

		}
	} 
}