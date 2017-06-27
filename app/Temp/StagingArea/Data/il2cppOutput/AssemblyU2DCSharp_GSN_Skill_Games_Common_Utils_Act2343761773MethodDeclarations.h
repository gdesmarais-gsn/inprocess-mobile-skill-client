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

// System.Action
struct Action_t3226471752;
// GSN.Skill.Games.Common.Utils.ActionContext
struct ActionContext_t4252928663;
// GSN.Skill.Games.Common.Utils.ActionQueue/ActionWrapper
struct ActionWrapper_t2343761773;
struct ActionWrapper_t2343761773_marshaled_pinvoke;
struct ActionWrapper_t2343761773_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act2343761773.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act4252928663.h"

// System.Void GSN.Skill.Games.Common.Utils.ActionQueue/ActionWrapper::.ctor(System.Action,GSN.Skill.Games.Common.Utils.ActionContext)
extern "C"  void ActionWrapper__ctor_m1941715682 (ActionWrapper_t2343761773 * __this, Action_t3226471752 * ___a0, ActionContext_t4252928663 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ActionWrapper_t2343761773;
struct ActionWrapper_t2343761773_marshaled_pinvoke;

extern "C" void ActionWrapper_t2343761773_marshal_pinvoke(const ActionWrapper_t2343761773& unmarshaled, ActionWrapper_t2343761773_marshaled_pinvoke& marshaled);
extern "C" void ActionWrapper_t2343761773_marshal_pinvoke_back(const ActionWrapper_t2343761773_marshaled_pinvoke& marshaled, ActionWrapper_t2343761773& unmarshaled);
extern "C" void ActionWrapper_t2343761773_marshal_pinvoke_cleanup(ActionWrapper_t2343761773_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ActionWrapper_t2343761773;
struct ActionWrapper_t2343761773_marshaled_com;

extern "C" void ActionWrapper_t2343761773_marshal_com(const ActionWrapper_t2343761773& unmarshaled, ActionWrapper_t2343761773_marshaled_com& marshaled);
extern "C" void ActionWrapper_t2343761773_marshal_com_back(const ActionWrapper_t2343761773_marshaled_com& marshaled, ActionWrapper_t2343761773& unmarshaled);
extern "C" void ActionWrapper_t2343761773_marshal_com_cleanup(ActionWrapper_t2343761773_marshaled_com& marshaled);
