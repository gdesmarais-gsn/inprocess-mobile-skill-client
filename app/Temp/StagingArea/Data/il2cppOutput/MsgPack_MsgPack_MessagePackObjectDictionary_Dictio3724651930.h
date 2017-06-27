#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.MessagePackObjectDictionary/DictionaryEnumerator
struct  DictionaryEnumerator_t3724651930 
{
public:
	// System.Collections.IDictionaryEnumerator MsgPack.MessagePackObjectDictionary/DictionaryEnumerator::_underlying
	Il2CppObject * ____underlying_0;

public:
	inline static int32_t get_offset_of__underlying_0() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t3724651930, ____underlying_0)); }
	inline Il2CppObject * get__underlying_0() const { return ____underlying_0; }
	inline Il2CppObject ** get_address_of__underlying_0() { return &____underlying_0; }
	inline void set__underlying_0(Il2CppObject * value)
	{
		____underlying_0 = value;
		Il2CppCodeGenWriteBarrier(&____underlying_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of MsgPack.MessagePackObjectDictionary/DictionaryEnumerator
struct DictionaryEnumerator_t3724651930_marshaled_pinvoke
{
	Il2CppObject * ____underlying_0;
};
// Native definition for COM marshalling of MsgPack.MessagePackObjectDictionary/DictionaryEnumerator
struct DictionaryEnumerator_t3724651930_marshaled_com
{
	Il2CppObject * ____underlying_0;
};
