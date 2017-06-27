#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Unity.IO.Compression.FastEncoderWindow
struct FastEncoderWindow_t2805640970;
// Unity.IO.Compression.Match
struct Match_t828265445;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.IO.Compression.FastEncoder
struct  FastEncoder_t1847783314  : public Il2CppObject
{
public:
	// Unity.IO.Compression.FastEncoderWindow Unity.IO.Compression.FastEncoder::inputWindow
	FastEncoderWindow_t2805640970 * ___inputWindow_0;
	// Unity.IO.Compression.Match Unity.IO.Compression.FastEncoder::currentMatch
	Match_t828265445 * ___currentMatch_1;
	// System.Double Unity.IO.Compression.FastEncoder::lastCompressionRatio
	double ___lastCompressionRatio_2;

public:
	inline static int32_t get_offset_of_inputWindow_0() { return static_cast<int32_t>(offsetof(FastEncoder_t1847783314, ___inputWindow_0)); }
	inline FastEncoderWindow_t2805640970 * get_inputWindow_0() const { return ___inputWindow_0; }
	inline FastEncoderWindow_t2805640970 ** get_address_of_inputWindow_0() { return &___inputWindow_0; }
	inline void set_inputWindow_0(FastEncoderWindow_t2805640970 * value)
	{
		___inputWindow_0 = value;
		Il2CppCodeGenWriteBarrier(&___inputWindow_0, value);
	}

	inline static int32_t get_offset_of_currentMatch_1() { return static_cast<int32_t>(offsetof(FastEncoder_t1847783314, ___currentMatch_1)); }
	inline Match_t828265445 * get_currentMatch_1() const { return ___currentMatch_1; }
	inline Match_t828265445 ** get_address_of_currentMatch_1() { return &___currentMatch_1; }
	inline void set_currentMatch_1(Match_t828265445 * value)
	{
		___currentMatch_1 = value;
		Il2CppCodeGenWriteBarrier(&___currentMatch_1, value);
	}

	inline static int32_t get_offset_of_lastCompressionRatio_2() { return static_cast<int32_t>(offsetof(FastEncoder_t1847783314, ___lastCompressionRatio_2)); }
	inline double get_lastCompressionRatio_2() const { return ___lastCompressionRatio_2; }
	inline double* get_address_of_lastCompressionRatio_2() { return &___lastCompressionRatio_2; }
	inline void set_lastCompressionRatio_2(double value)
	{
		___lastCompressionRatio_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
