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
// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer
struct requestCustomizer_t2087322079;
// Newtonsoft.Json.Linq.JObject
struct JObject_t278519297;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// GSN.Skill.Games.Common.Utils.WebRequestDispatcher
struct WebRequestDispatcher_t345378452;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Utils.RequestWrapper
struct  RequestWrapper_t293827378  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Games.Common.Utils.RequestWrapper::url
	String_t* ___url_2;
	// System.String GSN.Skill.Games.Common.Utils.RequestWrapper::httpMethod
	String_t* ___httpMethod_3;
	// System.String GSN.Skill.Games.Common.Utils.RequestWrapper::queryParameters
	String_t* ___queryParameters_4;
	// System.String GSN.Skill.Games.Common.Utils.RequestWrapper::contentType
	String_t* ___contentType_5;
	// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer GSN.Skill.Games.Common.Utils.RequestWrapper::<customizeRequest>k__BackingField
	requestCustomizer_t2087322079 * ___U3CcustomizeRequestU3Ek__BackingField_7;
	// Newtonsoft.Json.Linq.JObject GSN.Skill.Games.Common.Utils.RequestWrapper::bodyJObject
	JObject_t278519297 * ___bodyJObject_8;
	// System.String GSN.Skill.Games.Common.Utils.RequestWrapper::bodyParameters
	String_t* ___bodyParameters_9;
	// System.Byte[] GSN.Skill.Games.Common.Utils.RequestWrapper::bodyBytes
	ByteU5BU5D_t3397334013* ___bodyBytes_10;
	// System.IO.MemoryStream GSN.Skill.Games.Common.Utils.RequestWrapper::bodyStream
	MemoryStream_t743994179 * ___bodyStream_11;
	// System.Net.WebRequest GSN.Skill.Games.Common.Utils.RequestWrapper::_request
	WebRequest_t1365124353 * ____request_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Utils.RequestWrapper::_headers
	Dictionary_2_t3943999495 * ____headers_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GSN.Skill.Games.Common.Utils.RequestWrapper::_queryParameters
	Dictionary_2_t3943999495 * ____queryParameters_15;
	// GSN.Skill.Games.Common.Utils.WebRequestDispatcher GSN.Skill.Games.Common.Utils.RequestWrapper::<Dispatcher>k__BackingField
	WebRequestDispatcher_t345378452 * ___U3CDispatcherU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}

	inline static int32_t get_offset_of_httpMethod_3() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378, ___httpMethod_3)); }
	inline String_t* get_httpMethod_3() const { return ___httpMethod_3; }
	inline String_t** get_address_of_httpMethod_3() { return &___httpMethod_3; }
	inline void set_httpMethod_3(String_t* value)
	{
		___httpMethod_3 = value;
		Il2CppCodeGenWriteBarrier(&___httpMethod_3, value);
	}

	inline static int32_t get_offset_of_queryParameters_4() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378, ___queryParameters_4)); }
	inline String_t* get_queryParameters_4() const { return ___queryParameters_4; }
	inline String_t** get_address_of_queryParameters_4() { return &___queryParameters_4; }
	inline void set_queryParameters_4(String_t* value)
	{
		___queryParameters_4 = value;
		Il2CppCodeGenWriteBarrier(&___queryParameters_4, value);
	}

	inline static int32_t get_offset_of_contentType_5() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378, ___contentType_5)); }
	inline String_t* get_contentType_5() const { return ___contentType_5; }
	inline String_t** get_address_of_contentType_5() { return &___contentType_5; }
	inline void set_contentType_5(String_t* value)
	{
		___contentType_5 = value;
		Il2CppCodeGenWriteBarrier(&___contentType_5, value);
	}

	inline static int32_t get_offset_of_U3CcustomizeRequestU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378, ___U3CcustomizeRequestU3Ek__BackingField_7)); }
	inline requestCustomizer_t2087322079 * get_U3CcustomizeRequestU3Ek__BackingField_7() const { return ___U3CcustomizeRequestU3Ek__BackingField_7; }
	inline requestCustomizer_t2087322079 ** get_address_of_U3CcustomizeRequestU3Ek__BackingField_7() { return &___U3CcustomizeRequestU3Ek__BackingField_7; }
	inline void set_U3CcustomizeRequestU3Ek__BackingField_7(requestCustomizer_t2087322079 * value)
	{
		___U3CcustomizeRequestU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcustomizeRequestU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_bodyJObject_8() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378, ___bodyJObject_8)); }
	inline JObject_t278519297 * get_bodyJObject_8() const { return ___bodyJObject_8; }
	inline JObject_t278519297 ** get_address_of_bodyJObject_8() { return &___bodyJObject_8; }
	inline void set_bodyJObject_8(JObject_t278519297 * value)
	{
		___bodyJObject_8 = value;
		Il2CppCodeGenWriteBarrier(&___bodyJObject_8, value);
	}

	inline static int32_t get_offset_of_bodyParameters_9() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378, ___bodyParameters_9)); }
	inline String_t* get_bodyParameters_9() const { return ___bodyParameters_9; }
	inline String_t** get_address_of_bodyParameters_9() { return &___bodyParameters_9; }
	inline void set_bodyParameters_9(String_t* value)
	{
		___bodyParameters_9 = value;
		Il2CppCodeGenWriteBarrier(&___bodyParameters_9, value);
	}

	inline static int32_t get_offset_of_bodyBytes_10() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378, ___bodyBytes_10)); }
	inline ByteU5BU5D_t3397334013* get_bodyBytes_10() const { return ___bodyBytes_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_bodyBytes_10() { return &___bodyBytes_10; }
	inline void set_bodyBytes_10(ByteU5BU5D_t3397334013* value)
	{
		___bodyBytes_10 = value;
		Il2CppCodeGenWriteBarrier(&___bodyBytes_10, value);
	}

	inline static int32_t get_offset_of_bodyStream_11() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378, ___bodyStream_11)); }
	inline MemoryStream_t743994179 * get_bodyStream_11() const { return ___bodyStream_11; }
	inline MemoryStream_t743994179 ** get_address_of_bodyStream_11() { return &___bodyStream_11; }
	inline void set_bodyStream_11(MemoryStream_t743994179 * value)
	{
		___bodyStream_11 = value;
		Il2CppCodeGenWriteBarrier(&___bodyStream_11, value);
	}

	inline static int32_t get_offset_of__request_13() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378, ____request_13)); }
	inline WebRequest_t1365124353 * get__request_13() const { return ____request_13; }
	inline WebRequest_t1365124353 ** get_address_of__request_13() { return &____request_13; }
	inline void set__request_13(WebRequest_t1365124353 * value)
	{
		____request_13 = value;
		Il2CppCodeGenWriteBarrier(&____request_13, value);
	}

	inline static int32_t get_offset_of__headers_14() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378, ____headers_14)); }
	inline Dictionary_2_t3943999495 * get__headers_14() const { return ____headers_14; }
	inline Dictionary_2_t3943999495 ** get_address_of__headers_14() { return &____headers_14; }
	inline void set__headers_14(Dictionary_2_t3943999495 * value)
	{
		____headers_14 = value;
		Il2CppCodeGenWriteBarrier(&____headers_14, value);
	}

	inline static int32_t get_offset_of__queryParameters_15() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378, ____queryParameters_15)); }
	inline Dictionary_2_t3943999495 * get__queryParameters_15() const { return ____queryParameters_15; }
	inline Dictionary_2_t3943999495 ** get_address_of__queryParameters_15() { return &____queryParameters_15; }
	inline void set__queryParameters_15(Dictionary_2_t3943999495 * value)
	{
		____queryParameters_15 = value;
		Il2CppCodeGenWriteBarrier(&____queryParameters_15, value);
	}

	inline static int32_t get_offset_of_U3CDispatcherU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378, ___U3CDispatcherU3Ek__BackingField_16)); }
	inline WebRequestDispatcher_t345378452 * get_U3CDispatcherU3Ek__BackingField_16() const { return ___U3CDispatcherU3Ek__BackingField_16; }
	inline WebRequestDispatcher_t345378452 ** get_address_of_U3CDispatcherU3Ek__BackingField_16() { return &___U3CDispatcherU3Ek__BackingField_16; }
	inline void set_U3CDispatcherU3Ek__BackingField_16(WebRequestDispatcher_t345378452 * value)
	{
		___U3CDispatcherU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDispatcherU3Ek__BackingField_16, value);
	}
};

