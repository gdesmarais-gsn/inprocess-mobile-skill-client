Shader "2d/WorldSpace Sprite RGBB Mask Z-Fade" {
	Properties {
		_MainTex ("Base (RGBA)", 2D) = "white" {}
		_MaskTex ("Mask (A)", 2D) = "white" {}		
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
    half4 uvmask : TEXCOORD1;
    fixed4 color : TEXCOORD2;
};

uniform float4x4 _ScreenToMaskUV;
uniform float4x4 _ScreenToRootLocalCamDir;

uniform fixed4 _Color;
uniform fixed4 _Color2;
uniform half _ZFactor;

			v2f vert (vertIn v)
			{
				v2f o;
				o.color = lerp(_Color, _Color2, abs(v.vertex.z) * _ZFactor);
				v.vertex.z = 0.0;
				float4 spos = mul(UNITY_MATRIX_MVP, v.vertex);
				o.pos = spos;
				o.uv.xy = v.texcoord.xy;
				float3 mpos = mul(_ScreenToMaskUV, spos).xyz;
				float3 cpos = mul(_ScreenToRootLocalCamDir, spos).xyz;
				o.uvmask = half4(mpos.xy*cpos.z - cpos.xy*mpos.z, cpos.zz);
				return o;
			}
uniform sampler2D _MainTex;
uniform sampler2D _MaskTex;
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

				return i.color * outcolor * tex2Dproj(_MaskTex, UNITY_PROJ_COORD(i.uvmask)).a;
			}
ENDCG
		}
	} 
}
