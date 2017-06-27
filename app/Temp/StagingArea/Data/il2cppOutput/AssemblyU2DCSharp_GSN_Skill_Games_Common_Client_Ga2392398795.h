#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
// GSN.Skill.Games.Common.Client.Game.SceneLoadingData
struct SceneLoadingData_t1095366590;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Game.UILoadBase/<LoadNextScene>c__Iterator1
struct  U3CLoadNextSceneU3Ec__Iterator1_t2392398795  : public Il2CppObject
{
public:
	// UnityEngine.AsyncOperation GSN.Skill.Games.Common.Client.Game.UILoadBase/<LoadNextScene>c__Iterator1::<async>__0
	AsyncOperation_t3814632279 * ___U3CasyncU3E__0_0;
	// GSN.Skill.Games.Common.Client.Game.SceneLoadingData GSN.Skill.Games.Common.Client.Game.UILoadBase/<LoadNextScene>c__Iterator1::<sceneLoadingData>__1
	SceneLoadingData_t1095366590 * ___U3CsceneLoadingDataU3E__1_1;
	// System.Object GSN.Skill.Games.Common.Client.Game.UILoadBase/<LoadNextScene>c__Iterator1::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean GSN.Skill.Games.Common.Client.Game.UILoadBase/<LoadNextScene>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 GSN.Skill.Games.Common.Client.Game.UILoadBase/<LoadNextScene>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CasyncU3E__0_0() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneU3Ec__Iterator1_t2392398795, ___U3CasyncU3E__0_0)); }
	inline AsyncOperation_t3814632279 * get_U3CasyncU3E__0_0() const { return ___U3CasyncU3E__0_0; }
	inline AsyncOperation_t3814632279 ** get_address_of_U3CasyncU3E__0_0() { return &___U3CasyncU3E__0_0; }
	inline void set_U3CasyncU3E__0_0(AsyncOperation_t3814632279 * value)
	{
		___U3CasyncU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CasyncU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CsceneLoadingDataU3E__1_1() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneU3Ec__Iterator1_t2392398795, ___U3CsceneLoadingDataU3E__1_1)); }
	inline SceneLoadingData_t1095366590 * get_U3CsceneLoadingDataU3E__1_1() const { return ___U3CsceneLoadingDataU3E__1_1; }
	inline SceneLoadingData_t1095366590 ** get_address_of_U3CsceneLoadingDataU3E__1_1() { return &___U3CsceneLoadingDataU3E__1_1; }
	inline void set_U3CsceneLoadingDataU3E__1_1(SceneLoadingData_t1095366590 * value)
	{
		___U3CsceneLoadingDataU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsceneLoadingDataU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneU3Ec__Iterator1_t2392398795, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneU3Ec__Iterator1_t2392398795, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneU3Ec__Iterator1_t2392398795, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
