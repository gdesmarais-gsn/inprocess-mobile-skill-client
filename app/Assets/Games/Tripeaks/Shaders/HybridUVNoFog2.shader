Shader "Cordy2/HybridBlendUVNoFog" {
	Properties {
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_Speed ("X, Y, _, _", Vector) = (0.1,0,0,0)
		_Color ("Main Color", Color) = (1,1,1,1)
	}
	SubShader {
		Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
		Lighting Off
		ZWrite Off
		Fog { Mode Off }
		Pass {
			Blend One OneMinusSrcAlpha
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
			uniform fixed4 _Color;

			v2f vert (vertIn v)
			{
				v2f o;
				o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
				o.uv.xy = v.texcoord.xy;
				o.uv.xy += _Time.x * _Speed;
				return o;
			}
			fixed4 frag (v2f i) : COLOR
			{
				return _Color * tex2D(_MainTex, i.uv.xy);
			}
			ENDCG
		}
	} 

} 