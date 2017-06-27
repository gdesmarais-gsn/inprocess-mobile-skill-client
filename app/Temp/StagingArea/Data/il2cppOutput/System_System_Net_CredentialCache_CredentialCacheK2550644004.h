#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.CredentialCache/CredentialCacheKey
struct  CredentialCacheKey_t2550644004  : public Il2CppObject
{
public:
	// System.Uri System.Net.CredentialCache/CredentialCacheKey::uriPrefix
	Uri_t19570940 * ___uriPrefix_0;
	// System.String System.Net.CredentialCache/CredentialCacheKey::authType
	String_t* ___authType_1;
	// System.String System.Net.CredentialCache/CredentialCacheKey::absPath
	String_t* ___absPath_2;
	// System.Int32 System.Net.CredentialCache/CredentialCacheKey::len
	int32_t ___len_3;
	// System.Int32 System.Net.CredentialCache/CredentialCacheKey::hash
	int32_t ___hash_4;

public:
	inline static int32_t get_offset_of_uriPrefix_0() { return static_cast<int32_t>(offsetof(CredentialCacheKey_t2550644004, ___uriPrefix_0)); }
	inline Uri_t19570940 * get_uriPrefix_0() const { return ___uriPrefix_0; }
	inline Uri_t19570940 ** get_address_of_uriPrefix_0() { return &___uriPrefix_0; }
	inline void set_uriPrefix_0(Uri_t19570940 * value)
	{
		___uriPrefix_0 = value;
		Il2CppCodeGenWriteBarrier(&___uriPrefix_0, value);
	}

	inline static int32_t get_offset_of_authType_1() { return static_cast<int32_t>(offsetof(CredentialCacheKey_t2550644004, ___authType_1)); }
	inline String_t* get_authType_1() const { return ___authType_1; }
	inline String_t** get_address_of_authType_1() { return &___authType_1; }
	inline void set_authType_1(String_t* value)
	{
		___authType_1 = value;
		Il2CppCodeGenWriteBarrier(&___authType_1, value);
	}

	inline static int32_t get_offset_of_absPath_2() { return static_cast<int32_t>(offsetof(CredentialCacheKey_t2550644004, ___absPath_2)); }
	inline String_t* get_absPath_2() const { return ___absPath_2; }
	inline String_t** get_address_of_absPath_2() { return &___absPath_2; }
	inline void set_absPath_2(String_t* value)
	{
		___absPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___absPath_2, value);
	}

	inline static int32_t get_offset_of_len_3() { return static_cast<int32_t>(offsetof(CredentialCacheKey_t2550644004, ___len_3)); }
	inline int32_t get_len_3() const { return ___len_3; }
	inline int32_t* get_address_of_len_3() { return &___len_3; }
	inline void set_len_3(int32_t value)
	{
		___len_3 = value;
	}

	inline static int32_t get_offset_of_hash_4() { return static_cast<int32_t>(offsetof(CredentialCacheKey_t2550644004, ___hash_4)); }
	inline int32_t get_hash_4() const { return ___hash_4; }
	inline int32_t* get_address_of_hash_4() { return &___hash_4; }
	inline void set_hash_4(int32_t value)
	{
		___hash_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
