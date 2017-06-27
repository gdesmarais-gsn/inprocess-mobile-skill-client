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
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t4056456767;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Utils.CryptoUtility
struct  CryptoUtility_t3890199435  : public Il2CppObject
{
public:

public:
};

struct CryptoUtility_t3890199435_StaticFields
{
public:
	// System.String GSN.Skill.Utils.CryptoUtility::deviceId
	String_t* ___deviceId_0;
	// System.Security.Cryptography.X509Certificates.X509Certificate2 GSN.Skill.Utils.CryptoUtility::_cert
	X509Certificate2_t4056456767 * ____cert_1;

public:
	inline static int32_t get_offset_of_deviceId_0() { return static_cast<int32_t>(offsetof(CryptoUtility_t3890199435_StaticFields, ___deviceId_0)); }
	inline String_t* get_deviceId_0() const { return ___deviceId_0; }
	inline String_t** get_address_of_deviceId_0() { return &___deviceId_0; }
	inline void set_deviceId_0(String_t* value)
	{
		___deviceId_0 = value;
		Il2CppCodeGenWriteBarrier(&___deviceId_0, value);
	}

	inline static int32_t get_offset_of__cert_1() { return static_cast<int32_t>(offsetof(CryptoUtility_t3890199435_StaticFields, ____cert_1)); }
	inline X509Certificate2_t4056456767 * get__cert_1() const { return ____cert_1; }
	inline X509Certificate2_t4056456767 ** get_address_of__cert_1() { return &____cert_1; }
	inline void set__cert_1(X509Certificate2_t4056456767 * value)
	{
		____cert_1 = value;
		Il2CppCodeGenWriteBarrier(&____cert_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
