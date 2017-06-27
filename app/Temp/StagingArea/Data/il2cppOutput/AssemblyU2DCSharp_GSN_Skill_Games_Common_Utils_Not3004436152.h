#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.NotaryResponse
struct  NotaryResponse_t3004436152  : public Il2CppObject
{
public:
	// System.Byte[] GSN.Skill.Games.Common.Utils.NotaryResponse::timeStamp
	ByteU5BU5D_t3397334013* ___timeStamp_0;
	// System.Byte[] GSN.Skill.Games.Common.Utils.NotaryResponse::keyVersion
	ByteU5BU5D_t3397334013* ___keyVersion_1;
	// System.Byte[] GSN.Skill.Games.Common.Utils.NotaryResponse::hmac
	ByteU5BU5D_t3397334013* ___hmac_2;

public:
	inline static int32_t get_offset_of_timeStamp_0() { return static_cast<int32_t>(offsetof(NotaryResponse_t3004436152, ___timeStamp_0)); }
	inline ByteU5BU5D_t3397334013* get_timeStamp_0() const { return ___timeStamp_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_timeStamp_0() { return &___timeStamp_0; }
	inline void set_timeStamp_0(ByteU5BU5D_t3397334013* value)
	{
		___timeStamp_0 = value;
		Il2CppCodeGenWriteBarrier(&___timeStamp_0, value);
	}

	inline static int32_t get_offset_of_keyVersion_1() { return static_cast<int32_t>(offsetof(NotaryResponse_t3004436152, ___keyVersion_1)); }
	inline ByteU5BU5D_t3397334013* get_keyVersion_1() const { return ___keyVersion_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_keyVersion_1() { return &___keyVersion_1; }
	inline void set_keyVersion_1(ByteU5BU5D_t3397334013* value)
	{
		___keyVersion_1 = value;
		Il2CppCodeGenWriteBarrier(&___keyVersion_1, value);
	}

	inline static int32_t get_offset_of_hmac_2() { return static_cast<int32_t>(offsetof(NotaryResponse_t3004436152, ___hmac_2)); }
	inline ByteU5BU5D_t3397334013* get_hmac_2() const { return ___hmac_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_hmac_2() { return &___hmac_2; }
	inline void set_hmac_2(ByteU5BU5D_t3397334013* value)
	{
		___hmac_2 = value;
		Il2CppCodeGenWriteBarrier(&___hmac_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
