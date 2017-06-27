Shader "SilverTree/Debug/SolidTransparent" {
	Properties {
		_Color ("Color", Color) = (1,1,1,1)
	}
	SubShader {
		Tags { "Queue" = "Geometry" "RenderType"="Transparent" }
		Pass{
			Cull Off
			Blend SrcAlpha OneMinusSrcAlpha
			Lighting Off
			Fog { Mode Off }
			GLSLPROGRAM
				#ifdef VERTEX
					void main() {
						gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
					}
				#endif
				#ifdef FRAGMENT
					uniform vec4 _Color;
					void main() {
						gl_FragColor = _Color;
					}
				#endif
			ENDGLSL
		}
	} 
	SubShader {
		Tags { "Queue" = "Geometry" "RenderType"="Transparent" }
		Pass {
			Cull Off
			Blend SrcAlpha OneMinusSrcAlpha
			Fog { Mode Off }
			Color[_Color]
		}
	} 
}
