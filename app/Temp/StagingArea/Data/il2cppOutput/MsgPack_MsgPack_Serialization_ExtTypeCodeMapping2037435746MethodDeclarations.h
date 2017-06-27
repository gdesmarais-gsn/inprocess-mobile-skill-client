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

// MsgPack.Serialization.ExtTypeCodeMapping
struct ExtTypeCodeMapping_t2037435746;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t830752747;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Byte MsgPack.Serialization.ExtTypeCodeMapping::get_Item(System.String)
extern "C"  uint8_t ExtTypeCodeMapping_get_Item_m702548497 (ExtTypeCodeMapping_t2037435746 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.ExtTypeCodeMapping::.ctor()
extern "C"  void ExtTypeCodeMapping__ctor_m3795575153 (ExtTypeCodeMapping_t2037435746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MsgPack.Serialization.ExtTypeCodeMapping::Add(System.String,System.Byte)
extern "C"  bool ExtTypeCodeMapping_Add_m245875095 (ExtTypeCodeMapping_t2037435746 * __this, String_t* ___name0, uint8_t ___typeCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>> MsgPack.Serialization.ExtTypeCodeMapping::GetEnumerator()
extern "C"  Il2CppObject* ExtTypeCodeMapping_GetEnumerator_m637067023 (ExtTypeCodeMapping_t2037435746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MsgPack.Serialization.ExtTypeCodeMapping::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ExtTypeCodeMapping_System_Collections_IEnumerable_GetEnumerator_m346361998 (ExtTypeCodeMapping_t2037435746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.ExtTypeCodeMapping::ValidateName(System.String)
extern "C"  void ExtTypeCodeMapping_ValidateName_m1565418344 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MsgPack.Serialization.ExtTypeCodeMapping::ValidateTypeCode(System.Byte)
extern "C"  void ExtTypeCodeMapping_ValidateTypeCode_m355523131 (Il2CppObject * __this /* static, unused */, uint8_t ___typeCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
