Shader "Hidden/Render Normals" {
SubShader {
	Tags { "RenderType"="Opaque" }
	Pass {
		Fog { Mode Off }
		
CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_precision_hint_fastest
#include "UnityCG.cginc"

struct vertIn {
    float4 vertex : POSITION;
    float3 normal : NORMAL;
};

struct v2f {
    float4 pos : SV_POSITION;
    float3 normal : TEXCOORD1;
};

v2f vert (vertIn v)
{
    v2f o;
    o.pos = mul(UNITY_MATRIX_MVP, v.vertex);
    o.normal = mul(UNITY_MATRIX_MVP, float4(v.normal, 0.0));
    return o;
}

float4 frag (v2f i) : COLOR
{
    i.normal = normalize(i.normal);
    return float4(i.normal.x, i.normal.y, -i.normal.z, 1.0);
}
ENDCG
		
	}
} 
SubShader {
	Tags { "RenderType"="OpaqueNoCull" }
	Pass {
		Fog { Mode Off }
		Cull Off
		
CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_precision_hint_fastest
#include "UnityCG.cginc"

struct vertIn {
    float4 vertex : POSITION;
    float3 normal : NORMAL;
};

struct v2f {
    float4 pos : SV_POSITION;
    float3 normal : TEXCOORD1;
};

v2f vert (vertIn v)
{
    v2f o;
    o.pos = mul(UNITY_MATRIX_MVP, v.vertex);
    o.normal = mul(UNITY_MATRIX_MVP, float4(v.normal, 0.0));
    return o;
}

float4 frag (v2f i) : COLOR
{
    i.normal = normalize(i.normal);
    return float4(i.normal.x, i.normal.y, -i.normal.z, 1.0);
}
ENDCG
		
	}
} 
SubShader {
	Tags { "RenderType"="Transparent" }
	Pass {
		Fog { Mode Off }
		ZWrite Off Cull Off Blend One One

CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_precision_hint_fastest
#include "UnityCG.cginc"

struct vertIn {
    float4 vertex : POSITION;
    float3 normal : NORMAL;
};

struct v2f {
    float4 pos : SV_POSITION;
    float3 normal : TEXCOORD1;
};

v2f vert (vertIn v)
{
    v2f o;
    o.pos = mul(UNITY_MATRIX_MVP, v.vertex);
    o.normal = mul(UNITY_MATRIX_MVP, float4(v.normal, 0.0));
    return o;
}

float4 frag (v2f i) : COLOR
{
    i.normal = normalize(i.normal);
    return float4(i.normal.x, i.normal.y, -i.normal.z, 1.0);
}
ENDCG
	}
} 
}
