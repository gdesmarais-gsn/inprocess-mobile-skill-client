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

// GSN.Skill.Games.Common.Client.Audio.AudioChannel
struct AudioChannel_t1784365201;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void GSN.Skill.Games.Common.Client.Audio.AudioChannel::.ctor()
extern "C"  void AudioChannel__ctor_m1602842788 (AudioChannel_t1784365201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Audio.AudioChannel::Init(System.String)
extern "C"  void AudioChannel_Init_m1441491158 (AudioChannel_t1784365201 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Audio.AudioChannel::AddSound(UnityEngine.GameObject)
extern "C"  void AudioChannel_AddSound_m3592659334 (AudioChannel_t1784365201 * __this, GameObject_t1756533147 * ___audioGameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GSN.Skill.Games.Common.Client.Audio.AudioChannel::get_isEnabled()
extern "C"  bool AudioChannel_get_isEnabled_m743497492 (AudioChannel_t1784365201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Audio.AudioChannel::set_isEnabled(System.Boolean)
extern "C"  void AudioChannel_set_isEnabled_m1791627827 (AudioChannel_t1784365201 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Audio.AudioChannel::FadeOutDestroy(System.Single,System.Boolean)
extern "C"  void AudioChannel_FadeOutDestroy_m1857673410 (AudioChannel_t1784365201 * __this, float ___fadeTime0, bool ___destroy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Audio.AudioChannel::TweenAll(System.Single,System.Single)
extern "C"  void AudioChannel_TweenAll_m1517302882 (AudioChannel_t1784365201 * __this, float ___tweenTo0, float ___fadeTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GSN.Skill.Games.Common.Client.Audio.AudioChannel::MuteAll(System.Boolean)
extern "C"  void AudioChannel_MuteAll_m3024250473 (AudioChannel_t1784365201 * __this, bool ___mute0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
