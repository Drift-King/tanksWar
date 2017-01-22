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
struct GunFired_t3156990485;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Gun/GunFired::.ctor(System.Object,System.IntPtr)
extern "C"  void GunFired__ctor_m545144776 (GunFired_t3156990485 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gun/GunFired::Invoke()
extern "C"  void GunFired_Invoke_m114767458 (GunFired_t3156990485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Gun/GunFired::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GunFired_BeginInvoke_m1876507419 (GunFired_t3156990485 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gun/GunFired::EndInvoke(System.IAsyncResult)
extern "C"  void GunFired_EndInvoke_m3376877146 (GunFired_t3156990485 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
