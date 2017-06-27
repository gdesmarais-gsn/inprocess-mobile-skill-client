#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "System_System_ComponentModel_PropertyDescriptor4250402154.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JPropertyDescriptor
struct  JPropertyDescriptor_t544573776  : public PropertyDescriptor_t4250402154
{
public:
	// System.Type Newtonsoft.Json.Linq.JPropertyDescriptor::_propertyType
	Type_t * ____propertyType_5;

public:
	inline static int32_t get_offset_of__propertyType_5() { return static_cast<int32_t>(offsetof(JPropertyDescriptor_t544573776, ____propertyType_5)); }
	inline Type_t * get__propertyType_5() const { return ____propertyType_5; }
	inline Type_t ** get_address_of__propertyType_5() { return &____propertyType_5; }
	inline void set__propertyType_5(Type_t * value)
	{
		____propertyType_5 = value;
		Il2CppCodeGenWriteBarrier(&____propertyType_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
