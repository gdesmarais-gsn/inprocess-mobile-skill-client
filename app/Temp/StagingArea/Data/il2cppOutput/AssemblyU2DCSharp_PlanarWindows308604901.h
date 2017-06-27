#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlanarWindows
struct PlanarWindows_t308604901;
// System.Collections.Generic.List`1<PlanarWindows/WallOrWindow>
struct List_1_t4010751585;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Comparison`1<PlanarWindows/WallOrWindow>
struct Comparison_1_t1608402008;

#include "AssemblyU2DCSharp_ReloadableMonoBehaviour1116404963.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlanarWindows
struct  PlanarWindows_t308604901  : public ReloadableMonoBehaviour_t1116404963
{
public:
	// System.Collections.Generic.List`1<PlanarWindows/WallOrWindow> PlanarWindows::wows
	List_1_t4010751585 * ___wows_3;
	// UnityEngine.Camera PlanarWindows::cam
	Camera_t189460977 * ___cam_4;
	// UnityEngine.Transform PlanarWindows::camTrans
	Transform_t3275118058 * ___camTrans_5;

public:
	inline static int32_t get_offset_of_wows_3() { return static_cast<int32_t>(offsetof(PlanarWindows_t308604901, ___wows_3)); }
	inline List_1_t4010751585 * get_wows_3() const { return ___wows_3; }
	inline List_1_t4010751585 ** get_address_of_wows_3() { return &___wows_3; }
	inline void set_wows_3(List_1_t4010751585 * value)
	{
		___wows_3 = value;
		Il2CppCodeGenWriteBarrier(&___wows_3, value);
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(PlanarWindows_t308604901, ___cam_4)); }
	inline Camera_t189460977 * get_cam_4() const { return ___cam_4; }
	inline Camera_t189460977 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Camera_t189460977 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier(&___cam_4, value);
	}

	inline static int32_t get_offset_of_camTrans_5() { return static_cast<int32_t>(offsetof(PlanarWindows_t308604901, ___camTrans_5)); }
	inline Transform_t3275118058 * get_camTrans_5() const { return ___camTrans_5; }
	inline Transform_t3275118058 ** get_address_of_camTrans_5() { return &___camTrans_5; }
	inline void set_camTrans_5(Transform_t3275118058 * value)
	{
		___camTrans_5 = value;
		Il2CppCodeGenWriteBarrier(&___camTrans_5, value);
	}
};

struct PlanarWindows_t308604901_StaticFields
{
public:
	// PlanarWindows PlanarWindows::Inst
	PlanarWindows_t308604901 * ___Inst_2;
	// System.Comparison`1<PlanarWindows/WallOrWindow> PlanarWindows::<>f__mg$cache0
	Comparison_1_t1608402008 * ___U3CU3Ef__mgU24cache0_6;

public:
	inline static int32_t get_offset_of_Inst_2() { return static_cast<int32_t>(offsetof(PlanarWindows_t308604901_StaticFields, ___Inst_2)); }
	inline PlanarWindows_t308604901 * get_Inst_2() const { return ___Inst_2; }
	inline PlanarWindows_t308604901 ** get_address_of_Inst_2() { return &___Inst_2; }
	inline void set_Inst_2(PlanarWindows_t308604901 * value)
	{
		___Inst_2 = value;
		Il2CppCodeGenWriteBarrier(&___Inst_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_6() { return static_cast<int32_t>(offsetof(PlanarWindows_t308604901_StaticFields, ___U3CU3Ef__mgU24cache0_6)); }
	inline Comparison_1_t1608402008 * get_U3CU3Ef__mgU24cache0_6() const { return ___U3CU3Ef__mgU24cache0_6; }
	inline Comparison_1_t1608402008 ** get_address_of_U3CU3Ef__mgU24cache0_6() { return &___U3CU3Ef__mgU24cache0_6; }
	inline void set_U3CU3Ef__mgU24cache0_6(Comparison_1_t1608402008 * value)
	{
		___U3CU3Ef__mgU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
