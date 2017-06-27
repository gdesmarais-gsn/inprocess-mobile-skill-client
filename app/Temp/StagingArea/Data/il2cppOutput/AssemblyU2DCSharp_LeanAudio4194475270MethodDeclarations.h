﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// LeanAudio
struct LeanAudio_t4194475270;
// LeanAudioOptions
struct LeanAudioOptions_t2925434024;
// LeanAudioStream
struct LeanAudioStream_t376238626;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimationCurve3306541151.h"
#include "AssemblyU2DCSharp_LeanAudioOptions2925434024.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void LeanAudio::.ctor()
extern "C"  void LeanAudio__ctor_m4142045155 (LeanAudio_t4194475270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LeanAudioOptions LeanAudio::options()
extern "C"  LeanAudioOptions_t2925434024 * LeanAudio_options_m3984353080 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LeanAudioStream LeanAudio::createAudioStream(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,LeanAudioOptions)
extern "C"  LeanAudioStream_t376238626 * LeanAudio_createAudioStream_m3264845044 (Il2CppObject * __this /* static, unused */, AnimationCurve_t3306541151 * ___volume0, AnimationCurve_t3306541151 * ___frequency1, LeanAudioOptions_t2925434024 * ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip LeanAudio::createAudio(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,LeanAudioOptions)
extern "C"  AudioClip_t1932558630 * LeanAudio_createAudio_m2386517161 (Il2CppObject * __this /* static, unused */, AnimationCurve_t3306541151 * ___volume0, AnimationCurve_t3306541151 * ___frequency1, LeanAudioOptions_t2925434024 * ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LeanAudio::createAudioWave(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,LeanAudioOptions)
extern "C"  int32_t LeanAudio_createAudioWave_m1663815352 (Il2CppObject * __this /* static, unused */, AnimationCurve_t3306541151 * ___volume0, AnimationCurve_t3306541151 * ___frequency1, LeanAudioOptions_t2925434024 * ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip LeanAudio::createAudioFromWave(System.Int32,LeanAudioOptions)
extern "C"  AudioClip_t1932558630 * LeanAudio_createAudioFromWave_m3291526751 (Il2CppObject * __this /* static, unused */, int32_t ___waveLength0, LeanAudioOptions_t2925434024 * ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanAudio::OnAudioSetPosition(System.Int32)
extern "C"  void LeanAudio_OnAudioSetPosition_m541160204 (Il2CppObject * __this /* static, unused */, int32_t ___newPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip LeanAudio::generateAudioFromCurve(UnityEngine.AnimationCurve,System.Int32)
extern "C"  AudioClip_t1932558630 * LeanAudio_generateAudioFromCurve_m4234142522 (Il2CppObject * __this /* static, unused */, AnimationCurve_t3306541151 * ___curve0, int32_t ___frequencyRate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource LeanAudio::play(UnityEngine.AudioClip,System.Single)
extern "C"  AudioSource_t1135106623 * LeanAudio_play_m103277164 (Il2CppObject * __this /* static, unused */, AudioClip_t1932558630 * ___audio0, float ___volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource LeanAudio::play(UnityEngine.AudioClip)
extern "C"  AudioSource_t1135106623 * LeanAudio_play_m147862451 (Il2CppObject * __this /* static, unused */, AudioClip_t1932558630 * ___audio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource LeanAudio::play(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C"  AudioSource_t1135106623 * LeanAudio_play_m2911496256 (Il2CppObject * __this /* static, unused */, AudioClip_t1932558630 * ___audio0, Vector3_t2243707580  ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource LeanAudio::play(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C"  AudioSource_t1135106623 * LeanAudio_play_m86992343 (Il2CppObject * __this /* static, unused */, AudioClip_t1932558630 * ___audio0, Vector3_t2243707580  ___pos1, float ___volume2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource LeanAudio::playClipAt(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C"  AudioSource_t1135106623 * LeanAudio_playClipAt_m921357637 (Il2CppObject * __this /* static, unused */, AudioClip_t1932558630 * ___clip0, Vector3_t2243707580  ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanAudio::printOutAudioClip(UnityEngine.AudioClip,UnityEngine.AnimationCurve&,System.Single)
extern "C"  void LeanAudio_printOutAudioClip_m2999078296 (Il2CppObject * __this /* static, unused */, AudioClip_t1932558630 * ___audioClip0, AnimationCurve_t3306541151 ** ___curve1, float ___scaleX2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanAudio::.cctor()
extern "C"  void LeanAudio__cctor_m1934581828 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
