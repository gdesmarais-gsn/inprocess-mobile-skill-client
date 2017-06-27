#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Requests.IWebRequest
struct IWebRequest_t216132554;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t254341728;
// GSN.Skill.Requests.ISessionHandler
struct ISessionHandler_t2877131789;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// GSN.Skill.Requests.WebRequester
struct WebRequester_t4254900636;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequester_Re55506152.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Requests.WebRequester/<HandleFetch>c__Iterator1
struct  U3CHandleFetchU3Ec__Iterator1_t3779906442  : public Il2CppObject
{
public:
	// GSN.Skill.Requests.WebRequester/RequestState GSN.Skill.Requests.WebRequester/<HandleFetch>c__Iterator1::<requestState>__0
	int32_t ___U3CrequestStateU3E__0_0;
	// System.Single GSN.Skill.Requests.WebRequester/<HandleFetch>c__Iterator1::<retryDelay>__1
	float ___U3CretryDelayU3E__1_1;
	// GSN.Skill.Requests.IWebRequest GSN.Skill.Requests.WebRequester/<HandleFetch>c__Iterator1::request
	Il2CppObject * ___request_2;
	// UnityEngine.Networking.UnityWebRequest GSN.Skill.Requests.WebRequester/<HandleFetch>c__Iterator1::<unityRequest>__2
	UnityWebRequest_t254341728 * ___U3CunityRequestU3E__2_3;
	// GSN.Skill.Requests.ISessionHandler GSN.Skill.Requests.WebRequester/<HandleFetch>c__Iterator1::sessionHandler
	Il2CppObject * ___sessionHandler_4;
	// System.Byte[] GSN.Skill.Requests.WebRequester/<HandleFetch>c__Iterator1::<bytes>__3
	ByteU5BU5D_t3397334013* ___U3CbytesU3E__3_5;
	// GSN.Skill.Requests.WebRequester GSN.Skill.Requests.WebRequester/<HandleFetch>c__Iterator1::$this
	WebRequester_t4254900636 * ___U24this_6;
	// System.Object GSN.Skill.Requests.WebRequester/<HandleFetch>c__Iterator1::$current
	Il2CppObject * ___U24current_7;
	// System.Boolean GSN.Skill.Requests.WebRequester/<HandleFetch>c__Iterator1::$disposing
	bool ___U24disposing_8;
	// System.Int32 GSN.Skill.Requests.WebRequester/<HandleFetch>c__Iterator1::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3CrequestStateU3E__0_0() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__Iterator1_t3779906442, ___U3CrequestStateU3E__0_0)); }
	inline int32_t get_U3CrequestStateU3E__0_0() const { return ___U3CrequestStateU3E__0_0; }
	inline int32_t* get_address_of_U3CrequestStateU3E__0_0() { return &___U3CrequestStateU3E__0_0; }
	inline void set_U3CrequestStateU3E__0_0(int32_t value)
	{
		___U3CrequestStateU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CretryDelayU3E__1_1() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__Iterator1_t3779906442, ___U3CretryDelayU3E__1_1)); }
	inline float get_U3CretryDelayU3E__1_1() const { return ___U3CretryDelayU3E__1_1; }
	inline float* get_address_of_U3CretryDelayU3E__1_1() { return &___U3CretryDelayU3E__1_1; }
	inline void set_U3CretryDelayU3E__1_1(float value)
	{
		___U3CretryDelayU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_request_2() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__Iterator1_t3779906442, ___request_2)); }
	inline Il2CppObject * get_request_2() const { return ___request_2; }
	inline Il2CppObject ** get_address_of_request_2() { return &___request_2; }
	inline void set_request_2(Il2CppObject * value)
	{
		___request_2 = value;
		Il2CppCodeGenWriteBarrier(&___request_2, value);
	}

	inline static int32_t get_offset_of_U3CunityRequestU3E__2_3() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__Iterator1_t3779906442, ___U3CunityRequestU3E__2_3)); }
	inline UnityWebRequest_t254341728 * get_U3CunityRequestU3E__2_3() const { return ___U3CunityRequestU3E__2_3; }
	inline UnityWebRequest_t254341728 ** get_address_of_U3CunityRequestU3E__2_3() { return &___U3CunityRequestU3E__2_3; }
	inline void set_U3CunityRequestU3E__2_3(UnityWebRequest_t254341728 * value)
	{
		___U3CunityRequestU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CunityRequestU3E__2_3, value);
	}

	inline static int32_t get_offset_of_sessionHandler_4() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__Iterator1_t3779906442, ___sessionHandler_4)); }
	inline Il2CppObject * get_sessionHandler_4() const { return ___sessionHandler_4; }
	inline Il2CppObject ** get_address_of_sessionHandler_4() { return &___sessionHandler_4; }
	inline void set_sessionHandler_4(Il2CppObject * value)
	{
		___sessionHandler_4 = value;
		Il2CppCodeGenWriteBarrier(&___sessionHandler_4, value);
	}

	inline static int32_t get_offset_of_U3CbytesU3E__3_5() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__Iterator1_t3779906442, ___U3CbytesU3E__3_5)); }
	inline ByteU5BU5D_t3397334013* get_U3CbytesU3E__3_5() const { return ___U3CbytesU3E__3_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_U3CbytesU3E__3_5() { return &___U3CbytesU3E__3_5; }
	inline void set_U3CbytesU3E__3_5(ByteU5BU5D_t3397334013* value)
	{
		___U3CbytesU3E__3_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CbytesU3E__3_5, value);
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__Iterator1_t3779906442, ___U24this_6)); }
	inline WebRequester_t4254900636 * get_U24this_6() const { return ___U24this_6; }
	inline WebRequester_t4254900636 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(WebRequester_t4254900636 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_6, value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__Iterator1_t3779906442, ___U24current_7)); }
	inline Il2CppObject * get_U24current_7() const { return ___U24current_7; }
	inline Il2CppObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(Il2CppObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_7, value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__Iterator1_t3779906442, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__Iterator1_t3779906442, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
