#pragma once

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
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"

// System.Void GamePlayManager::.ctor()
extern "C"  void GamePlayManager__ctor_m236275662 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
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
// System.Void GamePlayManager::Update()
extern "C"  void GamePlayManager_Update_m783774475 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayManager::FixedUpdate()
extern "C"  void GamePlayManager_FixedUpdate_m2606068137 (GamePlayManager_t85684135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
