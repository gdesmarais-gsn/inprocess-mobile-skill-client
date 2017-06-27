#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.LockCookie
struct  LockCookie_t3719443719 
{
public:
	// System.Int32 System.Threading.LockCookie::ThreadId
	int32_t ___ThreadId_0;
	// System.Int32 System.Threading.LockCookie::ReaderLocks
	int32_t ___ReaderLocks_1;
	// System.Int32 System.Threading.LockCookie::WriterLocks
	int32_t ___WriterLocks_2;

public:
	inline static int32_t get_offset_of_ThreadId_0() { return static_cast<int32_t>(offsetof(LockCookie_t3719443719, ___ThreadId_0)); }
	inline int32_t get_ThreadId_0() const { return ___ThreadId_0; }
	inline int32_t* get_address_of_ThreadId_0() { return &___ThreadId_0; }
	inline void set_ThreadId_0(int32_t value)
	{
		___ThreadId_0 = value;
	}

	inline static int32_t get_offset_of_ReaderLocks_1() { return static_cast<int32_t>(offsetof(LockCookie_t3719443719, ___ReaderLocks_1)); }
	inline int32_t get_ReaderLocks_1() const { return ___ReaderLocks_1; }
	inline int32_t* get_address_of_ReaderLocks_1() { return &___ReaderLocks_1; }
	inline void set_ReaderLocks_1(int32_t value)
	{
		___ReaderLocks_1 = value;
	}

	inline static int32_t get_offset_of_WriterLocks_2() { return static_cast<int32_t>(offsetof(LockCookie_t3719443719, ___WriterLocks_2)); }
	inline int32_t get_WriterLocks_2() const { return ___WriterLocks_2; }
	inline int32_t* get_address_of_WriterLocks_2() { return &___WriterLocks_2; }
	inline void set_WriterLocks_2(int32_t value)
	{
		___WriterLocks_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
