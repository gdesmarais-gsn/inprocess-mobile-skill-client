#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RealTime
struct RealTime_t1079009241;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RealTime
struct  RealTime_t1079009241  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RealTime::mFixedDeltaTime
	float ___mFixedDeltaTime_2;
	// System.Single RealTime::mPrevious
	float ___mPrevious_4;
	// System.Single[] RealTime::mCategorizedDeltas
	SingleU5BU5D_t577127397* ___mCategorizedDeltas_5;
	// System.Single[] RealTime::mCategorizedTimes
	SingleU5BU5D_t577127397* ___mCategorizedTimes_6;
	// System.DateTime RealTime::startTime
	DateTime_t693205669  ___startTime_7;
	// System.Single RealTime::initialUnityTime
	float ___initialUnityTime_8;

public:
	inline static int32_t get_offset_of_mFixedDeltaTime_2() { return static_cast<int32_t>(offsetof(RealTime_t1079009241, ___mFixedDeltaTime_2)); }
	inline float get_mFixedDeltaTime_2() const { return ___mFixedDeltaTime_2; }
	inline float* get_address_of_mFixedDeltaTime_2() { return &___mFixedDeltaTime_2; }
	inline void set_mFixedDeltaTime_2(float value)
	{
		___mFixedDeltaTime_2 = value;
	}

	inline static int32_t get_offset_of_mPrevious_4() { return static_cast<int32_t>(offsetof(RealTime_t1079009241, ___mPrevious_4)); }
	inline float get_mPrevious_4() const { return ___mPrevious_4; }
	inline float* get_address_of_mPrevious_4() { return &___mPrevious_4; }
	inline void set_mPrevious_4(float value)
	{
		___mPrevious_4 = value;
	}

	inline static int32_t get_offset_of_mCategorizedDeltas_5() { return static_cast<int32_t>(offsetof(RealTime_t1079009241, ___mCategorizedDeltas_5)); }
	inline SingleU5BU5D_t577127397* get_mCategorizedDeltas_5() const { return ___mCategorizedDeltas_5; }
	inline SingleU5BU5D_t577127397** get_address_of_mCategorizedDeltas_5() { return &___mCategorizedDeltas_5; }
	inline void set_mCategorizedDeltas_5(SingleU5BU5D_t577127397* value)
	{
		___mCategorizedDeltas_5 = value;
		Il2CppCodeGenWriteBarrier(&___mCategorizedDeltas_5, value);
	}

	inline static int32_t get_offset_of_mCategorizedTimes_6() { return static_cast<int32_t>(offsetof(RealTime_t1079009241, ___mCategorizedTimes_6)); }
	inline SingleU5BU5D_t577127397* get_mCategorizedTimes_6() const { return ___mCategorizedTimes_6; }
	inline SingleU5BU5D_t577127397** get_address_of_mCategorizedTimes_6() { return &___mCategorizedTimes_6; }
	inline void set_mCategorizedTimes_6(SingleU5BU5D_t577127397* value)
	{
		___mCategorizedTimes_6 = value;
		Il2CppCodeGenWriteBarrier(&___mCategorizedTimes_6, value);
	}

	inline static int32_t get_offset_of_startTime_7() { return static_cast<int32_t>(offsetof(RealTime_t1079009241, ___startTime_7)); }
	inline DateTime_t693205669  get_startTime_7() const { return ___startTime_7; }
	inline DateTime_t693205669 * get_address_of_startTime_7() { return &___startTime_7; }
	inline void set_startTime_7(DateTime_t693205669  value)
	{
		___startTime_7 = value;
	}

	inline static int32_t get_offset_of_initialUnityTime_8() { return static_cast<int32_t>(offsetof(RealTime_t1079009241, ___initialUnityTime_8)); }
	inline float get_initialUnityTime_8() const { return ___initialUnityTime_8; }
	inline float* get_address_of_initialUnityTime_8() { return &___initialUnityTime_8; }
	inline void set_initialUnityTime_8(float value)
	{
		___initialUnityTime_8 = value;
	}
};

struct RealTime_t1079009241_StaticFields
{
public:
	// RealTime RealTime::mInst
	RealTime_t1079009241 * ___mInst_3;

public:
	inline static int32_t get_offset_of_mInst_3() { return static_cast<int32_t>(offsetof(RealTime_t1079009241_StaticFields, ___mInst_3)); }
	inline RealTime_t1079009241 * get_mInst_3() const { return ___mInst_3; }
	inline RealTime_t1079009241 ** get_address_of_mInst_3() { return &___mInst_3; }
	inline void set_mInst_3(RealTime_t1079009241 * value)
	{
		___mInst_3 = value;
		Il2CppCodeGenWriteBarrier(&___mInst_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
