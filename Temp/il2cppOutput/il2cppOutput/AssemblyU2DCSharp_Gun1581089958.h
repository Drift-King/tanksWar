#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// Gun/GunFired
struct GunFired_t3156990485;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// PlayerControl
struct PlayerControl_t792727354;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gun
struct  Gun_t1581089958  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D Gun::rocket
	Rigidbody2D_t502193897 * ___rocket_2;
	// System.Single Gun::attackPower
	float ___attackPower_3;
	// System.Single Gun::fireTime
	float ___fireTime_4;
	// Gun/GunFired Gun::gunFired
	GunFired_t3156990485 * ___gunFired_5;
	// System.Boolean Gun::attackTriggered
	bool ___attackTriggered_6;
	// UnityEngine.AudioClip Gun::fireSound
	AudioClip_t1932558630 * ___fireSound_7;
	// System.Single Gun::targetSpeed
	float ___targetSpeed_8;
	// UnityEngine.Rigidbody2D Gun::bulletInstance
	Rigidbody2D_t502193897 * ___bulletInstance_9;
	// PlayerControl Gun::playerCtrl
	PlayerControl_t792727354 * ___playerCtrl_10;
	// UnityEngine.GameObject Gun::attackBarInstance
	GameObject_t1756533147 * ___attackBarInstance_11;
	// UnityEngine.Animator Gun::attackBarAnim
	Animator_t69676727 * ___attackBarAnim_12;
	// UnityEngine.AudioSource Gun::audioSource
	AudioSource_t1135106623 * ___audioSource_13;

public:
	inline static int32_t get_offset_of_rocket_2() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___rocket_2)); }
	inline Rigidbody2D_t502193897 * get_rocket_2() const { return ___rocket_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_rocket_2() { return &___rocket_2; }
	inline void set_rocket_2(Rigidbody2D_t502193897 * value)
	{
		___rocket_2 = value;
		Il2CppCodeGenWriteBarrier(&___rocket_2, value);
	}

	inline static int32_t get_offset_of_attackPower_3() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___attackPower_3)); }
	inline float get_attackPower_3() const { return ___attackPower_3; }
	inline float* get_address_of_attackPower_3() { return &___attackPower_3; }
	inline void set_attackPower_3(float value)
	{
		___attackPower_3 = value;
	}

	inline static int32_t get_offset_of_fireTime_4() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___fireTime_4)); }
	inline float get_fireTime_4() const { return ___fireTime_4; }
	inline float* get_address_of_fireTime_4() { return &___fireTime_4; }
	inline void set_fireTime_4(float value)
	{
		___fireTime_4 = value;
	}

	inline static int32_t get_offset_of_gunFired_5() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___gunFired_5)); }
	inline GunFired_t3156990485 * get_gunFired_5() const { return ___gunFired_5; }
	inline GunFired_t3156990485 ** get_address_of_gunFired_5() { return &___gunFired_5; }
	inline void set_gunFired_5(GunFired_t3156990485 * value)
	{
		___gunFired_5 = value;
		Il2CppCodeGenWriteBarrier(&___gunFired_5, value);
	}

	inline static int32_t get_offset_of_attackTriggered_6() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___attackTriggered_6)); }
	inline bool get_attackTriggered_6() const { return ___attackTriggered_6; }
	inline bool* get_address_of_attackTriggered_6() { return &___attackTriggered_6; }
	inline void set_attackTriggered_6(bool value)
	{
		___attackTriggered_6 = value;
	}

	inline static int32_t get_offset_of_fireSound_7() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___fireSound_7)); }
	inline AudioClip_t1932558630 * get_fireSound_7() const { return ___fireSound_7; }
	inline AudioClip_t1932558630 ** get_address_of_fireSound_7() { return &___fireSound_7; }
	inline void set_fireSound_7(AudioClip_t1932558630 * value)
	{
		___fireSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___fireSound_7, value);
	}

	inline static int32_t get_offset_of_targetSpeed_8() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___targetSpeed_8)); }
	inline float get_targetSpeed_8() const { return ___targetSpeed_8; }
	inline float* get_address_of_targetSpeed_8() { return &___targetSpeed_8; }
	inline void set_targetSpeed_8(float value)
	{
		___targetSpeed_8 = value;
	}

	inline static int32_t get_offset_of_bulletInstance_9() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___bulletInstance_9)); }
	inline Rigidbody2D_t502193897 * get_bulletInstance_9() const { return ___bulletInstance_9; }
	inline Rigidbody2D_t502193897 ** get_address_of_bulletInstance_9() { return &___bulletInstance_9; }
	inline void set_bulletInstance_9(Rigidbody2D_t502193897 * value)
	{
		___bulletInstance_9 = value;
		Il2CppCodeGenWriteBarrier(&___bulletInstance_9, value);
	}

	inline static int32_t get_offset_of_playerCtrl_10() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___playerCtrl_10)); }
	inline PlayerControl_t792727354 * get_playerCtrl_10() const { return ___playerCtrl_10; }
	inline PlayerControl_t792727354 ** get_address_of_playerCtrl_10() { return &___playerCtrl_10; }
	inline void set_playerCtrl_10(PlayerControl_t792727354 * value)
	{
		___playerCtrl_10 = value;
		Il2CppCodeGenWriteBarrier(&___playerCtrl_10, value);
	}

	inline static int32_t get_offset_of_attackBarInstance_11() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___attackBarInstance_11)); }
	inline GameObject_t1756533147 * get_attackBarInstance_11() const { return ___attackBarInstance_11; }
	inline GameObject_t1756533147 ** get_address_of_attackBarInstance_11() { return &___attackBarInstance_11; }
	inline void set_attackBarInstance_11(GameObject_t1756533147 * value)
	{
		___attackBarInstance_11 = value;
		Il2CppCodeGenWriteBarrier(&___attackBarInstance_11, value);
	}

	inline static int32_t get_offset_of_attackBarAnim_12() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___attackBarAnim_12)); }
	inline Animator_t69676727 * get_attackBarAnim_12() const { return ___attackBarAnim_12; }
	inline Animator_t69676727 ** get_address_of_attackBarAnim_12() { return &___attackBarAnim_12; }
	inline void set_attackBarAnim_12(Animator_t69676727 * value)
	{
		___attackBarAnim_12 = value;
		Il2CppCodeGenWriteBarrier(&___attackBarAnim_12, value);
	}

	inline static int32_t get_offset_of_audioSource_13() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___audioSource_13)); }
	inline AudioSource_t1135106623 * get_audioSource_13() const { return ___audioSource_13; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_13() { return &___audioSource_13; }
	inline void set_audioSource_13(AudioSource_t1135106623 * value)
	{
		___audioSource_13 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
