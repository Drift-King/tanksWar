#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EnemyAI
struct EnemyAI_t2110961122;
// PlayerControl
struct PlayerControl_t792727354;
// CameraFollow
struct CameraFollow_t1493855402;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayerStatistics
struct PlayerStatistics_t1841391070;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// GamePlayManager
struct GamePlayManager_t85684135;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GamePlayManager
struct  GamePlayManager_t85684135  : public MonoBehaviour_t1158329972
{
public:
	// EnemyAI GamePlayManager::enemy
	EnemyAI_t2110961122 * ___enemy_2;
	// PlayerControl GamePlayManager::player
	PlayerControl_t792727354 * ___player_3;
	// CameraFollow GamePlayManager::cameraFollow
	CameraFollow_t1493855402 * ___cameraFollow_4;
	// UnityEngine.GameObject GamePlayManager::victorySummary
	GameObject_t1756533147 * ___victorySummary_5;
	// UnityEngine.GameObject GamePlayManager::defeatSummary
	GameObject_t1756533147 * ___defeatSummary_6;
	// UnityEngine.GameObject GamePlayManager::pauseMenuScreen
	GameObject_t1756533147 * ___pauseMenuScreen_7;
	// PlayerStatistics GamePlayManager::playerStatistics
	PlayerStatistics_t1841391070 * ___playerStatistics_8;
	// UnityEngine.GameObject GamePlayManager::ZeroStars
	GameObject_t1756533147 * ___ZeroStars_9;
	// UnityEngine.GameObject GamePlayManager::OneStar
	GameObject_t1756533147 * ___OneStar_10;
	// UnityEngine.GameObject GamePlayManager::TwoStars
	GameObject_t1756533147 * ___TwoStars_11;
	// UnityEngine.GameObject GamePlayManager::ThreeStars
	GameObject_t1756533147 * ___ThreeStars_12;
	// UnityEngine.GameObject GamePlayManager::playerTurnIndicator
	GameObject_t1756533147 * ___playerTurnIndicator_13;
	// UnityEngine.GameObject GamePlayManager::enemyTurnIndicator
	GameObject_t1756533147 * ___enemyTurnIndicator_14;
	// UnityEngine.AudioSource GamePlayManager::audioSource
	AudioSource_t1135106623 * ___audioSource_15;
	// System.Boolean GamePlayManager::isPaused
	bool ___isPaused_16;

public:
	inline static int32_t get_offset_of_enemy_2() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___enemy_2)); }
	inline EnemyAI_t2110961122 * get_enemy_2() const { return ___enemy_2; }
	inline EnemyAI_t2110961122 ** get_address_of_enemy_2() { return &___enemy_2; }
	inline void set_enemy_2(EnemyAI_t2110961122 * value)
	{
		___enemy_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___player_3)); }
	inline PlayerControl_t792727354 * get_player_3() const { return ___player_3; }
	inline PlayerControl_t792727354 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(PlayerControl_t792727354 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_cameraFollow_4() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___cameraFollow_4)); }
	inline CameraFollow_t1493855402 * get_cameraFollow_4() const { return ___cameraFollow_4; }
	inline CameraFollow_t1493855402 ** get_address_of_cameraFollow_4() { return &___cameraFollow_4; }
	inline void set_cameraFollow_4(CameraFollow_t1493855402 * value)
	{
		___cameraFollow_4 = value;
		Il2CppCodeGenWriteBarrier(&___cameraFollow_4, value);
	}

	inline static int32_t get_offset_of_victorySummary_5() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___victorySummary_5)); }
	inline GameObject_t1756533147 * get_victorySummary_5() const { return ___victorySummary_5; }
	inline GameObject_t1756533147 ** get_address_of_victorySummary_5() { return &___victorySummary_5; }
	inline void set_victorySummary_5(GameObject_t1756533147 * value)
	{
		___victorySummary_5 = value;
		Il2CppCodeGenWriteBarrier(&___victorySummary_5, value);
	}

	inline static int32_t get_offset_of_defeatSummary_6() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___defeatSummary_6)); }
	inline GameObject_t1756533147 * get_defeatSummary_6() const { return ___defeatSummary_6; }
	inline GameObject_t1756533147 ** get_address_of_defeatSummary_6() { return &___defeatSummary_6; }
	inline void set_defeatSummary_6(GameObject_t1756533147 * value)
	{
		___defeatSummary_6 = value;
		Il2CppCodeGenWriteBarrier(&___defeatSummary_6, value);
	}

	inline static int32_t get_offset_of_pauseMenuScreen_7() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___pauseMenuScreen_7)); }
	inline GameObject_t1756533147 * get_pauseMenuScreen_7() const { return ___pauseMenuScreen_7; }
	inline GameObject_t1756533147 ** get_address_of_pauseMenuScreen_7() { return &___pauseMenuScreen_7; }
	inline void set_pauseMenuScreen_7(GameObject_t1756533147 * value)
	{
		___pauseMenuScreen_7 = value;
		Il2CppCodeGenWriteBarrier(&___pauseMenuScreen_7, value);
	}

	inline static int32_t get_offset_of_playerStatistics_8() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___playerStatistics_8)); }
	inline PlayerStatistics_t1841391070 * get_playerStatistics_8() const { return ___playerStatistics_8; }
	inline PlayerStatistics_t1841391070 ** get_address_of_playerStatistics_8() { return &___playerStatistics_8; }
	inline void set_playerStatistics_8(PlayerStatistics_t1841391070 * value)
	{
		___playerStatistics_8 = value;
		Il2CppCodeGenWriteBarrier(&___playerStatistics_8, value);
	}

	inline static int32_t get_offset_of_ZeroStars_9() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___ZeroStars_9)); }
	inline GameObject_t1756533147 * get_ZeroStars_9() const { return ___ZeroStars_9; }
	inline GameObject_t1756533147 ** get_address_of_ZeroStars_9() { return &___ZeroStars_9; }
	inline void set_ZeroStars_9(GameObject_t1756533147 * value)
	{
		___ZeroStars_9 = value;
		Il2CppCodeGenWriteBarrier(&___ZeroStars_9, value);
	}

	inline static int32_t get_offset_of_OneStar_10() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___OneStar_10)); }
	inline GameObject_t1756533147 * get_OneStar_10() const { return ___OneStar_10; }
	inline GameObject_t1756533147 ** get_address_of_OneStar_10() { return &___OneStar_10; }
	inline void set_OneStar_10(GameObject_t1756533147 * value)
	{
		___OneStar_10 = value;
		Il2CppCodeGenWriteBarrier(&___OneStar_10, value);
	}

	inline static int32_t get_offset_of_TwoStars_11() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___TwoStars_11)); }
	inline GameObject_t1756533147 * get_TwoStars_11() const { return ___TwoStars_11; }
	inline GameObject_t1756533147 ** get_address_of_TwoStars_11() { return &___TwoStars_11; }
	inline void set_TwoStars_11(GameObject_t1756533147 * value)
	{
		___TwoStars_11 = value;
		Il2CppCodeGenWriteBarrier(&___TwoStars_11, value);
	}

	inline static int32_t get_offset_of_ThreeStars_12() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___ThreeStars_12)); }
	inline GameObject_t1756533147 * get_ThreeStars_12() const { return ___ThreeStars_12; }
	inline GameObject_t1756533147 ** get_address_of_ThreeStars_12() { return &___ThreeStars_12; }
	inline void set_ThreeStars_12(GameObject_t1756533147 * value)
	{
		___ThreeStars_12 = value;
		Il2CppCodeGenWriteBarrier(&___ThreeStars_12, value);
	}

	inline static int32_t get_offset_of_playerTurnIndicator_13() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___playerTurnIndicator_13)); }
	inline GameObject_t1756533147 * get_playerTurnIndicator_13() const { return ___playerTurnIndicator_13; }
	inline GameObject_t1756533147 ** get_address_of_playerTurnIndicator_13() { return &___playerTurnIndicator_13; }
	inline void set_playerTurnIndicator_13(GameObject_t1756533147 * value)
	{
		___playerTurnIndicator_13 = value;
		Il2CppCodeGenWriteBarrier(&___playerTurnIndicator_13, value);
	}

	inline static int32_t get_offset_of_enemyTurnIndicator_14() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___enemyTurnIndicator_14)); }
	inline GameObject_t1756533147 * get_enemyTurnIndicator_14() const { return ___enemyTurnIndicator_14; }
	inline GameObject_t1756533147 ** get_address_of_enemyTurnIndicator_14() { return &___enemyTurnIndicator_14; }
	inline void set_enemyTurnIndicator_14(GameObject_t1756533147 * value)
	{
		___enemyTurnIndicator_14 = value;
		Il2CppCodeGenWriteBarrier(&___enemyTurnIndicator_14, value);
	}

	inline static int32_t get_offset_of_audioSource_15() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___audioSource_15)); }
	inline AudioSource_t1135106623 * get_audioSource_15() const { return ___audioSource_15; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_15() { return &___audioSource_15; }
	inline void set_audioSource_15(AudioSource_t1135106623 * value)
	{
		___audioSource_15 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_15, value);
	}

	inline static int32_t get_offset_of_isPaused_16() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___isPaused_16)); }
	inline bool get_isPaused_16() const { return ___isPaused_16; }
	inline bool* get_address_of_isPaused_16() { return &___isPaused_16; }
	inline void set_isPaused_16(bool value)
	{
		___isPaused_16 = value;
	}
};

struct GamePlayManager_t85684135_StaticFields
{
public:
	// GamePlayManager GamePlayManager::_instance
	GamePlayManager_t85684135 * ____instance_17;

public:
	inline static int32_t get_offset_of__instance_17() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135_StaticFields, ____instance_17)); }
	inline GamePlayManager_t85684135 * get__instance_17() const { return ____instance_17; }
	inline GamePlayManager_t85684135 ** get_address_of__instance_17() { return &____instance_17; }
	inline void set__instance_17(GamePlayManager_t85684135 * value)
	{
		____instance_17 = value;
		Il2CppCodeGenWriteBarrier(&____instance_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
