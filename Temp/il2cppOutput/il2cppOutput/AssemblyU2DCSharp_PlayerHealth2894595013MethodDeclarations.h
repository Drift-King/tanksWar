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

// PlayerHealth
struct PlayerHealth_t2894595013;
// PlayerHealth/PlayerDied
struct PlayerDied_t2467274817;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PlayerHealth_PlayerDied2467274817.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void PlayerHealth::.ctor()
extern "C"  void PlayerHealth__ctor_m24469338 (PlayerHealth_t2894595013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::add_playerDied(PlayerHealth/PlayerDied)
extern "C"  void PlayerHealth_add_playerDied_m3578242970 (PlayerHealth_t2894595013 * __this, PlayerDied_t2467274817 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::remove_playerDied(PlayerHealth/PlayerDied)
extern "C"  void PlayerHealth_remove_playerDied_m3783952021 (PlayerHealth_t2894595013 * __this, PlayerDied_t2467274817 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::Awake()
extern "C"  void PlayerHealth_Awake_m653547285 (PlayerHealth_t2894595013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SpriteRenderer PlayerHealth::getHealthBar()
extern "C"  SpriteRenderer_t1209076198 * PlayerHealth_getHealthBar_m1167812327 (PlayerHealth_t2894595013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void PlayerHealth_OnCollisionEnter2D_m3216207528 (PlayerHealth_t2894595013 * __this, Collision2D_t1539500754 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::TakeDamage(UnityEngine.Transform)
extern "C"  void PlayerHealth_TakeDamage_m1230312067 (PlayerHealth_t2894595013 * __this, Transform_t3275118058 * ___enemy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::PlayerDies()
extern "C"  void PlayerHealth_PlayerDies_m3643175750 (PlayerHealth_t2894595013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::UpdateHealthBar()
extern "C"  void PlayerHealth_UpdateHealthBar_m3710551778 (PlayerHealth_t2894595013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
