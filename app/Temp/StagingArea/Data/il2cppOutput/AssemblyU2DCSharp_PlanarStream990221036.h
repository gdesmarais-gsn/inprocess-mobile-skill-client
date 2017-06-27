#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlanarStream/Axis
struct Axis_t1057766848;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// PlanarStream[]
struct PlanarStreamU5BU5D_t1328941029;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,PlanarStream/StreamObject>
struct Dictionary_2_t1049385027;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// PlanarStream
struct PlanarStream_t990221036;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Plane3727654732.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlanarStream
struct  PlanarStream_t990221036  : public Il2CppObject
{
public:
	// PlanarStream/Axis PlanarStream::X
	Axis_t1057766848 * ___X_0;
	// PlanarStream/Axis PlanarStream::Y
	Axis_t1057766848 * ___Y_1;
	// PlanarStream/Axis PlanarStream::YL10
	Axis_t1057766848 * ___YL10_2;
	// PlanarStream/Axis PlanarStream::YR10
	Axis_t1057766848 * ___YR10_3;
	// UnityEngine.Transform PlanarStream::root
	Transform_t3275118058 * ___root_10;
	// UnityEngine.Vector3 PlanarStream::origin
	Vector3_t2243707580  ___origin_11;
	// UnityEngine.Plane PlanarStream::worldPlane
	Plane_t3727654732  ___worldPlane_12;
	// UnityEngine.Matrix4x4 PlanarStream::worldToLocal
	Matrix4x4_t2933234003  ___worldToLocal_13;
	// System.Boolean PlanarStream::alternator
	bool ___alternator_14;
	// System.Int32 PlanarStream::streamId
	int32_t ___streamId_15;
	// PlanarStream PlanarStream::savedStream
	PlanarStream_t990221036 * ___savedStream_20;
	// UnityEngine.Ray PlanarStream::bottomLeftWorldRay
	Ray_t2469606224  ___bottomLeftWorldRay_27;
	// UnityEngine.Ray PlanarStream::bottomRightWorldRay
	Ray_t2469606224  ___bottomRightWorldRay_28;
	// UnityEngine.Ray PlanarStream::topLeftWorldRay
	Ray_t2469606224  ___topLeftWorldRay_29;
	// UnityEngine.Ray PlanarStream::topRightWorldRay
	Ray_t2469606224  ___topRightWorldRay_30;
	// System.Boolean PlanarStream::despawnAll
	bool ___despawnAll_31;
	// System.Boolean PlanarStream::hidePlane
	bool ___hidePlane_32;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___X_0)); }
	inline Axis_t1057766848 * get_X_0() const { return ___X_0; }
	inline Axis_t1057766848 ** get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(Axis_t1057766848 * value)
	{
		___X_0 = value;
		Il2CppCodeGenWriteBarrier(&___X_0, value);
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___Y_1)); }
	inline Axis_t1057766848 * get_Y_1() const { return ___Y_1; }
	inline Axis_t1057766848 ** get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(Axis_t1057766848 * value)
	{
		___Y_1 = value;
		Il2CppCodeGenWriteBarrier(&___Y_1, value);
	}

	inline static int32_t get_offset_of_YL10_2() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___YL10_2)); }
	inline Axis_t1057766848 * get_YL10_2() const { return ___YL10_2; }
	inline Axis_t1057766848 ** get_address_of_YL10_2() { return &___YL10_2; }
	inline void set_YL10_2(Axis_t1057766848 * value)
	{
		___YL10_2 = value;
		Il2CppCodeGenWriteBarrier(&___YL10_2, value);
	}

	inline static int32_t get_offset_of_YR10_3() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___YR10_3)); }
	inline Axis_t1057766848 * get_YR10_3() const { return ___YR10_3; }
	inline Axis_t1057766848 ** get_address_of_YR10_3() { return &___YR10_3; }
	inline void set_YR10_3(Axis_t1057766848 * value)
	{
		___YR10_3 = value;
		Il2CppCodeGenWriteBarrier(&___YR10_3, value);
	}

	inline static int32_t get_offset_of_root_10() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___root_10)); }
	inline Transform_t3275118058 * get_root_10() const { return ___root_10; }
	inline Transform_t3275118058 ** get_address_of_root_10() { return &___root_10; }
	inline void set_root_10(Transform_t3275118058 * value)
	{
		___root_10 = value;
		Il2CppCodeGenWriteBarrier(&___root_10, value);
	}

	inline static int32_t get_offset_of_origin_11() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___origin_11)); }
	inline Vector3_t2243707580  get_origin_11() const { return ___origin_11; }
	inline Vector3_t2243707580 * get_address_of_origin_11() { return &___origin_11; }
	inline void set_origin_11(Vector3_t2243707580  value)
	{
		___origin_11 = value;
	}

	inline static int32_t get_offset_of_worldPlane_12() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___worldPlane_12)); }
	inline Plane_t3727654732  get_worldPlane_12() const { return ___worldPlane_12; }
	inline Plane_t3727654732 * get_address_of_worldPlane_12() { return &___worldPlane_12; }
	inline void set_worldPlane_12(Plane_t3727654732  value)
	{
		___worldPlane_12 = value;
	}

	inline static int32_t get_offset_of_worldToLocal_13() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___worldToLocal_13)); }
	inline Matrix4x4_t2933234003  get_worldToLocal_13() const { return ___worldToLocal_13; }
	inline Matrix4x4_t2933234003 * get_address_of_worldToLocal_13() { return &___worldToLocal_13; }
	inline void set_worldToLocal_13(Matrix4x4_t2933234003  value)
	{
		___worldToLocal_13 = value;
	}

	inline static int32_t get_offset_of_alternator_14() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___alternator_14)); }
	inline bool get_alternator_14() const { return ___alternator_14; }
	inline bool* get_address_of_alternator_14() { return &___alternator_14; }
	inline void set_alternator_14(bool value)
	{
		___alternator_14 = value;
	}

	inline static int32_t get_offset_of_streamId_15() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___streamId_15)); }
	inline int32_t get_streamId_15() const { return ___streamId_15; }
	inline int32_t* get_address_of_streamId_15() { return &___streamId_15; }
	inline void set_streamId_15(int32_t value)
	{
		___streamId_15 = value;
	}

	inline static int32_t get_offset_of_savedStream_20() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___savedStream_20)); }
	inline PlanarStream_t990221036 * get_savedStream_20() const { return ___savedStream_20; }
	inline PlanarStream_t990221036 ** get_address_of_savedStream_20() { return &___savedStream_20; }
	inline void set_savedStream_20(PlanarStream_t990221036 * value)
	{
		___savedStream_20 = value;
		Il2CppCodeGenWriteBarrier(&___savedStream_20, value);
	}

	inline static int32_t get_offset_of_bottomLeftWorldRay_27() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___bottomLeftWorldRay_27)); }
	inline Ray_t2469606224  get_bottomLeftWorldRay_27() const { return ___bottomLeftWorldRay_27; }
	inline Ray_t2469606224 * get_address_of_bottomLeftWorldRay_27() { return &___bottomLeftWorldRay_27; }
	inline void set_bottomLeftWorldRay_27(Ray_t2469606224  value)
	{
		___bottomLeftWorldRay_27 = value;
	}

	inline static int32_t get_offset_of_bottomRightWorldRay_28() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___bottomRightWorldRay_28)); }
	inline Ray_t2469606224  get_bottomRightWorldRay_28() const { return ___bottomRightWorldRay_28; }
	inline Ray_t2469606224 * get_address_of_bottomRightWorldRay_28() { return &___bottomRightWorldRay_28; }
	inline void set_bottomRightWorldRay_28(Ray_t2469606224  value)
	{
		___bottomRightWorldRay_28 = value;
	}

	inline static int32_t get_offset_of_topLeftWorldRay_29() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___topLeftWorldRay_29)); }
	inline Ray_t2469606224  get_topLeftWorldRay_29() const { return ___topLeftWorldRay_29; }
	inline Ray_t2469606224 * get_address_of_topLeftWorldRay_29() { return &___topLeftWorldRay_29; }
	inline void set_topLeftWorldRay_29(Ray_t2469606224  value)
	{
		___topLeftWorldRay_29 = value;
	}

	inline static int32_t get_offset_of_topRightWorldRay_30() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___topRightWorldRay_30)); }
	inline Ray_t2469606224  get_topRightWorldRay_30() const { return ___topRightWorldRay_30; }
	inline Ray_t2469606224 * get_address_of_topRightWorldRay_30() { return &___topRightWorldRay_30; }
	inline void set_topRightWorldRay_30(Ray_t2469606224  value)
	{
		___topRightWorldRay_30 = value;
	}

	inline static int32_t get_offset_of_despawnAll_31() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___despawnAll_31)); }
	inline bool get_despawnAll_31() const { return ___despawnAll_31; }
	inline bool* get_address_of_despawnAll_31() { return &___despawnAll_31; }
	inline void set_despawnAll_31(bool value)
	{
		___despawnAll_31 = value;
	}

	inline static int32_t get_offset_of_hidePlane_32() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036, ___hidePlane_32)); }
	inline bool get_hidePlane_32() const { return ___hidePlane_32; }
	inline bool* get_address_of_hidePlane_32() { return &___hidePlane_32; }
	inline void set_hidePlane_32(bool value)
	{
		___hidePlane_32 = value;
	}
};

