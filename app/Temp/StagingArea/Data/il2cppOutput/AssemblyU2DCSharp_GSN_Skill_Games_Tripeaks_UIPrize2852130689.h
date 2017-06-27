#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Games.Tripeaks.UIPrizePoolItem
struct  UIPrizePoolItem_t2852130689  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.UIPrizePoolItem::_rankText
	TextMeshProUGUI_t934157183 * ____rankText_2;
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.UIPrizePoolItem::_fameText
	TextMeshProUGUI_t934157183 * ____fameText_3;
	// TMPro.TextMeshProUGUI GSN.Skill.Games.Tripeaks.UIPrizePoolItem::_prizeText
	TextMeshProUGUI_t934157183 * ____prizeText_4;
	// UnityEngine.GameObject GSN.Skill.Games.Tripeaks.UIPrizePoolItem::_fameObject
	GameObject_t1756533147 * ____fameObject_5;

public:
	inline static int32_t get_offset_of__rankText_2() { return static_cast<int32_t>(offsetof(UIPrizePoolItem_t2852130689, ____rankText_2)); }
	inline TextMeshProUGUI_t934157183 * get__rankText_2() const { return ____rankText_2; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__rankText_2() { return &____rankText_2; }
	inline void set__rankText_2(TextMeshProUGUI_t934157183 * value)
	{
		____rankText_2 = value;
		Il2CppCodeGenWriteBarrier(&____rankText_2, value);
	}

	inline static int32_t get_offset_of__fameText_3() { return static_cast<int32_t>(offsetof(UIPrizePoolItem_t2852130689, ____fameText_3)); }
	inline TextMeshProUGUI_t934157183 * get__fameText_3() const { return ____fameText_3; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__fameText_3() { return &____fameText_3; }
	inline void set__fameText_3(TextMeshProUGUI_t934157183 * value)
	{
		____fameText_3 = value;
		Il2CppCodeGenWriteBarrier(&____fameText_3, value);
	}

	inline static int32_t get_offset_of__prizeText_4() { return static_cast<int32_t>(offsetof(UIPrizePoolItem_t2852130689, ____prizeText_4)); }
	inline TextMeshProUGUI_t934157183 * get__prizeText_4() const { return ____prizeText_4; }
	inline TextMeshProUGUI_t934157183 ** get_address_of__prizeText_4() { return &____prizeText_4; }
	inline void set__prizeText_4(TextMeshProUGUI_t934157183 * value)
	{
		____prizeText_4 = value;
		Il2CppCodeGenWriteBarrier(&____prizeText_4, value);
	}

	inline static int32_t get_offset_of__fameObject_5() { return static_cast<int32_t>(offsetof(UIPrizePoolItem_t2852130689, ____fameObject_5)); }
	inline GameObject_t1756533147 * get__fameObject_5() const { return ____fameObject_5; }
	inline GameObject_t1756533147 ** get_address_of__fameObject_5() { return &____fameObject_5; }
	inline void set__fameObject_5(GameObject_t1756533147 * value)
	{
		____fameObject_5 = value;
		Il2CppCodeGenWriteBarrier(&____fameObject_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
