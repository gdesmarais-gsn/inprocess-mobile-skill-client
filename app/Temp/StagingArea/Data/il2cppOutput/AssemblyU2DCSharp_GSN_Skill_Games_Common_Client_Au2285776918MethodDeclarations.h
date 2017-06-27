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

// GSN.Skill.Games.Common.Client.Audio.AudioFactory
struct AudioFactory_t2285776918;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Aud515001514.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Client_Au1935450831.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"

// System.Void GSN.Skill.Games.Common.Client.Audio.AudioFactory::.ctor()
extern "C"  void AudioFactory__ctor_m4170888289 (AudioFactory_t2285776918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Audio.AudioFactory::Awake()
extern "C"  void AudioFactory_Awake_m505185292 (AudioFactory_t2285776918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Audio.AudioFactory::Start()
extern "C"  void AudioFactory_Start_m704268577 (AudioFactory_t2285776918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GSN.Skill.Games.Common.Client.Audio.AudioFactory::GetPlayTimeStamp()
extern "C"  uint32_t AudioFactory_GetPlayTimeStamp_m4173566968 (AudioFactory_t2285776918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GSN.Skill.Games.Common.Client.Audio.AudioOptions GSN.Skill.Games.Common.Client.Audio.AudioFactory::DefaultOptions()
extern "C"  AudioOptions_t515001514  AudioFactory_DefaultOptions_m2021272403 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Audio.AudioFactory::StopAudiosOnChan(GSN.Skill.Games.Common.Client.Audio.SoundChannels,System.Single)
extern "C"  void AudioFactory_StopAudiosOnChan_m1412748067 (AudioFactory_t2285776918 * __this, int32_t ___chan0, float ___fadeTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Client.Audio.AudioFactory::ChannelIsEnabled(GSN.Skill.Games.Common.Client.Audio.SoundChannels)
extern "C"  bool AudioFactory_ChannelIsEnabled_m3598111628 (AudioFactory_t2285776918 * __this, int32_t ___chan0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Audio.AudioFactory::SetChannelEnabled(GSN.Skill.Games.Common.Client.Audio.SoundChannels,System.Boolean)
extern "C"  void AudioFactory_SetChannelEnabled_m1917615657 (AudioFactory_t2285776918 * __this, int32_t ___chan0, bool ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Audio.AudioFactory::TweenToVolume(UnityEngine.AudioSource,System.Single,System.Single)
extern "C"  void AudioFactory_TweenToVolume_m2201162259 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___audioSource0, float ___toVolume1, float ___seconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.Audio.AudioFactory::InternalTweenToVolume(UnityEngine.AudioSource,System.Single,System.Single,System.Boolean)
extern "C"  Il2CppObject * AudioFactory_InternalTweenToVolume_m2334230669 (AudioFactory_t2285776918 * __this, AudioSource_t1135106623 * ___audioSource0, float ___toVolume1, float ___seconds2, bool ___checkForDucking3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.Audio.AudioFactory::HandleMusicDuckingAndUnducking(UnityEngine.AudioSource,System.Single,System.Single)
extern "C"  Il2CppObject * AudioFactory_HandleMusicDuckingAndUnducking_m418615774 (AudioFactory_t2285776918 * __this, AudioSource_t1135106623 * ___audioSourceCausingDuck0, float ___toVolume1, float ___delayTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Audio.AudioFactory::FadeOutDestroy(UnityEngine.AudioSource,System.Single)
extern "C"  void AudioFactory_FadeOutDestroy_m1862238022 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___audioSource0, float ___seconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GSN.Skill.Games.Common.Client.Audio.AudioFactory::InternalFadeOutDestroy(UnityEngine.AudioSource,System.Single)
extern "C"  Il2CppObject * AudioFactory_InternalFadeOutDestroy_m3015839047 (AudioFactory_t2285776918 * __this, AudioSource_t1135106623 * ___audioSource0, float ___seconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
