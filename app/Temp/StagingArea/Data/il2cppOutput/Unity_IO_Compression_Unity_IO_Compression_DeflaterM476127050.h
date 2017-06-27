#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Unity.IO.Compression.FastEncoder
struct FastEncoder_t1847783314;
// Unity.IO.Compression.CopyEncoder
struct CopyEncoder_t1573993243;
// Unity.IO.Compression.DeflateInput
struct DeflateInput_t3774384619;
// Unity.IO.Compression.OutputBuffer
struct OutputBuffer_t1763155281;

#include "mscorlib_System_Object2689449295.h"
#include "Unity_IO_Compression_Unity_IO_Compression_Deflater3141367380.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.IO.Compression.DeflaterManaged
struct  DeflaterManaged_t476127050  : public Il2CppObject
{
public:
	// Unity.IO.Compression.FastEncoder Unity.IO.Compression.DeflaterManaged::deflateEncoder
	FastEncoder_t1847783314 * ___deflateEncoder_0;
	// Unity.IO.Compression.CopyEncoder Unity.IO.Compression.DeflaterManaged::copyEncoder
	CopyEncoder_t1573993243 * ___copyEncoder_1;
	// Unity.IO.Compression.DeflateInput Unity.IO.Compression.DeflaterManaged::input
	DeflateInput_t3774384619 * ___input_2;
	// Unity.IO.Compression.OutputBuffer Unity.IO.Compression.DeflaterManaged::output
	OutputBuffer_t1763155281 * ___output_3;
	// Unity.IO.Compression.DeflaterManaged/DeflaterState Unity.IO.Compression.DeflaterManaged::processingState
	int32_t ___processingState_4;
	// Unity.IO.Compression.DeflateInput Unity.IO.Compression.DeflaterManaged::inputFromHistory
	DeflateInput_t3774384619 * ___inputFromHistory_5;

public:
	inline static int32_t get_offset_of_deflateEncoder_0() { return static_cast<int32_t>(offsetof(DeflaterManaged_t476127050, ___deflateEncoder_0)); }
	inline FastEncoder_t1847783314 * get_deflateEncoder_0() const { return ___deflateEncoder_0; }
	inline FastEncoder_t1847783314 ** get_address_of_deflateEncoder_0() { return &___deflateEncoder_0; }
	inline void set_deflateEncoder_0(FastEncoder_t1847783314 * value)
	{
		___deflateEncoder_0 = value;
		Il2CppCodeGenWriteBarrier(&___deflateEncoder_0, value);
	}

	inline static int32_t get_offset_of_copyEncoder_1() { return static_cast<int32_t>(offsetof(DeflaterManaged_t476127050, ___copyEncoder_1)); }
	inline CopyEncoder_t1573993243 * get_copyEncoder_1() const { return ___copyEncoder_1; }
	inline CopyEncoder_t1573993243 ** get_address_of_copyEncoder_1() { return &___copyEncoder_1; }
	inline void set_copyEncoder_1(CopyEncoder_t1573993243 * value)
	{
		___copyEncoder_1 = value;
		Il2CppCodeGenWriteBarrier(&___copyEncoder_1, value);
	}

	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(DeflaterManaged_t476127050, ___input_2)); }
	inline DeflateInput_t3774384619 * get_input_2() const { return ___input_2; }
	inline DeflateInput_t3774384619 ** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(DeflateInput_t3774384619 * value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier(&___input_2, value);
	}

	inline static int32_t get_offset_of_output_3() { return static_cast<int32_t>(offsetof(DeflaterManaged_t476127050, ___output_3)); }
	inline OutputBuffer_t1763155281 * get_output_3() const { return ___output_3; }
	inline OutputBuffer_t1763155281 ** get_address_of_output_3() { return &___output_3; }
	inline void set_output_3(OutputBuffer_t1763155281 * value)
	{
		___output_3 = value;
		Il2CppCodeGenWriteBarrier(&___output_3, value);
	}

	inline static int32_t get_offset_of_processingState_4() { return static_cast<int32_t>(offsetof(DeflaterManaged_t476127050, ___processingState_4)); }
	inline int32_t get_processingState_4() const { return ___processingState_4; }
	inline int32_t* get_address_of_processingState_4() { return &___processingState_4; }
	inline void set_processingState_4(int32_t value)
	{
		___processingState_4 = value;
	}

	inline static int32_t get_offset_of_inputFromHistory_5() { return static_cast<int32_t>(offsetof(DeflaterManaged_t476127050, ___inputFromHistory_5)); }
	inline DeflateInput_t3774384619 * get_inputFromHistory_5() const { return ___inputFromHistory_5; }
	inline DeflateInput_t3774384619 ** get_address_of_inputFromHistory_5() { return &___inputFromHistory_5; }
	inline void set_inputFromHistory_5(DeflateInput_t3774384619 * value)
	{
		___inputFromHistory_5 = value;
		Il2CppCodeGenWriteBarrier(&___inputFromHistory_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
