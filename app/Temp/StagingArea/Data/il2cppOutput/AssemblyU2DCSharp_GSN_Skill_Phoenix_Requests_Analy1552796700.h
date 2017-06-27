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
// GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/EventStatus[]
struct EventStatusU5BU5D_t1600124808;
struct EventStatus_t1107460037_marshaled_pinvoke;
struct EventStatus_t1107460037_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen135912705.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData
struct  FabricEventServiceData_t1552796700 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData::message
	String_t* ___message_0;
	// System.Nullable`1<System.Boolean> GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData::success
	Nullable_1_t2088641033  ___success_1;
	// GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/EventStatus[] GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData::eventStatuses
	EventStatusU5BU5D_t1600124808* ___eventStatuses_2;
	// System.Nullable`1<GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData/Links> GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData::_links
	Nullable_1_t135912705  ____links_3;
	// System.String GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData::timestamp
	String_t* ___timestamp_4;
	// System.Nullable`1<System.Int32> GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData::status
	Nullable_1_t334943763  ___status_5;
	// System.String GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData::error
	String_t* ___error_6;
	// System.String GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData::path
	String_t* ___path_7;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(FabricEventServiceData_t1552796700, ___message_0)); }
	inline String_t* get_message_0() const { return ___message_0; }
	inline String_t** get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(String_t* value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier(&___message_0, value);
	}

	inline static int32_t get_offset_of_success_1() { return static_cast<int32_t>(offsetof(FabricEventServiceData_t1552796700, ___success_1)); }
	inline Nullable_1_t2088641033  get_success_1() const { return ___success_1; }
	inline Nullable_1_t2088641033 * get_address_of_success_1() { return &___success_1; }
	inline void set_success_1(Nullable_1_t2088641033  value)
	{
		___success_1 = value;
	}

	inline static int32_t get_offset_of_eventStatuses_2() { return static_cast<int32_t>(offsetof(FabricEventServiceData_t1552796700, ___eventStatuses_2)); }
	inline EventStatusU5BU5D_t1600124808* get_eventStatuses_2() const { return ___eventStatuses_2; }
	inline EventStatusU5BU5D_t1600124808** get_address_of_eventStatuses_2() { return &___eventStatuses_2; }
	inline void set_eventStatuses_2(EventStatusU5BU5D_t1600124808* value)
	{
		___eventStatuses_2 = value;
		Il2CppCodeGenWriteBarrier(&___eventStatuses_2, value);
	}

	inline static int32_t get_offset_of__links_3() { return static_cast<int32_t>(offsetof(FabricEventServiceData_t1552796700, ____links_3)); }
	inline Nullable_1_t135912705  get__links_3() const { return ____links_3; }
	inline Nullable_1_t135912705 * get_address_of__links_3() { return &____links_3; }
	inline void set__links_3(Nullable_1_t135912705  value)
	{
		____links_3 = value;
	}

	inline static int32_t get_offset_of_timestamp_4() { return static_cast<int32_t>(offsetof(FabricEventServiceData_t1552796700, ___timestamp_4)); }
	inline String_t* get_timestamp_4() const { return ___timestamp_4; }
	inline String_t** get_address_of_timestamp_4() { return &___timestamp_4; }
	inline void set_timestamp_4(String_t* value)
	{
		___timestamp_4 = value;
		Il2CppCodeGenWriteBarrier(&___timestamp_4, value);
	}

	inline static int32_t get_offset_of_status_5() { return static_cast<int32_t>(offsetof(FabricEventServiceData_t1552796700, ___status_5)); }
	inline Nullable_1_t334943763  get_status_5() const { return ___status_5; }
	inline Nullable_1_t334943763 * get_address_of_status_5() { return &___status_5; }
	inline void set_status_5(Nullable_1_t334943763  value)
	{
		___status_5 = value;
	}

	inline static int32_t get_offset_of_error_6() { return static_cast<int32_t>(offsetof(FabricEventServiceData_t1552796700, ___error_6)); }
	inline String_t* get_error_6() const { return ___error_6; }
	inline String_t** get_address_of_error_6() { return &___error_6; }
	inline void set_error_6(String_t* value)
	{
		___error_6 = value;
		Il2CppCodeGenWriteBarrier(&___error_6, value);
	}

	inline static int32_t get_offset_of_path_7() { return static_cast<int32_t>(offsetof(FabricEventServiceData_t1552796700, ___path_7)); }
	inline String_t* get_path_7() const { return ___path_7; }
	inline String_t** get_address_of_path_7() { return &___path_7; }
	inline void set_path_7(String_t* value)
	{
		___path_7 = value;
		Il2CppCodeGenWriteBarrier(&___path_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData
struct FabricEventServiceData_t1552796700_marshaled_pinvoke
{
	char* ___message_0;
	Nullable_1_t2088641033  ___success_1;
	EventStatus_t1107460037_marshaled_pinvoke* ___eventStatuses_2;
	Nullable_1_t135912705  ____links_3;
	char* ___timestamp_4;
	Nullable_1_t334943763  ___status_5;
	char* ___error_6;
	char* ___path_7;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Analytics.FabricEventServiceData
struct FabricEventServiceData_t1552796700_marshaled_com
{
	Il2CppChar* ___message_0;
	Nullable_1_t2088641033  ___success_1;
	EventStatus_t1107460037_marshaled_com* ___eventStatuses_2;
	Nullable_1_t135912705  ____links_3;
	Il2CppChar* ___timestamp_4;
	Nullable_1_t334943763  ___status_5;
	Il2CppChar* ___error_6;
	Il2CppChar* ___path_7;
};
