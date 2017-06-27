Shader "*GsnShared/UI_Alpha_Mask" {
    Properties {
        _MainTex ("Base (RGB)", 2D) = "white" {}
        _Alpha ("Alpha (A)", 2D) = "white" {}
        _Color("Tint", Color) = (1,1,1,1)
    }
    SubShader {
        Tags { "RenderType" = "Transparent" "Queue" = "Transparent"}
       
        ZWrite Off
       
        Blend SrcAlpha OneMinusSrcAlpha
        ColorMask RGB
       
        Pass {
            SetTexture[_MainTex] {
            constantColor[_Color]
            combine constant * texture
            }
            SetTexture[_Alpha] {Combine previous * texture}
        }
    }
}
