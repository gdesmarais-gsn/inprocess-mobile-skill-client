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

// TMPro.KerningTable
struct KerningTable_t2970824110;
// TMPro.KerningPair
struct KerningPair_t1577753922;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_KerningPair1577753922.h"

// System.Void TMPro.KerningTable::.ctor()
extern "C"  void KerningTable__ctor_m744662573 (KerningTable_t2970824110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.KerningTable::AddKerningPair()
extern "C"  void KerningTable_AddKerningPair_m1996466702 (KerningTable_t2970824110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.KerningTable::AddKerningPair(System.Int32,System.Int32,System.Single)
extern "C"  int32_t KerningTable_AddKerningPair_m2940616339 (KerningTable_t2970824110 * __this, int32_t ___left0, int32_t ___right1, float ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.KerningTable::RemoveKerningPair(System.Int32,System.Int32)
extern "C"  void KerningTable_RemoveKerningPair_m3374028923 (KerningTable_t2970824110 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.KerningTable::RemoveKerningPair(System.Int32)
extern "C"  void KerningTable_RemoveKerningPair_m2755680618 (KerningTable_t2970824110 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.KerningTable::SortKerningPairs()
extern "C"  void KerningTable_SortKerningPairs_m446943382 (KerningTable_t2970824110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.KerningTable::<SortKerningPairs>m__0(TMPro.KerningPair)
extern "C"  int32_t KerningTable_U3CSortKerningPairsU3Em__0_m3748250679 (Il2CppObject * __this /* static, unused */, KerningPair_t1577753922 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.KerningTable::<SortKerningPairs>m__1(TMPro.KerningPair)
extern "C"  int32_t KerningTable_U3CSortKerningPairsU3Em__1_m992246550 (Il2CppObject * __this /* static, unused */, KerningPair_t1577753922 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
