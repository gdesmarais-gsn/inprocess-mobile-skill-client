// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'

Shader "SilverTree/Screen Space (Text) (No Outline) (Z Test)" {
	Properties {
		_MainTex ("Atlas", 2D) = "white" {}
		_Color ("ModColor", Color) = (1,1,1,1)
		_OutlineColor ("OutlineColor", Color) = (0,0,0,0)
		_CanvasSize ("Canvas Size", Vector) = (1280.0, 752.0, 1.0, 0.0)
		_RotationVector1("RotationVector1", Vector) = (1.0, 0.0, 0.0, 0.0)
		_RotationVector2("RotationVector2", Vector) = (0.0, 1.0, 0.0, 0.0)
	}

	SubShader {
		Tags {"Queue" = "Overlay" "RenderType"="ScreenSpaceTextTransparent" }
		Pass {
			Blend SrcAlpha OneMinusSrcAlpha
			ZWrite Off
			//ZTest Off
			Cull Off
			Lighting Off
			Fog {Mode Off}

GLSLPROGRAM

#ifdef VERTEX

varying mediump vec2 uv;
uniform mediump vec4 _CanvasSize;
uniform mat4 _Object2World;
uniform lowp vec4 _RotationVector1;
uniform lowp vec4 _RotationVector2;

void main() {
	uv = gl_MultiTexCoord0.xy;
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

	gl_Position = rot * (canvas * (_Object2World * gl_Vertex));
}

#endif
#ifdef FRAGMENT

varying mediump vec2 uv;
uniform sampler2D _MainTex;
uniform lowp vec4 _Color;


void main() {
	 //gl_FragColor = vec4(_Color.xyz, texture2D(_MainTex, uv).y * _Color.w);

	 //lowp vec4 tmp = _Color;
	 //tmp.w = tmp.w * texture2D(_MainTex, uv).y;
	 //gl_FragColor = tmp;

	 lowp vec4 texcol = texture2D(_MainTex, uv);
	 lowp vec4 tmp = _Color;
	 tmp.rgb = tmp.rgb;
	 tmp.a = tmp.a * texcol.r;
	 gl_FragColor = tmp;
}

#endif

ENDGLSL

		}
	} 

	// cg version
	SubShader {
		Tags {"Queue" = "Overlay" "RenderType"="ScreenSpaceTextTransparent" }
		Pass {
			Blend SrcAlpha OneMinusSrcAlpha
			ZWrite Off
			//ZTest Off
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
};

struct v2f {
    float4 vertex : SV_POSITION;
    half2 uv : TEXCOORD0;
};

float4 _CanvasSize;
float2 _MainTex_TexelSize;
float4 _RotationVector1;
float4 _RotationVector2;

v2f vert (vertIn v)
{
    v2f o;
	o.uv = v.texcoord.xy;
	half4x4 canvas = half4x4 (
		2.0/_CanvasSize.x, 0.0, 0.0, 0.0,
		0.0, 2.0/_CanvasSize.y, 0.0, 0.0,
		0.0, 0.0, 1.0, 0.0,
		-1.0, _CanvasSize.z, 0.0, 1.0
	);	

	fixed4x4 rot = fixed4x4(
		_RotationVector1,
		_RotationVector2,
		0.0, 0.0, 1.0, 0.0,
		0.0, 0.0, 0.0, 1.0 
		);

#if SHADER_API_D3D9
	o.vertex = mul(mul(unity_ObjectToWorld, v.vertex), canvas);
    return o;
#else
	//o.vertex = mul(mul(_Object2World, v.vertex), canvas);
	half4 temp = mul(mul(unity_ObjectToWorld, v.vertex), canvas);
	o.vertex = mul(temp, rot);
    return o;
#endif
}

sampler2D _MainTex;
fixed4 _Color;

float4 frag (v2f i) : COLOR
{
	//return float4(_Color.xyz, tex2D(_MainTex, i.uv).y * _Color.w);

    fixed4 texcol = tex2D(_MainTex, i.uv);
	return float4(_Color.rgb, texcol.r * _Color.a);
}
ENDCG

		}
	} 
}
