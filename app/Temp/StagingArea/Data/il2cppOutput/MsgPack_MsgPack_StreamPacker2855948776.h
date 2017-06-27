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

#include "MsgPack_MsgPack_Packer1439452732.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.StreamPacker
struct  StreamPacker_t2855948776  : public Packer_t1439452732
{
public:
	// System.IO.Stream MsgPack.StreamPacker::_stream
	Stream_t3255436806 * ____stream_3;
	// System.Boolean MsgPack.StreamPacker::_ownsStream
	bool ____ownsStream_4;

public:
	inline static int32_t get_offset_of__stream_3() { return static_cast<int32_t>(offsetof(StreamPacker_t2855948776, ____stream_3)); }
	inline Stream_t3255436806 * get__stream_3() const { return ____stream_3; }
	inline Stream_t3255436806 ** get_address_of__stream_3() { return &____stream_3; }
	inline void set__stream_3(Stream_t3255436806 * value)
	{
		____stream_3 = value;
		Il2CppCodeGenWriteBarrier(&____stream_3, value);
	}

	inline static int32_t get_offset_of__ownsStream_4() { return static_cast<int32_t>(offsetof(StreamPacker_t2855948776, ____ownsStream_4)); }
	inline bool get__ownsStream_4() const { return ____ownsStream_4; }
	inline bool* get_address_of__ownsStream_4() { return &____ownsStream_4; }
	inline void set__ownsStream_4(bool value)
	{
		____ownsStream_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
