#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EnemyAI
struct EnemyAI_t59092368;
// PlayerControl
struct PlayerControl_t108512028;
// CameraFollow
struct CameraFollow_t3148844886;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GamePlayManager
struct  GamePlayManager_t2325045863  : public MonoBehaviour_t667441552
{
public:
	// EnemyAI GamePlayManager::enemy
	EnemyAI_t59092368 * ___enemy_2;
	// PlayerControl GamePlayManager::player
	PlayerControl_t108512028 * ___player_3;
	// CameraFollow GamePlayManager::cameraFollow
	CameraFollow_t3148844886 * ___cameraFollow_4;
	// UnityEngine.GameObject GamePlayManager::gameOverScreen
	GameObject_t3674682005 * ___gameOverScreen_5;
	// UnityEngine.GameObject GamePlayManager::playerTurnIndicator
	GameObject_t3674682005 * ___playerTurnIndicator_6;
	// UnityEngine.GameObject GamePlayManager::enemyTurnIndicator
	GameObject_t3674682005 * ___enemyTurnIndicator_7;

public:
	inline static int32_t get_offset_of_enemy_2() { return static_cast<int32_t>(offsetof(GamePlayManager_t2325045863, ___enemy_2)); }
	inline EnemyAI_t59092368 * get_enemy_2() const { return ___enemy_2; }
	inline EnemyAI_t59092368 ** get_address_of_enemy_2() { return &___enemy_2; }
	inline void set_enemy_2(EnemyAI_t59092368 * value)
	{
		___enemy_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(GamePlayManager_t2325045863, ___player_3)); }
	inline PlayerControl_t108512028 * get_player_3() const { return ___player_3; }
	inline PlayerControl_t108512028 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(PlayerControl_t108512028 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_cameraFollow_4() { return static_cast<int32_t>(offsetof(GamePlayManager_t2325045863, ___cameraFollow_4)); }
	inline CameraFollow_t3148844886 * get_cameraFollow_4() const { return ___cameraFollow_4; }
	inline CameraFollow_t3148844886 ** get_address_of_cameraFollow_4() { return &___cameraFollow_4; }
	inline void set_cameraFollow_4(CameraFollow_t3148844886 * value)
	{
		___cameraFollow_4 = value;
		Il2CppCodeGenWriteBarrier(&___cameraFollow_4, value);
	}

	inline static int32_t get_offset_of_gameOverScreen_5() { return static_cast<int32_t>(offsetof(GamePlayManager_t2325045863, ___gameOverScreen_5)); }
	inline GameObject_t3674682005 * get_gameOverScreen_5() const { return ___gameOverScreen_5; }
	inline GameObject_t3674682005 ** get_address_of_gameOverScreen_5() { return &___gameOverScreen_5; }
	inline void set_gameOverScreen_5(GameObject_t3674682005 * value)
	{
		___gameOverScreen_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverScreen_5, value);
	}

	inline static int32_t get_offset_of_playerTurnIndicator_6() { return static_cast<int32_t>(offsetof(GamePlayManager_t2325045863, ___playerTurnIndicator_6)); }
	inline GameObject_t3674682005 * get_playerTurnIndicator_6() const { return ___playerTurnIndicator_6; }
	inline GameObject_t3674682005 ** get_address_of_playerTurnIndicator_6() { return &___playerTurnIndicator_6; }
	inline void set_playerTurnIndicator_6(GameObject_t3674682005 * value)
	{
		___playerTurnIndicator_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerTurnIndicator_6, value);
	}

	inline static int32_t get_offset_of_enemyTurnIndicator_7() { return static_cast<int32_t>(offsetof(GamePlayManager_t2325045863, ___enemyTurnIndicator_7)); }
	inline GameObject_t3674682005 * get_enemyTurnIndicator_7() const { return ___enemyTurnIndicator_7; }
	inline GameObject_t3674682005 ** get_address_of_enemyTurnIndicator_7() { return &___enemyTurnIndicator_7; }
	inline void set_enemyTurnIndicator_7(GameObject_t3674682005 * value)
	{
		___enemyTurnIndicator_7 = value;
		Il2CppCodeGenWriteBarrier(&___enemyTurnIndicator_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
