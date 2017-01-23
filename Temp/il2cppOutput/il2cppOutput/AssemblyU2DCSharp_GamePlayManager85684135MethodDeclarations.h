﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GamePlayManager
struct GamePlayManager_t85684135;
// GamePlayManager/PauseToggle
struct PauseToggle_t1998472206;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GamePlayManager_PauseToggle1998472206.h"

// System.Void GamePlayManager::.ctor()
extern "C"  void GamePlayManager__ctor_m236275662 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::add_pauseToggle(GamePlayManager/PauseToggle)
extern "C"  void GamePlayManager_add_pauseToggle_m2536600208 (GamePlayManager_t85684135 * __this, PauseToggle_t1998472206 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::remove_pauseToggle(GamePlayManager/PauseToggle)
extern "C"  void GamePlayManager_remove_pauseToggle_m693719641 (GamePlayManager_t85684135 * __this, PauseToggle_t1998472206 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GamePlayManager GamePlayManager::get_Instance()
extern "C"  GamePlayManager_t85684135 * GamePlayManager_get_Instance_m2021271410 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::Awake()
extern "C"  void GamePlayManager_Awake_m3160410151 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::Start()
extern "C"  void GamePlayManager_Start_m2758210818 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::StartGame()
extern "C"  void GamePlayManager_StartGame_m3047174576 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::SwapTurn()
extern "C"  void GamePlayManager_SwapTurn_m2700098104 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::startSwapTurn()
extern "C"  void GamePlayManager_startSwapTurn_m3509217602 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GamePlayManager::SwapTurnCoroutine()
extern "C"  Il2CppObject * GamePlayManager_SwapTurnCoroutine_m278751456 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::PlayerHasDied()
extern "C"  void GamePlayManager_PlayerHasDied_m2060088855 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GamePlayManager::VictorySummaryCoroutine()
extern "C"  Il2CppObject * GamePlayManager_VictorySummaryCoroutine_m2581165146 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GamePlayManager::DefeatSummaryCoroutine()
extern "C"  Il2CppObject * GamePlayManager_DefeatSummaryCoroutine_m1407251785 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::EnemyHasDied()
extern "C"  void GamePlayManager_EnemyHasDied_m2530580598 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::setTurnIndicator()
extern "C"  void GamePlayManager_setTurnIndicator_m4006453220 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::ToggleMusic()
extern "C"  void GamePlayManager_ToggleMusic_m955571085 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::UpdateMusicVolume()
extern "C"  void GamePlayManager_UpdateMusicVolume_m3821671856 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::GamePausedToggleEvent()
extern "C"  void GamePlayManager_GamePausedToggleEvent_m3534719026 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::PauseGameToggle()
extern "C"  void GamePlayManager_PauseGameToggle_m3799986586 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::FixedUpdate()
extern "C"  void GamePlayManager_FixedUpdate_m2606068137 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
