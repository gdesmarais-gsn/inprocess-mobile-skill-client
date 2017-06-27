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

// System.String
struct String_t;
// GSN.Skill.Requests.WebRequestErrorData/Error
struct Error_t3008710795;
struct Error_t3008710795_marshaled_pinvoke;
struct Error_t3008710795_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Requests_WebRequestErr3008710795.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GSN.Skill.Requests.WebRequestErrorData/Error::.ctor(System.String,System.String,System.String)
extern "C"  void Error__ctor_m3868976566 (Error_t3008710795 * __this, String_t* ___error_message0, String_t* ___status1, String_t* ___error_code2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Error_t3008710795;
struct Error_t3008710795_marshaled_pinvoke;

extern "C" void Error_t3008710795_marshal_pinvoke(const Error_t3008710795& unmarshaled, Error_t3008710795_marshaled_pinvoke& marshaled);
extern "C" void Error_t3008710795_marshal_pinvoke_back(const Error_t3008710795_marshaled_pinvoke& marshaled, Error_t3008710795& unmarshaled);
extern "C" void Error_t3008710795_marshal_pinvoke_cleanup(Error_t3008710795_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Error_t3008710795;
struct Error_t3008710795_marshaled_com;

extern "C" void Error_t3008710795_marshal_com(const Error_t3008710795& unmarshaled, Error_t3008710795_marshaled_com& marshaled);
extern "C" void Error_t3008710795_marshal_com_back(const Error_t3008710795_marshaled_com& marshaled, Error_t3008710795& unmarshaled);
extern "C" void Error_t3008710795_marshal_com_cleanup(Error_t3008710795_marshaled_com& marshaled);
