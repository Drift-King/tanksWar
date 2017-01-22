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
struct CameraFollow_t1493855402;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void CameraFollow::.ctor()
extern "C"  void CameraFollow__ctor_m88693439 (CameraFollow_t1493855402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFollow::Awake()
extern "C"  void CameraFollow_Awake_m3749477914 (CameraFollow_t1493855402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraFollow::CheckXMargin()
extern "C"  bool CameraFollow_CheckXMargin_m4194773603 (CameraFollow_t1493855402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraFollow::CheckYMargin()
extern "C"  bool CameraFollow_CheckYMargin_m4193731362 (CameraFollow_t1493855402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFollow::FixedUpdate()
extern "C"  void CameraFollow_FixedUpdate_m3910795858 (CameraFollow_t1493855402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFollow::SetPlayerToFollow(UnityEngine.Transform)
extern "C"  void CameraFollow_SetPlayerToFollow_m811732247 (CameraFollow_t1493855402 * __this, Transform_t3275118058 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFollow::TrackPlayer()
extern "C"  void CameraFollow_TrackPlayer_m2352800395 (CameraFollow_t1493855402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
