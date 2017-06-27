#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TMPro.TMP_InputField
struct TMP_InputField_t1778301588;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowPassword
struct  ShowPassword_t1066138072  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.TMP_InputField ShowPassword::_inputField
	TMP_InputField_t1778301588 * ____inputField_2;

public:
	inline static int32_t get_offset_of__inputField_2() { return static_cast<int32_t>(offsetof(ShowPassword_t1066138072, ____inputField_2)); }
	inline TMP_InputField_t1778301588 * get__inputField_2() const { return ____inputField_2; }
	inline TMP_InputField_t1778301588 ** get_address_of__inputField_2() { return &____inputField_2; }
	inline void set__inputField_2(TMP_InputField_t1778301588 * value)
	{
		____inputField_2 = value;
		Il2CppCodeGenWriteBarrier(&____inputField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
