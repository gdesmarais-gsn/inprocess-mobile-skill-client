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
// GSN.Skill.Phoenix.Requests.Account.User
struct User_t1577144177;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Requests.Account.RegisterDeviceData/Result
struct  Result_t1351496220 
{
public:
	// System.String GSN.Skill.Phoenix.Requests.Account.RegisterDeviceData/Result::mac_address
	String_t* ___mac_address_0;
	// System.String GSN.Skill.Phoenix.Requests.Account.RegisterDeviceData/Result::windows_id
	String_t* ___windows_id_1;
	// System.String GSN.Skill.Phoenix.Requests.Account.RegisterDeviceData/Result::client_id
	String_t* ___client_id_2;
	// System.String GSN.Skill.Phoenix.Requests.Account.RegisterDeviceData/Result::owner_id
	String_t* ___owner_id_3;
	// GSN.Skill.Phoenix.Requests.Account.User GSN.Skill.Phoenix.Requests.Account.RegisterDeviceData/Result::user
	User_t1577144177 * ___user_4;

public:
	inline static int32_t get_offset_of_mac_address_0() { return static_cast<int32_t>(offsetof(Result_t1351496220, ___mac_address_0)); }
	inline String_t* get_mac_address_0() const { return ___mac_address_0; }
	inline String_t** get_address_of_mac_address_0() { return &___mac_address_0; }
	inline void set_mac_address_0(String_t* value)
	{
		___mac_address_0 = value;
		Il2CppCodeGenWriteBarrier(&___mac_address_0, value);
	}

	inline static int32_t get_offset_of_windows_id_1() { return static_cast<int32_t>(offsetof(Result_t1351496220, ___windows_id_1)); }
	inline String_t* get_windows_id_1() const { return ___windows_id_1; }
	inline String_t** get_address_of_windows_id_1() { return &___windows_id_1; }
	inline void set_windows_id_1(String_t* value)
	{
		___windows_id_1 = value;
		Il2CppCodeGenWriteBarrier(&___windows_id_1, value);
	}

	inline static int32_t get_offset_of_client_id_2() { return static_cast<int32_t>(offsetof(Result_t1351496220, ___client_id_2)); }
	inline String_t* get_client_id_2() const { return ___client_id_2; }
	inline String_t** get_address_of_client_id_2() { return &___client_id_2; }
	inline void set_client_id_2(String_t* value)
	{
		___client_id_2 = value;
		Il2CppCodeGenWriteBarrier(&___client_id_2, value);
	}

	inline static int32_t get_offset_of_owner_id_3() { return static_cast<int32_t>(offsetof(Result_t1351496220, ___owner_id_3)); }
	inline String_t* get_owner_id_3() const { return ___owner_id_3; }
	inline String_t** get_address_of_owner_id_3() { return &___owner_id_3; }
	inline void set_owner_id_3(String_t* value)
	{
		___owner_id_3 = value;
		Il2CppCodeGenWriteBarrier(&___owner_id_3, value);
	}

	inline static int32_t get_offset_of_user_4() { return static_cast<int32_t>(offsetof(Result_t1351496220, ___user_4)); }
	inline User_t1577144177 * get_user_4() const { return ___user_4; }
	inline User_t1577144177 ** get_address_of_user_4() { return &___user_4; }
	inline void set_user_4(User_t1577144177 * value)
	{
		___user_4 = value;
		Il2CppCodeGenWriteBarrier(&___user_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GSN.Skill.Phoenix.Requests.Account.RegisterDeviceData/Result
struct Result_t1351496220_marshaled_pinvoke
{
	char* ___mac_address_0;
	char* ___windows_id_1;
	char* ___client_id_2;
	char* ___owner_id_3;
	User_t1577144177 * ___user_4;
};
// Native definition for COM marshalling of GSN.Skill.Phoenix.Requests.Account.RegisterDeviceData/Result
struct Result_t1351496220_marshaled_com
{
	Il2CppChar* ___mac_address_0;
	Il2CppChar* ___windows_id_1;
	Il2CppChar* ___client_id_2;
	Il2CppChar* ___owner_id_3;
	User_t1577144177 * ___user_4;
};
