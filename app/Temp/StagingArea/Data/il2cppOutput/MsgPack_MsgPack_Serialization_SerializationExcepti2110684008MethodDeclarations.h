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

// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Exception MsgPack.Serialization.SerializationExceptions::NewValueTypeCannotBeNull(System.String,System.Type,System.Type)
extern "C"  Exception_t1927440687 * SerializationExceptions_NewValueTypeCannotBeNull_m845081788 (Il2CppObject * __this /* static, unused */, String_t* ___name0, Type_t * ___memberType1, Type_t * ___declaringType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewValueTypeCannotBeNull(System.Type)
extern "C"  Exception_t1927440687 * SerializationExceptions_NewValueTypeCannotBeNull_m3704817077 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewMissingItem(System.Int32)
extern "C"  Exception_t1927440687 * SerializationExceptions_NewMissingItem_m246644470 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewTargetDoesNotHavePublicDefaultConstructor(System.Type)
extern "C"  Exception_t1927440687 * SerializationExceptions_NewTargetDoesNotHavePublicDefaultConstructor_m3099491490 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewTargetDoesNotHavePublicDefaultConstructorNorInitialCapacity(System.Type)
extern "C"  Exception_t1927440687 * SerializationExceptions_NewTargetDoesNotHavePublicDefaultConstructorNorInitialCapacity_m2493451587 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewMissingProperty(System.String)
extern "C"  Exception_t1927440687 * SerializationExceptions_NewMissingProperty_m1234582205 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewUnexpectedEndOfStream()
extern "C"  Exception_t1927440687 * SerializationExceptions_NewUnexpectedEndOfStream_m3017929451 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewIsNotArrayHeader()
extern "C"  Exception_t1927440687 * SerializationExceptions_NewIsNotArrayHeader_m3701408545 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewIsNotMapHeader()
extern "C"  Exception_t1927440687 * SerializationExceptions_NewIsNotMapHeader_m2397891378 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewNotSupportedBecauseCannotInstanciateAbstractType(System.Type)
extern "C"  Exception_t1927440687 * SerializationExceptions_NewNotSupportedBecauseCannotInstanciateAbstractType_m2139252626 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewIsIncorrectStream(System.Exception)
extern "C"  Exception_t1927440687 * SerializationExceptions_NewIsIncorrectStream_m2341047759 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___innerException0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewIsTooLargeCollection()
extern "C"  Exception_t1927440687 * SerializationExceptions_NewIsTooLargeCollection_m3603720865 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewNullIsProhibited(System.String)
extern "C"  Exception_t1927440687 * SerializationExceptions_NewNullIsProhibited_m2879709773 (Il2CppObject * __this /* static, unused */, String_t* ___memberName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewReadOnlyMemberItemsMustNotBeNull(System.String)
extern "C"  Exception_t1927440687 * SerializationExceptions_NewReadOnlyMemberItemsMustNotBeNull_m1010316846 (Il2CppObject * __this /* static, unused */, String_t* ___memberName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewUnpackToIsNotSupported(System.Type,System.Exception)
extern "C"  Exception_t1927440687 * SerializationExceptions_NewUnpackToIsNotSupported_m1163086767 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Exception_t1927440687 * ___inner1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewValueTypeCannotBePolymorphic(System.Type)
extern "C"  Exception_t1927440687 * SerializationExceptions_NewValueTypeCannotBePolymorphic_m1283571556 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewUnknownTypeEmbedding()
extern "C"  Exception_t1927440687 * SerializationExceptions_NewUnknownTypeEmbedding_m713371799 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception MsgPack.Serialization.SerializationExceptions::NewIncompatibleCollectionSerializer(System.Type,System.Type,System.Type)
extern "C"  Exception_t1927440687 * SerializationExceptions_NewIncompatibleCollectionSerializer_m3421280960 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, Type_t * ___incompatibleType1, Type_t * ___exampleClass2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
