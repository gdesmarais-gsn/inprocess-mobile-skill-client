#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Mime.ContentDisposition
struct ContentDisposition_t1586505162;
// System.Text.Encoding
struct Encoding_t663144255;

#include "System_System_Net_Mail_AttachmentBase3226558610.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.Attachment
struct  Attachment_t2609929423  : public AttachmentBase_t3226558610
{
public:
	// System.Net.Mime.ContentDisposition System.Net.Mail.Attachment::contentDisposition
	ContentDisposition_t1586505162 * ___contentDisposition_4;
	// System.Text.Encoding System.Net.Mail.Attachment::nameEncoding
	Encoding_t663144255 * ___nameEncoding_5;

public:
	inline static int32_t get_offset_of_contentDisposition_4() { return static_cast<int32_t>(offsetof(Attachment_t2609929423, ___contentDisposition_4)); }
	inline ContentDisposition_t1586505162 * get_contentDisposition_4() const { return ___contentDisposition_4; }
	inline ContentDisposition_t1586505162 ** get_address_of_contentDisposition_4() { return &___contentDisposition_4; }
	inline void set_contentDisposition_4(ContentDisposition_t1586505162 * value)
	{
		___contentDisposition_4 = value;
		Il2CppCodeGenWriteBarrier(&___contentDisposition_4, value);
	}

	inline static int32_t get_offset_of_nameEncoding_5() { return static_cast<int32_t>(offsetof(Attachment_t2609929423, ___nameEncoding_5)); }
	inline Encoding_t663144255 * get_nameEncoding_5() const { return ___nameEncoding_5; }
	inline Encoding_t663144255 ** get_address_of_nameEncoding_5() { return &___nameEncoding_5; }
	inline void set_nameEncoding_5(Encoding_t663144255 * value)
	{
		___nameEncoding_5 = value;
		Il2CppCodeGenWriteBarrier(&___nameEncoding_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
