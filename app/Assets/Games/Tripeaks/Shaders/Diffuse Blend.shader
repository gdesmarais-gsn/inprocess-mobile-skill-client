Shader "SilverTree/Diffuse Blend" {
	Properties {
		_Color ("Main Color", Color) = (1,1,1,1)
		_MainTex ("Base (RGBA)", 2D) = "white" {}
	}
	SubShader {
		Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
		ZWrite Off
		Lighting Off
		Fog {Mode Off}
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
};
			v2f vert (vertIn v)
			{
				v2f o;
				o.pos = mul(UNITY_MATRIX_MVP, v.vertex);
				o.uv = v.texcoord.xy;
				return o;
			}
uniform sampler2D _MainTex;
uniform fixed4 _Color;
			float4 frag (v2f i) : COLOR
			{
				 float4 rv = _Color * tex2D(_MainTex, i.uv);
				 return rv;
			}
ENDCG

		}
	} 
	SubShader {
		Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
		ZWrite Off
		Lighting Off
		Fog {Mode Off}
		Pass{
			Blend SrcAlpha OneMinusSrcAlpha
			SetTexture [_MainTex] { constantColor[_Color] combine texture * constant }
		}
	} 
}
