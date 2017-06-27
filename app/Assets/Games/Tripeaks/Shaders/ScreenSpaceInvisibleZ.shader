Shader "SilverTree/Screen Space ZWrite" {
	Properties {
		//_MainTex ("Atlas", 2D) = "white" {}
		_CanvasSize ("Canvas Size", Vector) = (1280.0, 752.0, 1.0, 0.0)
		_RotationVector1("RotationVector1", Vector) = (1.0, 0.0, 0.0, 0.0)
		_RotationVector2("RotationVector2", Vector) = (0.0, 1.0, 0.0, 0.0)
	}

	SubShader {
		Tags {"Queue" = "Overlay" "RenderType"="ScreenSpaceTransparent" }
		Lighting Off
		Fog { Mode Off }
		Cull Off
		
		ColorMask 0
		ZWrite On

		Pass {

GLSLPROGRAM

#ifdef VERTEX

uniform mediump vec4 _CanvasSize;
uniform lowp vec4 _RotationVector1;
uniform lowp vec4 _RotationVector2;

void main() {
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

void main() {
	gl_FragColor = vec4(0.0, 0.0, 0.0, 0.0);
}

#endif

ENDGLSL

		}
	} 

	// cg version
	SubShader {
		Tags {"Queue" = "Overlay" "RenderType"="ScreenSpaceTransparent" }
		Lighting Off
		Fog { Mode Off }
		Cull Off
		
		ColorMask 0
		ZWrite On

		Pass {

CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_precision_hint_fastest
#include "UnityCG.cginc"

struct vertIn {
    float4 vertex : POSITION;
};

struct v2f {
    float4 vertex : SV_POSITION;
};

half4 _CanvasSize;
fixed4 _RotationVector1;
fixed4 _RotationVector2;

v2f vert (vertIn v)
{
    v2f o;
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

float4 frag (v2f i) : COLOR
{
	return 0.0;
}
ENDCG

		}
	} 
}
