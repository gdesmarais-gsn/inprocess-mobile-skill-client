Shader "2d/WorldSpace Sprite Grayscale" {
	Properties {
		_TintAndDesaturation ("Tint and Desaturation Factor", Color) = (0.392, 0.835, 1.0, 1.0)
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
};
struct v2f {
    float4 pos : SV_POSITION;
    fixed2 uv : TEXCOORD0;
};
			v2f vert (vertIn v)
			{
				v2f o;
				o.pos = mul(UNITY_MATRIX_MVP, v.vertex);
				o.uv.xy = v.texcoord.xy;
				return o;
			}

uniform sampler2D _MainTex;
uniform fixed4 _TintAndDesaturation;

			float4 frag (v2f i) : COLOR
			{
				fixed4 rv = tex2D(_MainTex, i.uv.xy);
				fixed gc = dot(rv.rgb, fixed3(0.299,0.587,0.114));
				fixed3 tinted = gc * _TintAndDesaturation.rgb;
				fixed4 gray = fixed4(tinted, rv.a);
				rv = lerp(rv, gray, _TintAndDesaturation.a);
				return rv;
			}
ENDCG
		}
	} 
}
