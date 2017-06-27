#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t909839986;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.AttachmentBase/MimeTypes
struct  MimeTypes_t4160044079  : public Il2CppObject
{
public:

public:
};

struct MimeTypes_t4160044079_StaticFields
{
public:
	// System.Collections.Hashtable System.Net.Mail.AttachmentBase/MimeTypes::mimeTypes
	Hashtable_t909839986 * ___mimeTypes_0;

public:
	inline static int32_t get_offset_of_mimeTypes_0() { return static_cast<int32_t>(offsetof(MimeTypes_t4160044079_StaticFields, ___mimeTypes_0)); }
	inline Hashtable_t909839986 * get_mimeTypes_0() const { return ___mimeTypes_0; }
	inline Hashtable_t909839986 ** get_address_of_mimeTypes_0() { return &___mimeTypes_0; }
	inline void set_mimeTypes_0(Hashtable_t909839986 * value)
	{
		___mimeTypes_0 = value;
		Il2CppCodeGenWriteBarrier(&___mimeTypes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
