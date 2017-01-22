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

// PauseGame
struct  PauseGame_t2280645372  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PauseGame::pauseMenu
	GameObject_t1756533147 * ___pauseMenu_2;
	// UnityEngine.GameObject PauseGame::settingsMenu
	GameObject_t1756533147 * ___settingsMenu_3;

public:
	inline static int32_t get_offset_of_pauseMenu_2() { return static_cast<int32_t>(offsetof(PauseGame_t2280645372, ___pauseMenu_2)); }
	inline GameObject_t1756533147 * get_pauseMenu_2() const { return ___pauseMenu_2; }
	inline GameObject_t1756533147 ** get_address_of_pauseMenu_2() { return &___pauseMenu_2; }
	inline void set_pauseMenu_2(GameObject_t1756533147 * value)
	{
		___pauseMenu_2 = value;
		Il2CppCodeGenWriteBarrier(&___pauseMenu_2, value);
	}

	inline static int32_t get_offset_of_settingsMenu_3() { return static_cast<int32_t>(offsetof(PauseGame_t2280645372, ___settingsMenu_3)); }
	inline GameObject_t1756533147 * get_settingsMenu_3() const { return ___settingsMenu_3; }
	inline GameObject_t1756533147 ** get_address_of_settingsMenu_3() { return &___settingsMenu_3; }
	inline void set_settingsMenu_3(GameObject_t1756533147 * value)
	{
		___settingsMenu_3 = value;
		Il2CppCodeGenWriteBarrier(&___settingsMenu_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
