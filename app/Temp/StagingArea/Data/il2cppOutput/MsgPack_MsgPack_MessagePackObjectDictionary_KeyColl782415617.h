#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.MessagePackObjectDictionary
struct MessagePackObjectDictionary_t4175726983;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.MessagePackObjectDictionary/KeyCollection
struct  KeyCollection_t782415617  : public Il2CppObject
{
public:
	// MsgPack.MessagePackObjectDictionary MsgPack.MessagePackObjectDictionary/KeyCollection::_dictionary
	MessagePackObjectDictionary_t4175726983 * ____dictionary_0;

public:
	inline static int32_t get_offset_of__dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t782415617, ____dictionary_0)); }
	inline MessagePackObjectDictionary_t4175726983 * get__dictionary_0() const { return ____dictionary_0; }
	inline MessagePackObjectDictionary_t4175726983 ** get_address_of__dictionary_0() { return &____dictionary_0; }
	inline void set__dictionary_0(MessagePackObjectDictionary_t4175726983 * value)
	{
		____dictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&____dictionary_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
