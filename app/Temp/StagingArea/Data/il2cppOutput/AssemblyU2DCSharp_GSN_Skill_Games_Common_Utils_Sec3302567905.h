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
// GSN.Skill.Games.Common.Utils.GZipper
struct GZipper_t3097786333;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.SecureHunk
struct  SecureHunk_t3302567905  : public Il2CppObject
{
public:
	// System.Byte[] GSN.Skill.Games.Common.Utils.SecureHunk::type
	ByteU5BU5D_t3397334013* ___type_6;
	// System.Byte[] GSN.Skill.Games.Common.Utils.SecureHunk::timeStamp
	ByteU5BU5D_t3397334013* ___timeStamp_7;
	// System.Byte[] GSN.Skill.Games.Common.Utils.SecureHunk::keyVersion
	ByteU5BU5D_t3397334013* ___keyVersion_8;
	// System.Byte[] GSN.Skill.Games.Common.Utils.SecureHunk::compression
	ByteU5BU5D_t3397334013* ___compression_9;
	// System.Byte[] GSN.Skill.Games.Common.Utils.SecureHunk::body
	ByteU5BU5D_t3397334013* ___body_10;
	// System.Byte[] GSN.Skill.Games.Common.Utils.SecureHunk::hash
	ByteU5BU5D_t3397334013* ___hash_11;
	// System.Byte[] GSN.Skill.Games.Common.Utils.SecureHunk::hmac
	ByteU5BU5D_t3397334013* ___hmac_12;
	// GSN.Skill.Games.Common.Utils.GZipper GSN.Skill.Games.Common.Utils.SecureHunk::gzip
	GZipper_t3097786333 * ___gzip_13;

public:
	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(SecureHunk_t3302567905, ___type_6)); }
	inline ByteU5BU5D_t3397334013* get_type_6() const { return ___type_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(ByteU5BU5D_t3397334013* value)
	{
		___type_6 = value;
		Il2CppCodeGenWriteBarrier(&___type_6, value);
	}

	inline static int32_t get_offset_of_timeStamp_7() { return static_cast<int32_t>(offsetof(SecureHunk_t3302567905, ___timeStamp_7)); }
	inline ByteU5BU5D_t3397334013* get_timeStamp_7() const { return ___timeStamp_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_timeStamp_7() { return &___timeStamp_7; }
	inline void set_timeStamp_7(ByteU5BU5D_t3397334013* value)
	{
		___timeStamp_7 = value;
		Il2CppCodeGenWriteBarrier(&___timeStamp_7, value);
	}

	inline static int32_t get_offset_of_keyVersion_8() { return static_cast<int32_t>(offsetof(SecureHunk_t3302567905, ___keyVersion_8)); }
	inline ByteU5BU5D_t3397334013* get_keyVersion_8() const { return ___keyVersion_8; }
	inline ByteU5BU5D_t3397334013** get_address_of_keyVersion_8() { return &___keyVersion_8; }
	inline void set_keyVersion_8(ByteU5BU5D_t3397334013* value)
	{
		___keyVersion_8 = value;
		Il2CppCodeGenWriteBarrier(&___keyVersion_8, value);
	}

	inline static int32_t get_offset_of_compression_9() { return static_cast<int32_t>(offsetof(SecureHunk_t3302567905, ___compression_9)); }
	inline ByteU5BU5D_t3397334013* get_compression_9() const { return ___compression_9; }
	inline ByteU5BU5D_t3397334013** get_address_of_compression_9() { return &___compression_9; }
	inline void set_compression_9(ByteU5BU5D_t3397334013* value)
	{
		___compression_9 = value;
		Il2CppCodeGenWriteBarrier(&___compression_9, value);
	}

	inline static int32_t get_offset_of_body_10() { return static_cast<int32_t>(offsetof(SecureHunk_t3302567905, ___body_10)); }
	inline ByteU5BU5D_t3397334013* get_body_10() const { return ___body_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_body_10() { return &___body_10; }
	inline void set_body_10(ByteU5BU5D_t3397334013* value)
	{
		___body_10 = value;
		Il2CppCodeGenWriteBarrier(&___body_10, value);
	}

	inline static int32_t get_offset_of_hash_11() { return static_cast<int32_t>(offsetof(SecureHunk_t3302567905, ___hash_11)); }
	inline ByteU5BU5D_t3397334013* get_hash_11() const { return ___hash_11; }
	inline ByteU5BU5D_t3397334013** get_address_of_hash_11() { return &___hash_11; }
	inline void set_hash_11(ByteU5BU5D_t3397334013* value)
	{
		___hash_11 = value;
		Il2CppCodeGenWriteBarrier(&___hash_11, value);
	}

	inline static int32_t get_offset_of_hmac_12() { return static_cast<int32_t>(offsetof(SecureHunk_t3302567905, ___hmac_12)); }
	inline ByteU5BU5D_t3397334013* get_hmac_12() const { return ___hmac_12; }
	inline ByteU5BU5D_t3397334013** get_address_of_hmac_12() { return &___hmac_12; }
	inline void set_hmac_12(ByteU5BU5D_t3397334013* value)
	{
		___hmac_12 = value;
		Il2CppCodeGenWriteBarrier(&___hmac_12, value);
	}

	inline static int32_t get_offset_of_gzip_13() { return static_cast<int32_t>(offsetof(SecureHunk_t3302567905, ___gzip_13)); }
	inline GZipper_t3097786333 * get_gzip_13() const { return ___gzip_13; }
	inline GZipper_t3097786333 ** get_address_of_gzip_13() { return &___gzip_13; }
	inline void set_gzip_13(GZipper_t3097786333 * value)
	{
		___gzip_13 = value;
		Il2CppCodeGenWriteBarrier(&___gzip_13, value);
	}
};

struct SecureHunk_t3302567905_StaticFields
{
public:
	// System.Byte[] GSN.Skill.Games.Common.Utils.SecureHunk::HUNK_TYPE_JOIN
	ByteU5BU5D_t3397334013* ___HUNK_TYPE_JOIN_0;
	// System.Byte[] GSN.Skill.Games.Common.Utils.SecureHunk::HUNK_TYPE_START
	ByteU5BU5D_t3397334013* ___HUNK_TYPE_START_1;
	// System.Byte[] GSN.Skill.Games.Common.Utils.SecureHunk::HUNK_TYPE_NOTARY
	ByteU5BU5D_t3397334013* ___HUNK_TYPE_NOTARY_2;
	// System.Byte[] GSN.Skill.Games.Common.Utils.SecureHunk::HUNK_TYPE_DATAHISTORY
	ByteU5BU5D_t3397334013* ___HUNK_TYPE_DATAHISTORY_3;

public:
	inline static int32_t get_offset_of_HUNK_TYPE_JOIN_0() { return static_cast<int32_t>(offsetof(SecureHunk_t3302567905_StaticFields, ___HUNK_TYPE_JOIN_0)); }
	inline ByteU5BU5D_t3397334013* get_HUNK_TYPE_JOIN_0() const { return ___HUNK_TYPE_JOIN_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_HUNK_TYPE_JOIN_0() { return &___HUNK_TYPE_JOIN_0; }
	inline void set_HUNK_TYPE_JOIN_0(ByteU5BU5D_t3397334013* value)
	{
		___HUNK_TYPE_JOIN_0 = value;
		Il2CppCodeGenWriteBarrier(&___HUNK_TYPE_JOIN_0, value);
	}

	inline static int32_t get_offset_of_HUNK_TYPE_START_1() { return static_cast<int32_t>(offsetof(SecureHunk_t3302567905_StaticFields, ___HUNK_TYPE_START_1)); }
	inline ByteU5BU5D_t3397334013* get_HUNK_TYPE_START_1() const { return ___HUNK_TYPE_START_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_HUNK_TYPE_START_1() { return &___HUNK_TYPE_START_1; }
	inline void set_HUNK_TYPE_START_1(ByteU5BU5D_t3397334013* value)
	{
		___HUNK_TYPE_START_1 = value;
		Il2CppCodeGenWriteBarrier(&___HUNK_TYPE_START_1, value);
	}

	inline static int32_t get_offset_of_HUNK_TYPE_NOTARY_2() { return static_cast<int32_t>(offsetof(SecureHunk_t3302567905_StaticFields, ___HUNK_TYPE_NOTARY_2)); }
	inline ByteU5BU5D_t3397334013* get_HUNK_TYPE_NOTARY_2() const { return ___HUNK_TYPE_NOTARY_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_HUNK_TYPE_NOTARY_2() { return &___HUNK_TYPE_NOTARY_2; }
	inline void set_HUNK_TYPE_NOTARY_2(ByteU5BU5D_t3397334013* value)
	{
		___HUNK_TYPE_NOTARY_2 = value;
		Il2CppCodeGenWriteBarrier(&___HUNK_TYPE_NOTARY_2, value);
	}

	inline static int32_t get_offset_of_HUNK_TYPE_DATAHISTORY_3() { return static_cast<int32_t>(offsetof(SecureHunk_t3302567905_StaticFields, ___HUNK_TYPE_DATAHISTORY_3)); }
	inline ByteU5BU5D_t3397334013* get_HUNK_TYPE_DATAHISTORY_3() const { return ___HUNK_TYPE_DATAHISTORY_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_HUNK_TYPE_DATAHISTORY_3() { return &___HUNK_TYPE_DATAHISTORY_3; }
	inline void set_HUNK_TYPE_DATAHISTORY_3(ByteU5BU5D_t3397334013* value)
	{
		___HUNK_TYPE_DATAHISTORY_3 = value;
		Il2CppCodeGenWriteBarrier(&___HUNK_TYPE_DATAHISTORY_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
