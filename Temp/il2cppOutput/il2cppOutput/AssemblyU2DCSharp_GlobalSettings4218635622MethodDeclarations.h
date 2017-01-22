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

// GlobalSettings
struct GlobalSettings_t4218635622;
// GlobalSettings/MusicToggled
struct MusicToggled_t4291538686;
// GlobalSettings/VolumeChanged
struct VolumeChanged_t2370380177;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GlobalSettings_MusicToggled4291538686.h"
#include "AssemblyU2DCSharp_GlobalSettings_VolumeChanged2370380177.h"

// System.Void GlobalSettings::.ctor()
extern "C"  void GlobalSettings__ctor_m138951193 (GlobalSettings_t4218635622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GlobalSettings GlobalSettings::get_Instance()
extern "C"  GlobalSettings_t4218635622 * GlobalSettings_get_Instance_m4257028846 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalSettings::add_musicToggled(GlobalSettings/MusicToggled)
extern "C"  void GlobalSettings_add_musicToggled_m1876689216 (GlobalSettings_t4218635622 * __this, MusicToggled_t4291538686 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalSettings::remove_musicToggled(GlobalSettings/MusicToggled)
extern "C"  void GlobalSettings_remove_musicToggled_m3121599893 (GlobalSettings_t4218635622 * __this, MusicToggled_t4291538686 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalSettings::add_volumeChanged(GlobalSettings/VolumeChanged)
extern "C"  void GlobalSettings_add_volumeChanged_m1669300018 (GlobalSettings_t4218635622 * __this, VolumeChanged_t2370380177 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalSettings::remove_volumeChanged(GlobalSettings/VolumeChanged)
extern "C"  void GlobalSettings_remove_volumeChanged_m3261824677 (GlobalSettings_t4218635622 * __this, VolumeChanged_t2370380177 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalSettings::Awake()
extern "C"  void GlobalSettings_Awake_m770834310 (GlobalSettings_t4218635622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalSettings::toggleMusic()
extern "C"  void GlobalSettings_toggleMusic_m3684359670 (GlobalSettings_t4218635622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalSettings::updateVolume()
extern "C"  void GlobalSettings_updateVolume_m3065796330 (GlobalSettings_t4218635622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
