#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// PlayerControl
struct PlayerControl_t108512028;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Animator
struct Animator_t2776330603;
// Gun/GunFired
struct GunFired_t458688445;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gun
struct  Gun_t71968  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody2D Gun::rocket
	Rigidbody2D_t1743771669 * ___rocket_2;
	// System.Single Gun::attackPower
	float ___attackPower_3;
	// System.Single Gun::fireTime
	float ___fireTime_4;
	// System.Boolean Gun::attackTriggered
	bool ___attackTriggered_5;
	// System.Single Gun::targetSpeed
	float ___targetSpeed_6;
	// UnityEngine.Rigidbody2D Gun::bulletInstance
	Rigidbody2D_t1743771669 * ___bulletInstance_7;
	// PlayerControl Gun::playerCtrl
	PlayerControl_t108512028 * ___playerCtrl_8;
	// UnityEngine.GameObject Gun::attackBarInstance
	GameObject_t3674682005 * ___attackBarInstance_9;
	// UnityEngine.Animator Gun::attackBarAnim
	Animator_t2776330603 * ___attackBarAnim_10;
	// Gun/GunFired Gun::gunFired
	GunFired_t458688445 * ___gunFired_11;

public:
	inline static int32_t get_offset_of_rocket_2() { return static_cast<int32_t>(offsetof(Gun_t71968, ___rocket_2)); }
	inline Rigidbody2D_t1743771669 * get_rocket_2() const { return ___rocket_2; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rocket_2() { return &___rocket_2; }
	inline void set_rocket_2(Rigidbody2D_t1743771669 * value)
	{
		___rocket_2 = value;
		Il2CppCodeGenWriteBarrier(&___rocket_2, value);
	}

	inline static int32_t get_offset_of_attackPower_3() { return static_cast<int32_t>(offsetof(Gun_t71968, ___attackPower_3)); }
	inline float get_attackPower_3() const { return ___attackPower_3; }
	inline float* get_address_of_attackPower_3() { return &___attackPower_3; }
	inline void set_attackPower_3(float value)
	{
		___attackPower_3 = value;
	}

	inline static int32_t get_offset_of_fireTime_4() { return static_cast<int32_t>(offsetof(Gun_t71968, ___fireTime_4)); }
	inline float get_fireTime_4() const { return ___fireTime_4; }
	inline float* get_address_of_fireTime_4() { return &___fireTime_4; }
	inline void set_fireTime_4(float value)
	{
		___fireTime_4 = value;
	}

	inline static int32_t get_offset_of_attackTriggered_5() { return static_cast<int32_t>(offsetof(Gun_t71968, ___attackTriggered_5)); }
	inline bool get_attackTriggered_5() const { return ___attackTriggered_5; }
	inline bool* get_address_of_attackTriggered_5() { return &___attackTriggered_5; }
	inline void set_attackTriggered_5(bool value)
	{
		___attackTriggered_5 = value;
	}

	inline static int32_t get_offset_of_targetSpeed_6() { return static_cast<int32_t>(offsetof(Gun_t71968, ___targetSpeed_6)); }
	inline float get_targetSpeed_6() const { return ___targetSpeed_6; }
	inline float* get_address_of_targetSpeed_6() { return &___targetSpeed_6; }
	inline void set_targetSpeed_6(float value)
	{
		___targetSpeed_6 = value;
	}

	inline static int32_t get_offset_of_bulletInstance_7() { return static_cast<int32_t>(offsetof(Gun_t71968, ___bulletInstance_7)); }
	inline Rigidbody2D_t1743771669 * get_bulletInstance_7() const { return ___bulletInstance_7; }
	inline Rigidbody2D_t1743771669 ** get_address_of_bulletInstance_7() { return &___bulletInstance_7; }
	inline void set_bulletInstance_7(Rigidbody2D_t1743771669 * value)
	{
		___bulletInstance_7 = value;
		Il2CppCodeGenWriteBarrier(&___bulletInstance_7, value);
	}

	inline static int32_t get_offset_of_playerCtrl_8() { return static_cast<int32_t>(offsetof(Gun_t71968, ___playerCtrl_8)); }
	inline PlayerControl_t108512028 * get_playerCtrl_8() const { return ___playerCtrl_8; }
	inline PlayerControl_t108512028 ** get_address_of_playerCtrl_8() { return &___playerCtrl_8; }
	inline void set_playerCtrl_8(PlayerControl_t108512028 * value)
	{
		___playerCtrl_8 = value;
		Il2CppCodeGenWriteBarrier(&___playerCtrl_8, value);
	}

	inline static int32_t get_offset_of_attackBarInstance_9() { return static_cast<int32_t>(offsetof(Gun_t71968, ___attackBarInstance_9)); }
	inline GameObject_t3674682005 * get_attackBarInstance_9() const { return ___attackBarInstance_9; }
	inline GameObject_t3674682005 ** get_address_of_attackBarInstance_9() { return &___attackBarInstance_9; }
	inline void set_attackBarInstance_9(GameObject_t3674682005 * value)
	{
		___attackBarInstance_9 = value;
		Il2CppCodeGenWriteBarrier(&___attackBarInstance_9, value);
	}

	inline static int32_t get_offset_of_attackBarAnim_10() { return static_cast<int32_t>(offsetof(Gun_t71968, ___attackBarAnim_10)); }
	inline Animator_t2776330603 * get_attackBarAnim_10() const { return ___attackBarAnim_10; }
	inline Animator_t2776330603 ** get_address_of_attackBarAnim_10() { return &___attackBarAnim_10; }
	inline void set_attackBarAnim_10(Animator_t2776330603 * value)
	{
		___attackBarAnim_10 = value;
		Il2CppCodeGenWriteBarrier(&___attackBarAnim_10, value);
	}

	inline static int32_t get_offset_of_gunFired_11() { return static_cast<int32_t>(offsetof(Gun_t71968, ___gunFired_11)); }
	inline GunFired_t458688445 * get_gunFired_11() const { return ___gunFired_11; }
	inline GunFired_t458688445 ** get_address_of_gunFired_11() { return &___gunFired_11; }
	inline void set_gunFired_11(GunFired_t458688445 * value)
	{
		___gunFired_11 = value;
		Il2CppCodeGenWriteBarrier(&___gunFired_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
