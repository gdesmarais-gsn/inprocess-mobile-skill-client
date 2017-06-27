Shader "SilverTree/Tube (Outer)" {
	Properties {
		_RimColor ("Rim Color", Color) = (0,0,0,1)
	}
	SubShader {
		LOD 43
		Tags { "Queue"="Transparent" "RenderType"="Transparent" }
		Lighting Off
		ZWrite Off
		Pass {
			Blend SrcAlpha OneMinusSrcAlpha
		
GLSLPROGRAM

#ifdef VERTEX

varying mediump vec3 nrml;
uniform mat4 _Object2World;

void main() {
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
	nrml = (gl_ModelViewProjectionMatrix * vec4(gl_Normal,0.0)).xyz;
}

#endif

#ifdef FRAGMENT

varying mediump vec3 nrml;
uniform lowp vec4 _RimColor;

void main() {
	mediump float rim = -normalize(nrml).z;
	mediump float rim2 = (1.0 - rim*rim) * 0.75;// + pow(rim*rim,8.0);
	gl_FragColor = rim2 * _RimColor;
}

#endif

ENDGLSL

		}
	} 

	// slightly cheaper version
	SubShader {
		Tags { "Queue"="Transparent" "RenderType"="Transparent" }
		Lighting Off
		ZWrite Off
		Pass {
			Blend SrcAlpha OneMinusSrcAlpha
		
GLSLPROGRAM

#ifdef VERTEX

varying mediump vec3 nrml;
uniform mat4 _Object2World;

void main() {
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
	nrml = normalize((gl_ModelViewProjectionMatrix * vec4(gl_Normal,0.0)).xyz);
}

#endif

#ifdef FRAGMENT

varying mediump vec3 nrml;
uniform lowp vec4 _RimColor;

void main() {
	mediump float rim = -/*normalize*/(nrml).z;
	mediump float rim2 = (1.0 - rim*rim) * 0.75;
	gl_FragColor = rim2 * _RimColor;
}

#endif

ENDGLSL

		}
	}
	
	// cg version
	SubShader {
		LOD 43
		Tags { "Queue"="Transparent" "RenderType"="Transparent" }
		Lighting Off
		ZWrite Off
		Pass {
			Blend SrcAlpha OneMinusSrcAlpha

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
    float4 vertex : SV_POSITION;
    half3 nrml : TEXCOORD0;
};

v2f vert (vertIn v)
{
	v2f o;
	o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
	o.nrml = /*normalize*/(mul(UNITY_MATRIX_MVP, float4(v.normal, 0)).xyz);
	return o;
}

float4 _RimColor;

float4 frag (v2f i) : COLOR
{
	half rim = -normalize(i.nrml).z;
	half rim2 = (1.0 - rim*rim) * 0.75;// + pow(rim*rim,8.0);
	return rim2 * _RimColor;
}
ENDCG


		}
	}

	// slightly cheaper cg version
	SubShader {
		Tags { "Queue"="Transparent" "RenderType"="Transparent" }
		Lighting Off
		ZWrite Off
		Pass {
			Blend SrcAlpha OneMinusSrcAlpha

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
    float4 vertex : SV_POSITION;
    half3 nrml : TEXCOORD0;
};

v2f vert (vertIn v)
{
	v2f o;
	o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
	o.nrml = normalize(mul(UNITY_MATRIX_MVP, float4(v.normal, 0)).xyz);
	return o;
}

float4 _RimColor;

float4 frag (v2f i) : COLOR
{
	half rim = -/*normalize*/(i.nrml).z;
	half rim2 = (1.0 - rim*rim) * 0.75;
	return rim2 * _RimColor;
}
ENDCG


		}
	}


}
