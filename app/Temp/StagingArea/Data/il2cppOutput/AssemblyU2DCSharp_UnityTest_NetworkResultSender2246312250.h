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
#include "mscorlib_System_TimeSpan3430258949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.NetworkResultSender
struct  NetworkResultSender_t2246312250  : public Il2CppObject
{
public:
	// System.TimeSpan UnityTest.NetworkResultSender::m_ConnectionTimeout
	TimeSpan_t3430258949  ___m_ConnectionTimeout_0;
	// System.String UnityTest.NetworkResultSender::m_Ip
	String_t* ___m_Ip_1;
	// System.Int32 UnityTest.NetworkResultSender::m_Port
	int32_t ___m_Port_2;
	// System.Boolean UnityTest.NetworkResultSender::m_LostConnection
	bool ___m_LostConnection_3;

public:
	inline static int32_t get_offset_of_m_ConnectionTimeout_0() { return static_cast<int32_t>(offsetof(NetworkResultSender_t2246312250, ___m_ConnectionTimeout_0)); }
	inline TimeSpan_t3430258949  get_m_ConnectionTimeout_0() const { return ___m_ConnectionTimeout_0; }
	inline TimeSpan_t3430258949 * get_address_of_m_ConnectionTimeout_0() { return &___m_ConnectionTimeout_0; }
	inline void set_m_ConnectionTimeout_0(TimeSpan_t3430258949  value)
	{
		___m_ConnectionTimeout_0 = value;
	}

	inline static int32_t get_offset_of_m_Ip_1() { return static_cast<int32_t>(offsetof(NetworkResultSender_t2246312250, ___m_Ip_1)); }
	inline String_t* get_m_Ip_1() const { return ___m_Ip_1; }
	inline String_t** get_address_of_m_Ip_1() { return &___m_Ip_1; }
	inline void set_m_Ip_1(String_t* value)
	{
		___m_Ip_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Ip_1, value);
	}

	inline static int32_t get_offset_of_m_Port_2() { return static_cast<int32_t>(offsetof(NetworkResultSender_t2246312250, ___m_Port_2)); }
	inline int32_t get_m_Port_2() const { return ___m_Port_2; }
	inline int32_t* get_address_of_m_Port_2() { return &___m_Port_2; }
	inline void set_m_Port_2(int32_t value)
	{
		___m_Port_2 = value;
	}

	inline static int32_t get_offset_of_m_LostConnection_3() { return static_cast<int32_t>(offsetof(NetworkResultSender_t2246312250, ___m_LostConnection_3)); }
	inline bool get_m_LostConnection_3() const { return ___m_LostConnection_3; }
	inline bool* get_address_of_m_LostConnection_3() { return &___m_LostConnection_3; }
	inline void set_m_LostConnection_3(bool value)
	{
		___m_LostConnection_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
