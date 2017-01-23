#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MissionSelector
struct  MissionSelector_t1631497811  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MissionSelector::missionOneSelector
	GameObject_t1756533147 * ___missionOneSelector_2;
	// UnityEngine.GameObject MissionSelector::missionTwoSelector
	GameObject_t1756533147 * ___missionTwoSelector_3;

public:
	inline static int32_t get_offset_of_missionOneSelector_2() { return static_cast<int32_t>(offsetof(MissionSelector_t1631497811, ___missionOneSelector_2)); }
	inline GameObject_t1756533147 * get_missionOneSelector_2() const { return ___missionOneSelector_2; }
	inline GameObject_t1756533147 ** get_address_of_missionOneSelector_2() { return &___missionOneSelector_2; }
	inline void set_missionOneSelector_2(GameObject_t1756533147 * value)
	{
		___missionOneSelector_2 = value;
		Il2CppCodeGenWriteBarrier(&___missionOneSelector_2, value);
	}

	inline static int32_t get_offset_of_missionTwoSelector_3() { return static_cast<int32_t>(offsetof(MissionSelector_t1631497811, ___missionTwoSelector_3)); }
	inline GameObject_t1756533147 * get_missionTwoSelector_3() const { return ___missionTwoSelector_3; }
	inline GameObject_t1756533147 ** get_address_of_missionTwoSelector_3() { return &___missionTwoSelector_3; }
	inline void set_missionTwoSelector_3(GameObject_t1756533147 * value)
	{
		___missionTwoSelector_3 = value;
		Il2CppCodeGenWriteBarrier(&___missionTwoSelector_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
