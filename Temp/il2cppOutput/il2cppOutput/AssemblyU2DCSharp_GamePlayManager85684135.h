#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GamePlayManager/PauseToggle
struct PauseToggle_t1998472206;
// EnemyAI
struct EnemyAI_t2110961122;
// PlayerControl
struct PlayerControl_t792727354;
// CameraFollow
struct CameraFollow_t1493855402;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
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
	// GamePlayManager/PauseToggle GamePlayManager::pauseToggle
	PauseToggle_t1998472206 * ___pauseToggle_2;
	// EnemyAI GamePlayManager::enemy
	EnemyAI_t2110961122 * ___enemy_3;
	// PlayerControl GamePlayManager::player
	PlayerControl_t792727354 * ___player_4;
	// CameraFollow GamePlayManager::cameraFollow
	CameraFollow_t1493855402 * ___cameraFollow_5;
	// UnityEngine.GameObject GamePlayManager::victorySummary
	GameObject_t1756533147 * ___victorySummary_6;
	// UnityEngine.GameObject GamePlayManager::defeatSummary
	GameObject_t1756533147 * ___defeatSummary_7;
	// UnityEngine.GameObject GamePlayManager::pauseMenuScreen
	GameObject_t1756533147 * ___pauseMenuScreen_8;
	// UnityEngine.UI.Text GamePlayManager::shotsCounter
	Text_t356221433 * ___shotsCounter_9;
	// PlayerStatistics GamePlayManager::playerStatistics
	PlayerStatistics_t1841391070 * ___playerStatistics_10;
	// System.Single GamePlayManager::enemyMinTilt
	float ___enemyMinTilt_11;
	// System.Single GamePlayManager::enemyMaxTilt
	float ___enemyMaxTilt_12;
	// UnityEngine.GameObject GamePlayManager::ZeroStars
	GameObject_t1756533147 * ___ZeroStars_13;
	// UnityEngine.GameObject GamePlayManager::OneStar
	GameObject_t1756533147 * ___OneStar_14;
	// UnityEngine.GameObject GamePlayManager::TwoStars
	GameObject_t1756533147 * ___TwoStars_15;
	// UnityEngine.GameObject GamePlayManager::ThreeStars
	GameObject_t1756533147 * ___ThreeStars_16;
	// UnityEngine.GameObject GamePlayManager::playerTurnIndicator
	GameObject_t1756533147 * ___playerTurnIndicator_17;
	// UnityEngine.GameObject GamePlayManager::enemyTurnIndicator
	GameObject_t1756533147 * ___enemyTurnIndicator_18;
	// UnityEngine.AudioSource GamePlayManager::audioSource
	AudioSource_t1135106623 * ___audioSource_19;
	// System.Boolean GamePlayManager::isPaused
	bool ___isPaused_20;

