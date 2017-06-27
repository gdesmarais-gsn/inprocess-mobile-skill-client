// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'

Shader "2d/Wavy Transparent" {
	Properties {
		_MainTex("Texture (RGBA)", 2D) = "white" {}
		_WaveParams("Wave: X=xSize, Y=ySize, Z=speed, W=posFactor", Vector) = (0.25,0.25,4,0.25)
		_UVParams("UVs: X=xSpeed, Y=ySpeed, Z=xScale, W=yScale", Vector) = (0,0,1,1)
	}
	SubShader {
		Tags { "Queue"="Transparent" "RenderType"="Transparent" }
		Blend SrcAlpha OneMinusSrcAlpha

		Cull Off
		Lighting Off
		ZWrite Off
		Fog {Mode Off}
		
		Pass {
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma fragmentoption ARB_precision_hint_fastest
			#include "UnityCG.cginc"

			sampler2D _MainTex;
			float4 _WrappedTime;
			float4 _WaveParams;
			float4 _UVParams;

			struct vertIn {
				float4 vertex : POSITION;
				half4 texcoord : TEXCOORD0;
			};
			struct v2f {
				float4 position : SV_POSITION;
				half2 uv : TEXCOORD0;
			};

			v2f vert (vertIn input) {
				float4 world = mul(unity_ObjectToWorld, input.vertex);
				float offset = dot(world.xyz, _WaveParams.www);
				float angle = (_WrappedTime.w + offset) * _WaveParams.z;
				
				float2 dir;
				sincos(angle, dir.x, dir.y);
				input.vertex.xy += dir * _WaveParams.xy;

				v2f o;
				o.position = mul(UNITY_MATRIX_MVP, input.vertex);
				float2 uv = input.texcoord.xy;
				uv.xy *= _UVParams.zw;
				uv.xy += _WrappedTime.w * _UVParams.xy;
				o.uv = uv;
				return o;
			}

			fixed4 frag (v2f i) : COLOR {
				return tex2D(_MainTex, i.uv);
			}
			ENDCG
		}
	}
}
