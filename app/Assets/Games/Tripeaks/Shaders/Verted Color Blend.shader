Shader "SilverTree/Vertex Color FX" {
	Properties {
		_Color ("Main Color", Color) = (1,1,1,1)
	}
	SubShader {
		Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
		Pass {
			Blend SrcAlpha One
			Cull Off
			Lighting Off
			Fog { Mode Off }
			
GLSLPROGRAM

#ifdef VERTEX

varying mediump vec4 color;
uniform mediump vec4 _Color;

void main() {
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
	color = gl_Color * _Color;
}

#endif

#ifdef FRAGMENT

varying mediump vec4 color;
void main() {
	//gl_FragColor;
	gl_FragColor = color;
}

#endif

ENDGLSL
			
			
		}
	} 


	// cg version
	SubShader {
		Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
		Pass {
			Blend SrcAlpha One
			Cull Off
			Lighting Off
			Fog { Mode Off }

CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_precision_hint_fastest
#include "UnityCG.cginc"

struct vertIn {
    float4 vertex : POSITION;
    float4 color : COLOR;
};

struct v2f {
    float4 vertex : SV_POSITION;
    float4 color : TEXCOORD0;
};

float4 _Color;

v2f vert (vertIn v)
{
	v2f o;
	o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
	o.color = v.color * _Color;
	return o;
}

float4 frag (v2f i) : COLOR
{
	return i.color;
}
ENDCG


		}
	} 

	// fixed function version
	Category
	{
		Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
		Blend SrcAlpha One
		Cull Off
		Lighting Off
		Fog { Mode Off }
		
		BindChannels {
			Bind "Color", color
			//Bind "Vertex", vertex
		}

		SubShader {
			Pass {
				SetTexture [_MainTex] {
					constantColor [_Color]
					combine primary * constant
				}
			}
		}
	}

}
