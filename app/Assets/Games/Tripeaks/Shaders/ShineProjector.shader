// Upgrade NOTE: replaced '_Projector' with 'unity_Projector'

Shader "*GsnShared/Shine Projector" {
   Properties {
      _ShadowTex ("Cookie", 2D) = "gray" { TexGen ObjectLinear }
      _TargetTex ("Target", 2D) = "white"
   }

   Subshader {
      Tags { "Queue"="Transparent+1" "IgnoreProjector"="True" "RenderType"="Transparent" }
      Pass {
         ZWrite Off
         Fog { Mode Off }
         Blend One One

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
	fixed4 targ = tex2D(_TargetTex, i.uvo);
	fixed4 tex = tex2Dproj(_ShadowTex, UNITY_PROJ_COORD(i.uv));
	tex *= targ.a;
	return tex;
}
ENDCG
      }
   }
}