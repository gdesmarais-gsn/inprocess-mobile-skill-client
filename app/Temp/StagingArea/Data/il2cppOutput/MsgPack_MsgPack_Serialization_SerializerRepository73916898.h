#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// MsgPack.Serialization.SerializerTypeKeyRepository
struct SerializerTypeKeyRepository_t521032515;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.SerializerRepository
struct  SerializerRepository_t73916898  : public Il2CppObject
{
public:
	// MsgPack.Serialization.SerializerTypeKeyRepository MsgPack.Serialization.SerializerRepository::_repository
	SerializerTypeKeyRepository_t521032515 * ____repository_1;

public:
	inline static int32_t get_offset_of__repository_1() { return static_cast<int32_t>(offsetof(SerializerRepository_t73916898, ____repository_1)); }
	inline SerializerTypeKeyRepository_t521032515 * get__repository_1() const { return ____repository_1; }
	inline SerializerTypeKeyRepository_t521032515 ** get_address_of__repository_1() { return &____repository_1; }
	inline void set__repository_1(SerializerTypeKeyRepository_t521032515 * value)
	{
		____repository_1 = value;
		Il2CppCodeGenWriteBarrier(&____repository_1, value);
	}
};

struct SerializerRepository_t73916898_StaticFields
{
public:
	// System.Object MsgPack.Serialization.SerializerRepository::SyncRoot
	Il2CppObject * ___SyncRoot_0;

public:
	inline static int32_t get_offset_of_SyncRoot_0() { return static_cast<int32_t>(offsetof(SerializerRepository_t73916898_StaticFields, ___SyncRoot_0)); }
	inline Il2CppObject * get_SyncRoot_0() const { return ___SyncRoot_0; }
	inline Il2CppObject ** get_address_of_SyncRoot_0() { return &___SyncRoot_0; }
	inline void set_SyncRoot_0(Il2CppObject * value)
	{
		___SyncRoot_0 = value;
		Il2CppCodeGenWriteBarrier(&___SyncRoot_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
