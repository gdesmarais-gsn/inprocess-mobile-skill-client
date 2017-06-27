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
// GSN.Skill.Games.Common.Client.Game.ViewBase
struct ViewBase_t3608972958;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerat933071039.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Common.Client.Game.ViewBase/<LoadBundles>c__Iterator3
struct  U3CLoadBundlesU3Ec__Iterator3_t3510404308  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1/Enumerator<System.String> GSN.Skill.Games.Common.Client.Game.ViewBase/<LoadBundles>c__Iterator3::$locvar0
	Enumerator_t933071039  ___U24locvar0_0;
	// System.String GSN.Skill.Games.Common.Client.Game.ViewBase/<LoadBundles>c__Iterator3::<bundle>__0
	String_t* ___U3CbundleU3E__0_1;
	// GSN.Skill.Games.Common.Client.Game.ViewBase GSN.Skill.Games.Common.Client.Game.ViewBase/<LoadBundles>c__Iterator3::$this
	ViewBase_t3608972958 * ___U24this_2;
	// System.Object GSN.Skill.Games.Common.Client.Game.ViewBase/<LoadBundles>c__Iterator3::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean GSN.Skill.Games.Common.Client.Game.ViewBase/<LoadBundles>c__Iterator3::$disposing
	bool ___U24disposing_4;
	// System.Int32 GSN.Skill.Games.Common.Client.Game.ViewBase/<LoadBundles>c__Iterator3::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CLoadBundlesU3Ec__Iterator3_t3510404308, ___U24locvar0_0)); }
	inline Enumerator_t933071039  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t933071039 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t933071039  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CbundleU3E__0_1() { return static_cast<int32_t>(offsetof(U3CLoadBundlesU3Ec__Iterator3_t3510404308, ___U3CbundleU3E__0_1)); }
	inline String_t* get_U3CbundleU3E__0_1() const { return ___U3CbundleU3E__0_1; }
	inline String_t** get_address_of_U3CbundleU3E__0_1() { return &___U3CbundleU3E__0_1; }
	inline void set_U3CbundleU3E__0_1(String_t* value)
	{
		___U3CbundleU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CbundleU3E__0_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CLoadBundlesU3Ec__Iterator3_t3510404308, ___U24this_2)); }
	inline ViewBase_t3608972958 * get_U24this_2() const { return ___U24this_2; }
	inline ViewBase_t3608972958 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(ViewBase_t3608972958 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CLoadBundlesU3Ec__Iterator3_t3510404308, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CLoadBundlesU3Ec__Iterator3_t3510404308, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CLoadBundlesU3Ec__Iterator3_t3510404308, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
