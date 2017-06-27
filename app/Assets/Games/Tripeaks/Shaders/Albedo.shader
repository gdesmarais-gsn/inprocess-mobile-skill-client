// simplest possible textured shader
Shader "SilverTree/Albedo" {
	Properties {
		_MainTex ("Base (RGB)", 2D) = "white" {}
	}
	SubShader {
        Tags { "RenderType"="Opaque" }
		Lighting Off
		//Fog { Mode Off }
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
				half2 uv : TEXCOORD0;
			};
			uniform sampler2D _MainTex;

			v2f vert (vertIn v)
			{
				v2f o;
				o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
				o.uv.xy = v.texcoord.xy;
				return o;
			}
			fixed4 frag (v2f i) : COLOR
			{
				return tex2D(_MainTex, i.uv.xy);
			}
			ENDCG
		}
	} 
	SubShader {
        Tags { "RenderType"="Opaque" }
		Lighting Off
		//Fog { Mode Off }
		Pass{
			SetTexture [_MainTex] { combine texture }
		}
	} 
}
