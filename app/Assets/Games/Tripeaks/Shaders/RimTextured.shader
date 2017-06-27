Shader "SilverTree/RimTextured" {
	Properties {
		_Color ("Main Color", Color) = (1,1,1,1)
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_Rim ("Rim", Float) = 1.0
		_Fill ("Fill", Float) = 0.0
	}
	SubShader {
		Lighting Off
		Tags { "IgnoreProjector"="True" "RenderType"="Opaque" }
		Pass{
			Tags { "LightMode"="Always" }
CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_precision_hint_fastest
#include "UnityCG.cginc"

struct vertIn {
    float4 vertex : POSITION;
    float4 texcoord : TEXCOORD0;
    float3 normal : NORMAL;
};

struct v2f {
    float4 pos : SV_POSITION;
    half3 texcoord : TEXCOORD0;
};

fixed4 _Color;
half _Rim;
half _Fill;
sampler2D _MainTex;

v2f vert (vertIn v)
{
    v2f o;
    o.pos = mul(UNITY_MATRIX_MVP, v.vertex);
    o.texcoord.z = -normalize(mul(UNITY_MATRIX_IT_MV, float4(v.normal, 0.0)).xyz).z;
    o.texcoord.xy = v.texcoord.xy;
    return o;
}

float4 frag (v2f i) : COLOR
{
	half fill = (i.texcoord.z);
	half rim = 1.0 + fill;
	return _Color * (rim*rim * _Rim - fill * _Fill) * tex2D(_MainTex, i.texcoord.xy);
}
ENDCG

		}
	} 
}
