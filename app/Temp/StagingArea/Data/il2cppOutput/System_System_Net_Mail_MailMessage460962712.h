#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Mail.AlternateViewCollection
struct AlternateViewCollection_t2752355131;
// System.Net.Mail.AttachmentCollection
struct AttachmentCollection_t537487287;
// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t3502002665;
// System.String
struct String_t;
// System.Net.Mail.MailAddress
struct MailAddress_t1980919589;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.Text.Encoding
struct Encoding_t663144255;

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_Mail_MailPriority2524119153.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.MailMessage
struct  MailMessage_t460962712  : public Il2CppObject
{
public:
	// System.Net.Mail.AlternateViewCollection System.Net.Mail.MailMessage::alternateViews
	AlternateViewCollection_t2752355131 * ___alternateViews_0;
	// System.Net.Mail.AttachmentCollection System.Net.Mail.MailMessage::attachments
	AttachmentCollection_t537487287 * ___attachments_1;
	// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::bcc
	MailAddressCollection_t3502002665 * ___bcc_2;
	// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::replyTo
	MailAddressCollection_t3502002665 * ___replyTo_3;
	// System.String System.Net.Mail.MailMessage::body
	String_t* ___body_4;
	// System.Net.Mail.MailPriority System.Net.Mail.MailMessage::priority
	int32_t ___priority_5;
	// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::sender
	MailAddress_t1980919589 * ___sender_6;
	// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::cc
	MailAddressCollection_t3502002665 * ___cc_7;
	// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::from
	MailAddress_t1980919589 * ___from_8;
	// System.Collections.Specialized.NameValueCollection System.Net.Mail.MailMessage::headers
	NameValueCollection_t3047564564 * ___headers_9;
	// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::to
	MailAddressCollection_t3502002665 * ___to_10;
	// System.String System.Net.Mail.MailMessage::subject
	String_t* ___subject_11;
	// System.Text.Encoding System.Net.Mail.MailMessage::subjectEncoding
	Encoding_t663144255 * ___subjectEncoding_12;
	// System.Text.Encoding System.Net.Mail.MailMessage::bodyEncoding
	Encoding_t663144255 * ___bodyEncoding_13;
	// System.Text.Encoding System.Net.Mail.MailMessage::headersEncoding
	Encoding_t663144255 * ___headersEncoding_14;
	// System.Boolean System.Net.Mail.MailMessage::isHtml
	bool ___isHtml_15;

public:
	inline static int32_t get_offset_of_alternateViews_0() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___alternateViews_0)); }
	inline AlternateViewCollection_t2752355131 * get_alternateViews_0() const { return ___alternateViews_0; }
	inline AlternateViewCollection_t2752355131 ** get_address_of_alternateViews_0() { return &___alternateViews_0; }
	inline void set_alternateViews_0(AlternateViewCollection_t2752355131 * value)
	{
		___alternateViews_0 = value;
		Il2CppCodeGenWriteBarrier(&___alternateViews_0, value);
	}

	inline static int32_t get_offset_of_attachments_1() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___attachments_1)); }
	inline AttachmentCollection_t537487287 * get_attachments_1() const { return ___attachments_1; }
	inline AttachmentCollection_t537487287 ** get_address_of_attachments_1() { return &___attachments_1; }
	inline void set_attachments_1(AttachmentCollection_t537487287 * value)
	{
		___attachments_1 = value;
		Il2CppCodeGenWriteBarrier(&___attachments_1, value);
	}

	inline static int32_t get_offset_of_bcc_2() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___bcc_2)); }
	inline MailAddressCollection_t3502002665 * get_bcc_2() const { return ___bcc_2; }
	inline MailAddressCollection_t3502002665 ** get_address_of_bcc_2() { return &___bcc_2; }
	inline void set_bcc_2(MailAddressCollection_t3502002665 * value)
	{
		___bcc_2 = value;
		Il2CppCodeGenWriteBarrier(&___bcc_2, value);
	}

	inline static int32_t get_offset_of_replyTo_3() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___replyTo_3)); }
	inline MailAddressCollection_t3502002665 * get_replyTo_3() const { return ___replyTo_3; }
	inline MailAddressCollection_t3502002665 ** get_address_of_replyTo_3() { return &___replyTo_3; }
	inline void set_replyTo_3(MailAddressCollection_t3502002665 * value)
	{
		___replyTo_3 = value;
		Il2CppCodeGenWriteBarrier(&___replyTo_3, value);
	}

	inline static int32_t get_offset_of_body_4() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___body_4)); }
	inline String_t* get_body_4() const { return ___body_4; }
	inline String_t** get_address_of_body_4() { return &___body_4; }
	inline void set_body_4(String_t* value)
	{
		___body_4 = value;
		Il2CppCodeGenWriteBarrier(&___body_4, value);
	}

	inline static int32_t get_offset_of_priority_5() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___priority_5)); }
	inline int32_t get_priority_5() const { return ___priority_5; }
	inline int32_t* get_address_of_priority_5() { return &___priority_5; }
	inline void set_priority_5(int32_t value)
	{
		___priority_5 = value;
	}

	inline static int32_t get_offset_of_sender_6() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___sender_6)); }
	inline MailAddress_t1980919589 * get_sender_6() const { return ___sender_6; }
	inline MailAddress_t1980919589 ** get_address_of_sender_6() { return &___sender_6; }
	inline void set_sender_6(MailAddress_t1980919589 * value)
	{
		___sender_6 = value;
		Il2CppCodeGenWriteBarrier(&___sender_6, value);
	}

	inline static int32_t get_offset_of_cc_7() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___cc_7)); }
	inline MailAddressCollection_t3502002665 * get_cc_7() const { return ___cc_7; }
	inline MailAddressCollection_t3502002665 ** get_address_of_cc_7() { return &___cc_7; }
	inline void set_cc_7(MailAddressCollection_t3502002665 * value)
	{
		___cc_7 = value;
		Il2CppCodeGenWriteBarrier(&___cc_7, value);
	}

	inline static int32_t get_offset_of_from_8() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___from_8)); }
	inline MailAddress_t1980919589 * get_from_8() const { return ___from_8; }
	inline MailAddress_t1980919589 ** get_address_of_from_8() { return &___from_8; }
	inline void set_from_8(MailAddress_t1980919589 * value)
	{
		___from_8 = value;
		Il2CppCodeGenWriteBarrier(&___from_8, value);
	}

	inline static int32_t get_offset_of_headers_9() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___headers_9)); }
	inline NameValueCollection_t3047564564 * get_headers_9() const { return ___headers_9; }
	inline NameValueCollection_t3047564564 ** get_address_of_headers_9() { return &___headers_9; }
	inline void set_headers_9(NameValueCollection_t3047564564 * value)
	{
		___headers_9 = value;
		Il2CppCodeGenWriteBarrier(&___headers_9, value);
	}

	inline static int32_t get_offset_of_to_10() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___to_10)); }
	inline MailAddressCollection_t3502002665 * get_to_10() const { return ___to_10; }
	inline MailAddressCollection_t3502002665 ** get_address_of_to_10() { return &___to_10; }
	inline void set_to_10(MailAddressCollection_t3502002665 * value)
	{
		___to_10 = value;
		Il2CppCodeGenWriteBarrier(&___to_10, value);
	}

	inline static int32_t get_offset_of_subject_11() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___subject_11)); }
	inline String_t* get_subject_11() const { return ___subject_11; }
	inline String_t** get_address_of_subject_11() { return &___subject_11; }
	inline void set_subject_11(String_t* value)
	{
		___subject_11 = value;
		Il2CppCodeGenWriteBarrier(&___subject_11, value);
	}

	inline static int32_t get_offset_of_subjectEncoding_12() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___subjectEncoding_12)); }
	inline Encoding_t663144255 * get_subjectEncoding_12() const { return ___subjectEncoding_12; }
	inline Encoding_t663144255 ** get_address_of_subjectEncoding_12() { return &___subjectEncoding_12; }
	inline void set_subjectEncoding_12(Encoding_t663144255 * value)
	{
		___subjectEncoding_12 = value;
		Il2CppCodeGenWriteBarrier(&___subjectEncoding_12, value);
	}

	inline static int32_t get_offset_of_bodyEncoding_13() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___bodyEncoding_13)); }
	inline Encoding_t663144255 * get_bodyEncoding_13() const { return ___bodyEncoding_13; }
	inline Encoding_t663144255 ** get_address_of_bodyEncoding_13() { return &___bodyEncoding_13; }
	inline void set_bodyEncoding_13(Encoding_t663144255 * value)
	{
		___bodyEncoding_13 = value;
		Il2CppCodeGenWriteBarrier(&___bodyEncoding_13, value);
	}

	inline static int32_t get_offset_of_headersEncoding_14() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___headersEncoding_14)); }
	inline Encoding_t663144255 * get_headersEncoding_14() const { return ___headersEncoding_14; }
	inline Encoding_t663144255 ** get_address_of_headersEncoding_14() { return &___headersEncoding_14; }
	inline void set_headersEncoding_14(Encoding_t663144255 * value)
	{
		___headersEncoding_14 = value;
		Il2CppCodeGenWriteBarrier(&___headersEncoding_14, value);
	}

	inline static int32_t get_offset_of_isHtml_15() { return static_cast<int32_t>(offsetof(MailMessage_t460962712, ___isHtml_15)); }
	inline bool get_isHtml_15() const { return ___isHtml_15; }
	inline bool* get_address_of_isHtml_15() { return &___isHtml_15; }
	inline void set_isHtml_15(bool value)
	{
		___isHtml_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
