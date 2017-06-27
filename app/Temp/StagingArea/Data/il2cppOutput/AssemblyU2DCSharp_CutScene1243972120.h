#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CutScene
struct  CutScene_t1243972120  : public Il2CppObject
{
public:
	// System.String CutScene::tutorialID
	String_t* ___tutorialID_0;
	// System.String CutScene::resouceName
	String_t* ___resouceName_1;
	// System.Int32 CutScene::timeInSeconds
	int32_t ___timeInSeconds_2;
	// UnityEngine.Transform CutScene::parentTranform
	Transform_t3275118058 * ___parentTranform_3;

public:
	inline static int32_t get_offset_of_tutorialID_0() { return static_cast<int32_t>(offsetof(CutScene_t1243972120, ___tutorialID_0)); }
	inline String_t* get_tutorialID_0() const { return ___tutorialID_0; }
	inline String_t** get_address_of_tutorialID_0() { return &___tutorialID_0; }
	inline void set_tutorialID_0(String_t* value)
	{
		___tutorialID_0 = value;
		Il2CppCodeGenWriteBarrier(&___tutorialID_0, value);
	}

	inline static int32_t get_offset_of_resouceName_1() { return static_cast<int32_t>(offsetof(CutScene_t1243972120, ___resouceName_1)); }
	inline String_t* get_resouceName_1() const { return ___resouceName_1; }
	inline String_t** get_address_of_resouceName_1() { return &___resouceName_1; }
	inline void set_resouceName_1(String_t* value)
	{
		___resouceName_1 = value;
		Il2CppCodeGenWriteBarrier(&___resouceName_1, value);
	}

	inline static int32_t get_offset_of_timeInSeconds_2() { return static_cast<int32_t>(offsetof(CutScene_t1243972120, ___timeInSeconds_2)); }
	inline int32_t get_timeInSeconds_2() const { return ___timeInSeconds_2; }
	inline int32_t* get_address_of_timeInSeconds_2() { return &___timeInSeconds_2; }
	inline void set_timeInSeconds_2(int32_t value)
	{
		___timeInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_parentTranform_3() { return static_cast<int32_t>(offsetof(CutScene_t1243972120, ___parentTranform_3)); }
	inline Transform_t3275118058 * get_parentTranform_3() const { return ___parentTranform_3; }
	inline Transform_t3275118058 ** get_address_of_parentTranform_3() { return &___parentTranform_3; }
	inline void set_parentTranform_3(Transform_t3275118058 * value)
	{
		___parentTranform_3 = value;
		Il2CppCodeGenWriteBarrier(&___parentTranform_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
