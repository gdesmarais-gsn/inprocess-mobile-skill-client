Shader "Cordy2/Confetti" {
	Properties {
		_Color("Main Color", Color) = (0.82, 0.82, 0.82, 1)
		_RimColor ("Rim Color", Color) = (1.0, 1.0, 1.0, 1.0)
	}


	SubShader {
        Tags { "RenderType"="Opaque" }
		Pass {
			Lighting Off
			Cull Off
			Fog {Mode Off}
CGPROGRAM

#pragma vertex vert
#pragma fragment frag
#pragma fragmentoption ARB_precision_hint_fastest

struct vertIn {
    float4 vertex : POSITION;
    float3 normal : NORMAL;
};

struct v2f {
    float4 vertex : SV_POSITION;
    fixed3 rim : TEXCOORD0;
};

fixed4 _RimColor;

v2f vert (vertIn v)
{
    v2f o;
    o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
    fixed rim = 1.0 - abs(normalize(mul(UNITY_MATRIX_IT_MV, float4(v.normal, 0)).xyz).z); // needed if used with manual rendering
	o.rim = (rim) * _RimColor.rgb;
    return o;
}

fixed4 _Color;

float4 frag (v2f i) : COLOR
{
	fixed4 colorOut = fixed4(_Color.rgb + i.rim, 1.0);
	return colorOut;
}

ENDCG

		}
	}


}

