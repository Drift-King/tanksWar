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

// Gun/GunFired
struct GunFired_t458688445;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Gun/GunFired::.ctor(System.Object,System.IntPtr)
extern "C"  void GunFired__ctor_m1531448804 (GunFired_t458688445 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gun/GunFired::Invoke()
extern "C"  void GunFired_Invoke_m4153691966 (GunFired_t458688445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Gun/GunFired::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GunFired_BeginInvoke_m99303941 (GunFired_t458688445 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gun/GunFired::EndInvoke(System.IAsyncResult)
extern "C"  void GunFired_EndInvoke_m3614839284 (GunFired_t458688445 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
