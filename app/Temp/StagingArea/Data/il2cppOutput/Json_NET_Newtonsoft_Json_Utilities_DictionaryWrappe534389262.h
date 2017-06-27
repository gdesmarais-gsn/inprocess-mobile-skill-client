#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t280592844;
// System.Object
struct Il2CppObject;
// System.Func`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t3251821928;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>
struct  DictionaryWrapper_2_t534389262  : public Il2CppObject
{
public:
	// System.Collections.IDictionary Newtonsoft.Json.Utilities.DictionaryWrapper`2::_dictionary
	Il2CppObject * ____dictionary_0;
	// System.Collections.Generic.IDictionary`2<TKey,TValue> Newtonsoft.Json.Utilities.DictionaryWrapper`2::_genericDictionary
	Il2CppObject* ____genericDictionary_1;
	// System.Object Newtonsoft.Json.Utilities.DictionaryWrapper`2::_syncRoot
	Il2CppObject * ____syncRoot_2;

public:
	inline static int32_t get_offset_of__dictionary_0() { return static_cast<int32_t>(offsetof(DictionaryWrapper_2_t534389262, ____dictionary_0)); }
	inline Il2CppObject * get__dictionary_0() const { return ____dictionary_0; }
	inline Il2CppObject ** get_address_of__dictionary_0() { return &____dictionary_0; }
	inline void set__dictionary_0(Il2CppObject * value)
	{
		____dictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&____dictionary_0, value);
	}

	inline static int32_t get_offset_of__genericDictionary_1() { return static_cast<int32_t>(offsetof(DictionaryWrapper_2_t534389262, ____genericDictionary_1)); }
	inline Il2CppObject* get__genericDictionary_1() const { return ____genericDictionary_1; }
	inline Il2CppObject** get_address_of__genericDictionary_1() { return &____genericDictionary_1; }
	inline void set__genericDictionary_1(Il2CppObject* value)
	{
		____genericDictionary_1 = value;
		Il2CppCodeGenWriteBarrier(&____genericDictionary_1, value);
	}

	inline static int32_t get_offset_of__syncRoot_2() { return static_cast<int32_t>(offsetof(DictionaryWrapper_2_t534389262, ____syncRoot_2)); }
	inline Il2CppObject * get__syncRoot_2() const { return ____syncRoot_2; }
	inline Il2CppObject ** get_address_of__syncRoot_2() { return &____syncRoot_2; }
	inline void set__syncRoot_2(Il2CppObject * value)
	{
		____syncRoot_2 = value;
		Il2CppCodeGenWriteBarrier(&____syncRoot_2, value);
	}
};

struct DictionaryWrapper_2_t534389262_StaticFields
{
public:
	// System.Func`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Newtonsoft.Json.Utilities.DictionaryWrapper`2::<>f__am$cache0
	Func_2_t3251821928 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(DictionaryWrapper_2_t534389262_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t3251821928 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t3251821928 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t3251821928 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
