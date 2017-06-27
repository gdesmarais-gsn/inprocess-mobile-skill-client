Shader "SilverTree/Additive Particle" {
	Properties {
		_MainTex ("Base (RGB)", 2D) = "white" {}
	}
	Category {
		Tags { "Queue" = "Geometry+800" }
		BindChannels {
			   Bind "Vertex", vertex
			   Bind "Texcoord", texcoord
			   Bind "Color", color
		}
		SubShader {
			Pass{
				Blend One One
				Cull Off Lighting Off Fog { Mode Off }
				ZWrite Off
				SetTexture [_MainTex] {
					combine primary * texture
				}
			}
		}
	} 

}