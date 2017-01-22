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

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t3347016329;
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t2691167515;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t2157404822;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatfor2691167515.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatfor2157404822.h"

// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
extern "C"  void VirtualInput__ctor_m2413875782 (VirtualInput_t3347016329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C"  Vector3_t2243707580  VirtualInput_get_virtualMousePosition_m769141270 (VirtualInput_t3347016329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C"  void VirtualInput_set_virtualMousePosition_m1528281797 (VirtualInput_t3347016329 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
extern "C"  bool VirtualInput_AxisExists_m4003756609 (VirtualInput_t3347016329 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
extern "C"  bool VirtualInput_ButtonExists_m594000988 (VirtualInput_t3347016329 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void VirtualInput_RegisterVirtualAxis_m702313030 (VirtualInput_t3347016329 * __this, VirtualAxis_t2691167515 * ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void VirtualInput_RegisterVirtualButton_m2031723932 (VirtualInput_t3347016329 * __this, VirtualButton_t2157404822 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualAxis_m1950996016 (VirtualInput_t3347016329 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualButton_m264302963 (VirtualInput_t3347016329 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t2691167515 * VirtualInput_VirtualAxisReference_m383875545 (VirtualInput_t3347016329 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionX_m4025890228 (VirtualInput_t3347016329 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionY_m242139027 (VirtualInput_t3347016329 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionZ_m397843446 (VirtualInput_t3347016329 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
