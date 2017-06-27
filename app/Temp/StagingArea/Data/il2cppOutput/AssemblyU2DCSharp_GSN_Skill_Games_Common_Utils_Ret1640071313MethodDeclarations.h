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

// GSN.Skill.Games.Common.Utils.RetryJob
struct RetryJob_t1640071313;

#include "codegen/il2cpp-codegen.h"

// System.Void GSN.Skill.Games.Common.Utils.RetryJob::.ctor()
extern "C"  void RetryJob__ctor_m2867898120 (RetryJob_t1640071313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RetryJob::set_TryCount(System.Int32)
extern "C"  void RetryJob_set_TryCount_m1215638918 (RetryJob_t1640071313 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GSN.Skill.Games.Common.Utils.RetryJob::get_TryCount()
extern "C"  int32_t RetryJob_get_TryCount_m3789743625 (RetryJob_t1640071313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RetryJob::CustomReset(System.Boolean)
extern "C"  void RetryJob_CustomReset_m4281009743 (RetryJob_t1640071313 * __this, bool ___hard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RetryJob::CustomAbort()
extern "C"  void RetryJob_CustomAbort_m1589523911 (RetryJob_t1640071313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RetryJob::CustomStart()
extern "C"  void RetryJob_CustomStart_m271644333 (RetryJob_t1640071313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RetryJob::RushRetry()
extern "C"  void RetryJob_RushRetry_m2657718088 (RetryJob_t1640071313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RetryJob::maybeRestartRetriedJob(System.Boolean)
extern "C"  void RetryJob_maybeRestartRetriedJob_m2985835186 (RetryJob_t1640071313 * __this, bool ___failed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RetryJob::actuallyRestart()
extern "C"  void RetryJob_actuallyRestart_m942437672 (RetryJob_t1640071313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Utils.RetryJob::handleResults(System.Boolean)
extern "C"  void RetryJob_handleResults_m542077809 (RetryJob_t1640071313 * __this, bool ___failed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
