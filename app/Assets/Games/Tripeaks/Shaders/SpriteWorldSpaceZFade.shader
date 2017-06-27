Shader "2d/WorldSpace Sprite Z-Fade" {
	Properties {
		_MainTex ("Base (RGBA)", 2D) = "white" {}
		_Color ("Main Color", Color) = (1,1,1,1)
		_Color2 ("Sub Color", Color) = (1,1,1,0)
		_ZFactor ("Z Factor", Float) = 20.0
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
};
struct v2f {
    float4 pos : SV_POSITION;
    fixed2 uv : TEXCOORD0;
    fixed4 color : TEXCOORD1;
};
uniform fixed4 _Color;
uniform fixed4 _Color2;
uniform half _ZFactor;
			v2f vert (vertIn v)
			{
				v2f o;
				o.color = lerp(_Color, _Color2, abs(v.vertex.z) * _ZFactor);
				v.vertex.z = 0.0;
				o.pos = mul(UNITY_MATRIX_MVP, v.vertex);
				o.uv.xy = v.texcoord.xy;
				return o;
			}
uniform sampler2D _MainTex;
			float4 frag (v2f i) : COLOR
			{
				float4 rv = tex2D(_MainTex, i.uv.xy) * i.color;
				return rv;
			}
ENDCG
		}
	} 
}


