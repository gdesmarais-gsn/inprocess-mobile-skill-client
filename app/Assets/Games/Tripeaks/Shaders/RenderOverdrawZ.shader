// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'

Shader "Hidden/Render Overdraw Z" {
SubShader {
	Tags { "RenderType"="Opaque" }
	Pass {
		Fog { Mode Off }
		Blend One One
		Color (0.1, 0.04, 0.02, 0.0)		
	}
} 
SubShader {
	Tags { "RenderType"="OpaqueNoCull" }
	Pass {
		Fog { Mode Off }
		Blend One One
		Color (0.1, 0.04, 0.02, 0.0)		
		Cull Off
	}
} 
SubShader {
	Tags { "RenderType"="Transparent" }
	Pass {
		Fog { Mode Off }
		ZWrite Off Cull Off Blend One One
		Color (0.04, 0.1, 0.02, 0.0)		
	}
} 
SubShader {
	Tags { "RenderType"="ScreenSpaceTransparent" }
    Pass {
        Fog { Mode Off }
		ZWrite Off ZTest Off Cull Off Blend One One
        Lighting Off

CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_precision_hint_fastest
#include "UnityCG.cginc"

struct vertIn {
    float4 vertex : POSITION;
    float4 texcoord : TEXCOORD0;
    fixed4 color : COLOR;
};

struct v2f {
    float4 vertex : SV_POSITION;
    float2 uv : TEXCOORD0;
    float4 color : TEXCOORD1;
};

float4 _CanvasSize;
float4 _Color;
float2 _MainTex_TexelSize;

v2f vert (vertIn v)
{
    v2f o;
	o.uv = v.texcoord.xy;
	o.color = v.color * _Color;
	float4x4 canvas = float4x4 (
		2.0/_CanvasSize.x, 0.0, 0.0, 0.0,
		0.0, 2.0/_CanvasSize.y, 0.0, 0.0,
		0.0, 0.0, 1.0, 0.0,
		-1.0, _CanvasSize.z, 0.0, 1.0
	);
/*#if SHADER_API_D3D9
    if(_MainTex_TexelSize.y < 0) {
        canvas[1][1] *= -1.0;
        canvas[3][1] = -1.0;
    }
#endif*/
	o.vertex = mul(v.vertex, canvas);
    return o;
}

sampler2D _MainTex;

float4 frag (v2f i) : COLOR
{
	return float4(0.04, 0.1, 0.02, 0.0) + tex2D(_MainTex, i.uv) * float4(0.0,0.0,.2,0.0);
}
ENDCG

	}
} 
SubShader {
	Tags { "RenderType"="ScreenSpaceTextTransparent" }
    Pass {
        Fog { Mode Off }
		ZWrite Off ZTest Off Cull Off Blend One One
        Lighting Off

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

float4 _CanvasSize;
float2 _MainTex_TexelSize;

v2f vert (vertIn v)
{
    v2f o;
	o.uv = v.texcoord.xy;
	float4x4 canvas = float4x4 (
		2.0/_CanvasSize.x, 0.0, 0.0, 0.0,
		0.0, 2.0/_CanvasSize.y, 0.0, 0.0,
		0.0, 0.0, 1.0, 0.0,
		-1.0, _CanvasSize.z, 0.0, 1.0
	);	
/*#if SHADER_API_D3D9
    if(_MainTex_TexelSize.y < 0) {
        canvas[1][1] *= -1.0;
        canvas[3][1] = -1.0;
    }
#endif*/
	o.vertex = mul(mul(unity_ObjectToWorld, v.vertex), canvas);
    return o;
}

sampler2D _MainTex;
float4 _Color;

float4 frag (v2f i) : COLOR
{
	return float4(0.04, 0.1, 0.02, 0.0) + tex2D(_MainTex, i.uv).w * float4(0.0,0.0,.2,0.0);
}
ENDCG

	}
} 
}