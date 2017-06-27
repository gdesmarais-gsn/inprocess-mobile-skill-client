Shader "2d/WorldSpace Sprite RGBB Mask" {
	Properties {
		_MainTex ("Base (RGBB)", 2D) = "white" {}
		_MaskTex ("Mask (A)", 2D) = "white" {}		
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
    fixed4 uv : TEXCOORD0;
    half4 uvmask : TEXCOORD1;
};

uniform float4x4 _ScreenToMaskUV;
uniform float4x4 _ScreenToRootLocalCamDir;

			v2f vert (vertIn v)
			{
				v2f o;
				
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

				float4 rv = outcolor * tex2Dproj(_MaskTex, UNITY_PROJ_COORD(i.uvmask)).a;
				return rv;
			}
ENDCG
		}
	} 
}
