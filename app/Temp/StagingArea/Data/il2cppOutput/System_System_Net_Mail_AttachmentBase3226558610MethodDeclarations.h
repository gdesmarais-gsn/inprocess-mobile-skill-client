#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Mail.AttachmentBase
struct AttachmentBase_t3226558610;
// System.IO.Stream
struct Stream_t3255436806;
// System.Net.Mime.ContentType
struct ContentType_t2830199573;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_System_Net_Mime_ContentType2830199573.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_Mime_TransferEncoding3662047104.h"

// System.Void System.Net.Mail.AttachmentBase::.ctor(System.IO.Stream,System.Net.Mime.ContentType)
extern "C"  void AttachmentBase__ctor_m326735341 (AttachmentBase_t3226558610 * __this, Stream_t3255436806 * ___contentStream0, ContentType_t2830199573 * ___contentType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::.ctor(System.IO.Stream,System.String)
extern "C"  void AttachmentBase__ctor_m41330950 (AttachmentBase_t3226558610 * __this, Stream_t3255436806 * ___contentStream0, String_t* ___mediaType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::.ctor(System.String)
extern "C"  void AttachmentBase__ctor_m3762111173 (AttachmentBase_t3226558610 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.AttachmentBase::get_ContentId()
extern "C"  String_t* AttachmentBase_get_ContentId_m1531077247 (AttachmentBase_t3226558610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.Mail.AttachmentBase::get_ContentStream()
extern "C"  Stream_t3255436806 * AttachmentBase_get_ContentStream_m3171436555 (AttachmentBase_t3226558610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.ContentType System.Net.Mail.AttachmentBase::get_ContentType()
extern "C"  ContentType_t2830199573 * AttachmentBase_get_ContentType_m861543841 (AttachmentBase_t3226558610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.TransferEncoding System.Net.Mail.AttachmentBase::get_TransferEncoding()
extern "C"  int32_t AttachmentBase_get_TransferEncoding_m1159697921 (AttachmentBase_t3226558610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::set_TransferEncoding(System.Net.Mime.TransferEncoding)
extern "C"  void AttachmentBase_set_TransferEncoding_m1373288600 (AttachmentBase_t3226558610 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::Dispose()
extern "C"  void AttachmentBase_Dispose_m3981426932 (AttachmentBase_t3226558610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::Dispose(System.Boolean)
extern "C"  void AttachmentBase_Dispose_m1734895603 (AttachmentBase_t3226558610 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
