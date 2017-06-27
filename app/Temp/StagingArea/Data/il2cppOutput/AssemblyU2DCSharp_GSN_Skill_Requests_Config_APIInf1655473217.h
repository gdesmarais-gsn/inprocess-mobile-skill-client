#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Requests.Config.APIInfoData/Service[]
struct ServiceU5BU5D_t1528892848;
struct Service_t3821541053_marshaled_pinvoke;
struct Service_t3821541053_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.Config.APIInfoData/Result
struct  Result_t1655473217 
{
public:
	// GSN.Skill.Requests.Config.APIInfoData/Service[] GSN.Skill.Requests.Config.APIInfoData/Result::services
	ServiceU5BU5D_t1528892848* ___services_0;

public:
	inline static int32_t get_offset_of_services_0() { return static_cast<int32_t>(offsetof(Result_t1655473217, ___services_0)); }
	inline ServiceU5BU5D_t1528892848* get_services_0() const { return ___services_0; }
	inline ServiceU5BU5D_t1528892848** get_address_of_services_0() { return &___services_0; }
	inline void set_services_0(ServiceU5BU5D_t1528892848* value)
	{
		___services_0 = value;
		Il2CppCodeGenWriteBarrier(&___services_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Requests.Config.APIInfoData/Result
struct Result_t1655473217_marshaled_pinvoke
{
	Service_t3821541053_marshaled_pinvoke* ___services_0;
};
// Native definition for COM marshalling of GSN.Skill.Requests.Config.APIInfoData/Result
struct Result_t1655473217_marshaled_com
{
	Service_t3821541053_marshaled_com* ___services_0;
};
