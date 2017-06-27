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
// GSN.Skill.Games.Common.Utils.Job/DoneContext
struct DoneContext_t4066679419;
struct DoneContext_t4066679419_marshaled_pinvoke;
struct DoneContext_t4066679419_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Job4066679419.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_GSN_Skill_Games_Common_Utils_Act4252928663.h"

// System.Void GSN.Skill.Games.Common.Utils.Job/DoneContext::.ctor(System.Action,GSN.Skill.Games.Common.Utils.ActionContext)
extern "C"  void DoneContext__ctor_m2965160282 (DoneContext_t4066679419 * __this, Action_t3226471752 * ___da0, ActionContext_t4252928663 * ___ab1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct DoneContext_t4066679419;
struct DoneContext_t4066679419_marshaled_pinvoke;

extern "C" void DoneContext_t4066679419_marshal_pinvoke(const DoneContext_t4066679419& unmarshaled, DoneContext_t4066679419_marshaled_pinvoke& marshaled);
extern "C" void DoneContext_t4066679419_marshal_pinvoke_back(const DoneContext_t4066679419_marshaled_pinvoke& marshaled, DoneContext_t4066679419& unmarshaled);
extern "C" void DoneContext_t4066679419_marshal_pinvoke_cleanup(DoneContext_t4066679419_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct DoneContext_t4066679419;
struct DoneContext_t4066679419_marshaled_com;

extern "C" void DoneContext_t4066679419_marshal_com(const DoneContext_t4066679419& unmarshaled, DoneContext_t4066679419_marshaled_com& marshaled);
extern "C" void DoneContext_t4066679419_marshal_com_back(const DoneContext_t4066679419_marshaled_com& marshaled, DoneContext_t4066679419& unmarshaled);
extern "C" void DoneContext_t4066679419_marshal_com_cleanup(DoneContext_t4066679419_marshaled_com& marshaled);
