// Upgrade NOTE: replaced '_Projector' with 'unity_Projector'

Shader "Projector/Intensify Masked onto RGBB" {
   Properties {
      _ShadowTex ("Cookie", 2D) = "gray" { TexGen ObjectLinear }
      _TargetTex ("Target", 2D) = "white"
      //_FalloffTex ("FallOff", 2D) = "white" { TexGen ObjectLinear   }
   }

   Subshader {
      //Tags { "RenderType"="Transparent-1" }
      //Tags { "Queue"="Transparent-10" "IgnoreProjector"="True" "RenderType"="Transparent" }
      Tags { "Queue"="Transparent+1" "IgnoreProjector"="True" "RenderType"="Transparent" }
      //Tags { "Queue"="Geometry-1" "IgnoreProjector"="True" "RenderType"="Transparent" }
      Pass {
         ZWrite Off
         //Fog { Color (1, 1, 1) }
         Fog { Mode Off }
//         AlphaTest Greater 0
         //ColorMask RGB
         //Blend DstColor Zero
         //ZTest Off
         //Blend One Zero
         //Blend Zero SrcColor
         Blend DstColor One
         //Blend DstColor SrcAlpha
         //Blend One Zero
        //ColorMask 0
		 //Offset -1, -1

CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_fog_exp2
#pragma fragmentoption ARB_precision_hint_fastest
#include "UnityCG.cginc"
 
struct v2f
{
	float4 pos : SV_POSITION;
	half4 uv : TEXCOORD0;
	half2 uvo : TEXCOORD1;
};
 
sampler2D _ShadowTex;
sampler2D _TargetTex;
float4 _Color;
float4x4 unity_Projector;
 
v2f vert(appdata_tan v)
{
	v2f o;
	o.pos = mul (UNITY_MATRIX_MVP, v.vertex);
	o.uv = mul (unity_Projector, v.vertex).xyzw;
	o.uvo = v.texcoord.xy;
	return o;
}
 
half4 frag (v2f i) : COLOR
{
	//half4 tex = tex2D(_ShadowTex, i.uv) * _Color;
	fixed4 tex = tex2Dproj(_ShadowTex, UNITY_PROJ_COORD(i.uv));
	fixed4 targ = tex2D(_TargetTex, i.uvo);
	tex *= targ.g + targ.g; // RGBB
	//return targ.g + targ.g;
	//tex.a = targ;
	//return half4(tex.r,0,0,1);
	//tex = half4(i.uvo.yyy,1.0);
	//tex.a = 1-tex.a;
	//tex.a = tex.r + 0.5;
	//clip(-.5+tex.g);
	return tex;
}
ENDCG

//CGPROGRAM
//#pragma vertex vert
//#pragma fragment frag
//#pragma fragmentoption ARB_precision_hint_fastest
//#include "UnityCG.cginc"
//
//struct vertIn {
//    float4 vertex : POSITION;
//    float2 texcoord : TEXCOORD0;
//};
//
//struct v2f {
//    float4 vertex : SV_POSITION;
//    half2 uv : TEXCOORD0;
//};
//
//fixed4 _RimColor;
//half4x4 _Projector;
//
//v2f vert (vertIn v)
//{
//    v2f o;
//    o.vertex = mul(_Projector, v.vertex);
//	o.uv = v.texcoord.xy;
//    return o;
//}
//
//uniform sampler2D _ShadowTex;
////uniform half4 _Params;
//
//float4 frag (v2f i) : COLOR
//{
//	fixed4 color = tex2D(_ShadowTex, i.uv);
//	//color *= frac(_Time.w * _Params.x) * _Params.y + _Params.z;
//	return color;
//}
//ENDCG

//         SetTexture [_ShadowTex] {
//            combine texture, ONE - texture
//            Matrix [_Projector]
//         }

//         SetTexture [_FalloffTex] {
//            constantColor (1,1,1,0)
//            combine previous lerp (texture) constant
//            Matrix [_ProjectorClip]
//         }
      }
   }
}