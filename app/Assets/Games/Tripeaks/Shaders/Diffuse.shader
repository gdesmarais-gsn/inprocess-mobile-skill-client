Shader "SilverTree/Diffuse" {
	Properties {
		_Color ("Main Color", Color) = (1,1,1,1)
		_MainTex ("Base (RGB)", 2D) = "white" {}
	}
	SubShader {
        Blend Off
		Lighting Off
		//Fog { Mode Off }
        Tags { "RenderType"="Opaque" }
		Tags { "IgnoreProjector"="True" }
		Pass{
			Tags { "LightMode"="Always" }
GLSLPROGRAM

#ifdef VERTEX

varying lowp vec2 uv;

void main() {
	uv = gl_MultiTexCoord0.xy;
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
}

#endif

#ifdef FRAGMENT

varying lowp vec2 uv;
uniform sampler2D _MainTex;
uniform lowp vec4 _Color;

void main() {
	gl_FragColor = _Color * texture2D(_MainTex, uv);
}

#endif

ENDGLSL

		}
	} 
	SubShader {
        Blend Off
		Lighting Off
        Tags { "RenderType"="Opaque" }
		Tags { "IgnoreProjector"="True" }
		Pass{
			Tags { "LightMode"="Always" }
			SetTexture [_MainTex] { constantColor[_Color] combine texture * constant }
		}
	} 
}
