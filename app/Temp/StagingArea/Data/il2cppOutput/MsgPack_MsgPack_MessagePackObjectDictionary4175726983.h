#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<MsgPack.MessagePackObject>
struct List_1_t1407206183;
// System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>
struct Dictionary_2_t156165887;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Collections.DictionaryEntry>
struct Func_2_t2371521502;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.MessagePackObjectDictionary
struct  MessagePackObjectDictionary_t4175726983  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<MsgPack.MessagePackObject> MsgPack.MessagePackObjectDictionary::_keys
	List_1_t1407206183 * ____keys_0;
	// System.Collections.Generic.List`1<MsgPack.MessagePackObject> MsgPack.MessagePackObjectDictionary::_values
	List_1_t1407206183 * ____values_1;
	// System.Collections.Generic.Dictionary`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject> MsgPack.MessagePackObjectDictionary::_dictionary
	Dictionary_2_t156165887 * ____dictionary_2;
	// System.Int32 MsgPack.MessagePackObjectDictionary::_version
	int32_t ____version_3;
	// System.Boolean MsgPack.MessagePackObjectDictionary::_isFrozen
	bool ____isFrozen_4;

public:
	inline static int32_t get_offset_of__keys_0() { return static_cast<int32_t>(offsetof(MessagePackObjectDictionary_t4175726983, ____keys_0)); }
	inline List_1_t1407206183 * get__keys_0() const { return ____keys_0; }
	inline List_1_t1407206183 ** get_address_of__keys_0() { return &____keys_0; }
	inline void set__keys_0(List_1_t1407206183 * value)
	{
		____keys_0 = value;
		Il2CppCodeGenWriteBarrier(&____keys_0, value);
	}

	inline static int32_t get_offset_of__values_1() { return static_cast<int32_t>(offsetof(MessagePackObjectDictionary_t4175726983, ____values_1)); }
	inline List_1_t1407206183 * get__values_1() const { return ____values_1; }
	inline List_1_t1407206183 ** get_address_of__values_1() { return &____values_1; }
	inline void set__values_1(List_1_t1407206183 * value)
	{
		____values_1 = value;
		Il2CppCodeGenWriteBarrier(&____values_1, value);
	}

	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(MessagePackObjectDictionary_t4175726983, ____dictionary_2)); }
	inline Dictionary_2_t156165887 * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_t156165887 ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_t156165887 * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier(&____dictionary_2, value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(MessagePackObjectDictionary_t4175726983, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__isFrozen_4() { return static_cast<int32_t>(offsetof(MessagePackObjectDictionary_t4175726983, ____isFrozen_4)); }
	inline bool get__isFrozen_4() const { return ____isFrozen_4; }
	inline bool* get_address_of__isFrozen_4() { return &____isFrozen_4; }
	inline void set__isFrozen_4(bool value)
	{
		____isFrozen_4 = value;
	}
};

struct MessagePackObjectDictionary_t4175726983_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<MsgPack.MessagePackObject,MsgPack.MessagePackObject>,System.Collections.DictionaryEntry> MsgPack.MessagePackObjectDictionary::CS$<>9__CachedAnonymousMethodDelegatef
	Func_2_t2371521502 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_5;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_5() { return static_cast<int32_t>(offsetof(MessagePackObjectDictionary_t4175726983_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_5)); }
	inline Func_2_t2371521502 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_5() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_5; }
	inline Func_2_t2371521502 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_5() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_5; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_5(Func_2_t2371521502 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_5 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
