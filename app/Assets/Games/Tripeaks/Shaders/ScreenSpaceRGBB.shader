Shader "SilverTree/Screen Space RGBB" {
	Properties {
		_MainTex ("Atlas", 2D) = "white" {}
		_Color ("ModColor", Color) = (1,1,1,1)
		//_UVParams ("u0,v0,us,vs", Vector) = (0,0,1,1)
		_CanvasSize ("Canvas Size", Vector) = (1280.0, 752.0, 1.0, 0.0)
		_RotationVector1("RotationVector1", Vector) = (1.0, 0.0, 0.0, 0.0)
		_RotationVector2("RotationVector2", Vector) = (0.0, 1.0, 0.0, 0.0)
	}
	SubShader {
		Tags {"Queue" = "Overlay" "RenderType"="ScreenSpaceTransparent" }
		Pass {
			Blend SrcAlpha OneMinusSrcAlpha
			ZWrite Off
			ZTest Off
			Cull Off
			Lighting Off
			Fog {Mode Off}

GLSLPROGRAM

#ifdef VERTEX

varying mediump vec2 uv;
varying lowp vec4 color;
uniform lowp vec4 _Color;
//uniform mediump vec4 _UVParams;
uniform mediump vec4 _CanvasSize;
uniform lowp vec4 _RotationVector1;
uniform lowp vec4 _RotationVector2;
//uniform mat4 _Object2World;


void main() {
	uv = gl_MultiTexCoord0.xy;
	//uv = gl_MultiTexCoord0.xy * _UVParams.zw + _UVParams.xy;
	color = gl_Color * _Color;
	mediump mat4 canvas = mat4 (
		2.0/_CanvasSize.x, 0.0, 0.0, 0.0,
		0.0, 2.0/_CanvasSize.y, 0.0, 0.0,
		0.0, 0.0, 1.0, 0.0,
		-1.0, 1.0, 0.0, 1.0
	);	

	lowp mat4 rot = mat4(
		_RotationVector1,
		_RotationVector2,
		0.0, 0.0, 1.0, 0.0,
		0.0, 0.0, 0.0, 1.0 
		);

	gl_Position = rot * canvas * gl_Vertex;
	//gl_Position = rot * canvas * (_Object2World * gl_Vertex);
}

#endif

#ifdef FRAGMENT

varying mediump vec2 uv;
varying lowp vec4 color;
uniform sampler2D _MainTex;


void main() {
	lowp vec4 incolor = texture2D(_MainTex, uv);

	lowp vec4 outcolor;
	lowp float key = incolor.g + incolor.g;
	outcolor.r = incolor.b;
	outcolor.g = incolor.r;
	outcolor.b = key - 1.0;
	outcolor.a = key;
	if(key < 1.0)
	{
		outcolor.rg += -0.125*key;
		outcolor.b = incolor.r;
	}

	gl_FragColor = color * outcolor;
}

#endif

ENDGLSL

		}
	} 

	// cg version
	SubShader {
		Tags {"Queue" = "Overlay" "RenderType"="ScreenSpaceTransparent" }
		Pass {
			Blend SrcAlpha OneMinusSrcAlpha
			ZWrite Off
			ZTest Off
			Cull Off
			Lighting Off
			Fog {Mode Off}

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
    half2 uv : TEXCOORD0;
    fixed4 color : TEXCOORD1;
};

half4 _CanvasSize;
fixed4 _Color;
//half4 _UVParams;
//half2 _MainTex_TexelSize;
fixed4 _RotationVector1;
fixed4 _RotationVector2;

v2f vert (vertIn v)
{
    v2f o;
	o.uv = v.texcoord.xy;
	//o.uv = v.texcoord.xy * _UVParams.zw + _UVParams.xy;
	o.color = v.color * _Color;
	half4x4 canvas = half4x4 (
		2.0/_CanvasSize.x, 0.0, 0.0, 0.0,
		0.0, 2.0/_CanvasSize.y, 0.0, 0.0,
		0.0, 0.0, 1.0, 0.0,
		-1.0, _CanvasSize.z, 0.0, 1.0
	);
	
/*	
#if SHADER_API_D3D9
    //if(_MainTex_TexelSize.y < 0) {
        canvas[1][1] *= -1.0;
        canvas[3][1] = -1.0;
    //}
#endif
*/
	//v.vertex = mul(_Object2World, v.vertex);

#if SHADER_API_D3D9
	o.vertex = mul(v.vertex, canvas);
    return o;
#else
	fixed4x4 rot = fixed4x4(
		_RotationVector1,
		_RotationVector2,
		0.0, 0.0, 1.0, 0.0,
		0.0, 0.0, 0.0, 1.0 
		);

	half4 temp = mul(v.vertex, canvas);
	o.vertex = mul(temp, canvas);
    return o;
#endif
}

sampler2D _MainTex;

float4 frag (v2f i) : COLOR
{
	fixed4 incolor = tex2D(_MainTex, i.uv);

	fixed4 outcolor;
	fixed key = incolor.g + incolor.g;
	outcolor.r = incolor.b;
	outcolor.g = incolor.r;
	outcolor.b = key - 1.0;
	outcolor.a = key;
	if(key < 1.0)
	{
		outcolor.rg += -0.125*key;
		outcolor.b = incolor.r;
	}

	return i.color * outcolor;
}
ENDCG

		}
	} 
}
