#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerControl
struct  PlayerControl_t108512028  : public MonoBehaviour_t667441552
{
public:
	// System.Single PlayerControl::velocity
	float ___velocity_2;
	// System.Boolean PlayerControl::hasTurn
	bool ___hasTurn_3;
	// System.Single PlayerControl::hSpeed
	float ___hSpeed_4;
	// UnityEngine.Animator PlayerControl::anim
	Animator_t2776330603 * ___anim_5;
	// UnityEngine.Transform PlayerControl::pivot
	Transform_t1659122786 * ___pivot_6;
	// UnityEngine.Rigidbody2D PlayerControl::rigidBody
	Rigidbody2D_t1743771669 * ___rigidBody_7;
	// System.Single PlayerControl::tilt
	float ___tilt_8;
	// UnityEngine.GameObject PlayerControl::turnIndicator
	GameObject_t3674682005 * ___turnIndicator_9;

public:
	inline static int32_t get_offset_of_velocity_2() { return static_cast<int32_t>(offsetof(PlayerControl_t108512028, ___velocity_2)); }
	inline float get_velocity_2() const { return ___velocity_2; }
	inline float* get_address_of_velocity_2() { return &___velocity_2; }
	inline void set_velocity_2(float value)
	{
		___velocity_2 = value;
	}

	inline static int32_t get_offset_of_hasTurn_3() { return static_cast<int32_t>(offsetof(PlayerControl_t108512028, ___hasTurn_3)); }
	inline bool get_hasTurn_3() const { return ___hasTurn_3; }
	inline bool* get_address_of_hasTurn_3() { return &___hasTurn_3; }
	inline void set_hasTurn_3(bool value)
	{
		___hasTurn_3 = value;
	}

	inline static int32_t get_offset_of_hSpeed_4() { return static_cast<int32_t>(offsetof(PlayerControl_t108512028, ___hSpeed_4)); }
	inline float get_hSpeed_4() const { return ___hSpeed_4; }
	inline float* get_address_of_hSpeed_4() { return &___hSpeed_4; }
	inline void set_hSpeed_4(float value)
	{
		___hSpeed_4 = value;
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(PlayerControl_t108512028, ___anim_5)); }
	inline Animator_t2776330603 * get_anim_5() const { return ___anim_5; }
	inline Animator_t2776330603 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t2776330603 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier(&___anim_5, value);
	}

	inline static int32_t get_offset_of_pivot_6() { return static_cast<int32_t>(offsetof(PlayerControl_t108512028, ___pivot_6)); }
	inline Transform_t1659122786 * get_pivot_6() const { return ___pivot_6; }
	inline Transform_t1659122786 ** get_address_of_pivot_6() { return &___pivot_6; }
	inline void set_pivot_6(Transform_t1659122786 * value)
	{
		___pivot_6 = value;
		Il2CppCodeGenWriteBarrier(&___pivot_6, value);
	}

	inline static int32_t get_offset_of_rigidBody_7() { return static_cast<int32_t>(offsetof(PlayerControl_t108512028, ___rigidBody_7)); }
	inline Rigidbody2D_t1743771669 * get_rigidBody_7() const { return ___rigidBody_7; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rigidBody_7() { return &___rigidBody_7; }
	inline void set_rigidBody_7(Rigidbody2D_t1743771669 * value)
	{
		___rigidBody_7 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody_7, value);
	}

	inline static int32_t get_offset_of_tilt_8() { return static_cast<int32_t>(offsetof(PlayerControl_t108512028, ___tilt_8)); }
	inline float get_tilt_8() const { return ___tilt_8; }
	inline float* get_address_of_tilt_8() { return &___tilt_8; }
	inline void set_tilt_8(float value)
	{
		___tilt_8 = value;
	}

	inline static int32_t get_offset_of_turnIndicator_9() { return static_cast<int32_t>(offsetof(PlayerControl_t108512028, ___turnIndicator_9)); }
	inline GameObject_t3674682005 * get_turnIndicator_9() const { return ___turnIndicator_9; }
	inline GameObject_t3674682005 ** get_address_of_turnIndicator_9() { return &___turnIndicator_9; }
	inline void set_turnIndicator_9(GameObject_t3674682005 * value)
	{
		___turnIndicator_9 = value;
		Il2CppCodeGenWriteBarrier(&___turnIndicator_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
