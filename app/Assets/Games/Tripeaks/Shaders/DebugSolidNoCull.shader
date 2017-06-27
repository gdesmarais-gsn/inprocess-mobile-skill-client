Shader "SilverTree/Debug/SolidNoCull" {
	Properties {
		_Color ("Color", Color) = (1,1,1,1)
	}
	SubShader {
		Tags { "Queue" = "Geometry" "RenderType"="OpaqueNoCull" }
		Pass{
			Cull Off
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
		Tags { "Queue" = "Geometry" "RenderType"="OpaqueNoCull" }
		Pass {
			Cull Off
			Fog { Mode Off }
			Color[_Color]
		}
	} 
}
