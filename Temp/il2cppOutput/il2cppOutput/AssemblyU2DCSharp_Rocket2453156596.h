#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;
// Gun
struct Gun_t71968;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rocket
struct  Rocket_t2453156596  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Rocket::explosion
	GameObject_t3674682005 * ___explosion_2;
	// System.String Rocket::ignoreTag
	String_t* ___ignoreTag_3;
	// Gun Rocket::gun
	Gun_t71968 * ___gun_4;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(Rocket_t2453156596, ___explosion_2)); }
	inline GameObject_t3674682005 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t3674682005 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t3674682005 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_2, value);
	}

	inline static int32_t get_offset_of_ignoreTag_3() { return static_cast<int32_t>(offsetof(Rocket_t2453156596, ___ignoreTag_3)); }
	inline String_t* get_ignoreTag_3() const { return ___ignoreTag_3; }
	inline String_t** get_address_of_ignoreTag_3() { return &___ignoreTag_3; }
	inline void set_ignoreTag_3(String_t* value)
	{
		___ignoreTag_3 = value;
		Il2CppCodeGenWriteBarrier(&___ignoreTag_3, value);
	}

	inline static int32_t get_offset_of_gun_4() { return static_cast<int32_t>(offsetof(Rocket_t2453156596, ___gun_4)); }
	inline Gun_t71968 * get_gun_4() const { return ___gun_4; }
	inline Gun_t71968 ** get_address_of_gun_4() { return &___gun_4; }
	inline void set_gun_4(Gun_t71968 * value)
	{
		___gun_4 = value;
		Il2CppCodeGenWriteBarrier(&___gun_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