struct PlanarStream_t990221036_StaticFields
{
public:
	// System.Int32 PlanarStream::nextStreamId
	int32_t ___nextStreamId_16;
	// PlanarStream[] PlanarStream::allStreams
	PlanarStreamU5BU5D_t1328941029* ___allStreams_17;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,PlanarStream/StreamObject> PlanarStream::streamObjectLookup
	Dictionary_2_t1049385027 * ___streamObjectLookup_18;
	// UnityEngine.Transform[] PlanarStream::vitalTransforms
	TransformU5BU5D_t3764228911* ___vitalTransforms_19;
	// PlanarStream PlanarStream::pushedStream
	PlanarStream_t990221036 * ___pushedStream_21;
	// System.Int32 PlanarStream::lastUpdateCacheFrameCount
	int32_t ___lastUpdateCacheFrameCount_22;
	// UnityEngine.Ray PlanarStream::s_bottomLeftWorldRay
	Ray_t2469606224  ___s_bottomLeftWorldRay_23;
	// UnityEngine.Ray PlanarStream::s_bottomRightWorldRay
	Ray_t2469606224  ___s_bottomRightWorldRay_24;
	// UnityEngine.Ray PlanarStream::s_topLeftWorldRay
	Ray_t2469606224  ___s_topLeftWorldRay_25;
	// UnityEngine.Ray PlanarStream::s_topRightWorldRay
	Ray_t2469606224  ___s_topRightWorldRay_26;

public:
	inline static int32_t get_offset_of_nextStreamId_16() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036_StaticFields, ___nextStreamId_16)); }
	inline int32_t get_nextStreamId_16() const { return ___nextStreamId_16; }
	inline int32_t* get_address_of_nextStreamId_16() { return &___nextStreamId_16; }
	inline void set_nextStreamId_16(int32_t value)
	{
		___nextStreamId_16 = value;
	}

	inline static int32_t get_offset_of_allStreams_17() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036_StaticFields, ___allStreams_17)); }
	inline PlanarStreamU5BU5D_t1328941029* get_allStreams_17() const { return ___allStreams_17; }
	inline PlanarStreamU5BU5D_t1328941029** get_address_of_allStreams_17() { return &___allStreams_17; }
	inline void set_allStreams_17(PlanarStreamU5BU5D_t1328941029* value)
	{
		___allStreams_17 = value;
		Il2CppCodeGenWriteBarrier(&___allStreams_17, value);
	}

	inline static int32_t get_offset_of_streamObjectLookup_18() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036_StaticFields, ___streamObjectLookup_18)); }
	inline Dictionary_2_t1049385027 * get_streamObjectLookup_18() const { return ___streamObjectLookup_18; }
	inline Dictionary_2_t1049385027 ** get_address_of_streamObjectLookup_18() { return &___streamObjectLookup_18; }
	inline void set_streamObjectLookup_18(Dictionary_2_t1049385027 * value)
	{
		___streamObjectLookup_18 = value;
		Il2CppCodeGenWriteBarrier(&___streamObjectLookup_18, value);
	}

	inline static int32_t get_offset_of_vitalTransforms_19() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036_StaticFields, ___vitalTransforms_19)); }
	inline TransformU5BU5D_t3764228911* get_vitalTransforms_19() const { return ___vitalTransforms_19; }
	inline TransformU5BU5D_t3764228911** get_address_of_vitalTransforms_19() { return &___vitalTransforms_19; }
	inline void set_vitalTransforms_19(TransformU5BU5D_t3764228911* value)
	{
		___vitalTransforms_19 = value;
		Il2CppCodeGenWriteBarrier(&___vitalTransforms_19, value);
	}

	inline static int32_t get_offset_of_pushedStream_21() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036_StaticFields, ___pushedStream_21)); }
	inline PlanarStream_t990221036 * get_pushedStream_21() const { return ___pushedStream_21; }
	inline PlanarStream_t990221036 ** get_address_of_pushedStream_21() { return &___pushedStream_21; }
	inline void set_pushedStream_21(PlanarStream_t990221036 * value)
	{
		___pushedStream_21 = value;
		Il2CppCodeGenWriteBarrier(&___pushedStream_21, value);
	}

	inline static int32_t get_offset_of_lastUpdateCacheFrameCount_22() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036_StaticFields, ___lastUpdateCacheFrameCount_22)); }
	inline int32_t get_lastUpdateCacheFrameCount_22() const { return ___lastUpdateCacheFrameCount_22; }
	inline int32_t* get_address_of_lastUpdateCacheFrameCount_22() { return &___lastUpdateCacheFrameCount_22; }
	inline void set_lastUpdateCacheFrameCount_22(int32_t value)
	{
		___lastUpdateCacheFrameCount_22 = value;
	}

	inline static int32_t get_offset_of_s_bottomLeftWorldRay_23() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036_StaticFields, ___s_bottomLeftWorldRay_23)); }
	inline Ray_t2469606224  get_s_bottomLeftWorldRay_23() const { return ___s_bottomLeftWorldRay_23; }
	inline Ray_t2469606224 * get_address_of_s_bottomLeftWorldRay_23() { return &___s_bottomLeftWorldRay_23; }
	inline void set_s_bottomLeftWorldRay_23(Ray_t2469606224  value)
	{
		___s_bottomLeftWorldRay_23 = value;
	}

	inline static int32_t get_offset_of_s_bottomRightWorldRay_24() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036_StaticFields, ___s_bottomRightWorldRay_24)); }
	inline Ray_t2469606224  get_s_bottomRightWorldRay_24() const { return ___s_bottomRightWorldRay_24; }
	inline Ray_t2469606224 * get_address_of_s_bottomRightWorldRay_24() { return &___s_bottomRightWorldRay_24; }
	inline void set_s_bottomRightWorldRay_24(Ray_t2469606224  value)
	{
		___s_bottomRightWorldRay_24 = value;
	}

	inline static int32_t get_offset_of_s_topLeftWorldRay_25() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036_StaticFields, ___s_topLeftWorldRay_25)); }
	inline Ray_t2469606224  get_s_topLeftWorldRay_25() const { return ___s_topLeftWorldRay_25; }
	inline Ray_t2469606224 * get_address_of_s_topLeftWorldRay_25() { return &___s_topLeftWorldRay_25; }
	inline void set_s_topLeftWorldRay_25(Ray_t2469606224  value)
	{
		___s_topLeftWorldRay_25 = value;
	}

	inline static int32_t get_offset_of_s_topRightWorldRay_26() { return static_cast<int32_t>(offsetof(PlanarStream_t990221036_StaticFields, ___s_topRightWorldRay_26)); }
	inline Ray_t2469606224  get_s_topRightWorldRay_26() const { return ___s_topRightWorldRay_26; }
	inline Ray_t2469606224 * get_address_of_s_topRightWorldRay_26() { return &___s_topRightWorldRay_26; }
	inline void set_s_topRightWorldRay_26(Ray_t2469606224  value)
	{
		___s_topRightWorldRay_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