struct RequestWrapper_t293827378_StaticFields
{
public:
	// GSN.Skill.Games.Common.Utils.RequestWrapper/requestCustomizer GSN.Skill.Games.Common.Utils.RequestWrapper::globalCustomizeRequest
	requestCustomizer_t2087322079 * ___globalCustomizeRequest_6;
	// System.Int32 GSN.Skill.Games.Common.Utils.RequestWrapper::wrapperCounter
	int32_t ___wrapperCounter_12;

public:
	inline static int32_t get_offset_of_globalCustomizeRequest_6() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378_StaticFields, ___globalCustomizeRequest_6)); }
	inline requestCustomizer_t2087322079 * get_globalCustomizeRequest_6() const { return ___globalCustomizeRequest_6; }
	inline requestCustomizer_t2087322079 ** get_address_of_globalCustomizeRequest_6() { return &___globalCustomizeRequest_6; }
	inline void set_globalCustomizeRequest_6(requestCustomizer_t2087322079 * value)
	{
		___globalCustomizeRequest_6 = value;
		Il2CppCodeGenWriteBarrier(&___globalCustomizeRequest_6, value);
	}

	inline static int32_t get_offset_of_wrapperCounter_12() { return static_cast<int32_t>(offsetof(RequestWrapper_t293827378_StaticFields, ___wrapperCounter_12)); }
	inline int32_t get_wrapperCounter_12() const { return ___wrapperCounter_12; }
	inline int32_t* get_address_of_wrapperCounter_12() { return &___wrapperCounter_12; }
	inline void set_wrapperCounter_12(int32_t value)
	{
		___wrapperCounter_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
