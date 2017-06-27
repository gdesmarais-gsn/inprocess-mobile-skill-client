#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Games.Common.Utils.WebRequestDispatcher/getReachableFunc
struct getReachableFunc_t2787440970;
// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.Net.WebResponse
struct WebResponse_t1895226051;
// GSN.Skill.Games.Common.Utils.WebRequestDispatcher/FakeResponseMaker
struct FakeResponseMaker_t4141588755;
// System.Action
struct Action_t3226471752;
// GSN.Skill.Games.Common.Utils.ActionQueue
struct ActionQueue_t1924202305;
// GSN.Skill.Games.Common.Utils.ActionContext
struct ActionContext_t4252928663;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Action`1<System.String>
struct Action_1_t1831019615;

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_WebExceptionStatus1169373531.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.WebRequestDispatcher
struct  WebRequestDispatcher_t345378452  : public Il2CppObject
{
public:
	// System.Net.WebRequest GSN.Skill.Games.Common.Utils.WebRequestDispatcher::theRequest
	WebRequest_t1365124353 * ___theRequest_1;
	// System.Net.WebResponse GSN.Skill.Games.Common.Utils.WebRequestDispatcher::_response
	WebResponse_t1895226051 * ____response_2;
	// System.Boolean GSN.Skill.Games.Common.Utils.WebRequestDispatcher::<Aborted>k__BackingField
	bool ___U3CAbortedU3Ek__BackingField_3;
	// GSN.Skill.Games.Common.Utils.WebRequestDispatcher/FakeResponseMaker GSN.Skill.Games.Common.Utils.WebRequestDispatcher::MakeFakeResponse
	FakeResponseMaker_t4141588755 * ___MakeFakeResponse_6;
	// System.Action GSN.Skill.Games.Common.Utils.WebRequestDispatcher::completionAction
	Action_t3226471752 * ___completionAction_7;
	// GSN.Skill.Games.Common.Utils.ActionQueue GSN.Skill.Games.Common.Utils.WebRequestDispatcher::actionQueue
	ActionQueue_t1924202305 * ___actionQueue_8;
	// System.Int32 GSN.Skill.Games.Common.Utils.WebRequestDispatcher::Timeout
	int32_t ___Timeout_9;
	// System.Int32 GSN.Skill.Games.Common.Utils.WebRequestDispatcher::timeoutThisTime
	int32_t ___timeoutThisTime_10;
	// GSN.Skill.Games.Common.Utils.ActionContext GSN.Skill.Games.Common.Utils.WebRequestDispatcher::actionContext
	ActionContext_t4252928663 * ___actionContext_11;
	// System.Byte[] GSN.Skill.Games.Common.Utils.WebRequestDispatcher::_responseBytes
	ByteU5BU5D_t3397334013* ____responseBytes_12;
	// System.String GSN.Skill.Games.Common.Utils.WebRequestDispatcher::<FailReason>k__BackingField
	String_t* ___U3CFailReasonU3Ek__BackingField_13;
	// System.Int32 GSN.Skill.Games.Common.Utils.WebRequestDispatcher::<HttpStatusCode>k__BackingField
	int32_t ___U3CHttpStatusCodeU3Ek__BackingField_14;
	// System.String GSN.Skill.Games.Common.Utils.WebRequestDispatcher::<HttpStatusDescription>k__BackingField
	String_t* ___U3CHttpStatusDescriptionU3Ek__BackingField_15;
	// System.String GSN.Skill.Games.Common.Utils.WebRequestDispatcher::<ResponseContentType>k__BackingField
	String_t* ___U3CResponseContentTypeU3Ek__BackingField_16;
	// System.String GSN.Skill.Games.Common.Utils.WebRequestDispatcher::<RequestUri>k__BackingField
	String_t* ___U3CRequestUriU3Ek__BackingField_17;
	// System.Net.WebExceptionStatus GSN.Skill.Games.Common.Utils.WebRequestDispatcher::<ExceptionStatus>k__BackingField
	int32_t ___U3CExceptionStatusU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_theRequest_1() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___theRequest_1)); }
	inline WebRequest_t1365124353 * get_theRequest_1() const { return ___theRequest_1; }
	inline WebRequest_t1365124353 ** get_address_of_theRequest_1() { return &___theRequest_1; }
	inline void set_theRequest_1(WebRequest_t1365124353 * value)
	{
		___theRequest_1 = value;
		Il2CppCodeGenWriteBarrier(&___theRequest_1, value);
	}

	inline static int32_t get_offset_of__response_2() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ____response_2)); }
	inline WebResponse_t1895226051 * get__response_2() const { return ____response_2; }
	inline WebResponse_t1895226051 ** get_address_of__response_2() { return &____response_2; }
	inline void set__response_2(WebResponse_t1895226051 * value)
	{
		____response_2 = value;
		Il2CppCodeGenWriteBarrier(&____response_2, value);
	}

	inline static int32_t get_offset_of_U3CAbortedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___U3CAbortedU3Ek__BackingField_3)); }
	inline bool get_U3CAbortedU3Ek__BackingField_3() const { return ___U3CAbortedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CAbortedU3Ek__BackingField_3() { return &___U3CAbortedU3Ek__BackingField_3; }
	inline void set_U3CAbortedU3Ek__BackingField_3(bool value)
	{
		___U3CAbortedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_MakeFakeResponse_6() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___MakeFakeResponse_6)); }
	inline FakeResponseMaker_t4141588755 * get_MakeFakeResponse_6() const { return ___MakeFakeResponse_6; }
	inline FakeResponseMaker_t4141588755 ** get_address_of_MakeFakeResponse_6() { return &___MakeFakeResponse_6; }
	inline void set_MakeFakeResponse_6(FakeResponseMaker_t4141588755 * value)
	{
		___MakeFakeResponse_6 = value;
		Il2CppCodeGenWriteBarrier(&___MakeFakeResponse_6, value);
	}

	inline static int32_t get_offset_of_completionAction_7() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___completionAction_7)); }
	inline Action_t3226471752 * get_completionAction_7() const { return ___completionAction_7; }
	inline Action_t3226471752 ** get_address_of_completionAction_7() { return &___completionAction_7; }
	inline void set_completionAction_7(Action_t3226471752 * value)
	{
		___completionAction_7 = value;
		Il2CppCodeGenWriteBarrier(&___completionAction_7, value);
	}

	inline static int32_t get_offset_of_actionQueue_8() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___actionQueue_8)); }
	inline ActionQueue_t1924202305 * get_actionQueue_8() const { return ___actionQueue_8; }
	inline ActionQueue_t1924202305 ** get_address_of_actionQueue_8() { return &___actionQueue_8; }
	inline void set_actionQueue_8(ActionQueue_t1924202305 * value)
	{
		___actionQueue_8 = value;
		Il2CppCodeGenWriteBarrier(&___actionQueue_8, value);
	}

	inline static int32_t get_offset_of_Timeout_9() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___Timeout_9)); }
	inline int32_t get_Timeout_9() const { return ___Timeout_9; }
	inline int32_t* get_address_of_Timeout_9() { return &___Timeout_9; }
	inline void set_Timeout_9(int32_t value)
	{
		___Timeout_9 = value;
	}

	inline static int32_t get_offset_of_timeoutThisTime_10() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___timeoutThisTime_10)); }
	inline int32_t get_timeoutThisTime_10() const { return ___timeoutThisTime_10; }
	inline int32_t* get_address_of_timeoutThisTime_10() { return &___timeoutThisTime_10; }
	inline void set_timeoutThisTime_10(int32_t value)
	{
		___timeoutThisTime_10 = value;
	}

	inline static int32_t get_offset_of_actionContext_11() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___actionContext_11)); }
	inline ActionContext_t4252928663 * get_actionContext_11() const { return ___actionContext_11; }
	inline ActionContext_t4252928663 ** get_address_of_actionContext_11() { return &___actionContext_11; }
	inline void set_actionContext_11(ActionContext_t4252928663 * value)
	{
		___actionContext_11 = value;
		Il2CppCodeGenWriteBarrier(&___actionContext_11, value);
	}

	inline static int32_t get_offset_of__responseBytes_12() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ____responseBytes_12)); }
	inline ByteU5BU5D_t3397334013* get__responseBytes_12() const { return ____responseBytes_12; }
	inline ByteU5BU5D_t3397334013** get_address_of__responseBytes_12() { return &____responseBytes_12; }
	inline void set__responseBytes_12(ByteU5BU5D_t3397334013* value)
	{
		____responseBytes_12 = value;
		Il2CppCodeGenWriteBarrier(&____responseBytes_12, value);
	}

	inline static int32_t get_offset_of_U3CFailReasonU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___U3CFailReasonU3Ek__BackingField_13)); }
	inline String_t* get_U3CFailReasonU3Ek__BackingField_13() const { return ___U3CFailReasonU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CFailReasonU3Ek__BackingField_13() { return &___U3CFailReasonU3Ek__BackingField_13; }
	inline void set_U3CFailReasonU3Ek__BackingField_13(String_t* value)
	{
		___U3CFailReasonU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFailReasonU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CHttpStatusCodeU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___U3CHttpStatusCodeU3Ek__BackingField_14)); }
	inline int32_t get_U3CHttpStatusCodeU3Ek__BackingField_14() const { return ___U3CHttpStatusCodeU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CHttpStatusCodeU3Ek__BackingField_14() { return &___U3CHttpStatusCodeU3Ek__BackingField_14; }
	inline void set_U3CHttpStatusCodeU3Ek__BackingField_14(int32_t value)
	{
		___U3CHttpStatusCodeU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CHttpStatusDescriptionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___U3CHttpStatusDescriptionU3Ek__BackingField_15)); }
	inline String_t* get_U3CHttpStatusDescriptionU3Ek__BackingField_15() const { return ___U3CHttpStatusDescriptionU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CHttpStatusDescriptionU3Ek__BackingField_15() { return &___U3CHttpStatusDescriptionU3Ek__BackingField_15; }
	inline void set_U3CHttpStatusDescriptionU3Ek__BackingField_15(String_t* value)
	{
		___U3CHttpStatusDescriptionU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CHttpStatusDescriptionU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3CResponseContentTypeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___U3CResponseContentTypeU3Ek__BackingField_16)); }
	inline String_t* get_U3CResponseContentTypeU3Ek__BackingField_16() const { return ___U3CResponseContentTypeU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CResponseContentTypeU3Ek__BackingField_16() { return &___U3CResponseContentTypeU3Ek__BackingField_16; }
	inline void set_U3CResponseContentTypeU3Ek__BackingField_16(String_t* value)
	{
		___U3CResponseContentTypeU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CResponseContentTypeU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CRequestUriU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___U3CRequestUriU3Ek__BackingField_17)); }
	inline String_t* get_U3CRequestUriU3Ek__BackingField_17() const { return ___U3CRequestUriU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CRequestUriU3Ek__BackingField_17() { return &___U3CRequestUriU3Ek__BackingField_17; }
	inline void set_U3CRequestUriU3Ek__BackingField_17(String_t* value)
	{
		___U3CRequestUriU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRequestUriU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3CExceptionStatusU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452, ___U3CExceptionStatusU3Ek__BackingField_18)); }
	inline int32_t get_U3CExceptionStatusU3Ek__BackingField_18() const { return ___U3CExceptionStatusU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CExceptionStatusU3Ek__BackingField_18() { return &___U3CExceptionStatusU3Ek__BackingField_18; }
	inline void set_U3CExceptionStatusU3Ek__BackingField_18(int32_t value)
	{
		___U3CExceptionStatusU3Ek__BackingField_18 = value;
	}
};

struct WebRequestDispatcher_t345378452_StaticFields
{
public:
	// GSN.Skill.Games.Common.Utils.WebRequestDispatcher/getReachableFunc GSN.Skill.Games.Common.Utils.WebRequestDispatcher::GetNetworkReachability
	getReachableFunc_t2787440970 * ___GetNetworkReachability_0;
	// System.Boolean GSN.Skill.Games.Common.Utils.WebRequestDispatcher::AllowFakeResponses
	bool ___AllowFakeResponses_4;
	// System.Boolean GSN.Skill.Games.Common.Utils.WebRequestDispatcher::ForceFakeResponses
	bool ___ForceFakeResponses_5;
	// System.Action`1<System.String> GSN.Skill.Games.Common.Utils.WebRequestDispatcher::<>f__mg$cache0
	Action_1_t1831019615 * ___U3CU3Ef__mgU24cache0_19;
	// System.Action`1<System.String> GSN.Skill.Games.Common.Utils.WebRequestDispatcher::<>f__mg$cache1
	Action_1_t1831019615 * ___U3CU3Ef__mgU24cache1_20;

