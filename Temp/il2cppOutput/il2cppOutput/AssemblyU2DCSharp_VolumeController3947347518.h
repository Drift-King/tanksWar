#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VolumeController
struct  VolumeController_t3947347518  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VolumeController::pos
	float ___pos_2;
	// System.Single VolumeController::scale
	float ___scale_3;
	// UnityEngine.Transform VolumeController::volIndicator
	Transform_t3275118058 * ___volIndicator_4;

public:
	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(VolumeController_t3947347518, ___pos_2)); }
	inline float get_pos_2() const { return ___pos_2; }
	inline float* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(float value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_scale_3() { return static_cast<int32_t>(offsetof(VolumeController_t3947347518, ___scale_3)); }
	inline float get_scale_3() const { return ___scale_3; }
	inline float* get_address_of_scale_3() { return &___scale_3; }
	inline void set_scale_3(float value)
	{
		___scale_3 = value;
	}

	inline static int32_t get_offset_of_volIndicator_4() { return static_cast<int32_t>(offsetof(VolumeController_t3947347518, ___volIndicator_4)); }
	inline Transform_t3275118058 * get_volIndicator_4() const { return ___volIndicator_4; }
	inline Transform_t3275118058 ** get_address_of_volIndicator_4() { return &___volIndicator_4; }
	inline void set_volIndicator_4(Transform_t3275118058 * value)
	{
		___volIndicator_4 = value;
		Il2CppCodeGenWriteBarrier(&___volIndicator_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
