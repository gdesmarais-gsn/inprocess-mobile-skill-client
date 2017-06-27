#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MsgPack.Serialization.SerializationContext
struct SerializationContext_t1484625559;
// MsgPack.Serialization.SerializerRepository
struct SerializerRepository_t73916898;
// MsgPack.Serialization.SerializationCompatibilityOptions
struct SerializationCompatibilityOptions_t2671060552;
// MsgPack.Serialization.DefaultConcreteTypeRepository
struct DefaultConcreteTypeRepository_t1959877892;
// System.EventHandler`1<MsgPack.Serialization.ResolveSerializerEventArgs>
struct EventHandler_1_t2821349425;
// System.Type
struct Type_t;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer
struct IMessagePackSingleObjectSerializer_t659509506;
// System.Object
struct Il2CppObject;
// MsgPack.Serialization.ExtTypeCodeMapping
struct ExtTypeCodeMapping_t2037435746;

#include "codegen/il2cpp-codegen.h"
#include "MsgPack_MsgPack_Serialization_SerializationContext1484625559.h"
#include "MsgPack_MsgPack_Serialization_EmitterFlavor3614510380.h"
#include "MsgPack_MsgPack_Serialization_SerializationMethod3549145087.h"
#include "MsgPack_MsgPack_Serialization_EnumSerializationMet2904312576.h"
#include "MsgPack_MsgPack_Serialization_DateTimeConversionMe3801997378.h"
#include "MsgPack_MsgPack_PackerCompatibilityOptions4206945086.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// MsgPack.Serialization.SerializationContext MsgPack.Serialization.SerializationContext::get_Default()
extern "C"  SerializationContext_t1484625559 * SerializationContext_get_Default_m688057318 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationContext::set_Default(MsgPack.Serialization.SerializationContext)
extern "C"  void SerializationContext_set_Default_m2278585917 (Il2CppObject * __this /* static, unused */, SerializationContext_t1484625559 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.SerializerRepository MsgPack.Serialization.SerializationContext::get_Serializers()
extern "C"  SerializerRepository_t73916898 * SerializationContext_get_Serializers_m63921245 (SerializationContext_t1484625559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.EmitterFlavor MsgPack.Serialization.SerializationContext::get_EmitterFlavor()
extern "C"  int32_t SerializationContext_get_EmitterFlavor_m3918238850 (SerializationContext_t1484625559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationContext::set_EmitterFlavor(MsgPack.Serialization.EmitterFlavor)
extern "C"  void SerializationContext_set_EmitterFlavor_m1812401891 (SerializationContext_t1484625559 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.SerializationCompatibilityOptions MsgPack.Serialization.SerializationContext::get_CompatibilityOptions()
extern "C"  SerializationCompatibilityOptions_t2671060552 * SerializationContext_get_CompatibilityOptions_m3163311792 (SerializationContext_t1484625559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.SerializationMethod MsgPack.Serialization.SerializationContext::get_SerializationMethod()
extern "C"  int32_t SerializationContext_get_SerializationMethod_m176528706 (SerializationContext_t1484625559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationContext::set_SerializationMethod(MsgPack.Serialization.SerializationMethod)
extern "C"  void SerializationContext_set_SerializationMethod_m2611425859 (SerializationContext_t1484625559 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.EnumSerializationMethod MsgPack.Serialization.SerializationContext::get_EnumSerializationMethod()
extern "C"  int32_t SerializationContext_get_EnumSerializationMethod_m906709314 (SerializationContext_t1484625559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationContext::set_EnumSerializationMethod(MsgPack.Serialization.EnumSerializationMethod)
extern "C"  void SerializationContext_set_EnumSerializationMethod_m2700233763 (SerializationContext_t1484625559 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.DefaultConcreteTypeRepository MsgPack.Serialization.SerializationContext::get_DefaultCollectionTypes()
extern "C"  DefaultConcreteTypeRepository_t1959877892 * SerializationContext_get_DefaultCollectionTypes_m3527934648 (SerializationContext_t1484625559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.DateTimeConversionMethod MsgPack.Serialization.SerializationContext::get_DefaultDateTimeConversionMethod()
extern "C"  int32_t SerializationContext_get_DefaultDateTimeConversionMethod_m3602035803 (SerializationContext_t1484625559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationContext::set_DefaultDateTimeConversionMethod(MsgPack.Serialization.DateTimeConversionMethod)
extern "C"  void SerializationContext_set_DefaultDateTimeConversionMethod_m2257376028 (SerializationContext_t1484625559 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationContext::add_ResolveSerializer(System.EventHandler`1<MsgPack.Serialization.ResolveSerializerEventArgs>)
extern "C"  void SerializationContext_add_ResolveSerializer_m431937383 (SerializationContext_t1484625559 * __this, EventHandler_1_t2821349425 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationContext::remove_ResolveSerializer(System.EventHandler`1<MsgPack.Serialization.ResolveSerializerEventArgs>)
extern "C"  void SerializationContext_remove_ResolveSerializer_m2551802438 (SerializationContext_t1484625559 * __this, EventHandler_1_t2821349425 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.SerializationContext::ConfigureClassic()
extern "C"  SerializationContext_t1484625559 * SerializationContext_ConfigureClassic_m745832386 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.SerializationContext MsgPack.Serialization.SerializationContext::CreateClassicContext()
extern "C"  SerializationContext_t1484625559 * SerializationContext_CreateClassicContext_m465325579 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationContext::.ctor()
extern "C"  void SerializationContext__ctor_m2463216014 (SerializationContext_t1484625559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationContext::.ctor(MsgPack.PackerCompatibilityOptions)
extern "C"  void SerializationContext__ctor_m938375236 (SerializationContext_t1484625559 * __this, int32_t ___packerCompatibilityOptions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.SerializationContext::ContainsSerializer(System.Type)
extern "C"  bool SerializationContext_ContainsSerializer_m989837912 (SerializationContext_t1484625559 * __this, Type_t * ___rootType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type MsgPack.Serialization.SerializationContext::EnsureConcreteTypeRegistered(System.Type)
extern "C"  Type_t * SerializationContext_EnsureConcreteTypeRegistered_m2100980140 (SerializationContext_t1484625559 * __this, Type_t * ___mayBeAbstractType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.SerializationContext::GetSerializer(System.Type)
extern "C"  Il2CppObject * SerializationContext_GetSerializer_m3481133108 (SerializationContext_t1484625559 * __this, Type_t * ___targetType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.IMessagePackSingleObjectSerializer MsgPack.Serialization.SerializationContext::GetSerializer(System.Type,System.Object)
extern "C"  Il2CppObject * SerializationContext_GetSerializer_m328095222 (SerializationContext_t1484625559 * __this, Type_t * ___targetType0, Il2CppObject * ___providerParameter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MsgPack.Serialization.ExtTypeCodeMapping MsgPack.Serialization.SerializationContext::get_ExtTypeCodeMapping()
extern "C"  ExtTypeCodeMapping_t2037435746 * SerializationContext_get_ExtTypeCodeMapping_m1627264542 (SerializationContext_t1484625559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.SerializationContext::.cctor()
extern "C"  void SerializationContext__cctor_m4290772319 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
