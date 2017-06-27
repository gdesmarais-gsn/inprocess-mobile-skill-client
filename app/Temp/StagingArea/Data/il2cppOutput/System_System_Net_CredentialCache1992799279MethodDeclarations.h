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

// System.Net.ICredentials
struct ICredentials_t3855617113;
// System.Net.CredentialCache
struct CredentialCache_t1992799279;
// System.Net.NetworkCredential
struct NetworkCredential_t1714133953;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Net.CredentialCache::.cctor()
extern "C"  void CredentialCache__cctor_m4286319530 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.CredentialCache::get_DefaultCredentials()
extern "C"  Il2CppObject * CredentialCache_get_DefaultCredentials_m3928434477 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.CredentialCache::GetCredential(System.Uri,System.String)
extern "C"  NetworkCredential_t1714133953 * CredentialCache_GetCredential_m1586396877 (CredentialCache_t1992799279 * __this, Uri_t19570940 * ___uriPrefix0, String_t* ___authType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.CredentialCache::GetEnumerator()
extern "C"  Il2CppObject * CredentialCache_GetEnumerator_m2787340727 (CredentialCache_t1992799279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.CredentialCache::GetCredential(System.String,System.Int32,System.String)
extern "C"  NetworkCredential_t1714133953 * CredentialCache_GetCredential_m3719219599 (CredentialCache_t1992799279 * __this, String_t* ___host0, int32_t ___port1, String_t* ___authenticationType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
