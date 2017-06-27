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

// Unity.IO.Compression.DeflateInput
struct DeflateInput_t3774384619;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Unity_IO_Compression_Unity_IO_Compression_DeflateI2595290884.h"

// System.Void Unity.IO.Compression.DeflateInput::.ctor()
extern "C"  void DeflateInput__ctor_m4117700856 (DeflateInput_t3774384619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Unity.IO.Compression.DeflateInput::get_Buffer()
extern "C"  ByteU5BU5D_t3397334013* DeflateInput_get_Buffer_m3507843773 (DeflateInput_t3774384619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateInput::set_Buffer(System.Byte[])
extern "C"  void DeflateInput_set_Buffer_m2534974088 (DeflateInput_t3774384619 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.DeflateInput::get_Count()
extern "C"  int32_t DeflateInput_get_Count_m1868328980 (DeflateInput_t3774384619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateInput::set_Count(System.Int32)
extern "C"  void DeflateInput_set_Count_m3609414519 (DeflateInput_t3774384619 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unity.IO.Compression.DeflateInput::get_StartIndex()
extern "C"  int32_t DeflateInput_get_StartIndex_m1735036965 (DeflateInput_t3774384619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateInput::set_StartIndex(System.Int32)
extern "C"  void DeflateInput_set_StartIndex_m4166831522 (DeflateInput_t3774384619 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateInput::ConsumeBytes(System.Int32)
extern "C"  void DeflateInput_ConsumeBytes_m3811428506 (DeflateInput_t3774384619 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Unity.IO.Compression.DeflateInput/InputState Unity.IO.Compression.DeflateInput::DumpState()
extern "C"  InputState_t2595290884  DeflateInput_DumpState_m2122151342 (DeflateInput_t3774384619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unity.IO.Compression.DeflateInput::RestoreState(Unity.IO.Compression.DeflateInput/InputState)
extern "C"  void DeflateInput_RestoreState_m3647790237 (DeflateInput_t3774384619 * __this, InputState_t2595290884  ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
