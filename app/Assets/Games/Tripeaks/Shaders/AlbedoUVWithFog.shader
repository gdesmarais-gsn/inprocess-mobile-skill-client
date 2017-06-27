Shader "Cordy2/AlbedoUVWithFog" {
	Properties {
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_Speed ("X, Y, _, _", Vector) = (0.1,0,0,0)
	}
	SubShader {
        Tags { "RenderType"="Opaque" }
		Lighting Off
		//Fog {Mode Off}
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
				float2 uv : TEXCOORD0;
			};
			float2 _Speed;
			float4 _WrappedTime;
			uniform sampler2D _MainTex;

			v2f vert (vertIn v)
			{
				v2f o;
				o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
				o.uv.xy = v.texcoord.xy;
				o.uv.xy += _WrappedTime.w * _Speed;
				return o;
			}
			fixed4 frag (v2f i) : COLOR
			{
				return tex2D(_MainTex, i.uv.xy);
			}
			ENDCG
		}
	} 
}
