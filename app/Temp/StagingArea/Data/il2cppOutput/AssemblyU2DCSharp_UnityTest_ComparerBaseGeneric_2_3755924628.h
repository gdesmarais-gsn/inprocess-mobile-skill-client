#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;

#include "AssemblyU2DCSharp_UnityTest_ComparerBase429484414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.ComparerBaseGeneric`2<UnityEngine.Renderer,UnityEngine.Camera>
struct  ComparerBaseGeneric_2_t3755924628  : public ComparerBase_t429484414
{
public:
	// T2 UnityTest.ComparerBaseGeneric`2::constantValueGeneric
	Camera_t189460977 * ___constantValueGeneric_13;

public:
	inline static int32_t get_offset_of_constantValueGeneric_13() { return static_cast<int32_t>(offsetof(ComparerBaseGeneric_2_t3755924628, ___constantValueGeneric_13)); }
	inline Camera_t189460977 * get_constantValueGeneric_13() const { return ___constantValueGeneric_13; }
	inline Camera_t189460977 ** get_address_of_constantValueGeneric_13() { return &___constantValueGeneric_13; }
	inline void set_constantValueGeneric_13(Camera_t189460977 * value)
	{
		___constantValueGeneric_13 = value;
		Il2CppCodeGenWriteBarrier(&___constantValueGeneric_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
