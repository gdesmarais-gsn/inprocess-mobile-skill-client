#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlanarStream/AxisDirection
struct AxisDirection_t4117240815;
// System.Collections.Generic.List`1<PlanarStream/AxisDirection>
struct List_1_t3486361947;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlanarStream/Axis
struct  Axis_t1057766848  : public Il2CppObject
{
public:
	// PlanarStream/AxisDirection PlanarStream/Axis::forward
	AxisDirection_t4117240815 * ___forward_0;
	// PlanarStream/AxisDirection PlanarStream/Axis::backward
	AxisDirection_t4117240815 * ___backward_1;
	// System.Collections.Generic.List`1<PlanarStream/AxisDirection> PlanarStream/Axis::forwardSecondary
	List_1_t3486361947 * ___forwardSecondary_2;
	// System.Collections.Generic.List`1<PlanarStream/AxisDirection> PlanarStream/Axis::backwardSecondary
	List_1_t3486361947 * ___backwardSecondary_3;
	// UnityEngine.Vector3 PlanarStream/Axis::vector
	Vector3_t2243707580  ___vector_4;

public:
	inline static int32_t get_offset_of_forward_0() { return static_cast<int32_t>(offsetof(Axis_t1057766848, ___forward_0)); }
	inline AxisDirection_t4117240815 * get_forward_0() const { return ___forward_0; }
	inline AxisDirection_t4117240815 ** get_address_of_forward_0() { return &___forward_0; }
	inline void set_forward_0(AxisDirection_t4117240815 * value)
	{
		___forward_0 = value;
		Il2CppCodeGenWriteBarrier(&___forward_0, value);
	}

	inline static int32_t get_offset_of_backward_1() { return static_cast<int32_t>(offsetof(Axis_t1057766848, ___backward_1)); }
	inline AxisDirection_t4117240815 * get_backward_1() const { return ___backward_1; }
	inline AxisDirection_t4117240815 ** get_address_of_backward_1() { return &___backward_1; }
	inline void set_backward_1(AxisDirection_t4117240815 * value)
	{
		___backward_1 = value;
		Il2CppCodeGenWriteBarrier(&___backward_1, value);
	}

	inline static int32_t get_offset_of_forwardSecondary_2() { return static_cast<int32_t>(offsetof(Axis_t1057766848, ___forwardSecondary_2)); }
	inline List_1_t3486361947 * get_forwardSecondary_2() const { return ___forwardSecondary_2; }
	inline List_1_t3486361947 ** get_address_of_forwardSecondary_2() { return &___forwardSecondary_2; }
	inline void set_forwardSecondary_2(List_1_t3486361947 * value)
	{
		___forwardSecondary_2 = value;
		Il2CppCodeGenWriteBarrier(&___forwardSecondary_2, value);
	}

	inline static int32_t get_offset_of_backwardSecondary_3() { return static_cast<int32_t>(offsetof(Axis_t1057766848, ___backwardSecondary_3)); }
	inline List_1_t3486361947 * get_backwardSecondary_3() const { return ___backwardSecondary_3; }
	inline List_1_t3486361947 ** get_address_of_backwardSecondary_3() { return &___backwardSecondary_3; }
	inline void set_backwardSecondary_3(List_1_t3486361947 * value)
	{
		___backwardSecondary_3 = value;
		Il2CppCodeGenWriteBarrier(&___backwardSecondary_3, value);
	}

	inline static int32_t get_offset_of_vector_4() { return static_cast<int32_t>(offsetof(Axis_t1057766848, ___vector_4)); }
	inline Vector3_t2243707580  get_vector_4() const { return ___vector_4; }
	inline Vector3_t2243707580 * get_address_of_vector_4() { return &___vector_4; }
	inline void set_vector_4(Vector3_t2243707580  value)
	{
		___vector_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
