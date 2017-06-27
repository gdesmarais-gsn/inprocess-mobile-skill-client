Shader "SilverTree/Additive Simpler" {
Properties {
	_MainTex ("Base (RGBA)", 2D) = "white" {}
}

Category {
	Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" }
	Blend One One
	Cull Off Lighting Off ZWrite Off Fog { Mode Off }
	SubShader {
		Pass {
			SetTexture [_MainTex] {
				combine texture
			}
		}
	}
}
}