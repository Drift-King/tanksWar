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

// CameraFollow
struct CameraFollow_t3148844886;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void CameraFollow::.ctor()
extern "C"  void CameraFollow__ctor_m2547336197 (CameraFollow_t3148844886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFollow::Awake()
extern "C"  void CameraFollow_Awake_m2784941416 (CameraFollow_t3148844886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraFollow::CheckXMargin()
extern "C"  bool CameraFollow_CheckXMargin_m1617433073 (CameraFollow_t3148844886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraFollow::CheckYMargin()
extern "C"  bool CameraFollow_CheckYMargin_m4104945906 (CameraFollow_t3148844886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFollow::FixedUpdate()
extern "C"  void CameraFollow_FixedUpdate_m2858109376 (CameraFollow_t3148844886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFollow::SetPlayerToFollow(UnityEngine.Transform)
extern "C"  void CameraFollow_SetPlayerToFollow_m1335253771 (CameraFollow_t3148844886 * __this, Transform_t1659122786 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFollow::TrackPlayer()
extern "C"  void CameraFollow_TrackPlayer_m3769813167 (CameraFollow_t3148844886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
