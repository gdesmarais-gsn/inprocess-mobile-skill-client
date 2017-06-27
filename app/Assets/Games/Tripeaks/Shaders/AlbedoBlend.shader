Shader "SilverTree/Albedo Blend" {
	Properties {
		_MainTex ("Base (RGB)", 2D) = "white" {}
	}
	SubShader {
		Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
		Lighting Off
		ZWrite Off
		Pass{
			Blend SrcAlpha OneMinusSrcAlpha

GLSLPROGRAM

#ifdef VERTEX

varying mediump vec2 uv;

void main() {
	uv = gl_MultiTexCoord0.xy;
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
}

#endif

#ifdef FRAGMENT

varying mediump vec2 uv;
uniform sampler2D _MainTex;

void main() {
	gl_FragColor = texture2D(_MainTex, uv);
}

#endif

ENDGLSL

		}
	} 
	SubShader {
        Tags { "RenderType"="Opaque" }
		Lighting Off
		ZWrite Off
		Pass{
			Blend SrcAlpha OneMinusSrcAlpha
			SetTexture [_MainTex] { combine texture }
		}
	} 
}
