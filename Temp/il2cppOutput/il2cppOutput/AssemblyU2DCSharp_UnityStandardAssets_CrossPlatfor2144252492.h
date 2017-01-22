#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t2691167515;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatfor3675451859.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.Joystick
struct  Joystick_t2144252492  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_2;
	// System.Single UnityStandardAssets.CrossPlatformInput.Joystick::minPosX
	float ___minPosX_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.Joystick::maxPosX
	float ___maxPosX_4;
	// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_5;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_7;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::backToOrigin
	bool ___backToOrigin_8;
	// UnityEngine.AudioClip UnityStandardAssets.CrossPlatformInput.Joystick::movementSound
	AudioClip_t1932558630 * ___movementSound_9;
	// UnityEngine.AudioSource UnityStandardAssets.CrossPlatformInput.Joystick::audioSource
	AudioSource_t1135106623 * ___audioSource_10;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_t2243707580  ___m_StartPos_11;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_12;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_13;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_t2691167515 * ___m_HorizontalVirtualAxis_14;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_t2691167515 * ___m_VerticalVirtualAxis_15;

public:
	inline static int32_t get_offset_of_MovementRange_2() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___MovementRange_2)); }
	inline int32_t get_MovementRange_2() const { return ___MovementRange_2; }
	inline int32_t* get_address_of_MovementRange_2() { return &___MovementRange_2; }
	inline void set_MovementRange_2(int32_t value)
	{
		___MovementRange_2 = value;
	}

	inline static int32_t get_offset_of_minPosX_3() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___minPosX_3)); }
	inline float get_minPosX_3() const { return ___minPosX_3; }
	inline float* get_address_of_minPosX_3() { return &___minPosX_3; }
	inline void set_minPosX_3(float value)
	{
		___minPosX_3 = value;
	}

	inline static int32_t get_offset_of_maxPosX_4() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___maxPosX_4)); }
	inline float get_maxPosX_4() const { return ___maxPosX_4; }
	inline float* get_address_of_maxPosX_4() { return &___maxPosX_4; }
	inline void set_maxPosX_4(float value)
	{
		___maxPosX_4 = value;
	}

	inline static int32_t get_offset_of_axesToUse_5() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___axesToUse_5)); }
	inline int32_t get_axesToUse_5() const { return ___axesToUse_5; }
	inline int32_t* get_address_of_axesToUse_5() { return &___axesToUse_5; }
	inline void set_axesToUse_5(int32_t value)
	{
		___axesToUse_5 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_6() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___horizontalAxisName_6)); }
	inline String_t* get_horizontalAxisName_6() const { return ___horizontalAxisName_6; }
	inline String_t** get_address_of_horizontalAxisName_6() { return &___horizontalAxisName_6; }
	inline void set_horizontalAxisName_6(String_t* value)
	{
		___horizontalAxisName_6 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxisName_6, value);
	}

	inline static int32_t get_offset_of_verticalAxisName_7() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___verticalAxisName_7)); }
	inline String_t* get_verticalAxisName_7() const { return ___verticalAxisName_7; }
	inline String_t** get_address_of_verticalAxisName_7() { return &___verticalAxisName_7; }
	inline void set_verticalAxisName_7(String_t* value)
	{
		___verticalAxisName_7 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxisName_7, value);
	}

	inline static int32_t get_offset_of_backToOrigin_8() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___backToOrigin_8)); }
	inline bool get_backToOrigin_8() const { return ___backToOrigin_8; }
	inline bool* get_address_of_backToOrigin_8() { return &___backToOrigin_8; }
	inline void set_backToOrigin_8(bool value)
	{
		___backToOrigin_8 = value;
	}

	inline static int32_t get_offset_of_movementSound_9() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___movementSound_9)); }
	inline AudioClip_t1932558630 * get_movementSound_9() const { return ___movementSound_9; }
	inline AudioClip_t1932558630 ** get_address_of_movementSound_9() { return &___movementSound_9; }
	inline void set_movementSound_9(AudioClip_t1932558630 * value)
	{
		___movementSound_9 = value;
		Il2CppCodeGenWriteBarrier(&___movementSound_9, value);
	}

	inline static int32_t get_offset_of_audioSource_10() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___audioSource_10)); }
	inline AudioSource_t1135106623 * get_audioSource_10() const { return ___audioSource_10; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_10() { return &___audioSource_10; }
	inline void set_audioSource_10(AudioSource_t1135106623 * value)
	{
		___audioSource_10 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_10, value);
	}

	inline static int32_t get_offset_of_m_StartPos_11() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___m_StartPos_11)); }
	inline Vector3_t2243707580  get_m_StartPos_11() const { return ___m_StartPos_11; }
	inline Vector3_t2243707580 * get_address_of_m_StartPos_11() { return &___m_StartPos_11; }
	inline void set_m_StartPos_11(Vector3_t2243707580  value)
	{
		___m_StartPos_11 = value;
	}

	inline static int32_t get_offset_of_m_UseX_12() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___m_UseX_12)); }
	inline bool get_m_UseX_12() const { return ___m_UseX_12; }
	inline bool* get_address_of_m_UseX_12() { return &___m_UseX_12; }
	inline void set_m_UseX_12(bool value)
	{
		___m_UseX_12 = value;
	}

	inline static int32_t get_offset_of_m_UseY_13() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___m_UseY_13)); }
	inline bool get_m_UseY_13() const { return ___m_UseY_13; }
	inline bool* get_address_of_m_UseY_13() { return &___m_UseY_13; }
	inline void set_m_UseY_13(bool value)
	{
		___m_UseY_13 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_14() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___m_HorizontalVirtualAxis_14)); }
	inline VirtualAxis_t2691167515 * get_m_HorizontalVirtualAxis_14() const { return ___m_HorizontalVirtualAxis_14; }
	inline VirtualAxis_t2691167515 ** get_address_of_m_HorizontalVirtualAxis_14() { return &___m_HorizontalVirtualAxis_14; }
	inline void set_m_HorizontalVirtualAxis_14(VirtualAxis_t2691167515 * value)
	{
		___m_HorizontalVirtualAxis_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_HorizontalVirtualAxis_14, value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_15() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___m_VerticalVirtualAxis_15)); }
	inline VirtualAxis_t2691167515 * get_m_VerticalVirtualAxis_15() const { return ___m_VerticalVirtualAxis_15; }
	inline VirtualAxis_t2691167515 ** get_address_of_m_VerticalVirtualAxis_15() { return &___m_VerticalVirtualAxis_15; }
	inline void set_m_VerticalVirtualAxis_15(VirtualAxis_t2691167515 * value)
	{
		___m_VerticalVirtualAxis_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_VerticalVirtualAxis_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
