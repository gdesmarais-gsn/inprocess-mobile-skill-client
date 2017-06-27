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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Events.EventDispatcher/EventMetaData
struct  EventMetaData_t4082466381 
{
public:
	// System.Type GSN.Skill.Events.EventDispatcher/EventMetaData::type
	Type_t * ___type_0;
	// System.Int32 GSN.Skill.Events.EventDispatcher/EventMetaData::id
	int32_t ___id_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EventMetaData_t4082466381, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(EventMetaData_t4082466381, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Events.EventDispatcher/EventMetaData
struct EventMetaData_t4082466381_marshaled_pinvoke
{
	Type_t * ___type_0;
	int32_t ___id_1;
};
// Native definition for COM marshalling of GSN.Skill.Events.EventDispatcher/EventMetaData
struct EventMetaData_t4082466381_marshaled_com
{
	Type_t * ___type_0;
	int32_t ___id_1;
};
