#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MsgPack.ItemsUnpacker
struct ItemsUnpacker_t4126175435;
// MsgPack.SubtreeUnpacker
struct SubtreeUnpacker_t915714971;
// MsgPack.BooleanStack
struct BooleanStack_t2953109678;
// MsgPack.Int64Stack
struct Int64Stack_t1378392503;

#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "MsgPack_MsgPack_SubtreeUnpacker_State2762603227.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.SubtreeUnpacker
struct  SubtreeUnpacker_t915714971  : public Unpacker_t998931393
{
public:
	// MsgPack.ItemsUnpacker MsgPack.SubtreeUnpacker::_root
	ItemsUnpacker_t4126175435 * ____root_2;
	// MsgPack.SubtreeUnpacker MsgPack.SubtreeUnpacker::_parent
	SubtreeUnpacker_t915714971 * ____parent_3;
	// MsgPack.BooleanStack MsgPack.SubtreeUnpacker::_isMap
	BooleanStack_t2953109678 * ____isMap_4;
	// MsgPack.Int64Stack MsgPack.SubtreeUnpacker::_unpacked
	Int64Stack_t1378392503 * ____unpacked_5;
	// MsgPack.Int64Stack MsgPack.SubtreeUnpacker::_itemsCount
	Int64Stack_t1378392503 * ____itemsCount_6;
	// MsgPack.SubtreeUnpacker/State MsgPack.SubtreeUnpacker::_state
	int32_t ____state_7;

public:
	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(SubtreeUnpacker_t915714971, ____root_2)); }
	inline ItemsUnpacker_t4126175435 * get__root_2() const { return ____root_2; }
	inline ItemsUnpacker_t4126175435 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(ItemsUnpacker_t4126175435 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier(&____root_2, value);
	}

	inline static int32_t get_offset_of__parent_3() { return static_cast<int32_t>(offsetof(SubtreeUnpacker_t915714971, ____parent_3)); }
	inline SubtreeUnpacker_t915714971 * get__parent_3() const { return ____parent_3; }
	inline SubtreeUnpacker_t915714971 ** get_address_of__parent_3() { return &____parent_3; }
	inline void set__parent_3(SubtreeUnpacker_t915714971 * value)
	{
		____parent_3 = value;
		Il2CppCodeGenWriteBarrier(&____parent_3, value);
	}

	inline static int32_t get_offset_of__isMap_4() { return static_cast<int32_t>(offsetof(SubtreeUnpacker_t915714971, ____isMap_4)); }
	inline BooleanStack_t2953109678 * get__isMap_4() const { return ____isMap_4; }
	inline BooleanStack_t2953109678 ** get_address_of__isMap_4() { return &____isMap_4; }
	inline void set__isMap_4(BooleanStack_t2953109678 * value)
	{
		____isMap_4 = value;
		Il2CppCodeGenWriteBarrier(&____isMap_4, value);
	}

	inline static int32_t get_offset_of__unpacked_5() { return static_cast<int32_t>(offsetof(SubtreeUnpacker_t915714971, ____unpacked_5)); }
	inline Int64Stack_t1378392503 * get__unpacked_5() const { return ____unpacked_5; }
	inline Int64Stack_t1378392503 ** get_address_of__unpacked_5() { return &____unpacked_5; }
	inline void set__unpacked_5(Int64Stack_t1378392503 * value)
	{
		____unpacked_5 = value;
		Il2CppCodeGenWriteBarrier(&____unpacked_5, value);
	}

	inline static int32_t get_offset_of__itemsCount_6() { return static_cast<int32_t>(offsetof(SubtreeUnpacker_t915714971, ____itemsCount_6)); }
	inline Int64Stack_t1378392503 * get__itemsCount_6() const { return ____itemsCount_6; }
	inline Int64Stack_t1378392503 ** get_address_of__itemsCount_6() { return &____itemsCount_6; }
	inline void set__itemsCount_6(Int64Stack_t1378392503 * value)
	{
		____itemsCount_6 = value;
		Il2CppCodeGenWriteBarrier(&____itemsCount_6, value);
	}

	inline static int32_t get_offset_of__state_7() { return static_cast<int32_t>(offsetof(SubtreeUnpacker_t915714971, ____state_7)); }
	inline int32_t get__state_7() const { return ____state_7; }
	inline int32_t* get_address_of__state_7() { return &____state_7; }
	inline void set__state_7(int32_t value)
	{
		____state_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
