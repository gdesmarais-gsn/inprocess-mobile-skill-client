﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t3093584614;

#include "Json_NET_Newtonsoft_Json_Linq_JContainer3538280255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JArray
struct  JArray_t1483708661  : public JContainer_t3538280255
{
public:
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	Il2CppObject* ____values_8;

public:
	inline static int32_t get_offset_of__values_8() { return static_cast<int32_t>(offsetof(JArray_t1483708661, ____values_8)); }
	inline Il2CppObject* get__values_8() const { return ____values_8; }
	inline Il2CppObject** get_address_of__values_8() { return &____values_8; }
	inline void set__values_8(Il2CppObject* value)
	{
		____values_8 = value;
		Il2CppCodeGenWriteBarrier(&____values_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
