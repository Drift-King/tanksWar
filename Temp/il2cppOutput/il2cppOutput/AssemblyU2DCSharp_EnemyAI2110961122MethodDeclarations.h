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

// EnemyAI
struct EnemyAI_t2110961122;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void EnemyAI::.ctor()
extern "C"  void EnemyAI__ctor_m3271486257 (EnemyAI_t2110961122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyAI::Start()
extern "C"  void EnemyAI_Start_m2288311913 (EnemyAI_t2110961122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EnemyAI::CalculateAttackPower(UnityEngine.Transform,System.Single)
extern "C"  float EnemyAI_CalculateAttackPower_m257584176 (EnemyAI_t2110961122 * __this, Transform_t3275118058 * ___target0, float ___angle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyAI::LateUpdate()
extern "C"  void EnemyAI_LateUpdate_m698474296 (EnemyAI_t2110961122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
