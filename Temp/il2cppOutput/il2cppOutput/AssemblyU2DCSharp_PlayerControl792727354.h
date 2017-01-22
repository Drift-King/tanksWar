#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerControl
struct  PlayerControl_t792727354  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerControl::velocity
	float ___velocity_2;
	// System.Boolean PlayerControl::hasTurn
	bool ___hasTurn_3;
	// System.Single PlayerControl::hSpeed
	float ___hSpeed_4;
	// UnityEngine.Animator PlayerControl::anim
	Animator_t69676727 * ___anim_5;
	// UnityEngine.Transform PlayerControl::pivot
	Transform_t3275118058 * ___pivot_6;
	// UnityEngine.Rigidbody2D PlayerControl::rigidBody
	Rigidbody2D_t502193897 * ___rigidBody_7;
	// System.Single PlayerControl::tilt
	float ___tilt_8;
	// System.Boolean PlayerControl::_showBox
	bool ____showBox_9;
	// UnityEngine.GameObject PlayerControl::turnIndicator
	GameObject_t1756533147 * ___turnIndicator_10;
	// UnityEngine.Renderer PlayerControl::rend
	Renderer_t257310565 * ___rend_11;

public:
	inline static int32_t get_offset_of_velocity_2() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___velocity_2)); }
	inline float get_velocity_2() const { return ___velocity_2; }
	inline float* get_address_of_velocity_2() { return &___velocity_2; }
	inline void set_velocity_2(float value)
	{
		___velocity_2 = value;
	}

	inline static int32_t get_offset_of_hasTurn_3() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___hasTurn_3)); }
	inline bool get_hasTurn_3() const { return ___hasTurn_3; }
	inline bool* get_address_of_hasTurn_3() { return &___hasTurn_3; }
	inline void set_hasTurn_3(bool value)
	{
		___hasTurn_3 = value;
	}

	inline static int32_t get_offset_of_hSpeed_4() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___hSpeed_4)); }
	inline float get_hSpeed_4() const { return ___hSpeed_4; }
	inline float* get_address_of_hSpeed_4() { return &___hSpeed_4; }
	inline void set_hSpeed_4(float value)
	{
		___hSpeed_4 = value;
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___anim_5)); }
	inline Animator_t69676727 * get_anim_5() const { return ___anim_5; }
	inline Animator_t69676727 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t69676727 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier(&___anim_5, value);
	}

	inline static int32_t get_offset_of_pivot_6() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___pivot_6)); }
	inline Transform_t3275118058 * get_pivot_6() const { return ___pivot_6; }
	inline Transform_t3275118058 ** get_address_of_pivot_6() { return &___pivot_6; }
	inline void set_pivot_6(Transform_t3275118058 * value)
	{
		___pivot_6 = value;
		Il2CppCodeGenWriteBarrier(&___pivot_6, value);
	}

	inline static int32_t get_offset_of_rigidBody_7() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___rigidBody_7)); }
	inline Rigidbody2D_t502193897 * get_rigidBody_7() const { return ___rigidBody_7; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigidBody_7() { return &___rigidBody_7; }
	inline void set_rigidBody_7(Rigidbody2D_t502193897 * value)
	{
		___rigidBody_7 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody_7, value);
	}

	inline static int32_t get_offset_of_tilt_8() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___tilt_8)); }
	inline float get_tilt_8() const { return ___tilt_8; }
	inline float* get_address_of_tilt_8() { return &___tilt_8; }
	inline void set_tilt_8(float value)
	{
		___tilt_8 = value;
	}

	inline static int32_t get_offset_of__showBox_9() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ____showBox_9)); }
	inline bool get__showBox_9() const { return ____showBox_9; }
	inline bool* get_address_of__showBox_9() { return &____showBox_9; }
	inline void set__showBox_9(bool value)
	{
		____showBox_9 = value;
	}

	inline static int32_t get_offset_of_turnIndicator_10() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___turnIndicator_10)); }
	inline GameObject_t1756533147 * get_turnIndicator_10() const { return ___turnIndicator_10; }
	inline GameObject_t1756533147 ** get_address_of_turnIndicator_10() { return &___turnIndicator_10; }
	inline void set_turnIndicator_10(GameObject_t1756533147 * value)
	{
		___turnIndicator_10 = value;
		Il2CppCodeGenWriteBarrier(&___turnIndicator_10, value);
	}

	inline static int32_t get_offset_of_rend_11() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___rend_11)); }
	inline Renderer_t257310565 * get_rend_11() const { return ___rend_11; }
	inline Renderer_t257310565 ** get_address_of_rend_11() { return &___rend_11; }
	inline void set_rend_11(Renderer_t257310565 * value)
	{
		___rend_11 = value;
		Il2CppCodeGenWriteBarrier(&___rend_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
