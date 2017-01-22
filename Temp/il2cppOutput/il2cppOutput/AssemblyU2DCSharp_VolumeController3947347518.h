#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VolumeController
struct VolumeController_t3947347518;
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
	float ___pos_3;
	// System.Single VolumeController::scale
	float ___scale_4;
	// UnityEngine.Transform VolumeController::volIndicator
	Transform_t3275118058 * ___volIndicator_5;

public:
	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(VolumeController_t3947347518, ___pos_3)); }
	inline float get_pos_3() const { return ___pos_3; }
	inline float* get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(float value)
	{
		___pos_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(VolumeController_t3947347518, ___scale_4)); }
	inline float get_scale_4() const { return ___scale_4; }
	inline float* get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(float value)
	{
		___scale_4 = value;
	}

	inline static int32_t get_offset_of_volIndicator_5() { return static_cast<int32_t>(offsetof(VolumeController_t3947347518, ___volIndicator_5)); }
	inline Transform_t3275118058 * get_volIndicator_5() const { return ___volIndicator_5; }
	inline Transform_t3275118058 ** get_address_of_volIndicator_5() { return &___volIndicator_5; }
	inline void set_volIndicator_5(Transform_t3275118058 * value)
	{
		___volIndicator_5 = value;
		Il2CppCodeGenWriteBarrier(&___volIndicator_5, value);
	}
};

struct VolumeController_t3947347518_StaticFields
{
public:
	// VolumeController VolumeController::_instance
	VolumeController_t3947347518 * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(VolumeController_t3947347518_StaticFields, ____instance_2)); }
	inline VolumeController_t3947347518 * get__instance_2() const { return ____instance_2; }
	inline VolumeController_t3947347518 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(VolumeController_t3947347518 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
