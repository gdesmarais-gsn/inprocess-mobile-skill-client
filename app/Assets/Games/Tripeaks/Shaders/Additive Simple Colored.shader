Shader "SilverTree/Additive Simple Colored" {
Properties {
	_MainTex ("Base (RGBA)", 2D) = "white" {}
	_Color ("Main Color", Color) = (1,1,1,1)
}

Category {
	Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" }
	Blend SrcAlpha One
	Cull Off Lighting Off ZWrite Off Fog { Mode Off }
	BindChannels {
		Bind "Color", color
		Bind "Vertex", vertex
		Bind "TexCoord", texcoord
	}
	SubShader {
        Tags { "RenderType"="Transparent" }
		Pass {
		
			SetTexture [_MainTex] { combine texture * primary }
			
			SetTexture [_MainTex] { constantColor[_Color] combine texture * constant }
		}
	}
}
}