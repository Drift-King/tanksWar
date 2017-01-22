#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GlobalSettings
struct GlobalSettings_t4218635622;
// GlobalSettings/MusicToggled
struct MusicToggled_t4291538686;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GlobalSettings
struct  GlobalSettings_t4218635622  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GlobalSettings::musicOn
	bool ___musicOn_3;
	// System.Boolean GlobalSettings::soundsOn
	bool ___soundsOn_4;
	// System.Single GlobalSettings::volume
	float ___volume_5;
	// GlobalSettings/MusicToggled GlobalSettings::musicToggled
	MusicToggled_t4291538686 * ___musicToggled_6;

public:
	inline static int32_t get_offset_of_musicOn_3() { return static_cast<int32_t>(offsetof(GlobalSettings_t4218635622, ___musicOn_3)); }
	inline bool get_musicOn_3() const { return ___musicOn_3; }
	inline bool* get_address_of_musicOn_3() { return &___musicOn_3; }
	inline void set_musicOn_3(bool value)
	{
		___musicOn_3 = value;
	}

	inline static int32_t get_offset_of_soundsOn_4() { return static_cast<int32_t>(offsetof(GlobalSettings_t4218635622, ___soundsOn_4)); }
	inline bool get_soundsOn_4() const { return ___soundsOn_4; }
	inline bool* get_address_of_soundsOn_4() { return &___soundsOn_4; }
	inline void set_soundsOn_4(bool value)
	{
		___soundsOn_4 = value;
	}

	inline static int32_t get_offset_of_volume_5() { return static_cast<int32_t>(offsetof(GlobalSettings_t4218635622, ___volume_5)); }
	inline float get_volume_5() const { return ___volume_5; }
	inline float* get_address_of_volume_5() { return &___volume_5; }
	inline void set_volume_5(float value)
	{
		___volume_5 = value;
	}

	inline static int32_t get_offset_of_musicToggled_6() { return static_cast<int32_t>(offsetof(GlobalSettings_t4218635622, ___musicToggled_6)); }
	inline MusicToggled_t4291538686 * get_musicToggled_6() const { return ___musicToggled_6; }
	inline MusicToggled_t4291538686 ** get_address_of_musicToggled_6() { return &___musicToggled_6; }
	inline void set_musicToggled_6(MusicToggled_t4291538686 * value)
	{
		___musicToggled_6 = value;
		Il2CppCodeGenWriteBarrier(&___musicToggled_6, value);
	}
};

struct GlobalSettings_t4218635622_StaticFields
{
public:
	// GlobalSettings GlobalSettings::_instance
	GlobalSettings_t4218635622 * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(GlobalSettings_t4218635622_StaticFields, ____instance_2)); }
	inline GlobalSettings_t4218635622 * get__instance_2() const { return ____instance_2; }
	inline GlobalSettings_t4218635622 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(GlobalSettings_t4218635622 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
