#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.Serialization.TypeKeyRepository
struct TypeKeyRepository_t2762167823;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.DefaultConcreteTypeRepository
struct  DefaultConcreteTypeRepository_t1959877892  : public Il2CppObject
{
public:
	// MsgPack.Serialization.TypeKeyRepository MsgPack.Serialization.DefaultConcreteTypeRepository::_defaultCollectionTypes
	TypeKeyRepository_t2762167823 * ____defaultCollectionTypes_0;

public:
	inline static int32_t get_offset_of__defaultCollectionTypes_0() { return static_cast<int32_t>(offsetof(DefaultConcreteTypeRepository_t1959877892, ____defaultCollectionTypes_0)); }
	inline TypeKeyRepository_t2762167823 * get__defaultCollectionTypes_0() const { return ____defaultCollectionTypes_0; }
	inline TypeKeyRepository_t2762167823 ** get_address_of__defaultCollectionTypes_0() { return &____defaultCollectionTypes_0; }
	inline void set__defaultCollectionTypes_0(TypeKeyRepository_t2762167823 * value)
	{
		____defaultCollectionTypes_0 = value;
		Il2CppCodeGenWriteBarrier(&____defaultCollectionTypes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
