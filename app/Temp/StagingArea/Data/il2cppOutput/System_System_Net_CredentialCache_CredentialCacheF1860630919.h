#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.CredentialCache/CredentialCacheForHostKey
struct  CredentialCacheForHostKey_t1860630919  : public Il2CppObject
{
public:
	// System.String System.Net.CredentialCache/CredentialCacheForHostKey::host
	String_t* ___host_0;
	// System.Int32 System.Net.CredentialCache/CredentialCacheForHostKey::port
	int32_t ___port_1;
	// System.String System.Net.CredentialCache/CredentialCacheForHostKey::authType
	String_t* ___authType_2;
	// System.Int32 System.Net.CredentialCache/CredentialCacheForHostKey::hash
	int32_t ___hash_3;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(CredentialCacheForHostKey_t1860630919, ___host_0)); }
	inline String_t* get_host_0() const { return ___host_0; }
	inline String_t** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(String_t* value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier(&___host_0, value);
	}

	inline static int32_t get_offset_of_port_1() { return static_cast<int32_t>(offsetof(CredentialCacheForHostKey_t1860630919, ___port_1)); }
	inline int32_t get_port_1() const { return ___port_1; }
	inline int32_t* get_address_of_port_1() { return &___port_1; }
	inline void set_port_1(int32_t value)
	{
		___port_1 = value;
	}

	inline static int32_t get_offset_of_authType_2() { return static_cast<int32_t>(offsetof(CredentialCacheForHostKey_t1860630919, ___authType_2)); }
	inline String_t* get_authType_2() const { return ___authType_2; }
	inline String_t** get_address_of_authType_2() { return &___authType_2; }
	inline void set_authType_2(String_t* value)
	{
		___authType_2 = value;
		Il2CppCodeGenWriteBarrier(&___authType_2, value);
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(CredentialCacheForHostKey_t1860630919, ___hash_3)); }
	inline int32_t get_hash_3() const { return ___hash_3; }
	inline int32_t* get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(int32_t value)
	{
		___hash_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
