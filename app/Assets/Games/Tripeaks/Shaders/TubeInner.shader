Shader "SilverTree/Tube (Inner)" {
	Properties {
		_MainTex("Base (RGB)", 2D) = "white" {}
		_GlowTex("Glow", 2D) = "white" {}
		_GlowRatio ("Glow Ratio", Float) = 0
		_RotationsPerSecond ("Rotation Speed", Float) = 1
	}

	SubShader {
		Lighting Off
		Pass {
			Fog { Mode Off }

CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_precision_hint_fastest
#include "UnityCG.cginc"

float saturate(float x)  { 
	return max(0.0, min(1.0, x)); 
}

struct vertIn {
    float4 vertex : POSITION;
    float4 texcoord : TEXCOORD0;
    float4 texcoord2 : TEXCOORD1;
};

struct v2f {
    float4 vertex : SV_POSITION;
    half2 uv : TEXCOORD0;
    half2 uv2 : TEXCOORD1;
    float glow : TEXCOORD2;
};

half _GlowRatio;
float4 _WrappedTime;
half _RotationsPerSecond;

v2f vert (vertIn v)
{
    v2f o;
	half2 uvtemp = v.texcoord.xy;
	uvtemp.y += frac(_RotationsPerSecond * _WrappedTime.w);
	o.uv = v.texcoord.xy;
	o.uv2 = uvtemp;
    o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
//	o.glow = saturate(
//		// m * x + b
//		(-1.0 / 0.01) * o.uv.x + (-1.0 + (1.05 * _GlowRatio) / 0.01)
//	) ;
	o.glow = o.uv.x < _GlowRatio;
    
    return o;
}

sampler2D _MainTex;
sampler2D _GlowTex;

float4 frag (v2f i) : COLOR
{
	return tex2D(_MainTex, i.uv) + i.glow * tex2D(_GlowTex, i.uv2);
}
ENDCG

		}
	}


}
