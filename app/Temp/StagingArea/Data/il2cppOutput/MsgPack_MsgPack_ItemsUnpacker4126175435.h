#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "MsgPack_MsgPack_Unpacker998931393.h"
#include "MsgPack_MsgPack_ItemsUnpacker_CollectionType4230358620.h"
#include "MsgPack_MsgPack_MessagePackObject2038085051.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.ItemsUnpacker
struct  ItemsUnpacker_t4126175435  : public Unpacker_t998931393
{
public:
	// System.Boolean MsgPack.ItemsUnpacker::_ownsStream
	bool ____ownsStream_2;
	// System.IO.Stream MsgPack.ItemsUnpacker::_source
	Stream_t3255436806 * ____source_3;
	// System.Byte[] MsgPack.ItemsUnpacker::_scalarBuffer
	ByteU5BU5D_t3397334013* ____scalarBuffer_4;
	// System.Int64 MsgPack.ItemsUnpacker::InternalItemsCount
	int64_t ___InternalItemsCount_5;
	// MsgPack.ItemsUnpacker/CollectionType MsgPack.ItemsUnpacker::InternalCollectionType
	int32_t ___InternalCollectionType_6;
	// MsgPack.MessagePackObject MsgPack.ItemsUnpacker::InternalData
	MessagePackObject_t2038085051  ___InternalData_7;
	// System.Int64 MsgPack.ItemsUnpacker::_offset
	int64_t ____offset_8;

public:
	inline static int32_t get_offset_of__ownsStream_2() { return static_cast<int32_t>(offsetof(ItemsUnpacker_t4126175435, ____ownsStream_2)); }
	inline bool get__ownsStream_2() const { return ____ownsStream_2; }
	inline bool* get_address_of__ownsStream_2() { return &____ownsStream_2; }
	inline void set__ownsStream_2(bool value)
	{
		____ownsStream_2 = value;
	}

	inline static int32_t get_offset_of__source_3() { return static_cast<int32_t>(offsetof(ItemsUnpacker_t4126175435, ____source_3)); }
	inline Stream_t3255436806 * get__source_3() const { return ____source_3; }
	inline Stream_t3255436806 ** get_address_of__source_3() { return &____source_3; }
	inline void set__source_3(Stream_t3255436806 * value)
	{
		____source_3 = value;
		Il2CppCodeGenWriteBarrier(&____source_3, value);
	}

	inline static int32_t get_offset_of__scalarBuffer_4() { return static_cast<int32_t>(offsetof(ItemsUnpacker_t4126175435, ____scalarBuffer_4)); }
	inline ByteU5BU5D_t3397334013* get__scalarBuffer_4() const { return ____scalarBuffer_4; }
	inline ByteU5BU5D_t3397334013** get_address_of__scalarBuffer_4() { return &____scalarBuffer_4; }
	inline void set__scalarBuffer_4(ByteU5BU5D_t3397334013* value)
	{
		____scalarBuffer_4 = value;
		Il2CppCodeGenWriteBarrier(&____scalarBuffer_4, value);
	}

	inline static int32_t get_offset_of_InternalItemsCount_5() { return static_cast<int32_t>(offsetof(ItemsUnpacker_t4126175435, ___InternalItemsCount_5)); }
	inline int64_t get_InternalItemsCount_5() const { return ___InternalItemsCount_5; }
	inline int64_t* get_address_of_InternalItemsCount_5() { return &___InternalItemsCount_5; }
	inline void set_InternalItemsCount_5(int64_t value)
	{
		___InternalItemsCount_5 = value;
	}

	inline static int32_t get_offset_of_InternalCollectionType_6() { return static_cast<int32_t>(offsetof(ItemsUnpacker_t4126175435, ___InternalCollectionType_6)); }
	inline int32_t get_InternalCollectionType_6() const { return ___InternalCollectionType_6; }
	inline int32_t* get_address_of_InternalCollectionType_6() { return &___InternalCollectionType_6; }
	inline void set_InternalCollectionType_6(int32_t value)
	{
		___InternalCollectionType_6 = value;
	}

	inline static int32_t get_offset_of_InternalData_7() { return static_cast<int32_t>(offsetof(ItemsUnpacker_t4126175435, ___InternalData_7)); }
	inline MessagePackObject_t2038085051  get_InternalData_7() const { return ___InternalData_7; }
	inline MessagePackObject_t2038085051 * get_address_of_InternalData_7() { return &___InternalData_7; }
	inline void set_InternalData_7(MessagePackObject_t2038085051  value)
	{
		___InternalData_7 = value;
	}

	inline static int32_t get_offset_of__offset_8() { return static_cast<int32_t>(offsetof(ItemsUnpacker_t4126175435, ____offset_8)); }
	inline int64_t get__offset_8() const { return ____offset_8; }
	inline int64_t* get_address_of__offset_8() { return &____offset_8; }
	inline void set__offset_8(int64_t value)
	{
		____offset_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
