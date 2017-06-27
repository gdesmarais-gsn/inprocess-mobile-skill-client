#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GSN.Skill.Phoenix.Model.AnalyticsAttributes>
struct List_1_t3093426729;
// System.Collections.Generic.Dictionary`2<GSN.Skill.Phoenix.Model.Data.AnalyticMetaDataName,System.String>
struct Dictionary_2_t2384164191;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.AnalyticsObjectToSend
struct  AnalyticsObjectToSend_t1619190090  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<GSN.Skill.Phoenix.Model.AnalyticsAttributes> GSN.Skill.Phoenix.Model.AnalyticsObjectToSend::data
	List_1_t3093426729 * ___data_0;
	// System.Collections.Generic.Dictionary`2<GSN.Skill.Phoenix.Model.Data.AnalyticMetaDataName,System.String> GSN.Skill.Phoenix.Model.AnalyticsObjectToSend::metadata
	Dictionary_2_t2384164191 * ___metadata_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(AnalyticsObjectToSend_t1619190090, ___data_0)); }
	inline List_1_t3093426729 * get_data_0() const { return ___data_0; }
	inline List_1_t3093426729 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(List_1_t3093426729 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_metadata_1() { return static_cast<int32_t>(offsetof(AnalyticsObjectToSend_t1619190090, ___metadata_1)); }
	inline Dictionary_2_t2384164191 * get_metadata_1() const { return ___metadata_1; }
	inline Dictionary_2_t2384164191 ** get_address_of_metadata_1() { return &___metadata_1; }
	inline void set_metadata_1(Dictionary_2_t2384164191 * value)
	{
		___metadata_1 = value;
		Il2CppCodeGenWriteBarrier(&___metadata_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
