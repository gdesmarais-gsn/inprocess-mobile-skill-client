#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Action
struct Action_t3226471752;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.SceneManager/<InternalLoadSceneAsync>c__Iterator0
struct  U3CInternalLoadSceneAsyncU3Ec__Iterator0_t3243205483  : public Il2CppObject
{
public:
	// System.String GSN.Skill.Phoenix.Model.SceneManager/<InternalLoadSceneAsync>c__Iterator0::sceneName
	String_t* ___sceneName_0;
	// UnityEngine.SceneManagement.LoadSceneMode GSN.Skill.Phoenix.Model.SceneManager/<InternalLoadSceneAsync>c__Iterator0::loadSceneMode
	int32_t ___loadSceneMode_1;
	// UnityEngine.AsyncOperation GSN.Skill.Phoenix.Model.SceneManager/<InternalLoadSceneAsync>c__Iterator0::<asyncOperation>__0
	AsyncOperation_t3814632279 * ___U3CasyncOperationU3E__0_2;
	// System.Action`1<System.Single> GSN.Skill.Phoenix.Model.SceneManager/<InternalLoadSceneAsync>c__Iterator0::progressCallback
	Action_1_t1878309314 * ___progressCallback_3;
	// System.Action GSN.Skill.Phoenix.Model.SceneManager/<InternalLoadSceneAsync>c__Iterator0::completeCallback
	Action_t3226471752 * ___completeCallback_4;
	// System.Object GSN.Skill.Phoenix.Model.SceneManager/<InternalLoadSceneAsync>c__Iterator0::$current
	Il2CppObject * ___U24current_5;
	// System.Boolean GSN.Skill.Phoenix.Model.SceneManager/<InternalLoadSceneAsync>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 GSN.Skill.Phoenix.Model.SceneManager/<InternalLoadSceneAsync>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_sceneName_0() { return static_cast<int32_t>(offsetof(U3CInternalLoadSceneAsyncU3Ec__Iterator0_t3243205483, ___sceneName_0)); }
	inline String_t* get_sceneName_0() const { return ___sceneName_0; }
	inline String_t** get_address_of_sceneName_0() { return &___sceneName_0; }
	inline void set_sceneName_0(String_t* value)
	{
		___sceneName_0 = value;
		Il2CppCodeGenWriteBarrier(&___sceneName_0, value);
	}

	inline static int32_t get_offset_of_loadSceneMode_1() { return static_cast<int32_t>(offsetof(U3CInternalLoadSceneAsyncU3Ec__Iterator0_t3243205483, ___loadSceneMode_1)); }
	inline int32_t get_loadSceneMode_1() const { return ___loadSceneMode_1; }
	inline int32_t* get_address_of_loadSceneMode_1() { return &___loadSceneMode_1; }
	inline void set_loadSceneMode_1(int32_t value)
	{
		___loadSceneMode_1 = value;
	}

	inline static int32_t get_offset_of_U3CasyncOperationU3E__0_2() { return static_cast<int32_t>(offsetof(U3CInternalLoadSceneAsyncU3Ec__Iterator0_t3243205483, ___U3CasyncOperationU3E__0_2)); }
	inline AsyncOperation_t3814632279 * get_U3CasyncOperationU3E__0_2() const { return ___U3CasyncOperationU3E__0_2; }
	inline AsyncOperation_t3814632279 ** get_address_of_U3CasyncOperationU3E__0_2() { return &___U3CasyncOperationU3E__0_2; }
	inline void set_U3CasyncOperationU3E__0_2(AsyncOperation_t3814632279 * value)
	{
		___U3CasyncOperationU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CasyncOperationU3E__0_2, value);
	}

	inline static int32_t get_offset_of_progressCallback_3() { return static_cast<int32_t>(offsetof(U3CInternalLoadSceneAsyncU3Ec__Iterator0_t3243205483, ___progressCallback_3)); }
	inline Action_1_t1878309314 * get_progressCallback_3() const { return ___progressCallback_3; }
	inline Action_1_t1878309314 ** get_address_of_progressCallback_3() { return &___progressCallback_3; }
	inline void set_progressCallback_3(Action_1_t1878309314 * value)
	{
		___progressCallback_3 = value;
		Il2CppCodeGenWriteBarrier(&___progressCallback_3, value);
	}

	inline static int32_t get_offset_of_completeCallback_4() { return static_cast<int32_t>(offsetof(U3CInternalLoadSceneAsyncU3Ec__Iterator0_t3243205483, ___completeCallback_4)); }
	inline Action_t3226471752 * get_completeCallback_4() const { return ___completeCallback_4; }
	inline Action_t3226471752 ** get_address_of_completeCallback_4() { return &___completeCallback_4; }
	inline void set_completeCallback_4(Action_t3226471752 * value)
	{
		___completeCallback_4 = value;
		Il2CppCodeGenWriteBarrier(&___completeCallback_4, value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CInternalLoadSceneAsyncU3Ec__Iterator0_t3243205483, ___U24current_5)); }
	inline Il2CppObject * get_U24current_5() const { return ___U24current_5; }
	inline Il2CppObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(Il2CppObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_5, value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CInternalLoadSceneAsyncU3Ec__Iterator0_t3243205483, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CInternalLoadSceneAsyncU3Ec__Iterator0_t3243205483, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
