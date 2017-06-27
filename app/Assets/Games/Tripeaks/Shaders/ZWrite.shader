// render to the depth buffer but not to RGBA
Shader "SilverTree/ZWrite" {
	Properties {
	}
	SubShader {
		Tags {"Queue"="Geometry+10" "RenderType"="OpaqueNoCull" }
		Lighting Off
		Fog { Mode Off }
		Cull Off
		
		ColorMask 0
		ZWrite On
		
		Pass {}
	} 
}
