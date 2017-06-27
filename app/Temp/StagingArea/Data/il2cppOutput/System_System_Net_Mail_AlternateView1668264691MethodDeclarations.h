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

// System.Net.Mail.AlternateView
struct AlternateView_t1668264691;
// System.IO.Stream
struct Stream_t3255436806;
// System.Net.Mime.ContentType
struct ContentType_t2830199573;
// System.Net.Mail.LinkedResourceCollection
struct LinkedResourceCollection_t3361889291;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t663144255;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_System_Net_Mime_ContentType2830199573.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_Encoding663144255.h"

// System.Void System.Net.Mail.AlternateView::.ctor(System.IO.Stream,System.Net.Mime.ContentType)
extern "C"  void AlternateView__ctor_m2831405704 (AlternateView_t1668264691 * __this, Stream_t3255436806 * ___contentStream0, ContentType_t2830199573 * ___contentType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.LinkedResourceCollection System.Net.Mail.AlternateView::get_LinkedResources()
extern "C"  LinkedResourceCollection_t3361889291 * AlternateView_get_LinkedResources_m413449580 (AlternateView_t1668264691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AlternateView System.Net.Mail.AlternateView::CreateAlternateViewFromString(System.String,System.Text.Encoding,System.String)
extern "C"  AlternateView_t1668264691 * AlternateView_CreateAlternateViewFromString_m1149458480 (Il2CppObject * __this /* static, unused */, String_t* ___content0, Encoding_t663144255 * ___encoding1, String_t* ___mediaType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::Dispose(System.Boolean)
extern "C"  void AlternateView_Dispose_m3943340964 (AlternateView_t1668264691 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
