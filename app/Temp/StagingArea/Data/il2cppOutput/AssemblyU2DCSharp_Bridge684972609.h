#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ContactBody>
struct List_1_t2611407048;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// DynamicSurface
struct DynamicSurface_t3995329488;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Material
struct Material_t193706927;

#include "AssemblyU2DCSharp_TagTrigger1884698412.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_Bridge_Equation1020313292.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bridge
struct  Bridge_t684972609  : public TagTrigger_t1884698412
{
public:
	// System.Collections.Generic.List`1<ContactBody> Bridge::contactBodies
	List_1_t2611407048 * ___contactBodies_15;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Bridge::invisiblePlatforms
	List_1_t2644239190 * ___invisiblePlatforms_16;
	// DynamicSurface Bridge::surface
	DynamicSurface_t3995329488 * ___surface_17;
	// UnityEngine.Transform Bridge::root
	Transform_t3275118058 * ___root_18;
	// System.Single Bridge::prevHeight
	float ___prevHeight_19;
	// UnityEngine.Vector3 Bridge::meshScale
	Vector3_t2243707580  ___meshScale_20;
	// UnityEngine.Mesh Bridge::mesh
	Mesh_t1356156583 * ___mesh_21;
	// UnityEngine.Material Bridge::material
	Material_t193706927 * ___material_22;
	// System.Single Bridge::initialSeparation
	float ___initialSeparation_23;
	// UnityEngine.Vector3 Bridge::forwardAxis
	Vector3_t2243707580  ___forwardAxis_24;
	// System.Single Bridge::rotationAngle
	float ___rotationAngle_25;
	// UnityEngine.Vector3 Bridge::rotationAxis
	Vector3_t2243707580  ___rotationAxis_26;
	// System.Boolean Bridge::faceNormal
	bool ___faceNormal_27;
	// System.Single Bridge::cullOnscreenLeftOffset
	float ___cullOnscreenLeftOffset_28;
	// System.Single Bridge::cullOnscreenRightOffset
	float ___cullOnscreenRightOffset_29;
	// System.Single Bridge::downSpeed
	float ___downSpeed_30;
	// System.Single Bridge::upSpeed
	float ___upSpeed_31;
	// System.Single Bridge::width
	float ___width_32;
	// System.Single Bridge::height
	float ___height_33;
	// Bridge/Equation Bridge::equation
	int32_t ___equation_34;
	// System.Single Bridge::selfSag
	float ___selfSag_35;
	// System.Single Bridge::displacementFactor
	float ___displacementFactor_36;
	// System.Single Bridge::massCap
	float ___massCap_37;
	// System.Single Bridge::flatDist
	float ___flatDist_38;
	// System.Single Bridge::rollSpeed
	float ___rollSpeed_39;
	// System.Single Bridge::rollMagnitude
	float ___rollMagnitude_40;
	// System.Single Bridge::rollFrequency
	float ___rollFrequency_41;

public:
	inline static int32_t get_offset_of_contactBodies_15() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___contactBodies_15)); }
	inline List_1_t2611407048 * get_contactBodies_15() const { return ___contactBodies_15; }
	inline List_1_t2611407048 ** get_address_of_contactBodies_15() { return &___contactBodies_15; }
	inline void set_contactBodies_15(List_1_t2611407048 * value)
	{
		___contactBodies_15 = value;
		Il2CppCodeGenWriteBarrier(&___contactBodies_15, value);
	}

	inline static int32_t get_offset_of_invisiblePlatforms_16() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___invisiblePlatforms_16)); }
	inline List_1_t2644239190 * get_invisiblePlatforms_16() const { return ___invisiblePlatforms_16; }
	inline List_1_t2644239190 ** get_address_of_invisiblePlatforms_16() { return &___invisiblePlatforms_16; }
	inline void set_invisiblePlatforms_16(List_1_t2644239190 * value)
	{
		___invisiblePlatforms_16 = value;
		Il2CppCodeGenWriteBarrier(&___invisiblePlatforms_16, value);
	}

	inline static int32_t get_offset_of_surface_17() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___surface_17)); }
	inline DynamicSurface_t3995329488 * get_surface_17() const { return ___surface_17; }
	inline DynamicSurface_t3995329488 ** get_address_of_surface_17() { return &___surface_17; }
	inline void set_surface_17(DynamicSurface_t3995329488 * value)
	{
		___surface_17 = value;
		Il2CppCodeGenWriteBarrier(&___surface_17, value);
	}

	inline static int32_t get_offset_of_root_18() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___root_18)); }
	inline Transform_t3275118058 * get_root_18() const { return ___root_18; }
	inline Transform_t3275118058 ** get_address_of_root_18() { return &___root_18; }
	inline void set_root_18(Transform_t3275118058 * value)
	{
		___root_18 = value;
		Il2CppCodeGenWriteBarrier(&___root_18, value);
	}

	inline static int32_t get_offset_of_prevHeight_19() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___prevHeight_19)); }
	inline float get_prevHeight_19() const { return ___prevHeight_19; }
	inline float* get_address_of_prevHeight_19() { return &___prevHeight_19; }
	inline void set_prevHeight_19(float value)
	{
		___prevHeight_19 = value;
	}

	inline static int32_t get_offset_of_meshScale_20() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___meshScale_20)); }
	inline Vector3_t2243707580  get_meshScale_20() const { return ___meshScale_20; }
	inline Vector3_t2243707580 * get_address_of_meshScale_20() { return &___meshScale_20; }
	inline void set_meshScale_20(Vector3_t2243707580  value)
	{
		___meshScale_20 = value;
	}

	inline static int32_t get_offset_of_mesh_21() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___mesh_21)); }
	inline Mesh_t1356156583 * get_mesh_21() const { return ___mesh_21; }
	inline Mesh_t1356156583 ** get_address_of_mesh_21() { return &___mesh_21; }
	inline void set_mesh_21(Mesh_t1356156583 * value)
	{
		___mesh_21 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_21, value);
	}

	inline static int32_t get_offset_of_material_22() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___material_22)); }
	inline Material_t193706927 * get_material_22() const { return ___material_22; }
	inline Material_t193706927 ** get_address_of_material_22() { return &___material_22; }
	inline void set_material_22(Material_t193706927 * value)
	{
		___material_22 = value;
		Il2CppCodeGenWriteBarrier(&___material_22, value);
	}

	inline static int32_t get_offset_of_initialSeparation_23() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___initialSeparation_23)); }
	inline float get_initialSeparation_23() const { return ___initialSeparation_23; }
	inline float* get_address_of_initialSeparation_23() { return &___initialSeparation_23; }
	inline void set_initialSeparation_23(float value)
	{
		___initialSeparation_23 = value;
	}

	inline static int32_t get_offset_of_forwardAxis_24() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___forwardAxis_24)); }
	inline Vector3_t2243707580  get_forwardAxis_24() const { return ___forwardAxis_24; }
	inline Vector3_t2243707580 * get_address_of_forwardAxis_24() { return &___forwardAxis_24; }
	inline void set_forwardAxis_24(Vector3_t2243707580  value)
	{
		___forwardAxis_24 = value;
	}

	inline static int32_t get_offset_of_rotationAngle_25() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___rotationAngle_25)); }
	inline float get_rotationAngle_25() const { return ___rotationAngle_25; }
	inline float* get_address_of_rotationAngle_25() { return &___rotationAngle_25; }
	inline void set_rotationAngle_25(float value)
	{
		___rotationAngle_25 = value;
	}

	inline static int32_t get_offset_of_rotationAxis_26() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___rotationAxis_26)); }
	inline Vector3_t2243707580  get_rotationAxis_26() const { return ___rotationAxis_26; }
	inline Vector3_t2243707580 * get_address_of_rotationAxis_26() { return &___rotationAxis_26; }
	inline void set_rotationAxis_26(Vector3_t2243707580  value)
	{
		___rotationAxis_26 = value;
	}

	inline static int32_t get_offset_of_faceNormal_27() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___faceNormal_27)); }
	inline bool get_faceNormal_27() const { return ___faceNormal_27; }
	inline bool* get_address_of_faceNormal_27() { return &___faceNormal_27; }
	inline void set_faceNormal_27(bool value)
	{
		___faceNormal_27 = value;
	}

	inline static int32_t get_offset_of_cullOnscreenLeftOffset_28() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___cullOnscreenLeftOffset_28)); }
	inline float get_cullOnscreenLeftOffset_28() const { return ___cullOnscreenLeftOffset_28; }
	inline float* get_address_of_cullOnscreenLeftOffset_28() { return &___cullOnscreenLeftOffset_28; }
	inline void set_cullOnscreenLeftOffset_28(float value)
	{
		___cullOnscreenLeftOffset_28 = value;
	}

	inline static int32_t get_offset_of_cullOnscreenRightOffset_29() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___cullOnscreenRightOffset_29)); }
	inline float get_cullOnscreenRightOffset_29() const { return ___cullOnscreenRightOffset_29; }
	inline float* get_address_of_cullOnscreenRightOffset_29() { return &___cullOnscreenRightOffset_29; }
	inline void set_cullOnscreenRightOffset_29(float value)
	{
		___cullOnscreenRightOffset_29 = value;
	}

	inline static int32_t get_offset_of_downSpeed_30() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___downSpeed_30)); }
	inline float get_downSpeed_30() const { return ___downSpeed_30; }
	inline float* get_address_of_downSpeed_30() { return &___downSpeed_30; }
	inline void set_downSpeed_30(float value)
	{
		___downSpeed_30 = value;
	}

	inline static int32_t get_offset_of_upSpeed_31() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___upSpeed_31)); }
	inline float get_upSpeed_31() const { return ___upSpeed_31; }
	inline float* get_address_of_upSpeed_31() { return &___upSpeed_31; }
	inline void set_upSpeed_31(float value)
	{
		___upSpeed_31 = value;
	}

	inline static int32_t get_offset_of_width_32() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___width_32)); }
	inline float get_width_32() const { return ___width_32; }
	inline float* get_address_of_width_32() { return &___width_32; }
	inline void set_width_32(float value)
	{
		___width_32 = value;
	}

	inline static int32_t get_offset_of_height_33() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___height_33)); }
	inline float get_height_33() const { return ___height_33; }
	inline float* get_address_of_height_33() { return &___height_33; }
	inline void set_height_33(float value)
	{
		___height_33 = value;
	}

	inline static int32_t get_offset_of_equation_34() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___equation_34)); }
	inline int32_t get_equation_34() const { return ___equation_34; }
	inline int32_t* get_address_of_equation_34() { return &___equation_34; }
	inline void set_equation_34(int32_t value)
	{
		___equation_34 = value;
	}

	inline static int32_t get_offset_of_selfSag_35() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___selfSag_35)); }
	inline float get_selfSag_35() const { return ___selfSag_35; }
	inline float* get_address_of_selfSag_35() { return &___selfSag_35; }
	inline void set_selfSag_35(float value)
	{
		___selfSag_35 = value;
	}

	inline static int32_t get_offset_of_displacementFactor_36() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___displacementFactor_36)); }
	inline float get_displacementFactor_36() const { return ___displacementFactor_36; }
	inline float* get_address_of_displacementFactor_36() { return &___displacementFactor_36; }
	inline void set_displacementFactor_36(float value)
	{
		___displacementFactor_36 = value;
	}

	inline static int32_t get_offset_of_massCap_37() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___massCap_37)); }
	inline float get_massCap_37() const { return ___massCap_37; }
	inline float* get_address_of_massCap_37() { return &___massCap_37; }
	inline void set_massCap_37(float value)
	{
		___massCap_37 = value;
	}

	inline static int32_t get_offset_of_flatDist_38() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___flatDist_38)); }
	inline float get_flatDist_38() const { return ___flatDist_38; }
	inline float* get_address_of_flatDist_38() { return &___flatDist_38; }
	inline void set_flatDist_38(float value)
	{
		___flatDist_38 = value;
	}

	inline static int32_t get_offset_of_rollSpeed_39() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___rollSpeed_39)); }
	inline float get_rollSpeed_39() const { return ___rollSpeed_39; }
	inline float* get_address_of_rollSpeed_39() { return &___rollSpeed_39; }
	inline void set_rollSpeed_39(float value)
	{
		___rollSpeed_39 = value;
	}

	inline static int32_t get_offset_of_rollMagnitude_40() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___rollMagnitude_40)); }
	inline float get_rollMagnitude_40() const { return ___rollMagnitude_40; }
	inline float* get_address_of_rollMagnitude_40() { return &___rollMagnitude_40; }
	inline void set_rollMagnitude_40(float value)
	{
		___rollMagnitude_40 = value;
	}

	inline static int32_t get_offset_of_rollFrequency_41() { return static_cast<int32_t>(offsetof(Bridge_t684972609, ___rollFrequency_41)); }
	inline float get_rollFrequency_41() const { return ___rollFrequency_41; }
	inline float* get_address_of_rollFrequency_41() { return &___rollFrequency_41; }
	inline void set_rollFrequency_41(float value)
	{
		___rollFrequency_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
