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
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.FakeWebResponse
struct  FakeWebResponse_t2637957952  : public Il2CppObject
{
public:
	// System.Boolean GSN.Skill.Games.Common.Utils.FakeWebResponse::success
	bool ___success_0;
	// System.Byte[] GSN.Skill.Games.Common.Utils.FakeWebResponse::bytes
	ByteU5BU5D_t3397334013* ___bytes_1;
	// System.Int32 GSN.Skill.Games.Common.Utils.FakeWebResponse::httpStatusCode
	int32_t ___httpStatusCode_2;
	// System.String GSN.Skill.Games.Common.Utils.FakeWebResponse::contentType
	String_t* ___contentType_3;

public:
	inline static int32_t get_offset_of_success_0() { return static_cast<int32_t>(offsetof(FakeWebResponse_t2637957952, ___success_0)); }
	inline bool get_success_0() const { return ___success_0; }
	inline bool* get_address_of_success_0() { return &___success_0; }
	inline void set_success_0(bool value)
	{
		___success_0 = value;
	}

	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(FakeWebResponse_t2637957952, ___bytes_1)); }
	inline ByteU5BU5D_t3397334013* get_bytes_1() const { return ___bytes_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(ByteU5BU5D_t3397334013* value)
	{
		___bytes_1 = value;
		Il2CppCodeGenWriteBarrier(&___bytes_1, value);
	}

	inline static int32_t get_offset_of_httpStatusCode_2() { return static_cast<int32_t>(offsetof(FakeWebResponse_t2637957952, ___httpStatusCode_2)); }
	inline int32_t get_httpStatusCode_2() const { return ___httpStatusCode_2; }
	inline int32_t* get_address_of_httpStatusCode_2() { return &___httpStatusCode_2; }
	inline void set_httpStatusCode_2(int32_t value)
	{
		___httpStatusCode_2 = value;
	}

	inline static int32_t get_offset_of_contentType_3() { return static_cast<int32_t>(offsetof(FakeWebResponse_t2637957952, ___contentType_3)); }
	inline String_t* get_contentType_3() const { return ___contentType_3; }
	inline String_t** get_address_of_contentType_3() { return &___contentType_3; }
	inline void set_contentType_3(String_t* value)
	{
		___contentType_3 = value;
		Il2CppCodeGenWriteBarrier(&___contentType_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
