// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'

Shader "Cordy2/Diffuse WorldUV" {
	Properties {
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_Params ("xf,yf,xo,yo", Vector) = (1.0, 1.0, 0.0, 0.0)
		//_RippleParams ("RippleParams", Vector) = (0.6, 2.0, 0.008, 0.0)
		_Color ("Main Color", Color) = (1,1,1,1)
	}
//	SubShader {
//		LOD 43
//        Tags { "RenderType"="Opaque" }
//		Lighting Off
//		Fog {Mode Off}
//		Pass {
//			CGPROGRAM
//			#pragma vertex vert
//			#pragma fragment frag
//			#pragma fragmentoption ARB_precision_hint_fastest
//			#include "UnityCG.cginc"
//
//			struct vertIn {
//				float4 vertex : POSITION;
//			};
//			struct v2f {
//				float4 vertex : SV_POSITION;
//				float3 uv : TEXCOORD0;
//			};
//			float4 _Params;
//			float3 _RippleParams;
//			float4 _WrappedTime;
//			uniform fixed4 _Color;
//			uniform sampler2D _MainTex;
//
//			v2f vert (vertIn v)
//			{
//				v2f o;
//				o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
//				float3 pos = mul(_Object2World, v.vertex).xyz;
//				o.uv.xy = (_Params.zw + pos.xy) * _Params.xy;
//				o.uv.z = pos.y * _RippleParams.x - _WrappedTime.w * _RippleParams.y;
//				return o;
//			}
//			fixed4 frag (v2f i) : COLOR
//			{
//				i.uv.x += sin(i.uv.z) * _RippleParams.z;
//				return _Color * tex2D(_MainTex, i.uv.xy);
//			}
//			ENDCG
//		}
//	}
	
	// cheaper version (without ripples)
	SubShader {
        Tags { "RenderType"="Opaque" }
		Lighting Off
		Fog {Mode Off}
		Pass {
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma fragmentoption ARB_precision_hint_fastest
			#include "UnityCG.cginc"

			struct vertIn {
				float4 vertex : POSITION;
			};
			struct v2f {
				float4 vertex : SV_POSITION;
				half2 uv : TEXCOORD0;
			};
			half4 _Params;
			uniform fixed4 _Color;
			uniform sampler2D _MainTex;

			v2f vert (vertIn v)
			{
				v2f o;
				o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
				half3 pos = mul(unity_ObjectToWorld, v.vertex).xyz;
				o.uv.xy = (_Params.zw + pos.xy) * _Params.xy;
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
