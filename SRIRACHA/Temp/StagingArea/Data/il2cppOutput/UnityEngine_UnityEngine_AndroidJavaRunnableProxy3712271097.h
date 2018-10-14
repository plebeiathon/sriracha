#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_AndroidJavaProxy2835824643.h"

// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_t377890659;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaRunnableProxy
struct  AndroidJavaRunnableProxy_t3712271097  : public AndroidJavaProxy_t2835824643
{
public:
	// UnityEngine.AndroidJavaRunnable UnityEngine.AndroidJavaRunnableProxy::mRunnable
	AndroidJavaRunnable_t377890659 * ___mRunnable_1;

public:
	inline static int32_t get_offset_of_mRunnable_1() { return static_cast<int32_t>(offsetof(AndroidJavaRunnableProxy_t3712271097, ___mRunnable_1)); }
	inline AndroidJavaRunnable_t377890659 * get_mRunnable_1() const { return ___mRunnable_1; }
	inline AndroidJavaRunnable_t377890659 ** get_address_of_mRunnable_1() { return &___mRunnable_1; }
	inline void set_mRunnable_1(AndroidJavaRunnable_t377890659 * value)
	{
		___mRunnable_1 = value;
		Il2CppCodeGenWriteBarrier(&___mRunnable_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
