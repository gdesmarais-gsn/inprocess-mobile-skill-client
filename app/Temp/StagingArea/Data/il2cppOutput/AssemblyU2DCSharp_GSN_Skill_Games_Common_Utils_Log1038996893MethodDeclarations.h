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
// GSN.Skill.Games.Common.Utils.LogContext
struct LogContext_t1038996893;
struct LogContext_t1038996893_marshaled_pinvoke;
struct LogContext_t1038996893_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Log1038996893.h"

// System.Void GSN.Skill.Games.Common.Utils.LogContext::.ctor(System.Action`1<System.String>,System.Action`1<System.String>,System.Action`1<System.String>)
extern "C"  void LogContext__ctor_m3515369982 (LogContext_t1038996893 * __this, Action_1_t1831019615 * ___log0, Action_1_t1831019615 * ___logWarning1, Action_1_t1831019615 * ___logError2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct LogContext_t1038996893;
struct LogContext_t1038996893_marshaled_pinvoke;

extern "C" void LogContext_t1038996893_marshal_pinvoke(const LogContext_t1038996893& unmarshaled, LogContext_t1038996893_marshaled_pinvoke& marshaled);
extern "C" void LogContext_t1038996893_marshal_pinvoke_back(const LogContext_t1038996893_marshaled_pinvoke& marshaled, LogContext_t1038996893& unmarshaled);
extern "C" void LogContext_t1038996893_marshal_pinvoke_cleanup(LogContext_t1038996893_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct LogContext_t1038996893;
struct LogContext_t1038996893_marshaled_com;

extern "C" void LogContext_t1038996893_marshal_com(const LogContext_t1038996893& unmarshaled, LogContext_t1038996893_marshaled_com& marshaled);
extern "C" void LogContext_t1038996893_marshal_com_back(const LogContext_t1038996893_marshaled_com& marshaled, LogContext_t1038996893& unmarshaled);
extern "C" void LogContext_t1038996893_marshal_com_cleanup(LogContext_t1038996893_marshaled_com& marshaled);
