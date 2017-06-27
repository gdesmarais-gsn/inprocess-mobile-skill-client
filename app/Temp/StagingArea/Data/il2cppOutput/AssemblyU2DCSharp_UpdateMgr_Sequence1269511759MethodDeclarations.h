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

// CoroutineHandle
struct CoroutineHandle_t3736301024;
// UpdateMgr/Sequence
struct Sequence_t1269511759;
struct Sequence_t1269511759_marshaled_pinvoke;
struct Sequence_t1269511759_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UpdateMgr_Sequence1269511759.h"
#include "AssemblyU2DCSharp_CoroutineHandle3736301024.h"

// System.Void UpdateMgr/Sequence::Initialize()
extern "C"  void Sequence_Initialize_m2344769010 (Sequence_t1269511759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UpdateMgr/Sequence::IsZombie(CoroutineHandle)
extern "C"  bool Sequence_IsZombie_m2918249246 (Il2CppObject * __this /* static, unused */, CoroutineHandle_t3736301024 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateMgr/Sequence::Update(System.Single)
extern "C"  void Sequence_Update_m3660458210 (Sequence_t1269511759 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Sequence_t1269511759;
struct Sequence_t1269511759_marshaled_pinvoke;

extern "C" void Sequence_t1269511759_marshal_pinvoke(const Sequence_t1269511759& unmarshaled, Sequence_t1269511759_marshaled_pinvoke& marshaled);
extern "C" void Sequence_t1269511759_marshal_pinvoke_back(const Sequence_t1269511759_marshaled_pinvoke& marshaled, Sequence_t1269511759& unmarshaled);
extern "C" void Sequence_t1269511759_marshal_pinvoke_cleanup(Sequence_t1269511759_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Sequence_t1269511759;
struct Sequence_t1269511759_marshaled_com;

extern "C" void Sequence_t1269511759_marshal_com(const Sequence_t1269511759& unmarshaled, Sequence_t1269511759_marshaled_com& marshaled);
extern "C" void Sequence_t1269511759_marshal_com_back(const Sequence_t1269511759_marshaled_com& marshaled, Sequence_t1269511759& unmarshaled);
extern "C" void Sequence_t1269511759_marshal_com_cleanup(Sequence_t1269511759_marshaled_com& marshaled);