public:
	inline static int32_t get_offset_of_GetNetworkReachability_0() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452_StaticFields, ___GetNetworkReachability_0)); }
	inline getReachableFunc_t2787440970 * get_GetNetworkReachability_0() const { return ___GetNetworkReachability_0; }
	inline getReachableFunc_t2787440970 ** get_address_of_GetNetworkReachability_0() { return &___GetNetworkReachability_0; }
	inline void set_GetNetworkReachability_0(getReachableFunc_t2787440970 * value)
	{
		___GetNetworkReachability_0 = value;
		Il2CppCodeGenWriteBarrier(&___GetNetworkReachability_0, value);
	}

	inline static int32_t get_offset_of_AllowFakeResponses_4() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452_StaticFields, ___AllowFakeResponses_4)); }
	inline bool get_AllowFakeResponses_4() const { return ___AllowFakeResponses_4; }
	inline bool* get_address_of_AllowFakeResponses_4() { return &___AllowFakeResponses_4; }
	inline void set_AllowFakeResponses_4(bool value)
	{
		___AllowFakeResponses_4 = value;
	}

	inline static int32_t get_offset_of_ForceFakeResponses_5() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452_StaticFields, ___ForceFakeResponses_5)); }
	inline bool get_ForceFakeResponses_5() const { return ___ForceFakeResponses_5; }
	inline bool* get_address_of_ForceFakeResponses_5() { return &___ForceFakeResponses_5; }
	inline void set_ForceFakeResponses_5(bool value)
	{
		___ForceFakeResponses_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_19() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452_StaticFields, ___U3CU3Ef__mgU24cache0_19)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__mgU24cache0_19() const { return ___U3CU3Ef__mgU24cache0_19; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__mgU24cache0_19() { return &___U3CU3Ef__mgU24cache0_19; }
	inline void set_U3CU3Ef__mgU24cache0_19(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__mgU24cache0_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_20() { return static_cast<int32_t>(offsetof(WebRequestDispatcher_t345378452_StaticFields, ___U3CU3Ef__mgU24cache1_20)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__mgU24cache1_20() const { return ___U3CU3Ef__mgU24cache1_20; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__mgU24cache1_20() { return &___U3CU3Ef__mgU24cache1_20; }
	inline void set_U3CU3Ef__mgU24cache1_20(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__mgU24cache1_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
