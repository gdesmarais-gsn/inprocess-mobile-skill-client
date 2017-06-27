Shader "SilverTree/Additive Rim (Quadratic Falloff) (Cheap)" {
	Properties {
		_MainTex ("Base (RGB)", 2D) = "white" {}
		_Color("Main Color", Color) = (1,1,1,1)
		_RimColor ("Rim Color", Color) = (0,0,0,1)
	}
	
//	SubShader {
//		LOD 41
//        Tags { "RenderType"="Opaque" }
//		Pass {
//			Lighting Off
//GLSLPROGRAM
//
//varying mediump vec3 nrml;
//varying mediump vec2 uv;
//
//#ifdef VERTEX
//
//uniform mat4 _Object2World;
//
//void main() {
//	nrml = /*normalize*/(((gl_ModelViewProjectionMatrix * vec4(gl_Normal,0.0))).xyz);
//	uv = gl_MultiTexCoord0.xy;
//	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
//}
//
//#endif
//
//#ifdef FRAGMENT
//
//uniform sampler2D _MainTex;
//uniform lowp vec4 _RimColor;
//uniform lowp vec4 _Color;
//
//void main() {
//	 mediump float rim = 1.0 + (nrml).z;
//	 mediump float rim2 = rim * rim;
//	 lowp vec4 color1 = _Color * texture2D(_MainTex, uv);
//	 lowp vec4 color2 = _RimColor * rim2;
//	 lowp vec4 colorOut = color1 + color2;
//	 gl_FragColor = colorOut.rgbb;
//}
//
//#endif
//
//ENDGLSL
//
//		}
//	}
//	
//	// cheap fallback
//	SubShader {
//        Tags { "RenderType"="Opaque" }
//		Pass {
//			Lighting Off
//GLSLPROGRAM
//
//varying mediump vec2 uv;
//
//#ifdef VERTEX
//
//uniform mat4 _Object2World;
//
//void main() {
//	uv = gl_MultiTexCoord0.xy;
//	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
//}
//
//#endif
//
//#ifdef FRAGMENT
//
//uniform sampler2D _MainTex;
//uniform lowp vec4 _Color;
//
//void main() {
//	 gl_FragColor = _Color * texture2D(_MainTex, uv);
//}
//
//#endif
//
//ENDGLSL
//
//		}
//	}
	
	// cg version
	SubShader {
//		LOD 43
        Tags { "RenderType"="Opaque" }
		Lighting Off
		//Fog { Mode Off }
		Pass{
CGPROGRAM
#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_precision_hint_fastest
#include "UnityCG.cginc"

struct vertIn {
    float4 vertex : POSITION;
    float3 normal : NORMAL;
    float4 texcoord : TEXCOORD0;
};

struct v2f {
    float4 vertex : SV_POSITION;
    fixed2 uv : TEXCOORD0;
    fixed3 rim : TEXCOORD1;
};

fixed4 _RimColor;

v2f vert (vertIn v)
{
    v2f o;
    o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
    ///o.nrml = /*normalize*/(mul(UNITY_MATRIX_MVP, float4(v.normal, 0)).xyz);
    //fixed rim = 1.0 + /*normalize*/(mul(UNITY_MATRIX_MVP, float4(v.normal, 0)).xyz).z;
    fixed rim = 1.0 - normalize(mul(UNITY_MATRIX_IT_MV, float4(v.normal, 0)).xyz).z; // needed if used with manual rendering
    o.uv.xy = v.texcoord.xy;
	o.rim = (rim * rim) * _RimColor.rgb;
    return o;
}

sampler2D _MainTex;
fixed4 _Color;

float4 frag (v2f i) : COLOR
{
//	 half rim2 = i.uv.z;
//	 fixed4 color1 = _Color * tex2D(_MainTex, i.uv.xy);
//	 fixed4 color2 = _RimColor * rim2;
//	 fixed4 colorOut = color1 + color2;

	 fixed4 color1 = tex2D(_MainTex, i.uv.xy);
	 color1.rgb = (color1.rgb * _Color.rgb) + i.rim;
	 fixed4 colorOut = color1;

//	 fixed4 fragColor;
//	 fragColor.xyz = colorOut.xyz;
//	 fragColor.a = 1.0;
//	 return fragColor;
	return colorOut;
}
ENDCG
		}
	} 
	 
//	SubShader {
//        Tags { "RenderType"="Opaque" }
//		Lighting Off
//		Pass{
//			SetTexture [_MainTex] { constantColor[_Color] combine texture * constant }
//		}
//	} 
}

