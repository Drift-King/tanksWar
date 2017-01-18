#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// Gun
struct Gun_t71968;

#include "AssemblyU2DCSharp_PlayerControl108512028.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyAI
struct  EnemyAI_t59092368  : public PlayerControl_t108512028
{
public:
	// UnityEngine.Transform EnemyAI::player
	Transform_t1659122786 * ___player_10;
	// Gun EnemyAI::gun
	Gun_t71968 * ___gun_11;
	// System.Single EnemyAI::shootAngle
	float ___shootAngle_12;

public:
	inline static int32_t get_offset_of_player_10() { return static_cast<int32_t>(offsetof(EnemyAI_t59092368, ___player_10)); }
	inline Transform_t1659122786 * get_player_10() const { return ___player_10; }
	inline Transform_t1659122786 ** get_address_of_player_10() { return &___player_10; }
	inline void set_player_10(Transform_t1659122786 * value)
	{
		___player_10 = value;
		Il2CppCodeGenWriteBarrier(&___player_10, value);
	}

	inline static int32_t get_offset_of_gun_11() { return static_cast<int32_t>(offsetof(EnemyAI_t59092368, ___gun_11)); }
	inline Gun_t71968 * get_gun_11() const { return ___gun_11; }
	inline Gun_t71968 ** get_address_of_gun_11() { return &___gun_11; }
	inline void set_gun_11(Gun_t71968 * value)
	{
		___gun_11 = value;
		Il2CppCodeGenWriteBarrier(&___gun_11, value);
	}

	inline static int32_t get_offset_of_shootAngle_12() { return static_cast<int32_t>(offsetof(EnemyAI_t59092368, ___shootAngle_12)); }
	inline float get_shootAngle_12() const { return ___shootAngle_12; }
	inline float* get_address_of_shootAngle_12() { return &___shootAngle_12; }
	inline void set_shootAngle_12(float value)
	{
		___shootAngle_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
