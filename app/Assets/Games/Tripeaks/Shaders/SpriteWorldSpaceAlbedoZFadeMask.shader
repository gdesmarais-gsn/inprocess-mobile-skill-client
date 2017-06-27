Shader "2d/WorldSpace Sprite Albedo Mask Z-Fade" {
	Properties {
		_MainTex ("Base (RGBA)", 2D) = "white" {}
		_MaskTex ("Mask (A)", 2D) = "white" {}		
		_Color ("Main Color", Color) = (1,1,1,1)
		_Color2 ("Sub Color", Color) = (1,1,1,0)
		_ZFactor ("Z Factor", Float) = 20.0
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
    half4 uvmask : TEXCOORD1;
    fixed4 color : TEXCOORD2;
};

uniform float4x4 _ScreenToMaskUV;
uniform float4x4 _ScreenToRootLocalCamDir;

uniform fixed4 _Color;
uniform fixed4 _Color2;
uniform half _ZFactor;

			v2f vert (vertIn v)
			{
				v2f o;
				o.color = lerp(_Color, _Color2, abs(v.vertex.z) * _ZFactor);
				float4 spos = mul(UNITY_MATRIX_MVP, v.vertex);
				o.pos = spos;
				o.uv.xy = v.texcoord.xy;
				float3 mpos = mul(_ScreenToMaskUV, spos).xyz;
				float3 cpos = mul(_ScreenToRootLocalCamDir, spos).xyz;
				o.uvmask = half4(mpos.xy*cpos.z - cpos.xy*mpos.z, cpos.zz);
				return o;
			}
uniform sampler2D _MainTex;
uniform sampler2D _MaskTex;
			float4 frag (v2f i) : COLOR
			{
				float4 rv = tex2D(_MainTex, i.uv.xy) * i.color * tex2Dproj(_MaskTex, UNITY_PROJ_COORD(i.uvmask)).a;
				return rv;
			}
ENDCG
		}
	} 
}











// projective interpolation method... unfortunately breaks down with adjacent quads or if the uvs are at a diagonal
//// diffuse blend shader that takes texture coordinate divisors in uv2 for correcting non-rectangular quad warping
//// (see "Getting to know the Q texture coordinate" http://www.xyzw.us/~cass/qcoord/ for an illustration of the problem, but note that it doesn't solve it fully as we do here)
//
//// given quadrilateral coordinates a,b,c,d, here is how to calculate set/adjust the texture coordinates correctly:
////	Vector3 s = c-b;
////	Vector3 p1 = (a+b)*0.5f;
////	Vector3 r1 = (c+d)*0.5f-p1;
////	float tt1 = Mathf.Sqrt(Vector3.Cross(b - p1, r1).sqrMagnitude / Vector3.Cross(r1, s).sqrMagnitude);
////	Vector3 p2 = (a+c)*0.5f;
////	Vector3 r2 = (b+d)*0.5f-p2;
////	float tt2 = Mathf.Sqrt(Vector3.Cross(b - p2, r2).sqrMagnitude / Vector3.Cross(r2, s).sqrMagnitude);
////	float factorX = 0.5f / (1.0f - tt1);
////	float factorY = 0.5f / (1.0f - tt2);
////	float invFactorX = 0.5f / (tt1);
////	float invFactorY = 0.5f / (tt2);
////	vert[0].uv.x *= factorX;
////	vert[0].uv2.x = factorX;
////	vert[0].uv.y *= invFactorY;
////	vert[0].uv2.y = invFactorY;
////	vert[1].uv.x *= factorX;
////	vert[1].uv2.x = factorX;
////	vert[1].uv.y *= factorY;
////	vert[1].uv2.y = factorY;
////	vert[2].uv.x *= invFactorX;
////	vert[2].uv2.x = invFactorX;
////	vert[2].uv.y *= invFactorY;
////	vert[2].uv2.y = invFactorY;
////	vert[3].uv.x *= invFactorX;
////	vert[3].uv2.x = invFactorX;
////	vert[3].uv.y *= factorY;
////	vert[3].uv2.y = factorY;
//
//Shader "SilverTree/2d WorldSpace Sprite" {
//	Properties {
//		_Color ("Main Color", Color) = (1,1,1,1)
//		_MainTex ("Base (RGBA)", 2D) = "white" {}
//	}
//	SubShader {
//		Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
//		ZWrite Off
//		Lighting Off
//		Cull Off
//		Pass{
//			Blend SrcAlpha OneMinusSrcAlpha
//
//CGPROGRAM
//#pragma vertex vert
//#pragma fragment frag
//#pragma fragmentoption ARB_precision_hint_fastest
//#include "UnityCG.cginc"
//struct vertIn {
//    float4 vertex : POSITION;
//    float4 texcoord : TEXCOORD0;
//    float4 texcoord1 : TEXCOORD1;
//};
//struct v2f {
//    float4 pos : SV_POSITION;
//    float4 uv : TEXCOORD0;
//};
//			v2f vert (vertIn v)
//			{
//				v2f o;
//				o.pos = mul(UNITY_MATRIX_MVP, v.vertex);
//
//				o.uv.xy = v.texcoord.xy;
//				o.uv.zw = v.texcoord1.xy;
//				
//				// enabling this shows how bad it would look like without the correction
//				//o.uv.xy = v.texcoord.xy / v.texcoord1.xy;
//				//o.uv.zw = 1;
//				
//				return o;
//			}
//uniform sampler2D _MainTex;
//uniform fixed4 _Color;
//			float4 frag (v2f i) : COLOR
//			{
////				if(i.uv.y/i.uv.w < 0.025 || i.uv.y/i.uv.w > 0.975
////				|| i.uv.x/i.uv.z < 0.025 || i.uv.x/i.uv.z > 0.975)
////					return float4(1,1,0,1);
////				else
////					return float4(i.uv.y/i.uv.w > .5, i.uv.x/i.uv.z > .5, i.uv.x/i.uv.z > .5, 1);//float4(i.uv.x, i.uv.y, 1, 1);
//
//				// nicer bilinear filter for closeups, move to separate shader if we actually want to use this
////				float4 c1 = tex2D(_MainTex, i.uv / i.uv.zw);
////				float4 c2 = tex2D(_MainTex, i.uv / i.uv.zw + fixed2(0.5/1024.0, 0.5/1024.0));
////				float4 c3 = tex2D(_MainTex, i.uv / i.uv.zw + fixed2(0.5/1024.0, -0.5/1024.0));
////				float4 rv = _Color * ((c1 + c2 + c3)*(1.0/3.0));
//
//				//return float4(frac(i.uv.y / i.uv.z * 64), frac(i.uv.x / i.uv.w * 64), 1, 0.5) * 0.5
//				//+ _Color * tex2D(_MainTex, i.uv.xy / i.uv.zw) * 0.75;
//
//				float4 rv = _Color * tex2D(_MainTex, i.uv.xy / i.uv.zw);
//				 
//				return rv;
//			}
//ENDCG
//
//		}
//	} 
//}
