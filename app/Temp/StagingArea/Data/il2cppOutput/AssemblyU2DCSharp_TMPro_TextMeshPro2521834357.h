#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t4206981150;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "AssemblyU2DCSharp_TMPro_TMP_Text1920000777.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "AssemblyU2DCSharp_TMPro_MaskingTypes259687445.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextMeshPro
struct  TextMeshPro_t2521834357  : public TMP_Text_t1920000777
{
public:
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_228;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_229;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t257310565 * ___m_renderer_230;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t3026937449 * ___m_meshFilter_231;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_232;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_233;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_234;
	// UnityEngine.Bounds TMPro.TextMeshPro::m_default_bounds
	Bounds_t3033363703  ___m_default_bounds_235;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t4206981150* ___m_subTextObjects_236;
	// System.Boolean TMPro.TextMeshPro::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_237;
	// System.Boolean TMPro.TextMeshPro::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_238;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_239;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_t2933234003  ___m_EnvMapMatrix_240;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_t1172311765* ___m_RectTransformCorners_241;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_242;
	// System.Int32 TMPro.TextMeshPro::loopCountA
	int32_t ___loopCountA_243;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_244;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_228() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_hasFontAssetChanged_228)); }
	inline bool get_m_hasFontAssetChanged_228() const { return ___m_hasFontAssetChanged_228; }
	inline bool* get_address_of_m_hasFontAssetChanged_228() { return &___m_hasFontAssetChanged_228; }
	inline void set_m_hasFontAssetChanged_228(bool value)
	{
		___m_hasFontAssetChanged_228 = value;
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_229() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_previousLossyScaleY_229)); }
	inline float get_m_previousLossyScaleY_229() const { return ___m_previousLossyScaleY_229; }
	inline float* get_address_of_m_previousLossyScaleY_229() { return &___m_previousLossyScaleY_229; }
	inline void set_m_previousLossyScaleY_229(float value)
	{
		___m_previousLossyScaleY_229 = value;
	}

	inline static int32_t get_offset_of_m_renderer_230() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_renderer_230)); }
	inline Renderer_t257310565 * get_m_renderer_230() const { return ___m_renderer_230; }
	inline Renderer_t257310565 ** get_address_of_m_renderer_230() { return &___m_renderer_230; }
	inline void set_m_renderer_230(Renderer_t257310565 * value)
	{
		___m_renderer_230 = value;
		Il2CppCodeGenWriteBarrier(&___m_renderer_230, value);
	}

	inline static int32_t get_offset_of_m_meshFilter_231() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_meshFilter_231)); }
	inline MeshFilter_t3026937449 * get_m_meshFilter_231() const { return ___m_meshFilter_231; }
	inline MeshFilter_t3026937449 ** get_address_of_m_meshFilter_231() { return &___m_meshFilter_231; }
	inline void set_m_meshFilter_231(MeshFilter_t3026937449 * value)
	{
		___m_meshFilter_231 = value;
		Il2CppCodeGenWriteBarrier(&___m_meshFilter_231, value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_232() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_isFirstAllocation_232)); }
	inline bool get_m_isFirstAllocation_232() const { return ___m_isFirstAllocation_232; }
	inline bool* get_address_of_m_isFirstAllocation_232() { return &___m_isFirstAllocation_232; }
	inline void set_m_isFirstAllocation_232(bool value)
	{
		___m_isFirstAllocation_232 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_233() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_max_characters_233)); }
	inline int32_t get_m_max_characters_233() const { return ___m_max_characters_233; }
	inline int32_t* get_address_of_m_max_characters_233() { return &___m_max_characters_233; }
	inline void set_m_max_characters_233(int32_t value)
	{
		___m_max_characters_233 = value;
	}

	inline static int32_t get_offset_of_m_max_numberOfLines_234() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_max_numberOfLines_234)); }
	inline int32_t get_m_max_numberOfLines_234() const { return ___m_max_numberOfLines_234; }
	inline int32_t* get_address_of_m_max_numberOfLines_234() { return &___m_max_numberOfLines_234; }
	inline void set_m_max_numberOfLines_234(int32_t value)
	{
		___m_max_numberOfLines_234 = value;
	}

	inline static int32_t get_offset_of_m_default_bounds_235() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_default_bounds_235)); }
	inline Bounds_t3033363703  get_m_default_bounds_235() const { return ___m_default_bounds_235; }
	inline Bounds_t3033363703 * get_address_of_m_default_bounds_235() { return &___m_default_bounds_235; }
	inline void set_m_default_bounds_235(Bounds_t3033363703  value)
	{
		___m_default_bounds_235 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_236() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_subTextObjects_236)); }
	inline TMP_SubMeshU5BU5D_t4206981150* get_m_subTextObjects_236() const { return ___m_subTextObjects_236; }
	inline TMP_SubMeshU5BU5D_t4206981150** get_address_of_m_subTextObjects_236() { return &___m_subTextObjects_236; }
	inline void set_m_subTextObjects_236(TMP_SubMeshU5BU5D_t4206981150* value)
	{
		___m_subTextObjects_236 = value;
		Il2CppCodeGenWriteBarrier(&___m_subTextObjects_236, value);
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_237() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_isMaskingEnabled_237)); }
	inline bool get_m_isMaskingEnabled_237() const { return ___m_isMaskingEnabled_237; }
	inline bool* get_address_of_m_isMaskingEnabled_237() { return &___m_isMaskingEnabled_237; }
	inline void set_m_isMaskingEnabled_237(bool value)
	{
		___m_isMaskingEnabled_237 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_238() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___isMaskUpdateRequired_238)); }
	inline bool get_isMaskUpdateRequired_238() const { return ___isMaskUpdateRequired_238; }
	inline bool* get_address_of_isMaskUpdateRequired_238() { return &___isMaskUpdateRequired_238; }
	inline void set_isMaskUpdateRequired_238(bool value)
	{
		___isMaskUpdateRequired_238 = value;
	}

	inline static int32_t get_offset_of_m_maskType_239() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_maskType_239)); }
	inline int32_t get_m_maskType_239() const { return ___m_maskType_239; }
	inline int32_t* get_address_of_m_maskType_239() { return &___m_maskType_239; }
	inline void set_m_maskType_239(int32_t value)
	{
		___m_maskType_239 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_240() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_EnvMapMatrix_240)); }
	inline Matrix4x4_t2933234003  get_m_EnvMapMatrix_240() const { return ___m_EnvMapMatrix_240; }
	inline Matrix4x4_t2933234003 * get_address_of_m_EnvMapMatrix_240() { return &___m_EnvMapMatrix_240; }
	inline void set_m_EnvMapMatrix_240(Matrix4x4_t2933234003  value)
	{
		___m_EnvMapMatrix_240 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_241() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_RectTransformCorners_241)); }
	inline Vector3U5BU5D_t1172311765* get_m_RectTransformCorners_241() const { return ___m_RectTransformCorners_241; }
	inline Vector3U5BU5D_t1172311765** get_address_of_m_RectTransformCorners_241() { return &___m_RectTransformCorners_241; }
	inline void set_m_RectTransformCorners_241(Vector3U5BU5D_t1172311765* value)
	{
		___m_RectTransformCorners_241 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransformCorners_241, value);
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_242() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_isRegisteredForEvents_242)); }
	inline bool get_m_isRegisteredForEvents_242() const { return ___m_isRegisteredForEvents_242; }
	inline bool* get_address_of_m_isRegisteredForEvents_242() { return &___m_isRegisteredForEvents_242; }
	inline void set_m_isRegisteredForEvents_242(bool value)
	{
		___m_isRegisteredForEvents_242 = value;
	}

	inline static int32_t get_offset_of_loopCountA_243() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___loopCountA_243)); }
	inline int32_t get_loopCountA_243() const { return ___loopCountA_243; }
	inline int32_t* get_address_of_loopCountA_243() { return &___loopCountA_243; }
	inline void set_loopCountA_243(int32_t value)
	{
		___loopCountA_243 = value;
	}

	inline static int32_t get_offset_of_m_currentAutoSizeMode_244() { return static_cast<int32_t>(offsetof(TextMeshPro_t2521834357, ___m_currentAutoSizeMode_244)); }
	inline bool get_m_currentAutoSizeMode_244() const { return ___m_currentAutoSizeMode_244; }
	inline bool* get_address_of_m_currentAutoSizeMode_244() { return &___m_currentAutoSizeMode_244; }
	inline void set_m_currentAutoSizeMode_244(bool value)
	{
		___m_currentAutoSizeMode_244 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
