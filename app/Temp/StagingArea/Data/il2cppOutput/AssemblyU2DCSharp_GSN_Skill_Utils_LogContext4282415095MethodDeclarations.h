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

// System.Action`1<System.String>
struct Action_1_t1831019615;
// GSN.Skill.Utils.LogContext
struct LogContext_t4282415095;
struct LogContext_t4282415095_marshaled_pinvoke;
struct LogContext_t4282415095_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Utils_LogContext4282415095.h"

// System.Void GSN.Skill.Utils.LogContext::.ctor(System.Action`1<System.String>,System.Action`1<System.String>,System.Action`1<System.String>)
extern "C"  void LogContext__ctor_m340498628 (LogContext_t4282415095 * __this, Action_1_t1831019615 * ___log0, Action_1_t1831019615 * ___logWarning1, Action_1_t1831019615 * ___logError2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct LogContext_t4282415095;
struct LogContext_t4282415095_marshaled_pinvoke;

extern "C" void LogContext_t4282415095_marshal_pinvoke(const LogContext_t4282415095& unmarshaled, LogContext_t4282415095_marshaled_pinvoke& marshaled);
extern "C" void LogContext_t4282415095_marshal_pinvoke_back(const LogContext_t4282415095_marshaled_pinvoke& marshaled, LogContext_t4282415095& unmarshaled);
extern "C" void LogContext_t4282415095_marshal_pinvoke_cleanup(LogContext_t4282415095_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct LogContext_t4282415095;
struct LogContext_t4282415095_marshaled_com;

extern "C" void LogContext_t4282415095_marshal_com(const LogContext_t4282415095& unmarshaled, LogContext_t4282415095_marshaled_com& marshaled);
extern "C" void LogContext_t4282415095_marshal_com_back(const LogContext_t4282415095_marshaled_com& marshaled, LogContext_t4282415095& unmarshaled);
extern "C" void LogContext_t4282415095_marshal_com_cleanup(LogContext_t4282415095_marshaled_com& marshaled);
