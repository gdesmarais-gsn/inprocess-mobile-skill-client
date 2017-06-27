Shader "Cordy2/Gradient Y" {
	Properties {
		_TopColor ("Top Color", Color) = (0,0,0,0)
		_BottomColor ("Bottom Color", Color) = (0,0,0,1)
		_MainTex ("Base (RGB)", 2D) = "white" {}
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
				fixed2 uv : TEXCOORD0;
				fixed4 color : TEXCOORD1;
			};
			uniform sampler2D _MainTex;
			uniform fixed4 _TopColor;
			uniform fixed4 _BottomColor;

			v2f vert (vertIn v)
			{
				v2f o;
				o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
				o.uv.xy = v.texcoord.xy;
				half factor = (o.vertex.y / o.vertex.w * 0.5 + 0.5);
				o.color = lerp(_BottomColor, _TopColor, factor) * 2.0;
				return o;
			}
			fixed4 frag (v2f i) : COLOR
			{
				//return tex2D(_MainTex, i.uv.xy) + i.uv.z - 0.5;
				//return tex2D(_MainTex, i.uv.xy) / (1.5 - i.uv.z);
				//return lerp(tex2D(_MainTex, i.uv.xy), float4(40/255.0,53/255.0,22/255.0,1), i.uv.z);
				//return lerp(tex2D(_MainTex, i.uv.xy), float4(0,0,0,0), i.uv.z);
				//return lerp(tex2D(_MainTex, i.uv.xy), i.color.rgba, i.color.a);
				return tex2D(_MainTex, i.uv.xy) * i.color.rgba;
			}
			ENDCG
		}
	} 
}
