#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<GSN.Skill.Phoenix.Model.Popups.IPopupModel>
struct Queue_1_t3906006417;
// System.Collections.Generic.SortedDictionary`2<System.Int64,GSN.Skill.Phoenix.Model.Popups.IPopupModel>
struct SortedDictionary_2_t2430512577;

#include "AssemblyU2DCSharp_GSN_Skill_Utils_Singleton_1_gen1187384868.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.Model.PopupManager
struct  PopupManager_t2446372139  : public Singleton_1_t1187384868
{
public:
	// System.Collections.Generic.Queue`1<GSN.Skill.Phoenix.Model.Popups.IPopupModel> GSN.Skill.Phoenix.Model.PopupManager::_popupQueue
	Queue_1_t3906006417 * ____popupQueue_2;
	// System.Collections.Generic.SortedDictionary`2<System.Int64,GSN.Skill.Phoenix.Model.Popups.IPopupModel> GSN.Skill.Phoenix.Model.PopupManager::_currentPopups
	SortedDictionary_2_t2430512577 * ____currentPopups_3;

public:
	inline static int32_t get_offset_of__popupQueue_2() { return static_cast<int32_t>(offsetof(PopupManager_t2446372139, ____popupQueue_2)); }
	inline Queue_1_t3906006417 * get__popupQueue_2() const { return ____popupQueue_2; }
	inline Queue_1_t3906006417 ** get_address_of__popupQueue_2() { return &____popupQueue_2; }
	inline void set__popupQueue_2(Queue_1_t3906006417 * value)
	{
		____popupQueue_2 = value;
		Il2CppCodeGenWriteBarrier(&____popupQueue_2, value);
	}

	inline static int32_t get_offset_of__currentPopups_3() { return static_cast<int32_t>(offsetof(PopupManager_t2446372139, ____currentPopups_3)); }
	inline SortedDictionary_2_t2430512577 * get__currentPopups_3() const { return ____currentPopups_3; }
	inline SortedDictionary_2_t2430512577 ** get_address_of__currentPopups_3() { return &____currentPopups_3; }
	inline void set__currentPopups_3(SortedDictionary_2_t2430512577 * value)
	{
		____currentPopups_3 = value;
		Il2CppCodeGenWriteBarrier(&____currentPopups_3, value);
	}
};

struct PopupManager_t2446372139_StaticFields
{
public:
	// System.Int64 GSN.Skill.Phoenix.Model.PopupManager::_uidCounter
	int64_t ____uidCounter_1;

public:
	inline static int32_t get_offset_of__uidCounter_1() { return static_cast<int32_t>(offsetof(PopupManager_t2446372139_StaticFields, ____uidCounter_1)); }
	inline int64_t get__uidCounter_1() const { return ____uidCounter_1; }
	inline int64_t* get_address_of__uidCounter_1() { return &____uidCounter_1; }
	inline void set__uidCounter_1(int64_t value)
	{
		____uidCounter_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
