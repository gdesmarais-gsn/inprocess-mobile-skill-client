#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t3315164788;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t614887283;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t2044502214;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3985864818;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t1956922769;

#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_TypeNameHandling1331513094.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo999493661.h"
#include "Json_NET_Newtonsoft_Json_PreserveReferencesHandlin3019117943.h"
#include "Json_NET_Newtonsoft_Json_ReferenceLoopHandling1017855894.h"
#include "Json_NET_Newtonsoft_Json_MissingMemberHandling367517353.h"
#include "Json_NET_Newtonsoft_Json_ObjectCreationHandling3720134651.h"
#include "Json_NET_Newtonsoft_Json_NullValueHandling3618095365.h"
#include "Json_NET_Newtonsoft_Json_DefaultValueHandling3457895463.h"
#include "Json_NET_Newtonsoft_Json_ConstructorHandling4150360451.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Nullable_1_gen2272385074.h"
#include "mscorlib_System_Nullable_1_gen3456069569.h"
#include "mscorlib_System_Nullable_1_gen192037779.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonSerializer
struct  JsonSerializer_t1719617802  : public Il2CppObject
{
public:
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormat
	int32_t ____typeNameAssemblyFormat_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t3315164788 * ____converters_9;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	Il2CppObject * ____contractResolver_10;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	Il2CppObject * ____referenceResolver_11;
	// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializer::_binder
	SerializationBinder_t3985864818 * ____binder_12;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t1417235061  ____context_13;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_t2272385074  ____formatting_14;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_t3456069569  ____floatFormatHandling_15;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_t192037779  ____floatParseHandling_16;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::errorListeners
	EventHandler_1_t1956922769 * ___errorListeners_17;

public:
	inline static int32_t get_offset_of__typeNameHandling_0() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____typeNameHandling_0)); }
	inline int32_t get__typeNameHandling_0() const { return ____typeNameHandling_0; }
	inline int32_t* get_address_of__typeNameHandling_0() { return &____typeNameHandling_0; }
	inline void set__typeNameHandling_0(int32_t value)
	{
		____typeNameHandling_0 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormat_1() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____typeNameAssemblyFormat_1)); }
	inline int32_t get__typeNameAssemblyFormat_1() const { return ____typeNameAssemblyFormat_1; }
	inline int32_t* get_address_of__typeNameAssemblyFormat_1() { return &____typeNameAssemblyFormat_1; }
	inline void set__typeNameAssemblyFormat_1(int32_t value)
	{
		____typeNameAssemblyFormat_1 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_2() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____preserveReferencesHandling_2)); }
	inline int32_t get__preserveReferencesHandling_2() const { return ____preserveReferencesHandling_2; }
	inline int32_t* get_address_of__preserveReferencesHandling_2() { return &____preserveReferencesHandling_2; }
	inline void set__preserveReferencesHandling_2(int32_t value)
	{
		____preserveReferencesHandling_2 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____referenceLoopHandling_3)); }
	inline int32_t get__referenceLoopHandling_3() const { return ____referenceLoopHandling_3; }
	inline int32_t* get_address_of__referenceLoopHandling_3() { return &____referenceLoopHandling_3; }
	inline void set__referenceLoopHandling_3(int32_t value)
	{
		____referenceLoopHandling_3 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____missingMemberHandling_4)); }
	inline int32_t get__missingMemberHandling_4() const { return ____missingMemberHandling_4; }
	inline int32_t* get_address_of__missingMemberHandling_4() { return &____missingMemberHandling_4; }
	inline void set__missingMemberHandling_4(int32_t value)
	{
		____missingMemberHandling_4 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____objectCreationHandling_5)); }
	inline int32_t get__objectCreationHandling_5() const { return ____objectCreationHandling_5; }
	inline int32_t* get_address_of__objectCreationHandling_5() { return &____objectCreationHandling_5; }
	inline void set__objectCreationHandling_5(int32_t value)
	{
		____objectCreationHandling_5 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____nullValueHandling_6)); }
	inline int32_t get__nullValueHandling_6() const { return ____nullValueHandling_6; }
	inline int32_t* get_address_of__nullValueHandling_6() { return &____nullValueHandling_6; }
	inline void set__nullValueHandling_6(int32_t value)
	{
		____nullValueHandling_6 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____defaultValueHandling_7)); }
	inline int32_t get__defaultValueHandling_7() const { return ____defaultValueHandling_7; }
	inline int32_t* get_address_of__defaultValueHandling_7() { return &____defaultValueHandling_7; }
	inline void set__defaultValueHandling_7(int32_t value)
	{
		____defaultValueHandling_7 = value;
	}

	inline static int32_t get_offset_of__constructorHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____constructorHandling_8)); }
	inline int32_t get__constructorHandling_8() const { return ____constructorHandling_8; }
	inline int32_t* get_address_of__constructorHandling_8() { return &____constructorHandling_8; }
	inline void set__constructorHandling_8(int32_t value)
	{
		____constructorHandling_8 = value;
	}

	inline static int32_t get_offset_of__converters_9() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____converters_9)); }
	inline JsonConverterCollection_t3315164788 * get__converters_9() const { return ____converters_9; }
	inline JsonConverterCollection_t3315164788 ** get_address_of__converters_9() { return &____converters_9; }
	inline void set__converters_9(JsonConverterCollection_t3315164788 * value)
	{
		____converters_9 = value;
		Il2CppCodeGenWriteBarrier(&____converters_9, value);
	}

	inline static int32_t get_offset_of__contractResolver_10() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____contractResolver_10)); }
	inline Il2CppObject * get__contractResolver_10() const { return ____contractResolver_10; }
	inline Il2CppObject ** get_address_of__contractResolver_10() { return &____contractResolver_10; }
	inline void set__contractResolver_10(Il2CppObject * value)
	{
		____contractResolver_10 = value;
		Il2CppCodeGenWriteBarrier(&____contractResolver_10, value);
	}

	inline static int32_t get_offset_of__referenceResolver_11() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____referenceResolver_11)); }
	inline Il2CppObject * get__referenceResolver_11() const { return ____referenceResolver_11; }
	inline Il2CppObject ** get_address_of__referenceResolver_11() { return &____referenceResolver_11; }
	inline void set__referenceResolver_11(Il2CppObject * value)
	{
		____referenceResolver_11 = value;
		Il2CppCodeGenWriteBarrier(&____referenceResolver_11, value);
	}

	inline static int32_t get_offset_of__binder_12() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____binder_12)); }
	inline SerializationBinder_t3985864818 * get__binder_12() const { return ____binder_12; }
	inline SerializationBinder_t3985864818 ** get_address_of__binder_12() { return &____binder_12; }
	inline void set__binder_12(SerializationBinder_t3985864818 * value)
	{
		____binder_12 = value;
		Il2CppCodeGenWriteBarrier(&____binder_12, value);
	}

	inline static int32_t get_offset_of__context_13() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____context_13)); }
	inline StreamingContext_t1417235061  get__context_13() const { return ____context_13; }
	inline StreamingContext_t1417235061 * get_address_of__context_13() { return &____context_13; }
	inline void set__context_13(StreamingContext_t1417235061  value)
	{
		____context_13 = value;
	}

	inline static int32_t get_offset_of__formatting_14() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____formatting_14)); }
	inline Nullable_1_t2272385074  get__formatting_14() const { return ____formatting_14; }
	inline Nullable_1_t2272385074 * get_address_of__formatting_14() { return &____formatting_14; }
	inline void set__formatting_14(Nullable_1_t2272385074  value)
	{
		____formatting_14 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_15() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____floatFormatHandling_15)); }
	inline Nullable_1_t3456069569  get__floatFormatHandling_15() const { return ____floatFormatHandling_15; }
	inline Nullable_1_t3456069569 * get_address_of__floatFormatHandling_15() { return &____floatFormatHandling_15; }
	inline void set__floatFormatHandling_15(Nullable_1_t3456069569  value)
	{
		____floatFormatHandling_15 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_16() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ____floatParseHandling_16)); }
	inline Nullable_1_t192037779  get__floatParseHandling_16() const { return ____floatParseHandling_16; }
	inline Nullable_1_t192037779 * get_address_of__floatParseHandling_16() { return &____floatParseHandling_16; }
	inline void set__floatParseHandling_16(Nullable_1_t192037779  value)
	{
		____floatParseHandling_16 = value;
	}

	inline static int32_t get_offset_of_errorListeners_17() { return static_cast<int32_t>(offsetof(JsonSerializer_t1719617802, ___errorListeners_17)); }
	inline EventHandler_1_t1956922769 * get_errorListeners_17() const { return ___errorListeners_17; }
	inline EventHandler_1_t1956922769 ** get_address_of_errorListeners_17() { return &___errorListeners_17; }
	inline void set_errorListeners_17(EventHandler_1_t1956922769 * value)
	{
		___errorListeners_17 = value;
		Il2CppCodeGenWriteBarrier(&___errorListeners_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
