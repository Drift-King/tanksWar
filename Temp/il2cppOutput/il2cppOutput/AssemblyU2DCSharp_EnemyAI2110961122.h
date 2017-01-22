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
	Transform_t3275118058 * ___player_12;
	// Gun EnemyAI::gun
	Gun_t1581089958 * ___gun_13;
	// System.Single EnemyAI::shootAngle
	float ___shootAngle_14;

public:
	inline static int32_t get_offset_of_player_12() { return static_cast<int32_t>(offsetof(EnemyAI_t2110961122, ___player_12)); }
	inline Transform_t3275118058 * get_player_12() const { return ___player_12; }
	inline Transform_t3275118058 ** get_address_of_player_12() { return &___player_12; }
	inline void set_player_12(Transform_t3275118058 * value)
	{
		___player_12 = value;
		Il2CppCodeGenWriteBarrier(&___player_12, value);
	}

	inline static int32_t get_offset_of_gun_13() { return static_cast<int32_t>(offsetof(EnemyAI_t2110961122, ___gun_13)); }
	inline Gun_t1581089958 * get_gun_13() const { return ___gun_13; }
	inline Gun_t1581089958 ** get_address_of_gun_13() { return &___gun_13; }
	inline void set_gun_13(Gun_t1581089958 * value)
	{
		___gun_13 = value;
		Il2CppCodeGenWriteBarrier(&___gun_13, value);
	}

	inline static int32_t get_offset_of_shootAngle_14() { return static_cast<int32_t>(offsetof(EnemyAI_t2110961122, ___shootAngle_14)); }
	inline float get_shootAngle_14() const { return ___shootAngle_14; }
	inline float* get_address_of_shootAngle_14() { return &___shootAngle_14; }
	inline void set_shootAngle_14(float value)
	{
		___shootAngle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
