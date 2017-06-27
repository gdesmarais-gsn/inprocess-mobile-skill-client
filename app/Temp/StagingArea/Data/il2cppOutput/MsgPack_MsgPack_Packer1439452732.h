#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Int322071877448.h"
#include "MsgPack_MsgPack_PackerCompatibilityOptions4206945086.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsgPack.Packer
struct  Packer_t1439452732  : public Il2CppObject
{
public:
	// System.Boolean MsgPack.Packer::_isDisposed
	bool ____isDisposed_1;
	// MsgPack.PackerCompatibilityOptions MsgPack.Packer::_compatibilityOptions
	int32_t ____compatibilityOptions_2;

public:
	inline static int32_t get_offset_of__isDisposed_1() { return static_cast<int32_t>(offsetof(Packer_t1439452732, ____isDisposed_1)); }
	inline bool get__isDisposed_1() const { return ____isDisposed_1; }
	inline bool* get_address_of__isDisposed_1() { return &____isDisposed_1; }
	inline void set__isDisposed_1(bool value)
	{
		____isDisposed_1 = value;
	}

	inline static int32_t get_offset_of__compatibilityOptions_2() { return static_cast<int32_t>(offsetof(Packer_t1439452732, ____compatibilityOptions_2)); }
	inline int32_t get__compatibilityOptions_2() const { return ____compatibilityOptions_2; }
	inline int32_t* get_address_of__compatibilityOptions_2() { return &____compatibilityOptions_2; }
	inline void set__compatibilityOptions_2(int32_t value)
	{
		____compatibilityOptions_2 = value;
	}
};

struct Packer_t1439452732_StaticFields
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) MsgPack.Packer::_defaultCompatibilityOptions
	int32_t ____defaultCompatibilityOptions_0;

public:
	inline static int32_t get_offset_of__defaultCompatibilityOptions_0() { return static_cast<int32_t>(offsetof(Packer_t1439452732_StaticFields, ____defaultCompatibilityOptions_0)); }
	inline int32_t get__defaultCompatibilityOptions_0() const { return ____defaultCompatibilityOptions_0; }
	inline int32_t* get_address_of__defaultCompatibilityOptions_0() { return &____defaultCompatibilityOptions_0; }
	inline void set__defaultCompatibilityOptions_0(int32_t value)
	{
		____defaultCompatibilityOptions_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
