#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t2505001351;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t614887283;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t2044502214;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3985864818;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t1956922769;

#include "mscorlib_System_Object2689449295.h"
#include "Json_NET_Newtonsoft_Json_ReferenceLoopHandling1017855894.h"
#include "Json_NET_Newtonsoft_Json_MissingMemberHandling367517353.h"
#include "Json_NET_Newtonsoft_Json_NullValueHandling3618095365.h"
#include "Json_NET_Newtonsoft_Json_DefaultValueHandling3457895463.h"
#include "Json_NET_Newtonsoft_Json_ObjectCreationHandling3720134651.h"
#include "Json_NET_Newtonsoft_Json_PreserveReferencesHandlin3019117943.h"
#include "Json_NET_Newtonsoft_Json_ConstructorHandling4150360451.h"
#include "Json_NET_Newtonsoft_Json_TypeNameHandling1331513094.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo999493661.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "Json_NET_Newtonsoft_Json_Formatting4009318759.h"
#include "Json_NET_Newtonsoft_Json_FloatParseHandling1928971464.h"
#include "Json_NET_Newtonsoft_Json_FloatFormatHandling898035958.h"
#include "mscorlib_System_Nullable_1_gen2272385074.h"
#include "mscorlib_System_Nullable_1_gen3456069569.h"
#include "mscorlib_System_Nullable_1_gen192037779.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen3557527272.h"
#include "mscorlib_System_Nullable_1_gen1720961778.h"
#include "mscorlib_System_Nullable_1_gen1282184258.h"
#include "mscorlib_System_Nullable_1_gen1881161680.h"
#include "mscorlib_System_Nullable_1_gen1983200966.h"
#include "mscorlib_System_Nullable_1_gen2925550964.h"
#include "mscorlib_System_Nullable_1_gen3575889505.h"
#include "mscorlib_System_Nullable_1_gen3975268672.h"
#include "mscorlib_System_Nullable_1_gen2413426766.h"
#include "mscorlib_System_Nullable_1_gen3889546705.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonSerializerSettings
struct  JsonSerializerSettings_t842388167  : public Il2CppObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_t2272385074  ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_t3456069569  ____floatFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_t192037779  ____floatParseHandling_19;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t3500843524 * ____culture_20;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t2088641033  ____checkAdditionalContent_21;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_t334943763  ____maxDepth_22;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_23;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_24;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_25;
	// System.Nullable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormat
	Nullable_1_t3557527272  ____typeNameAssemblyFormat_26;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t1720961778  ____defaultValueHandling_27;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t1282184258  ____preserveReferencesHandling_28;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_t1881161680  ____nullValueHandling_29;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t1983200966  ____objectCreationHandling_30;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t2925550964  ____missingMemberHandling_31;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t3575889505  ____referenceLoopHandling_32;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_t3975268672  ____context_33;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_t2413426766  ____constructorHandling_34;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_t3889546705  ____typeNameHandling_35;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	Il2CppObject* ___U3CConvertersU3Ek__BackingField_36;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	Il2CppObject * ___U3CContractResolverU3Ek__BackingField_37;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolver>k__BackingField
	Il2CppObject * ___U3CReferenceResolverU3Ek__BackingField_38;
	// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializerSettings::<Binder>k__BackingField
	SerializationBinder_t3985864818 * ___U3CBinderU3Ek__BackingField_39;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t1956922769 * ___U3CErrorU3Ek__BackingField_40;

