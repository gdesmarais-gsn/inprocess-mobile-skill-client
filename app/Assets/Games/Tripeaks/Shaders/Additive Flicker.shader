Shader "SilverTree/Additive Flicker" {
Properties {
	_MainTex ("Base (RGBA)", 2D) = "white" {}
	_Params ("Speed,Factor,Base,_", Vector) = (500.0, 0.05, 0.97, 0.0)
}

Category {
	Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" }
	Blend SrcAlpha One
	Cull Off Lighting Off ZWrite Off Fog { Mode Off }
	SubShader {
        Tags { "RenderType"="Transparent" }
		Pass {
CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_precision_hint_fastest
#include "UnityCG.cginc"

struct vertIn {
    float4 vertex : POSITION;
    float2 texcoord : TEXCOORD0;
};

struct v2f {
    float4 vertex : SV_POSITION;
    half2 uv : TEXCOORD0;
};

fixed4 _RimColor;

v2f vert (vertIn v)
{
    v2f o;
    o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
	o.uv = v.texcoord.xy;
    return o;
}

uniform sampler2D _MainTex;
uniform half4 _Params;

float4 frag (v2f i) : COLOR
{
	fixed4 color = tex2D(_MainTex, i.uv);
	color *= frac(_Time.w * _Params.x) * _Params.y + _Params.z;
	return color;
}
ENDCG
		}
	}
}
}