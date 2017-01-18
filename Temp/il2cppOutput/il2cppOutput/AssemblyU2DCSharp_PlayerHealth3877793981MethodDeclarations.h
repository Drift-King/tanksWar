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
struct PlayerHealth_t3877793981;
// PlayerHealth/PlayerDied
struct PlayerDied_t1607603991;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;
// UnityEngine.Collision2D
struct Collision2D_t2859305914;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PlayerHealth_PlayerDied1607603991.h"
#include "UnityEngine_UnityEngine_Collision2D2859305914.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void PlayerHealth::.ctor()
extern "C"  void PlayerHealth__ctor_m43779710 (PlayerHealth_t3877793981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::add_playerDied(PlayerHealth/PlayerDied)
extern "C"  void PlayerHealth_add_playerDied_m3079710578 (PlayerHealth_t3877793981 * __this, PlayerDied_t1607603991 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::remove_playerDied(PlayerHealth/PlayerDied)
extern "C"  void PlayerHealth_remove_playerDied_m3952520831 (PlayerHealth_t3877793981 * __this, PlayerDied_t1607603991 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::Awake()
extern "C"  void PlayerHealth_Awake_m281384929 (PlayerHealth_t3877793981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SpriteRenderer PlayerHealth::getHealthBar()
extern "C"  SpriteRenderer_t2548470764 * PlayerHealth_getHealthBar_m2944729029 (PlayerHealth_t3877793981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void PlayerHealth_OnCollisionEnter2D_m38374376 (PlayerHealth_t3877793981 * __this, Collision2D_t2859305914 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::TakeDamage(UnityEngine.Transform)
extern "C"  void PlayerHealth_TakeDamage_m4248204321 (PlayerHealth_t3877793981 * __this, Transform_t1659122786 * ___enemy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::UpdateHealthBar()
extern "C"  void PlayerHealth_UpdateHealthBar_m2757449642 (PlayerHealth_t3877793981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