public:
	inline static int32_t get_offset_of_pauseToggle_2() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___pauseToggle_2)); }
	inline PauseToggle_t1998472206 * get_pauseToggle_2() const { return ___pauseToggle_2; }
	inline PauseToggle_t1998472206 ** get_address_of_pauseToggle_2() { return &___pauseToggle_2; }
	inline void set_pauseToggle_2(PauseToggle_t1998472206 * value)
	{
		___pauseToggle_2 = value;
		Il2CppCodeGenWriteBarrier(&___pauseToggle_2, value);
	}

	inline static int32_t get_offset_of_enemy_3() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___enemy_3)); }
	inline EnemyAI_t2110961122 * get_enemy_3() const { return ___enemy_3; }
	inline EnemyAI_t2110961122 ** get_address_of_enemy_3() { return &___enemy_3; }
	inline void set_enemy_3(EnemyAI_t2110961122 * value)
	{
		___enemy_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_3, value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___player_4)); }
	inline PlayerControl_t792727354 * get_player_4() const { return ___player_4; }
	inline PlayerControl_t792727354 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(PlayerControl_t792727354 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_cameraFollow_5() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___cameraFollow_5)); }
	inline CameraFollow_t1493855402 * get_cameraFollow_5() const { return ___cameraFollow_5; }
	inline CameraFollow_t1493855402 ** get_address_of_cameraFollow_5() { return &___cameraFollow_5; }
	inline void set_cameraFollow_5(CameraFollow_t1493855402 * value)
	{
		___cameraFollow_5 = value;
		Il2CppCodeGenWriteBarrier(&___cameraFollow_5, value);
	}

	inline static int32_t get_offset_of_victorySummary_6() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___victorySummary_6)); }
	inline GameObject_t1756533147 * get_victorySummary_6() const { return ___victorySummary_6; }
	inline GameObject_t1756533147 ** get_address_of_victorySummary_6() { return &___victorySummary_6; }
	inline void set_victorySummary_6(GameObject_t1756533147 * value)
	{
		___victorySummary_6 = value;
		Il2CppCodeGenWriteBarrier(&___victorySummary_6, value);
	}

	inline static int32_t get_offset_of_defeatSummary_7() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___defeatSummary_7)); }
	inline GameObject_t1756533147 * get_defeatSummary_7() const { return ___defeatSummary_7; }
	inline GameObject_t1756533147 ** get_address_of_defeatSummary_7() { return &___defeatSummary_7; }
	inline void set_defeatSummary_7(GameObject_t1756533147 * value)
	{
		___defeatSummary_7 = value;
		Il2CppCodeGenWriteBarrier(&___defeatSummary_7, value);
	}

	inline static int32_t get_offset_of_pauseMenuScreen_8() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___pauseMenuScreen_8)); }
	inline GameObject_t1756533147 * get_pauseMenuScreen_8() const { return ___pauseMenuScreen_8; }
	inline GameObject_t1756533147 ** get_address_of_pauseMenuScreen_8() { return &___pauseMenuScreen_8; }
	inline void set_pauseMenuScreen_8(GameObject_t1756533147 * value)
	{
		___pauseMenuScreen_8 = value;
		Il2CppCodeGenWriteBarrier(&___pauseMenuScreen_8, value);
	}

	inline static int32_t get_offset_of_shotsCounter_9() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___shotsCounter_9)); }
	inline Text_t356221433 * get_shotsCounter_9() const { return ___shotsCounter_9; }
	inline Text_t356221433 ** get_address_of_shotsCounter_9() { return &___shotsCounter_9; }
	inline void set_shotsCounter_9(Text_t356221433 * value)
	{
		___shotsCounter_9 = value;
		Il2CppCodeGenWriteBarrier(&___shotsCounter_9, value);
	}

	inline static int32_t get_offset_of_playerStatistics_10() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___playerStatistics_10)); }
	inline PlayerStatistics_t1841391070 * get_playerStatistics_10() const { return ___playerStatistics_10; }
	inline PlayerStatistics_t1841391070 ** get_address_of_playerStatistics_10() { return &___playerStatistics_10; }
	inline void set_playerStatistics_10(PlayerStatistics_t1841391070 * value)
	{
		___playerStatistics_10 = value;
		Il2CppCodeGenWriteBarrier(&___playerStatistics_10, value);
	}

	inline static int32_t get_offset_of_enemyMinTilt_11() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___enemyMinTilt_11)); }
	inline float get_enemyMinTilt_11() const { return ___enemyMinTilt_11; }
	inline float* get_address_of_enemyMinTilt_11() { return &___enemyMinTilt_11; }
	inline void set_enemyMinTilt_11(float value)
	{
		___enemyMinTilt_11 = value;
	}

	inline static int32_t get_offset_of_enemyMaxTilt_12() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___enemyMaxTilt_12)); }
	inline float get_enemyMaxTilt_12() const { return ___enemyMaxTilt_12; }
	inline float* get_address_of_enemyMaxTilt_12() { return &___enemyMaxTilt_12; }
	inline void set_enemyMaxTilt_12(float value)
	{
		___enemyMaxTilt_12 = value;
	}

	inline static int32_t get_offset_of_ZeroStars_13() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___ZeroStars_13)); }
	inline GameObject_t1756533147 * get_ZeroStars_13() const { return ___ZeroStars_13; }
	inline GameObject_t1756533147 ** get_address_of_ZeroStars_13() { return &___ZeroStars_13; }
	inline void set_ZeroStars_13(GameObject_t1756533147 * value)
	{
		___ZeroStars_13 = value;
		Il2CppCodeGenWriteBarrier(&___ZeroStars_13, value);
	}

	inline static int32_t get_offset_of_OneStar_14() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___OneStar_14)); }
	inline GameObject_t1756533147 * get_OneStar_14() const { return ___OneStar_14; }
	inline GameObject_t1756533147 ** get_address_of_OneStar_14() { return &___OneStar_14; }
	inline void set_OneStar_14(GameObject_t1756533147 * value)
	{
		___OneStar_14 = value;
		Il2CppCodeGenWriteBarrier(&___OneStar_14, value);
	}

	inline static int32_t get_offset_of_TwoStars_15() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___TwoStars_15)); }
	inline GameObject_t1756533147 * get_TwoStars_15() const { return ___TwoStars_15; }
	inline GameObject_t1756533147 ** get_address_of_TwoStars_15() { return &___TwoStars_15; }
	inline void set_TwoStars_15(GameObject_t1756533147 * value)
	{
		___TwoStars_15 = value;
		Il2CppCodeGenWriteBarrier(&___TwoStars_15, value);
	}

	inline static int32_t get_offset_of_ThreeStars_16() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___ThreeStars_16)); }
	inline GameObject_t1756533147 * get_ThreeStars_16() const { return ___ThreeStars_16; }
	inline GameObject_t1756533147 ** get_address_of_ThreeStars_16() { return &___ThreeStars_16; }
	inline void set_ThreeStars_16(GameObject_t1756533147 * value)
	{
		___ThreeStars_16 = value;
		Il2CppCodeGenWriteBarrier(&___ThreeStars_16, value);
	}

	inline static int32_t get_offset_of_playerTurnIndicator_17() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___playerTurnIndicator_17)); }
	inline GameObject_t1756533147 * get_playerTurnIndicator_17() const { return ___playerTurnIndicator_17; }
	inline GameObject_t1756533147 ** get_address_of_playerTurnIndicator_17() { return &___playerTurnIndicator_17; }
	inline void set_playerTurnIndicator_17(GameObject_t1756533147 * value)
	{
		___playerTurnIndicator_17 = value;
		Il2CppCodeGenWriteBarrier(&___playerTurnIndicator_17, value);
	}

	inline static int32_t get_offset_of_enemyTurnIndicator_18() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___enemyTurnIndicator_18)); }
	inline GameObject_t1756533147 * get_enemyTurnIndicator_18() const { return ___enemyTurnIndicator_18; }
	inline GameObject_t1756533147 ** get_address_of_enemyTurnIndicator_18() { return &___enemyTurnIndicator_18; }
	inline void set_enemyTurnIndicator_18(GameObject_t1756533147 * value)
	{
		___enemyTurnIndicator_18 = value;
		Il2CppCodeGenWriteBarrier(&___enemyTurnIndicator_18, value);
	}

	inline static int32_t get_offset_of_audioSource_19() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___audioSource_19)); }
	inline AudioSource_t1135106623 * get_audioSource_19() const { return ___audioSource_19; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_19() { return &___audioSource_19; }
	inline void set_audioSource_19(AudioSource_t1135106623 * value)
	{
		___audioSource_19 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_19, value);
	}

	inline static int32_t get_offset_of_isPaused_20() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135, ___isPaused_20)); }
	inline bool get_isPaused_20() const { return ___isPaused_20; }
	inline bool* get_address_of_isPaused_20() { return &___isPaused_20; }
	inline void set_isPaused_20(bool value)
	{
		___isPaused_20 = value;
	}
};

struct GamePlayManager_t85684135_StaticFields
{
public:
	// GamePlayManager GamePlayManager::_instance
	GamePlayManager_t85684135 * ____instance_21;

public:
	inline static int32_t get_offset_of__instance_21() { return static_cast<int32_t>(offsetof(GamePlayManager_t85684135_StaticFields, ____instance_21)); }
	inline GamePlayManager_t85684135 * get__instance_21() const { return ____instance_21; }
	inline GamePlayManager_t85684135 ** get_address_of__instance_21() { return &____instance_21; }
	inline void set__instance_21(GamePlayManager_t85684135 * value)
	{
		____instance_21 = value;
		Il2CppCodeGenWriteBarrier(&____instance_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
