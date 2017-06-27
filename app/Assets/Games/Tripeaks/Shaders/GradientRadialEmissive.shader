Shader "Cordy2/Gradient Radial Emissive" {
	Properties {
		_InnerColor ("Inner Color", Color) = (0.5,0.5,0.5,1)
		_OuterColor ("Outer Color", Color) = (0,0,0.25,0)
		_MainTex ("Base (RGB)", 2D) = "white" {}
	}
	SubShader {
        Tags { "RenderType"="Opaque" }
		Lighting Off
		Fog {Mode Off}//
		Pass {
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
				float4 vertex : SV_POSITION;
				fixed2 uv : TEXCOORD0;
				half2 factor : TEXCOORD1;
			};
			uniform half4 _CustomScreenParams;
			uniform sampler2D _MainTex;
			uniform fixed4 _OuterColor;
			uniform fixed4 _InnerColor;

			v2f vert (vertIn v)
			{
				v2f o;
				o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
				o.uv.xy = v.texcoord.xy;
				o.factor = (o.vertex.xy * half2(_CustomScreenParams.z, 1.0) / o.vertex.w);
				return o;
			}
			fixed4 frag (v2f i) : COLOR
			{
				half f = dot(i.factor, i.factor);
				half4 color = lerp(_InnerColor, _OuterColor, f) * 2.0;
				fixed4 texcolor = tex2D(_MainTex, i.uv.xy);
				return texcolor * lerp(color, fixed4(1.0,1.0,1.0,1.0), (1.0 - texcolor.a) * color.a);
			}
			ENDCG
		}
	} 
}
