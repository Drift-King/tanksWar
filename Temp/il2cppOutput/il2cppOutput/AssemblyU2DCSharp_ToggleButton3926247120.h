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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ToggleButton_ToggleOptions4206641243.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToggleButton
struct  ToggleButton_t3926247120  : public MonoBehaviour_t1158329972
{
public:
	// ToggleButton/ToggleOptions ToggleButton::toggle
	int32_t ___toggle_2;
	// UnityEngine.Animator ToggleButton::toggleAnim
	Animator_t69676727 * ___toggleAnim_3;

public:
	inline static int32_t get_offset_of_toggle_2() { return static_cast<int32_t>(offsetof(ToggleButton_t3926247120, ___toggle_2)); }
	inline int32_t get_toggle_2() const { return ___toggle_2; }
	inline int32_t* get_address_of_toggle_2() { return &___toggle_2; }
	inline void set_toggle_2(int32_t value)
	{
		___toggle_2 = value;
	}

	inline static int32_t get_offset_of_toggleAnim_3() { return static_cast<int32_t>(offsetof(ToggleButton_t3926247120, ___toggleAnim_3)); }
	inline Animator_t69676727 * get_toggleAnim_3() const { return ___toggleAnim_3; }
	inline Animator_t69676727 ** get_address_of_toggleAnim_3() { return &___toggleAnim_3; }
	inline void set_toggleAnim_3(Animator_t69676727 * value)
	{
		___toggleAnim_3 = value;
		Il2CppCodeGenWriteBarrier(&___toggleAnim_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
