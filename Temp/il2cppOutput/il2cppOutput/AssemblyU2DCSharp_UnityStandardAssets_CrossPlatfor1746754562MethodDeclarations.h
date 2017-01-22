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

// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t2691167515;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t2157404822;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatform900829694.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatfor2691167515.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatfor2157404822.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
extern "C"  void CrossPlatformInputManager__cctor_m1805217372 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
extern "C"  void CrossPlatformInputManager_SwitchActiveInputMethod_m3532136572 (Il2CppObject * __this /* static, unused */, int32_t ___activeInputMethod0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
extern "C"  bool CrossPlatformInputManager_AxisExists_m1059845048 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
extern "C"  bool CrossPlatformInputManager_ButtonExists_m488972191 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void CrossPlatformInputManager_RegisterVirtualAxis_m1690596121 (Il2CppObject * __this /* static, unused */, VirtualAxis_t2691167515 * ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void CrossPlatformInputManager_RegisterVirtualButton_m2967867237 (Il2CppObject * __this /* static, unused */, VirtualButton_t2157404822 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualAxis_m162337977 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualButton_m3688861234 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t2691167515 * CrossPlatformInputManager_VirtualAxisReference_m322644830 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
extern "C"  float CrossPlatformInputManager_GetAxis_m197296032 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
extern "C"  float CrossPlatformInputManager_GetAxisRaw_m2959419276 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
extern "C"  float CrossPlatformInputManager_GetAxis_m2750869425 (Il2CppObject * __this /* static, unused */, String_t* ___name0, bool ___raw1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern "C"  bool CrossPlatformInputManager_GetButton_m597873629 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
extern "C"  bool CrossPlatformInputManager_GetButtonDown_m272411567 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
extern "C"  bool CrossPlatformInputManager_GetButtonUp_m2201783544 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
extern "C"  void CrossPlatformInputManager_SetButtonDown_m2936443691 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
extern "C"  void CrossPlatformInputManager_SetButtonUp_m4223809406 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisPositive_m1876549355 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisNegative_m1893546827 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisZero_m2733103944 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
extern "C"  void CrossPlatformInputManager_SetAxis_m3314479669 (Il2CppObject * __this /* static, unused */, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
extern "C"  Vector3_t2243707580  CrossPlatformInputManager_get_mousePosition_m376600700 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionX_m3377712833 (Il2CppObject * __this /* static, unused */, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionY_m256131270 (Il2CppObject * __this /* static, unused */, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionZ_m2822278327 (Il2CppObject * __this /* static, unused */, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
