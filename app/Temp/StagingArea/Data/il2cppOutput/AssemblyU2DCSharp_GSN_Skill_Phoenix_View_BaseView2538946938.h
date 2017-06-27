#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GSN.Skill.Phoenix.Controller.MainController
struct MainController_t1881357883;

#include "AssemblyU2DCSharp_GSN_Skill_Phoenix_View_Pool_Pool3748385124.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GSN.Skill.Phoenix.View.BaseView
struct  BaseView_t2538946938  : public PooledGameObject_t3748385124
{
public:

public:
};

struct BaseView_t2538946938_StaticFields
{
public:
	// GSN.Skill.Phoenix.Controller.MainController GSN.Skill.Phoenix.View.BaseView::_controller
	MainController_t1881357883 * ____controller_4;

public:
	inline static int32_t get_offset_of__controller_4() { return static_cast<int32_t>(offsetof(BaseView_t2538946938_StaticFields, ____controller_4)); }
	inline MainController_t1881357883 * get__controller_4() const { return ____controller_4; }
	inline MainController_t1881357883 ** get_address_of__controller_4() { return &____controller_4; }
	inline void set__controller_4(MainController_t1881357883 * value)
	{
		____controller_4 = value;
		Il2CppCodeGenWriteBarrier(&____controller_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
