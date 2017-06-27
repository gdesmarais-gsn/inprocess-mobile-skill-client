#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t909839986;

#include "System_System_ComponentModel_MemberDescriptor3749827553.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t4250402154  : public MemberDescriptor_t3749827553
{
public:
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t909839986 * ___notifiers_4;

public:
	inline static int32_t get_offset_of_notifiers_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t4250402154, ___notifiers_4)); }
	inline Hashtable_t909839986 * get_notifiers_4() const { return ___notifiers_4; }
	inline Hashtable_t909839986 ** get_address_of_notifiers_4() { return &___notifiers_4; }
	inline void set_notifiers_4(Hashtable_t909839986 * value)
	{
		___notifiers_4 = value;
		Il2CppCodeGenWriteBarrier(&___notifiers_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
