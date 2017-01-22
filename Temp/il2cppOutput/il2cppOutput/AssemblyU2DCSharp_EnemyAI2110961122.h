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
// Gun
struct Gun_t1581089958;

#include "AssemblyU2DCSharp_PlayerControl792727354.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyAI
struct  EnemyAI_t2110961122  : public PlayerControl_t792727354
{
public:
	// UnityEngine.Transform EnemyAI::player
	Transform_t3275118058 * ___player_11;
	// Gun EnemyAI::gun
	Gun_t1581089958 * ___gun_12;
	// System.Single EnemyAI::shootAngle
	float ___shootAngle_13;

public:
	inline static int32_t get_offset_of_player_11() { return static_cast<int32_t>(offsetof(EnemyAI_t2110961122, ___player_11)); }
	inline Transform_t3275118058 * get_player_11() const { return ___player_11; }
	inline Transform_t3275118058 ** get_address_of_player_11() { return &___player_11; }
	inline void set_player_11(Transform_t3275118058 * value)
	{
		___player_11 = value;
		Il2CppCodeGenWriteBarrier(&___player_11, value);
	}

	inline static int32_t get_offset_of_gun_12() { return static_cast<int32_t>(offsetof(EnemyAI_t2110961122, ___gun_12)); }
	inline Gun_t1581089958 * get_gun_12() const { return ___gun_12; }
	inline Gun_t1581089958 ** get_address_of_gun_12() { return &___gun_12; }
	inline void set_gun_12(Gun_t1581089958 * value)
	{
		___gun_12 = value;
		Il2CppCodeGenWriteBarrier(&___gun_12, value);
	}

	inline static int32_t get_offset_of_shootAngle_13() { return static_cast<int32_t>(offsetof(EnemyAI_t2110961122, ___shootAngle_13)); }
	inline float get_shootAngle_13() const { return ___shootAngle_13; }
	inline float* get_address_of_shootAngle_13() { return &___shootAngle_13; }
	inline void set_shootAngle_13(float value)
	{
		___shootAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
