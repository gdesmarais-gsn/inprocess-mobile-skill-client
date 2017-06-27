#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "MsgPack_MsgPack_PackerCompatibilityOptions4206945086.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.SerializationCompatibilityOptions
struct  SerializationCompatibilityOptions_t2671060552  : public Il2CppObject
{
public:
	// MsgPack.PackerCompatibilityOptions MsgPack.Serialization.SerializationCompatibilityOptions::_packerCompatibilityOptions
	int32_t ____packerCompatibilityOptions_0;
	// System.Boolean MsgPack.Serialization.SerializationCompatibilityOptions::<OneBoundDataMemberOrder>k__BackingField
	bool ___U3COneBoundDataMemberOrderU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__packerCompatibilityOptions_0() { return static_cast<int32_t>(offsetof(SerializationCompatibilityOptions_t2671060552, ____packerCompatibilityOptions_0)); }
	inline int32_t get__packerCompatibilityOptions_0() const { return ____packerCompatibilityOptions_0; }
	inline int32_t* get_address_of__packerCompatibilityOptions_0() { return &____packerCompatibilityOptions_0; }
	inline void set__packerCompatibilityOptions_0(int32_t value)
	{
		____packerCompatibilityOptions_0 = value;
	}

	inline static int32_t get_offset_of_U3COneBoundDataMemberOrderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SerializationCompatibilityOptions_t2671060552, ___U3COneBoundDataMemberOrderU3Ek__BackingField_1)); }
	inline bool get_U3COneBoundDataMemberOrderU3Ek__BackingField_1() const { return ___U3COneBoundDataMemberOrderU3Ek__BackingField_1; }
	inline bool* get_address_of_U3COneBoundDataMemberOrderU3Ek__BackingField_1() { return &___U3COneBoundDataMemberOrderU3Ek__BackingField_1; }
	inline void set_U3COneBoundDataMemberOrderU3Ek__BackingField_1(bool value)
	{
		___U3COneBoundDataMemberOrderU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
