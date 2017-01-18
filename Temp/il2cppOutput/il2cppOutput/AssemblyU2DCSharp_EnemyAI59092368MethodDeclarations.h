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
struct EnemyAI_t59092368;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void EnemyAI::.ctor()
extern "C"  void EnemyAI__ctor_m3741696987 (EnemyAI_t59092368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyAI::Start()
extern "C"  void EnemyAI_Start_m2688834779 (EnemyAI_t59092368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EnemyAI::CalculateAttackPower(UnityEngine.Transform,System.Single)
extern "C"  float EnemyAI_CalculateAttackPower_m1592010894 (EnemyAI_t59092368 * __this, Transform_t1659122786 * ___target0, float ___angle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyAI::LateUpdate()
extern "C"  void EnemyAI_LateUpdate_m1806088024 (EnemyAI_t59092368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
