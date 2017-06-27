Shader "SilverTree/Vertex Color Blended 2x" {
	Properties {
		_Color ("Main Color", Color) = (1,1,1,1)
		_MainTex ("Base (RGBA)", 2D) = "white" {}
	}
	SubShader {
		Tags { "Queue" = "Transparent+1" "RenderType"="Transparent" }
		ZWrite Off
		Lighting Off
		Fog {Mode Off}

		// since this shader is for particle effects
		// (hack; may need a separate version of this shader with ztest on if we use it for particles in the 3D scene too)
		ZTest Off
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
    float4 color : COLOR;
    float4 texcoord : TEXCOORD0;
};
struct v2f {
    float4 pos : SV_POSITION;
    fixed4 color : TEXCOORD0;
    fixed2 uv : TEXCOORD1;
};
uniform fixed4 _Color;
			v2f vert (vertIn v)
			{
				v2f o;
				o.pos = mul(UNITY_MATRIX_MVP, v.vertex);
				o.uv = v.texcoord.xy;
				o.color = v.color * _Color * fixed4(2.0, 2.0, 2.0, 1.0);
				return o;
			}
uniform sampler2D _MainTex;
			float4 frag (v2f i) : COLOR
			{
				 return i.color * tex2D(_MainTex, i.uv);
			}
ENDCG

		}
	} 
}
