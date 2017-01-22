#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerHealth/PlayerDied
struct PlayerDied_t2467274817;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// PlayerControl
struct PlayerControl_t792727354;
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerHealth
struct  PlayerHealth_t2894595013  : public MonoBehaviour_t1158329972
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
	// PlayerHealth/PlayerDied PlayerHealth::playerDied
	PlayerDied_t2467274817 * ___playerDied_6;
	// UnityEngine.SpriteRenderer PlayerHealth::healthBar
	SpriteRenderer_t1209076198 * ___healthBar_7;
	// UnityEngine.Vector3 PlayerHealth::healthScale
	Vector3_t2243707580  ___healthScale_8;
	// PlayerControl PlayerHealth::playerControl
	PlayerControl_t792727354 * ___playerControl_9;
	// UnityEngine.Animator PlayerHealth::anim
	Animator_t69676727 * ___anim_10;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___health_2)); }
	inline float get_health_2() const { return ___health_2; }
	inline float* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(float value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_hurtForce_3() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___hurtForce_3)); }
	inline float get_hurtForce_3() const { return ___hurtForce_3; }
	inline float* get_address_of_hurtForce_3() { return &___hurtForce_3; }
	inline void set_hurtForce_3(float value)
	{
		___hurtForce_3 = value;
	}

	inline static int32_t get_offset_of_damageAmount_4() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___damageAmount_4)); }
	inline float get_damageAmount_4() const { return ___damageAmount_4; }
	inline float* get_address_of_damageAmount_4() { return &___damageAmount_4; }
	inline void set_damageAmount_4(float value)
	{
		___damageAmount_4 = value;
	}

	inline static int32_t get_offset_of_isAlive_5() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___isAlive_5)); }
	inline bool get_isAlive_5() const { return ___isAlive_5; }
	inline bool* get_address_of_isAlive_5() { return &___isAlive_5; }
	inline void set_isAlive_5(bool value)
	{
		___isAlive_5 = value;
	}

	inline static int32_t get_offset_of_playerDied_6() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___playerDied_6)); }
	inline PlayerDied_t2467274817 * get_playerDied_6() const { return ___playerDied_6; }
	inline PlayerDied_t2467274817 ** get_address_of_playerDied_6() { return &___playerDied_6; }
	inline void set_playerDied_6(PlayerDied_t2467274817 * value)
	{
		___playerDied_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerDied_6, value);
	}

	inline static int32_t get_offset_of_healthBar_7() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___healthBar_7)); }
	inline SpriteRenderer_t1209076198 * get_healthBar_7() const { return ___healthBar_7; }
	inline SpriteRenderer_t1209076198 ** get_address_of_healthBar_7() { return &___healthBar_7; }
	inline void set_healthBar_7(SpriteRenderer_t1209076198 * value)
	{
		___healthBar_7 = value;
		Il2CppCodeGenWriteBarrier(&___healthBar_7, value);
	}

	inline static int32_t get_offset_of_healthScale_8() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___healthScale_8)); }
	inline Vector3_t2243707580  get_healthScale_8() const { return ___healthScale_8; }
	inline Vector3_t2243707580 * get_address_of_healthScale_8() { return &___healthScale_8; }
	inline void set_healthScale_8(Vector3_t2243707580  value)
	{
		___healthScale_8 = value;
	}

	inline static int32_t get_offset_of_playerControl_9() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___playerControl_9)); }
	inline PlayerControl_t792727354 * get_playerControl_9() const { return ___playerControl_9; }
	inline PlayerControl_t792727354 ** get_address_of_playerControl_9() { return &___playerControl_9; }
	inline void set_playerControl_9(PlayerControl_t792727354 * value)
	{
		___playerControl_9 = value;
		Il2CppCodeGenWriteBarrier(&___playerControl_9, value);
	}

	inline static int32_t get_offset_of_anim_10() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___anim_10)); }
	inline Animator_t69676727 * get_anim_10() const { return ___anim_10; }
	inline Animator_t69676727 ** get_address_of_anim_10() { return &___anim_10; }
	inline void set_anim_10(Animator_t69676727 * value)
	{
		___anim_10 = value;
		Il2CppCodeGenWriteBarrier(&___anim_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
