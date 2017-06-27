Shader "2d/WorldSpace Sprite RGBB Vertex Color NoHint" {
	Properties {
		_Color ("Main Color", Color) = (1,1,1,1)
		_MainTex ("Base (RGBA)", 2D) = "white" {}
	}
	SubShader {
		Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
		Fog { Mode Off}
		ZWrite Off
		Lighting Off
		Cull Off
		Pass{
			Blend SrcAlpha OneMinusSrcAlpha

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
    float4 pos : SV_POSITION;
    fixed2 uv : TEXCOORD0;
    fixed4 color : TEXCOORD1;
};
uniform fixed4 _Color;
			v2f vert (vertIn v)
			{
				v2f o;
				o.pos = mul(UNITY_MATRIX_MVP, v.vertex);
				o.uv.xy = v.texcoord.xy;
				o.color = _Color * v.color;
				return o;
			}
uniform sampler2D _MainTex;
			float4 frag (v2f i) : COLOR
			{
				float3 incolor = tex2D(_MainTex, i.uv.xy);

				fixed4 outcolor;
				fixed key = incolor.g + incolor.g;
				outcolor.r = incolor.b;
				outcolor.g = incolor.r;
				outcolor.b = key - 1.0;
				outcolor.a = key;
//				if(key < 1.0)
//				{
//					outcolor.rg += -0.125*key;
//					outcolor.b = incolor.r;
//				}

				return i.color * outcolor;
			}
ENDCG
		}
	} 
}

