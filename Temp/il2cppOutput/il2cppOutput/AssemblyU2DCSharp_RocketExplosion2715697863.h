#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RocketExplosion
struct  RocketExplosion_t2715697863  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource RocketExplosion::audioSource
	AudioSource_t1135106623 * ___audioSource_2;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(RocketExplosion_t2715697863, ___audioSource_2)); }
	inline AudioSource_t1135106623 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t1135106623 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
