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

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1476190589.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22208478405.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.MessagePackObjectDictionary/Enumerator
struct  Enumerator_t3469257882 
{
public:
	// MsgPack.MessagePackObjectDictionary MsgPack.MessagePackObjectDictionary/Enumerator::_underlying
	MessagePackObjectDictionary_t4175726983 * ____underlying_0;
	// System.Collections.Generic.Dictionary`2/Enumerator<MsgPack.MessagePackObject,MsgPack.MessagePackObject> MsgPack.MessagePackObjectDictionary/Enumerator::_enumerator
	Enumerator_t1476190589  ____enumerator_1;
	// System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject> MsgPack.MessagePackObjectDictionary/Enumerator::_current
	KeyValuePair_2_t2208478405  ____current_2;
	// System.Int32 MsgPack.MessagePackObjectDictionary/Enumerator::_position
	int32_t ____position_3;
	// System.Int32 MsgPack.MessagePackObjectDictionary/Enumerator::_initialVersion
	int32_t ____initialVersion_4;

public:
	inline static int32_t get_offset_of__underlying_0() { return static_cast<int32_t>(offsetof(Enumerator_t3469257882, ____underlying_0)); }
	inline MessagePackObjectDictionary_t4175726983 * get__underlying_0() const { return ____underlying_0; }
	inline MessagePackObjectDictionary_t4175726983 ** get_address_of__underlying_0() { return &____underlying_0; }
	inline void set__underlying_0(MessagePackObjectDictionary_t4175726983 * value)
	{
		____underlying_0 = value;
		Il2CppCodeGenWriteBarrier(&____underlying_0, value);
	}

	inline static int32_t get_offset_of__enumerator_1() { return static_cast<int32_t>(offsetof(Enumerator_t3469257882, ____enumerator_1)); }
	inline Enumerator_t1476190589  get__enumerator_1() const { return ____enumerator_1; }
	inline Enumerator_t1476190589 * get_address_of__enumerator_1() { return &____enumerator_1; }
	inline void set__enumerator_1(Enumerator_t1476190589  value)
	{
		____enumerator_1 = value;
	}

	inline static int32_t get_offset_of__current_2() { return static_cast<int32_t>(offsetof(Enumerator_t3469257882, ____current_2)); }
	inline KeyValuePair_2_t2208478405  get__current_2() const { return ____current_2; }
	inline KeyValuePair_2_t2208478405 * get_address_of__current_2() { return &____current_2; }
	inline void set__current_2(KeyValuePair_2_t2208478405  value)
	{
		____current_2 = value;
	}

	inline static int32_t get_offset_of__position_3() { return static_cast<int32_t>(offsetof(Enumerator_t3469257882, ____position_3)); }
	inline int32_t get__position_3() const { return ____position_3; }
	inline int32_t* get_address_of__position_3() { return &____position_3; }
	inline void set__position_3(int32_t value)
	{
		____position_3 = value;
	}

	inline static int32_t get_offset_of__initialVersion_4() { return static_cast<int32_t>(offsetof(Enumerator_t3469257882, ____initialVersion_4)); }
	inline int32_t get__initialVersion_4() const { return ____initialVersion_4; }
	inline int32_t* get_address_of__initialVersion_4() { return &____initialVersion_4; }
	inline void set__initialVersion_4(int32_t value)
	{
		____initialVersion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of MsgPack.MessagePackObjectDictionary/Enumerator
struct Enumerator_t3469257882_marshaled_pinvoke
{
	MessagePackObjectDictionary_t4175726983 * ____underlying_0;
	Enumerator_t1476190589  ____enumerator_1;
	KeyValuePair_2_t2208478405  ____current_2;
	int32_t ____position_3;
	int32_t ____initialVersion_4;
};
// Native definition for COM marshalling of MsgPack.MessagePackObjectDictionary/Enumerator
struct Enumerator_t3469257882_marshaled_com
{
	MessagePackObjectDictionary_t4175726983 * ____underlying_0;
	Enumerator_t1476190589  ____enumerator_1;
	KeyValuePair_2_t2208478405  ____current_2;
	int32_t ____position_3;
	int32_t ____initialVersion_4;
};