public:
	inline static int32_t get_offset_of__formatting_17() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____formatting_17)); }
	inline Nullable_1_t2272385074  get__formatting_17() const { return ____formatting_17; }
	inline Nullable_1_t2272385074 * get_address_of__formatting_17() { return &____formatting_17; }
	inline void set__formatting_17(Nullable_1_t2272385074  value)
	{
		____formatting_17 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____floatFormatHandling_18)); }
	inline Nullable_1_t3456069569  get__floatFormatHandling_18() const { return ____floatFormatHandling_18; }
	inline Nullable_1_t3456069569 * get_address_of__floatFormatHandling_18() { return &____floatFormatHandling_18; }
	inline void set__floatFormatHandling_18(Nullable_1_t3456069569  value)
	{
		____floatFormatHandling_18 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____floatParseHandling_19)); }
	inline Nullable_1_t192037779  get__floatParseHandling_19() const { return ____floatParseHandling_19; }
	inline Nullable_1_t192037779 * get_address_of__floatParseHandling_19() { return &____floatParseHandling_19; }
	inline void set__floatParseHandling_19(Nullable_1_t192037779  value)
	{
		____floatParseHandling_19 = value;
	}

	inline static int32_t get_offset_of__culture_20() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____culture_20)); }
	inline CultureInfo_t3500843524 * get__culture_20() const { return ____culture_20; }
	inline CultureInfo_t3500843524 ** get_address_of__culture_20() { return &____culture_20; }
	inline void set__culture_20(CultureInfo_t3500843524 * value)
	{
		____culture_20 = value;
		Il2CppCodeGenWriteBarrier(&____culture_20, value);
	}

	inline static int32_t get_offset_of__checkAdditionalContent_21() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____checkAdditionalContent_21)); }
	inline Nullable_1_t2088641033  get__checkAdditionalContent_21() const { return ____checkAdditionalContent_21; }
	inline Nullable_1_t2088641033 * get_address_of__checkAdditionalContent_21() { return &____checkAdditionalContent_21; }
	inline void set__checkAdditionalContent_21(Nullable_1_t2088641033  value)
	{
		____checkAdditionalContent_21 = value;
	}

	inline static int32_t get_offset_of__maxDepth_22() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____maxDepth_22)); }
	inline Nullable_1_t334943763  get__maxDepth_22() const { return ____maxDepth_22; }
	inline Nullable_1_t334943763 * get_address_of__maxDepth_22() { return &____maxDepth_22; }
	inline void set__maxDepth_22(Nullable_1_t334943763  value)
	{
		____maxDepth_22 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_23() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____maxDepthSet_23)); }
	inline bool get__maxDepthSet_23() const { return ____maxDepthSet_23; }
	inline bool* get_address_of__maxDepthSet_23() { return &____maxDepthSet_23; }
	inline void set__maxDepthSet_23(bool value)
	{
		____maxDepthSet_23 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_24() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____dateFormatString_24)); }
	inline String_t* get__dateFormatString_24() const { return ____dateFormatString_24; }
	inline String_t** get_address_of__dateFormatString_24() { return &____dateFormatString_24; }
	inline void set__dateFormatString_24(String_t* value)
	{
		____dateFormatString_24 = value;
		Il2CppCodeGenWriteBarrier(&____dateFormatString_24, value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_25() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____dateFormatStringSet_25)); }
	inline bool get__dateFormatStringSet_25() const { return ____dateFormatStringSet_25; }
	inline bool* get_address_of__dateFormatStringSet_25() { return &____dateFormatStringSet_25; }
	inline void set__dateFormatStringSet_25(bool value)
	{
		____dateFormatStringSet_25 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormat_26() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____typeNameAssemblyFormat_26)); }
	inline Nullable_1_t3557527272  get__typeNameAssemblyFormat_26() const { return ____typeNameAssemblyFormat_26; }
	inline Nullable_1_t3557527272 * get_address_of__typeNameAssemblyFormat_26() { return &____typeNameAssemblyFormat_26; }
	inline void set__typeNameAssemblyFormat_26(Nullable_1_t3557527272  value)
	{
		____typeNameAssemblyFormat_26 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_27() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____defaultValueHandling_27)); }
	inline Nullable_1_t1720961778  get__defaultValueHandling_27() const { return ____defaultValueHandling_27; }
	inline Nullable_1_t1720961778 * get_address_of__defaultValueHandling_27() { return &____defaultValueHandling_27; }
	inline void set__defaultValueHandling_27(Nullable_1_t1720961778  value)
	{
		____defaultValueHandling_27 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_28() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____preserveReferencesHandling_28)); }
	inline Nullable_1_t1282184258  get__preserveReferencesHandling_28() const { return ____preserveReferencesHandling_28; }
	inline Nullable_1_t1282184258 * get_address_of__preserveReferencesHandling_28() { return &____preserveReferencesHandling_28; }
	inline void set__preserveReferencesHandling_28(Nullable_1_t1282184258  value)
	{
		____preserveReferencesHandling_28 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_29() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____nullValueHandling_29)); }
	inline Nullable_1_t1881161680  get__nullValueHandling_29() const { return ____nullValueHandling_29; }
	inline Nullable_1_t1881161680 * get_address_of__nullValueHandling_29() { return &____nullValueHandling_29; }
	inline void set__nullValueHandling_29(Nullable_1_t1881161680  value)
	{
		____nullValueHandling_29 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_30() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____objectCreationHandling_30)); }
	inline Nullable_1_t1983200966  get__objectCreationHandling_30() const { return ____objectCreationHandling_30; }
	inline Nullable_1_t1983200966 * get_address_of__objectCreationHandling_30() { return &____objectCreationHandling_30; }
	inline void set__objectCreationHandling_30(Nullable_1_t1983200966  value)
	{
		____objectCreationHandling_30 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_31() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____missingMemberHandling_31)); }
	inline Nullable_1_t2925550964  get__missingMemberHandling_31() const { return ____missingMemberHandling_31; }
	inline Nullable_1_t2925550964 * get_address_of__missingMemberHandling_31() { return &____missingMemberHandling_31; }
	inline void set__missingMemberHandling_31(Nullable_1_t2925550964  value)
	{
		____missingMemberHandling_31 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_32() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____referenceLoopHandling_32)); }
	inline Nullable_1_t3575889505  get__referenceLoopHandling_32() const { return ____referenceLoopHandling_32; }
	inline Nullable_1_t3575889505 * get_address_of__referenceLoopHandling_32() { return &____referenceLoopHandling_32; }
	inline void set__referenceLoopHandling_32(Nullable_1_t3575889505  value)
	{
		____referenceLoopHandling_32 = value;
	}

	inline static int32_t get_offset_of__context_33() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____context_33)); }
	inline Nullable_1_t3975268672  get__context_33() const { return ____context_33; }
	inline Nullable_1_t3975268672 * get_address_of__context_33() { return &____context_33; }
	inline void set__context_33(Nullable_1_t3975268672  value)
	{
		____context_33 = value;
	}

	inline static int32_t get_offset_of__constructorHandling_34() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____constructorHandling_34)); }
	inline Nullable_1_t2413426766  get__constructorHandling_34() const { return ____constructorHandling_34; }
	inline Nullable_1_t2413426766 * get_address_of__constructorHandling_34() { return &____constructorHandling_34; }
	inline void set__constructorHandling_34(Nullable_1_t2413426766  value)
	{
		____constructorHandling_34 = value;
	}

	inline static int32_t get_offset_of__typeNameHandling_35() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ____typeNameHandling_35)); }
	inline Nullable_1_t3889546705  get__typeNameHandling_35() const { return ____typeNameHandling_35; }
	inline Nullable_1_t3889546705 * get_address_of__typeNameHandling_35() { return &____typeNameHandling_35; }
	inline void set__typeNameHandling_35(Nullable_1_t3889546705  value)
	{
		____typeNameHandling_35 = value;
	}

	inline static int32_t get_offset_of_U3CConvertersU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ___U3CConvertersU3Ek__BackingField_36)); }
	inline Il2CppObject* get_U3CConvertersU3Ek__BackingField_36() const { return ___U3CConvertersU3Ek__BackingField_36; }
	inline Il2CppObject** get_address_of_U3CConvertersU3Ek__BackingField_36() { return &___U3CConvertersU3Ek__BackingField_36; }
	inline void set_U3CConvertersU3Ek__BackingField_36(Il2CppObject* value)
	{
		___U3CConvertersU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConvertersU3Ek__BackingField_36, value);
	}

	inline static int32_t get_offset_of_U3CContractResolverU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ___U3CContractResolverU3Ek__BackingField_37)); }
	inline Il2CppObject * get_U3CContractResolverU3Ek__BackingField_37() const { return ___U3CContractResolverU3Ek__BackingField_37; }
	inline Il2CppObject ** get_address_of_U3CContractResolverU3Ek__BackingField_37() { return &___U3CContractResolverU3Ek__BackingField_37; }
	inline void set_U3CContractResolverU3Ek__BackingField_37(Il2CppObject * value)
	{
		___U3CContractResolverU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CContractResolverU3Ek__BackingField_37, value);
	}

	inline static int32_t get_offset_of_U3CReferenceResolverU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ___U3CReferenceResolverU3Ek__BackingField_38)); }
	inline Il2CppObject * get_U3CReferenceResolverU3Ek__BackingField_38() const { return ___U3CReferenceResolverU3Ek__BackingField_38; }
	inline Il2CppObject ** get_address_of_U3CReferenceResolverU3Ek__BackingField_38() { return &___U3CReferenceResolverU3Ek__BackingField_38; }
	inline void set_U3CReferenceResolverU3Ek__BackingField_38(Il2CppObject * value)
	{
		___U3CReferenceResolverU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CReferenceResolverU3Ek__BackingField_38, value);
	}

	inline static int32_t get_offset_of_U3CBinderU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ___U3CBinderU3Ek__BackingField_39)); }
	inline SerializationBinder_t3985864818 * get_U3CBinderU3Ek__BackingField_39() const { return ___U3CBinderU3Ek__BackingField_39; }
	inline SerializationBinder_t3985864818 ** get_address_of_U3CBinderU3Ek__BackingField_39() { return &___U3CBinderU3Ek__BackingField_39; }
	inline void set_U3CBinderU3Ek__BackingField_39(SerializationBinder_t3985864818 * value)
	{
		___U3CBinderU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBinderU3Ek__BackingField_39, value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167, ___U3CErrorU3Ek__BackingField_40)); }
	inline EventHandler_1_t1956922769 * get_U3CErrorU3Ek__BackingField_40() const { return ___U3CErrorU3Ek__BackingField_40; }
	inline EventHandler_1_t1956922769 ** get_address_of_U3CErrorU3Ek__BackingField_40() { return &___U3CErrorU3Ek__BackingField_40; }
	inline void set_U3CErrorU3Ek__BackingField_40(EventHandler_1_t1956922769 * value)
	{
		___U3CErrorU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier(&___U3CErrorU3Ek__BackingField_40, value);
	}
};

struct JsonSerializerSettings_t842388167_StaticFields
{
public:
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t1417235061  ___DefaultContext_9;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t3500843524 * ___DefaultCulture_14;

public:
	inline static int32_t get_offset_of_DefaultContext_9() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167_StaticFields, ___DefaultContext_9)); }
	inline StreamingContext_t1417235061  get_DefaultContext_9() const { return ___DefaultContext_9; }
	inline StreamingContext_t1417235061 * get_address_of_DefaultContext_9() { return &___DefaultContext_9; }
	inline void set_DefaultContext_9(StreamingContext_t1417235061  value)
	{
		___DefaultContext_9 = value;
	}

	inline static int32_t get_offset_of_DefaultCulture_14() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t842388167_StaticFields, ___DefaultCulture_14)); }
	inline CultureInfo_t3500843524 * get_DefaultCulture_14() const { return ___DefaultCulture_14; }
	inline CultureInfo_t3500843524 ** get_address_of_DefaultCulture_14() { return &___DefaultCulture_14; }
	inline void set_DefaultCulture_14(CultureInfo_t3500843524 * value)
	{
		___DefaultCulture_14 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultCulture_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
