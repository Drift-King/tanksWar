#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;
// PlayerControl
struct PlayerControl_t108512028;
// UnityEngine.Animator
struct Animator_t2776330603;
// PlayerHealth/PlayerDied
struct PlayerDied_t1607603991;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerHealth
struct  PlayerHealth_t3877793981  : public MonoBehaviour_t667441552
{
public:
	// System.Single PlayerHealth::health
	float ___health_2;
	// System.Single PlayerHealth::hurtForce
	float ___hurtForce_3;
	// System.Single PlayerHealth::damageAmount
	float ___damageAmount_4;
	// System.Boolean PlayerHealth::isAlive
	bool ___isAlive_5;
	// UnityEngine.SpriteRenderer PlayerHealth::healthBar
	SpriteRenderer_t2548470764 * ___healthBar_6;
	// UnityEngine.Vector3 PlayerHealth::healthScale
	Vector3_t4282066566  ___healthScale_7;
	// PlayerControl PlayerHealth::playerControl
	PlayerControl_t108512028 * ___playerControl_8;
	// UnityEngine.Animator PlayerHealth::anim
	Animator_t2776330603 * ___anim_9;
	// PlayerHealth/PlayerDied PlayerHealth::playerDied
	PlayerDied_t1607603991 * ___playerDied_10;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___health_2)); }
	inline float get_health_2() const { return ___health_2; }
	inline float* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(float value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_hurtForce_3() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___hurtForce_3)); }
	inline float get_hurtForce_3() const { return ___hurtForce_3; }
	inline float* get_address_of_hurtForce_3() { return &___hurtForce_3; }
	inline void set_hurtForce_3(float value)
	{
		___hurtForce_3 = value;
	}

	inline static int32_t get_offset_of_damageAmount_4() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___damageAmount_4)); }
	inline float get_damageAmount_4() const { return ___damageAmount_4; }
	inline float* get_address_of_damageAmount_4() { return &___damageAmount_4; }
	inline void set_damageAmount_4(float value)
	{
		___damageAmount_4 = value;
	}

	inline static int32_t get_offset_of_isAlive_5() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___isAlive_5)); }
	inline bool get_isAlive_5() const { return ___isAlive_5; }
	inline bool* get_address_of_isAlive_5() { return &___isAlive_5; }
	inline void set_isAlive_5(bool value)
	{
		___isAlive_5 = value;
	}

	inline static int32_t get_offset_of_healthBar_6() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___healthBar_6)); }
	inline SpriteRenderer_t2548470764 * get_healthBar_6() const { return ___healthBar_6; }
	inline SpriteRenderer_t2548470764 ** get_address_of_healthBar_6() { return &___healthBar_6; }
	inline void set_healthBar_6(SpriteRenderer_t2548470764 * value)
	{
		___healthBar_6 = value;
		Il2CppCodeGenWriteBarrier(&___healthBar_6, value);
	}

	inline static int32_t get_offset_of_healthScale_7() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___healthScale_7)); }
	inline Vector3_t4282066566  get_healthScale_7() const { return ___healthScale_7; }
	inline Vector3_t4282066566 * get_address_of_healthScale_7() { return &___healthScale_7; }
	inline void set_healthScale_7(Vector3_t4282066566  value)
	{
		___healthScale_7 = value;
	}

	inline static int32_t get_offset_of_playerControl_8() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___playerControl_8)); }
	inline PlayerControl_t108512028 * get_playerControl_8() const { return ___playerControl_8; }
	inline PlayerControl_t108512028 ** get_address_of_playerControl_8() { return &___playerControl_8; }
	inline void set_playerControl_8(PlayerControl_t108512028 * value)
	{
		___playerControl_8 = value;
		Il2CppCodeGenWriteBarrier(&___playerControl_8, value);
	}

	inline static int32_t get_offset_of_anim_9() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___anim_9)); }
	inline Animator_t2776330603 * get_anim_9() const { return ___anim_9; }
	inline Animator_t2776330603 ** get_address_of_anim_9() { return &___anim_9; }
	inline void set_anim_9(Animator_t2776330603 * value)
	{
		___anim_9 = value;
		Il2CppCodeGenWriteBarrier(&___anim_9, value);
	}

	inline static int32_t get_offset_of_playerDied_10() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___playerDied_10)); }
	inline PlayerDied_t1607603991 * get_playerDied_10() const { return ___playerDied_10; }
	inline PlayerDied_t1607603991 ** get_address_of_playerDied_10() { return &___playerDied_10; }
	inline void set_playerDied_10(PlayerDied_t1607603991 * value)
	{
		___playerDied_10 = value;
		Il2CppCodeGenWriteBarrier(&___playerDied_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
