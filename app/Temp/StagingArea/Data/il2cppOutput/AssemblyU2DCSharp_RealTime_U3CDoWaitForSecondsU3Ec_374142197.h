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
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RealTime/<DoWaitForSeconds>c__Iterator0
struct  U3CDoWaitForSecondsU3Ec__Iterator0_t374142197  : public Il2CppObject
{
public:
	// System.Single RealTime/<DoWaitForSeconds>c__Iterator0::dt
	float ___dt_0;
	// RealTime RealTime/<DoWaitForSeconds>c__Iterator0::$this
	RealTime_t1079009241 * ___U24this_1;
	// System.Object RealTime/<DoWaitForSeconds>c__Iterator0::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean RealTime/<DoWaitForSeconds>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 RealTime/<DoWaitForSeconds>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_dt_0() { return static_cast<int32_t>(offsetof(U3CDoWaitForSecondsU3Ec__Iterator0_t374142197, ___dt_0)); }
	inline float get_dt_0() const { return ___dt_0; }
	inline float* get_address_of_dt_0() { return &___dt_0; }
	inline void set_dt_0(float value)
	{
		___dt_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CDoWaitForSecondsU3Ec__Iterator0_t374142197, ___U24this_1)); }
	inline RealTime_t1079009241 * get_U24this_1() const { return ___U24this_1; }
	inline RealTime_t1079009241 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(RealTime_t1079009241 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CDoWaitForSecondsU3Ec__Iterator0_t374142197, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CDoWaitForSecondsU3Ec__Iterator0_t374142197, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CDoWaitForSecondsU3Ec__Iterator0_t374142197, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
