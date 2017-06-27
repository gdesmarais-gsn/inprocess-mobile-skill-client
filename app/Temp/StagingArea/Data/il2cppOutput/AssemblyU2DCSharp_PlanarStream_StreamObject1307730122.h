#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlanarStream/TransformInfo[]
struct TransformInfoU5BU5D_t1164162258;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlanarStream/StreamObject
struct  StreamObject_t1307730122  : public Il2CppObject
{
public:
	// PlanarStream/TransformInfo[] PlanarStream/StreamObject::transformInfos
	TransformInfoU5BU5D_t1164162258* ___transformInfos_0;
	// System.Int32 PlanarStream/StreamObject::numAxesEntered
	int32_t ___numAxesEntered_1;
	// System.Int32 PlanarStream/StreamObject::onscreenCount
	int32_t ___onscreenCount_2;
	// System.Int32 PlanarStream/StreamObject::subAxesEntered
	int32_t ___subAxesEntered_3;

public:
	inline static int32_t get_offset_of_transformInfos_0() { return static_cast<int32_t>(offsetof(StreamObject_t1307730122, ___transformInfos_0)); }
	inline TransformInfoU5BU5D_t1164162258* get_transformInfos_0() const { return ___transformInfos_0; }
	inline TransformInfoU5BU5D_t1164162258** get_address_of_transformInfos_0() { return &___transformInfos_0; }
	inline void set_transformInfos_0(TransformInfoU5BU5D_t1164162258* value)
	{
		___transformInfos_0 = value;
		Il2CppCodeGenWriteBarrier(&___transformInfos_0, value);
	}

	inline static int32_t get_offset_of_numAxesEntered_1() { return static_cast<int32_t>(offsetof(StreamObject_t1307730122, ___numAxesEntered_1)); }
	inline int32_t get_numAxesEntered_1() const { return ___numAxesEntered_1; }
	inline int32_t* get_address_of_numAxesEntered_1() { return &___numAxesEntered_1; }
	inline void set_numAxesEntered_1(int32_t value)
	{
		___numAxesEntered_1 = value;
	}

	inline static int32_t get_offset_of_onscreenCount_2() { return static_cast<int32_t>(offsetof(StreamObject_t1307730122, ___onscreenCount_2)); }
	inline int32_t get_onscreenCount_2() const { return ___onscreenCount_2; }
	inline int32_t* get_address_of_onscreenCount_2() { return &___onscreenCount_2; }
	inline void set_onscreenCount_2(int32_t value)
	{
		___onscreenCount_2 = value;
	}

	inline static int32_t get_offset_of_subAxesEntered_3() { return static_cast<int32_t>(offsetof(StreamObject_t1307730122, ___subAxesEntered_3)); }
	inline int32_t get_subAxesEntered_3() const { return ___subAxesEntered_3; }
	inline int32_t* get_address_of_subAxesEntered_3() { return &___subAxesEntered_3; }
	inline void set_subAxesEntered_3(int32_t value)
	{
		___subAxesEntered_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
