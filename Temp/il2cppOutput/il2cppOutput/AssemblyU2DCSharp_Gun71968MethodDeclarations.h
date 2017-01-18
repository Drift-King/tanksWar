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

// Gun
struct Gun_t71968;
// Gun/GunFired
struct GunFired_t458688445;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gun_GunFired458688445.h"

// System.Void Gun::.ctor()
extern "C"  void Gun__ctor_m578424395 (Gun_t71968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gun::add_gunFired(Gun/GunFired)
extern "C"  void Gun_add_gunFired_m3893937608 (Gun_t71968 * __this, GunFired_t458688445 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gun::remove_gunFired(Gun/GunFired)
extern "C"  void Gun_remove_gunFired_m249727637 (Gun_t71968 * __this, GunFired_t458688445 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gun::Awake()
extern "C"  void Gun_Awake_m816029614 (Gun_t71968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gun::FixedUpdate()
extern "C"  void Gun_FixedUpdate_m3417622406 (Gun_t71968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gun::FinishFire()
extern "C"  void Gun_FinishFire_m2570327746 (Gun_t71968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gun::Fire()
extern "C"  void Gun_Fire_m572680783 (Gun_t71968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gun::Fire(System.Single)
extern "C"  void Gun_Fire_m829296572 (Gun_t71968 * __this, float ___targetSpeed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
