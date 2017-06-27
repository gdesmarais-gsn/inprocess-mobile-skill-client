#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3961242320;
// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object>
struct Dictionary_2_t613314382;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Serialization.TypeKeyRepository
struct  TypeKeyRepository_t2762167823  : public Il2CppObject
{
public:
	// System.Threading.ReaderWriterLockSlim MsgPack.Serialization.TypeKeyRepository::_lock
	ReaderWriterLockSlim_t3961242320 * ____lock_0;
	// System.Collections.Generic.Dictionary`2<System.RuntimeTypeHandle,System.Object> MsgPack.Serialization.TypeKeyRepository::_table
	Dictionary_2_t613314382 * ____table_1;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(TypeKeyRepository_t2762167823, ____lock_0)); }
	inline ReaderWriterLockSlim_t3961242320 * get__lock_0() const { return ____lock_0; }
	inline ReaderWriterLockSlim_t3961242320 ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(ReaderWriterLockSlim_t3961242320 * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier(&____lock_0, value);
	}

	inline static int32_t get_offset_of__table_1() { return static_cast<int32_t>(offsetof(TypeKeyRepository_t2762167823, ____table_1)); }
	inline Dictionary_2_t613314382 * get__table_1() const { return ____table_1; }
	inline Dictionary_2_t613314382 ** get_address_of__table_1() { return &____table_1; }
	inline void set__table_1(Dictionary_2_t613314382 * value)
	{
		____table_1 = value;
		Il2CppCodeGenWriteBarrier(&____table_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
