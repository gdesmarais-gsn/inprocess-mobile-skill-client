#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ArrayWithOffset
struct  ArrayWithOffset_t2998691084 
{
public:
	// System.Object System.Runtime.InteropServices.ArrayWithOffset::array
	Il2CppObject * ___array_0;
	// System.Int32 System.Runtime.InteropServices.ArrayWithOffset::offset
	int32_t ___offset_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(ArrayWithOffset_t2998691084, ___array_0)); }
	inline Il2CppObject * get_array_0() const { return ___array_0; }
	inline Il2CppObject ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(Il2CppObject * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier(&___array_0, value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(ArrayWithOffset_t2998691084, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.ArrayWithOffset
struct ArrayWithOffset_t2998691084_marshaled_pinvoke
{
	Il2CppIUnknown* ___array_0;
	int32_t ___offset_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.ArrayWithOffset
struct ArrayWithOffset_t2998691084_marshaled_com
{
	Il2CppIUnknown* ___array_0;
	int32_t ___offset_1;
};
