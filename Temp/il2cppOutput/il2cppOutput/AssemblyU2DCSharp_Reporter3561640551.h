#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Reporter/Sample>
struct List_1_t2554553608;
// System.Collections.Generic.List`1<Reporter/Log>
struct List_1_t2973303312;
// MultiKeyDictionary`3<System.String,System.String,Reporter/Log>
struct MultiKeyDictionary_3_t2062580724;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.String
struct String_t;
// Images
struct Images_t563431294;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// System.String[]
struct StringU5BU5D_t1642385972;
// Reporter/Log
struct Log_t3604182180;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Reporter_ReportView608488827.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Reporter
struct  Reporter_t3561640551  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<Reporter/Sample> Reporter::samples
	List_1_t2554553608 * ___samples_2;
	// System.Collections.Generic.List`1<Reporter/Log> Reporter::logs
	List_1_t2973303312 * ___logs_3;
	// System.Collections.Generic.List`1<Reporter/Log> Reporter::collapsedLogs
	List_1_t2973303312 * ___collapsedLogs_4;
	// System.Collections.Generic.List`1<Reporter/Log> Reporter::currentLog
	List_1_t2973303312 * ___currentLog_5;
	// MultiKeyDictionary`3<System.String,System.String,Reporter/Log> Reporter::logsDic
	MultiKeyDictionary_3_t2062580724 * ___logsDic_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Reporter::cachedString
	Dictionary_2_t3943999495 * ___cachedString_7;
	// System.Boolean Reporter::show
	bool ___show_8;
	// System.Boolean Reporter::collapse
	bool ___collapse_9;
	// System.Boolean Reporter::clearOnNewSceneLoaded
	bool ___clearOnNewSceneLoaded_10;
	// System.Boolean Reporter::showTime
	bool ___showTime_11;
	// System.Boolean Reporter::showScene
	bool ___showScene_12;
	// System.Boolean Reporter::showMemory
	bool ___showMemory_13;
	// System.Boolean Reporter::showFps
	bool ___showFps_14;
	// System.Boolean Reporter::showGraph
	bool ___showGraph_15;
	// System.Boolean Reporter::showLog
	bool ___showLog_16;
	// System.Boolean Reporter::showWarning
	bool ___showWarning_17;
	// System.Boolean Reporter::showError
	bool ___showError_18;
	// System.Int32 Reporter::numOfLogs
	int32_t ___numOfLogs_19;
	// System.Int32 Reporter::numOfLogsWarning
	int32_t ___numOfLogsWarning_20;
	// System.Int32 Reporter::numOfLogsError
	int32_t ___numOfLogsError_21;
	// System.Int32 Reporter::numOfCollapsedLogs
	int32_t ___numOfCollapsedLogs_22;
	// System.Int32 Reporter::numOfCollapsedLogsWarning
	int32_t ___numOfCollapsedLogsWarning_23;
	// System.Int32 Reporter::numOfCollapsedLogsError
	int32_t ___numOfCollapsedLogsError_24;
	// System.Boolean Reporter::showClearOnNewSceneLoadedButton
	bool ___showClearOnNewSceneLoadedButton_25;
	// System.Boolean Reporter::showTimeButton
	bool ___showTimeButton_26;
	// System.Boolean Reporter::showSceneButton
	bool ___showSceneButton_27;
	// System.Boolean Reporter::showMemButton
	bool ___showMemButton_28;
	// System.Boolean Reporter::showFpsButton
	bool ___showFpsButton_29;
	// System.Boolean Reporter::showSearchText
	bool ___showSearchText_30;
	// System.String Reporter::buildDate
	String_t* ___buildDate_31;
	// System.String Reporter::logDate
	String_t* ___logDate_32;
	// System.Single Reporter::logsMemUsage
	float ___logsMemUsage_33;
	// System.Single Reporter::graphMemUsage
	float ___graphMemUsage_34;
	// System.Single Reporter::gcTotalMemory
	float ___gcTotalMemory_35;
	// System.String Reporter::UserData
	String_t* ___UserData_36;
	// System.Single Reporter::fps
	float ___fps_37;
	// System.String Reporter::fpsText
	String_t* ___fpsText_38;
	// Reporter/ReportView Reporter::currentView
	int32_t ___currentView_39;
	// Images Reporter::images
	Images_t563431294 * ___images_41;
	// UnityEngine.GUIContent Reporter::clearContent
	GUIContent_t4210063000 * ___clearContent_42;
	// UnityEngine.GUIContent Reporter::collapseContent
	GUIContent_t4210063000 * ___collapseContent_43;
	// UnityEngine.GUIContent Reporter::clearOnNewSceneContent
	GUIContent_t4210063000 * ___clearOnNewSceneContent_44;
	// UnityEngine.GUIContent Reporter::showTimeContent
	GUIContent_t4210063000 * ___showTimeContent_45;
	// UnityEngine.GUIContent Reporter::showSceneContent
	GUIContent_t4210063000 * ___showSceneContent_46;
	// UnityEngine.GUIContent Reporter::userContent
	GUIContent_t4210063000 * ___userContent_47;
	// UnityEngine.GUIContent Reporter::showMemoryContent
	GUIContent_t4210063000 * ___showMemoryContent_48;
	// UnityEngine.GUIContent Reporter::softwareContent
	GUIContent_t4210063000 * ___softwareContent_49;
	// UnityEngine.GUIContent Reporter::dateContent
	GUIContent_t4210063000 * ___dateContent_50;
	// UnityEngine.GUIContent Reporter::showFpsContent
	GUIContent_t4210063000 * ___showFpsContent_51;
	// UnityEngine.GUIContent Reporter::infoContent
	GUIContent_t4210063000 * ___infoContent_52;
	// UnityEngine.GUIContent Reporter::searchContent
	GUIContent_t4210063000 * ___searchContent_53;
	// UnityEngine.GUIContent Reporter::closeContent
	GUIContent_t4210063000 * ___closeContent_54;
	// UnityEngine.GUIContent Reporter::buildFromContent
	GUIContent_t4210063000 * ___buildFromContent_55;
	// UnityEngine.GUIContent Reporter::systemInfoContent
	GUIContent_t4210063000 * ___systemInfoContent_56;
	// UnityEngine.GUIContent Reporter::graphicsInfoContent
	GUIContent_t4210063000 * ___graphicsInfoContent_57;
	// UnityEngine.GUIContent Reporter::backContent
	GUIContent_t4210063000 * ___backContent_58;
	// UnityEngine.GUIContent Reporter::logContent
	GUIContent_t4210063000 * ___logContent_59;
	// UnityEngine.GUIContent Reporter::warningContent
	GUIContent_t4210063000 * ___warningContent_60;
	// UnityEngine.GUIContent Reporter::errorContent
	GUIContent_t4210063000 * ___errorContent_61;
	// UnityEngine.GUIStyle Reporter::barStyle
	GUIStyle_t1799908754 * ___barStyle_62;
	// UnityEngine.GUIStyle Reporter::buttonActiveStyle
	GUIStyle_t1799908754 * ___buttonActiveStyle_63;
	// UnityEngine.GUIStyle Reporter::nonStyle
	GUIStyle_t1799908754 * ___nonStyle_64;
	// UnityEngine.GUIStyle Reporter::lowerLeftFontStyle
	GUIStyle_t1799908754 * ___lowerLeftFontStyle_65;
	// UnityEngine.GUIStyle Reporter::backStyle
	GUIStyle_t1799908754 * ___backStyle_66;
	// UnityEngine.GUIStyle Reporter::evenLogStyle
	GUIStyle_t1799908754 * ___evenLogStyle_67;
	// UnityEngine.GUIStyle Reporter::oddLogStyle
	GUIStyle_t1799908754 * ___oddLogStyle_68;
	// UnityEngine.GUIStyle Reporter::logButtonStyle
	GUIStyle_t1799908754 * ___logButtonStyle_69;
	// UnityEngine.GUIStyle Reporter::selectedLogStyle
	GUIStyle_t1799908754 * ___selectedLogStyle_70;
	// UnityEngine.GUIStyle Reporter::selectedLogFontStyle
	GUIStyle_t1799908754 * ___selectedLogFontStyle_71;
	// UnityEngine.GUIStyle Reporter::stackLabelStyle
	GUIStyle_t1799908754 * ___stackLabelStyle_72;
	// UnityEngine.GUIStyle Reporter::scrollerStyle
	GUIStyle_t1799908754 * ___scrollerStyle_73;
	// UnityEngine.GUIStyle Reporter::searchStyle
	GUIStyle_t1799908754 * ___searchStyle_74;
	// UnityEngine.GUIStyle Reporter::sliderBackStyle
	GUIStyle_t1799908754 * ___sliderBackStyle_75;
	// UnityEngine.GUIStyle Reporter::sliderThumbStyle
	GUIStyle_t1799908754 * ___sliderThumbStyle_76;
	// UnityEngine.GUISkin Reporter::toolbarScrollerSkin
	GUISkin_t1436893342 * ___toolbarScrollerSkin_77;
	// UnityEngine.GUISkin Reporter::logScrollerSkin
	GUISkin_t1436893342 * ___logScrollerSkin_78;
	// UnityEngine.GUISkin Reporter::graphScrollerSkin
	GUISkin_t1436893342 * ___graphScrollerSkin_79;
	// UnityEngine.Vector2 Reporter::size
	Vector2_t2243707579  ___size_80;
	// System.Single Reporter::maxSize
	float ___maxSize_81;
	// System.Int32 Reporter::numOfCircleToShow
	int32_t ___numOfCircleToShow_82;
	// System.String Reporter::currentScene
	String_t* ___currentScene_84;
	// System.String Reporter::filterText
	String_t* ___filterText_85;
	// System.String Reporter::deviceModel
	String_t* ___deviceModel_86;
	// System.String Reporter::deviceType
	String_t* ___deviceType_87;
	// System.String Reporter::deviceName
	String_t* ___deviceName_88;
	// System.String Reporter::graphicsMemorySize
	String_t* ___graphicsMemorySize_89;
	// System.String Reporter::maxTextureSize
	String_t* ___maxTextureSize_90;
	// System.String Reporter::systemMemorySize
	String_t* ___systemMemorySize_91;
	// System.Boolean Reporter::Initialized
	bool ___Initialized_92;
	// UnityEngine.Rect Reporter::screenRect
	Rect_t3681755626  ___screenRect_93;
	// UnityEngine.Rect Reporter::toolBarRect
	Rect_t3681755626  ___toolBarRect_94;
	// UnityEngine.Rect Reporter::logsRect
	Rect_t3681755626  ___logsRect_95;
	// UnityEngine.Rect Reporter::stackRect
	Rect_t3681755626  ___stackRect_96;
	// UnityEngine.Rect Reporter::graphRect
	Rect_t3681755626  ___graphRect_97;
	// UnityEngine.Rect Reporter::graphMinRect
	Rect_t3681755626  ___graphMinRect_98;
	// UnityEngine.Rect Reporter::graphMaxRect
	Rect_t3681755626  ___graphMaxRect_99;
	// UnityEngine.Rect Reporter::buttomRect
	Rect_t3681755626  ___buttomRect_100;
	// UnityEngine.Vector2 Reporter::stackRectTopLeft
	Vector2_t2243707579  ___stackRectTopLeft_101;
	// UnityEngine.Rect Reporter::detailRect
	Rect_t3681755626  ___detailRect_102;
	// UnityEngine.Vector2 Reporter::scrollPosition
	Vector2_t2243707579  ___scrollPosition_103;
	// UnityEngine.Vector2 Reporter::scrollPosition2
	Vector2_t2243707579  ___scrollPosition2_104;
	// UnityEngine.Vector2 Reporter::toolbarScrollPosition
	Vector2_t2243707579  ___toolbarScrollPosition_105;
	// Reporter/Log Reporter::selectedLog
	Log_t3604182180 * ___selectedLog_106;
	// System.Single Reporter::toolbarOldDrag
	float ___toolbarOldDrag_107;
	// System.Single Reporter::oldDrag
	float ___oldDrag_108;
	// System.Single Reporter::oldDrag2
	float ___oldDrag2_109;
	// System.Single Reporter::oldDrag3
	float ___oldDrag3_110;
	// System.Int32 Reporter::startIndex
	int32_t ___startIndex_111;
	// UnityEngine.Rect Reporter::countRect
	Rect_t3681755626  ___countRect_112;
	// UnityEngine.Rect Reporter::timeRect
	Rect_t3681755626  ___timeRect_113;
	// UnityEngine.Rect Reporter::timeLabelRect
	Rect_t3681755626  ___timeLabelRect_114;
	// UnityEngine.Rect Reporter::sceneRect
	Rect_t3681755626  ___sceneRect_115;
	// UnityEngine.Rect Reporter::sceneLabelRect
	Rect_t3681755626  ___sceneLabelRect_116;
	// UnityEngine.Rect Reporter::memoryRect
	Rect_t3681755626  ___memoryRect_117;
	// UnityEngine.Rect Reporter::memoryLabelRect
	Rect_t3681755626  ___memoryLabelRect_118;
	// UnityEngine.Rect Reporter::fpsRect
	Rect_t3681755626  ___fpsRect_119;
	// UnityEngine.Rect Reporter::fpsLabelRect
	Rect_t3681755626  ___fpsLabelRect_120;
	// UnityEngine.GUIContent Reporter::tempContent
	GUIContent_t4210063000 * ___tempContent_121;
	// UnityEngine.Vector2 Reporter::infoScrollPosition
	Vector2_t2243707579  ___infoScrollPosition_122;
	// UnityEngine.Vector2 Reporter::oldInfoDrag
	Vector2_t2243707579  ___oldInfoDrag_123;
	// UnityEngine.Rect Reporter::tempRect
	Rect_t3681755626  ___tempRect_124;
	// System.Single Reporter::graphSize
	float ___graphSize_125;
	// System.Int32 Reporter::startFrame
	int32_t ___startFrame_126;
	// System.Int32 Reporter::currentFrame
	int32_t ___currentFrame_127;
	// UnityEngine.Vector3 Reporter::tempVector1
	Vector3_t2243707580  ___tempVector1_128;
	// UnityEngine.Vector3 Reporter::tempVector2
	Vector3_t2243707580  ___tempVector2_129;
	// UnityEngine.Vector2 Reporter::graphScrollerPos
	Vector2_t2243707579  ___graphScrollerPos_130;
	// System.Single Reporter::maxFpsValue
	float ___maxFpsValue_131;
	// System.Single Reporter::minFpsValue
	float ___minFpsValue_132;
	// System.Single Reporter::maxMemoryValue
	float ___maxMemoryValue_133;
	// System.Single Reporter::minMemoryValue
	float ___minMemoryValue_134;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Reporter::gestureDetector
	List_1_t1612828711 * ___gestureDetector_135;
	// UnityEngine.Vector2 Reporter::gestureSum
	Vector2_t2243707579  ___gestureSum_136;
	// System.Single Reporter::gestureLength
	float ___gestureLength_137;
	// System.Int32 Reporter::gestureCount
	int32_t ___gestureCount_138;
	// System.Single Reporter::lastClickTime
	float ___lastClickTime_139;
	// UnityEngine.Vector2 Reporter::startPos
	Vector2_t2243707579  ___startPos_140;
	// UnityEngine.Vector2 Reporter::downPos
	Vector2_t2243707579  ___downPos_141;
	// UnityEngine.Vector2 Reporter::mousePosition
	Vector2_t2243707579  ___mousePosition_142;
	// System.Int32 Reporter::frames
	int32_t ___frames_143;
	// System.Boolean Reporter::firstTime
	bool ___firstTime_144;
	// System.Single Reporter::lastUpdate
	float ___lastUpdate_145;
	// System.Collections.Generic.List`1<Reporter/Log> Reporter::threadedLogs
	List_1_t2973303312 * ___threadedLogs_148;

public:
	inline static int32_t get_offset_of_samples_2() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___samples_2)); }
	inline List_1_t2554553608 * get_samples_2() const { return ___samples_2; }
	inline List_1_t2554553608 ** get_address_of_samples_2() { return &___samples_2; }
	inline void set_samples_2(List_1_t2554553608 * value)
	{
		___samples_2 = value;
		Il2CppCodeGenWriteBarrier(&___samples_2, value);
	}

	inline static int32_t get_offset_of_logs_3() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logs_3)); }
	inline List_1_t2973303312 * get_logs_3() const { return ___logs_3; }
	inline List_1_t2973303312 ** get_address_of_logs_3() { return &___logs_3; }
	inline void set_logs_3(List_1_t2973303312 * value)
	{
		___logs_3 = value;
		Il2CppCodeGenWriteBarrier(&___logs_3, value);
	}

	inline static int32_t get_offset_of_collapsedLogs_4() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___collapsedLogs_4)); }
	inline List_1_t2973303312 * get_collapsedLogs_4() const { return ___collapsedLogs_4; }
	inline List_1_t2973303312 ** get_address_of_collapsedLogs_4() { return &___collapsedLogs_4; }
	inline void set_collapsedLogs_4(List_1_t2973303312 * value)
	{
		___collapsedLogs_4 = value;
		Il2CppCodeGenWriteBarrier(&___collapsedLogs_4, value);
	}

	inline static int32_t get_offset_of_currentLog_5() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___currentLog_5)); }
	inline List_1_t2973303312 * get_currentLog_5() const { return ___currentLog_5; }
	inline List_1_t2973303312 ** get_address_of_currentLog_5() { return &___currentLog_5; }
	inline void set_currentLog_5(List_1_t2973303312 * value)
	{
		___currentLog_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentLog_5, value);
	}

	inline static int32_t get_offset_of_logsDic_6() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logsDic_6)); }
	inline MultiKeyDictionary_3_t2062580724 * get_logsDic_6() const { return ___logsDic_6; }
	inline MultiKeyDictionary_3_t2062580724 ** get_address_of_logsDic_6() { return &___logsDic_6; }
	inline void set_logsDic_6(MultiKeyDictionary_3_t2062580724 * value)
	{
		___logsDic_6 = value;
		Il2CppCodeGenWriteBarrier(&___logsDic_6, value);
	}

	inline static int32_t get_offset_of_cachedString_7() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___cachedString_7)); }
	inline Dictionary_2_t3943999495 * get_cachedString_7() const { return ___cachedString_7; }
	inline Dictionary_2_t3943999495 ** get_address_of_cachedString_7() { return &___cachedString_7; }
	inline void set_cachedString_7(Dictionary_2_t3943999495 * value)
	{
		___cachedString_7 = value;
		Il2CppCodeGenWriteBarrier(&___cachedString_7, value);
	}

	inline static int32_t get_offset_of_show_8() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___show_8)); }
	inline bool get_show_8() const { return ___show_8; }
	inline bool* get_address_of_show_8() { return &___show_8; }
	inline void set_show_8(bool value)
	{
		___show_8 = value;
	}

	inline static int32_t get_offset_of_collapse_9() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___collapse_9)); }
	inline bool get_collapse_9() const { return ___collapse_9; }
	inline bool* get_address_of_collapse_9() { return &___collapse_9; }
	inline void set_collapse_9(bool value)
	{
		___collapse_9 = value;
	}

	inline static int32_t get_offset_of_clearOnNewSceneLoaded_10() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___clearOnNewSceneLoaded_10)); }
	inline bool get_clearOnNewSceneLoaded_10() const { return ___clearOnNewSceneLoaded_10; }
	inline bool* get_address_of_clearOnNewSceneLoaded_10() { return &___clearOnNewSceneLoaded_10; }
	inline void set_clearOnNewSceneLoaded_10(bool value)
	{
		___clearOnNewSceneLoaded_10 = value;
	}

	inline static int32_t get_offset_of_showTime_11() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showTime_11)); }
	inline bool get_showTime_11() const { return ___showTime_11; }
	inline bool* get_address_of_showTime_11() { return &___showTime_11; }
	inline void set_showTime_11(bool value)
	{
		___showTime_11 = value;
	}

	inline static int32_t get_offset_of_showScene_12() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showScene_12)); }
	inline bool get_showScene_12() const { return ___showScene_12; }
	inline bool* get_address_of_showScene_12() { return &___showScene_12; }
	inline void set_showScene_12(bool value)
	{
		___showScene_12 = value;
	}

	inline static int32_t get_offset_of_showMemory_13() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showMemory_13)); }
	inline bool get_showMemory_13() const { return ___showMemory_13; }
	inline bool* get_address_of_showMemory_13() { return &___showMemory_13; }
	inline void set_showMemory_13(bool value)
	{
		___showMemory_13 = value;
	}

	inline static int32_t get_offset_of_showFps_14() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showFps_14)); }
	inline bool get_showFps_14() const { return ___showFps_14; }
	inline bool* get_address_of_showFps_14() { return &___showFps_14; }
	inline void set_showFps_14(bool value)
	{
		___showFps_14 = value;
	}

	inline static int32_t get_offset_of_showGraph_15() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showGraph_15)); }
	inline bool get_showGraph_15() const { return ___showGraph_15; }
	inline bool* get_address_of_showGraph_15() { return &___showGraph_15; }
	inline void set_showGraph_15(bool value)
	{
		___showGraph_15 = value;
	}

	inline static int32_t get_offset_of_showLog_16() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showLog_16)); }
	inline bool get_showLog_16() const { return ___showLog_16; }
	inline bool* get_address_of_showLog_16() { return &___showLog_16; }
	inline void set_showLog_16(bool value)
	{
		___showLog_16 = value;
	}

	inline static int32_t get_offset_of_showWarning_17() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showWarning_17)); }
	inline bool get_showWarning_17() const { return ___showWarning_17; }
	inline bool* get_address_of_showWarning_17() { return &___showWarning_17; }
	inline void set_showWarning_17(bool value)
	{
		___showWarning_17 = value;
	}

	inline static int32_t get_offset_of_showError_18() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showError_18)); }
	inline bool get_showError_18() const { return ___showError_18; }
	inline bool* get_address_of_showError_18() { return &___showError_18; }
	inline void set_showError_18(bool value)
	{
		___showError_18 = value;
	}

	inline static int32_t get_offset_of_numOfLogs_19() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfLogs_19)); }
	inline int32_t get_numOfLogs_19() const { return ___numOfLogs_19; }
	inline int32_t* get_address_of_numOfLogs_19() { return &___numOfLogs_19; }
	inline void set_numOfLogs_19(int32_t value)
	{
		___numOfLogs_19 = value;
	}

	inline static int32_t get_offset_of_numOfLogsWarning_20() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfLogsWarning_20)); }
	inline int32_t get_numOfLogsWarning_20() const { return ___numOfLogsWarning_20; }
	inline int32_t* get_address_of_numOfLogsWarning_20() { return &___numOfLogsWarning_20; }
	inline void set_numOfLogsWarning_20(int32_t value)
	{
		___numOfLogsWarning_20 = value;
	}

	inline static int32_t get_offset_of_numOfLogsError_21() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfLogsError_21)); }
	inline int32_t get_numOfLogsError_21() const { return ___numOfLogsError_21; }
	inline int32_t* get_address_of_numOfLogsError_21() { return &___numOfLogsError_21; }
	inline void set_numOfLogsError_21(int32_t value)
	{
		___numOfLogsError_21 = value;
	}

	inline static int32_t get_offset_of_numOfCollapsedLogs_22() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfCollapsedLogs_22)); }
	inline int32_t get_numOfCollapsedLogs_22() const { return ___numOfCollapsedLogs_22; }
	inline int32_t* get_address_of_numOfCollapsedLogs_22() { return &___numOfCollapsedLogs_22; }
	inline void set_numOfCollapsedLogs_22(int32_t value)
	{
		___numOfCollapsedLogs_22 = value;
	}

	inline static int32_t get_offset_of_numOfCollapsedLogsWarning_23() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfCollapsedLogsWarning_23)); }
	inline int32_t get_numOfCollapsedLogsWarning_23() const { return ___numOfCollapsedLogsWarning_23; }
	inline int32_t* get_address_of_numOfCollapsedLogsWarning_23() { return &___numOfCollapsedLogsWarning_23; }
	inline void set_numOfCollapsedLogsWarning_23(int32_t value)
	{
		___numOfCollapsedLogsWarning_23 = value;
	}

	inline static int32_t get_offset_of_numOfCollapsedLogsError_24() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfCollapsedLogsError_24)); }
	inline int32_t get_numOfCollapsedLogsError_24() const { return ___numOfCollapsedLogsError_24; }
	inline int32_t* get_address_of_numOfCollapsedLogsError_24() { return &___numOfCollapsedLogsError_24; }
	inline void set_numOfCollapsedLogsError_24(int32_t value)
	{
		___numOfCollapsedLogsError_24 = value;
	}

	inline static int32_t get_offset_of_showClearOnNewSceneLoadedButton_25() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showClearOnNewSceneLoadedButton_25)); }
	inline bool get_showClearOnNewSceneLoadedButton_25() const { return ___showClearOnNewSceneLoadedButton_25; }
	inline bool* get_address_of_showClearOnNewSceneLoadedButton_25() { return &___showClearOnNewSceneLoadedButton_25; }
	inline void set_showClearOnNewSceneLoadedButton_25(bool value)
	{
		___showClearOnNewSceneLoadedButton_25 = value;
	}

	inline static int32_t get_offset_of_showTimeButton_26() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showTimeButton_26)); }
	inline bool get_showTimeButton_26() const { return ___showTimeButton_26; }
	inline bool* get_address_of_showTimeButton_26() { return &___showTimeButton_26; }
	inline void set_showTimeButton_26(bool value)
	{
		___showTimeButton_26 = value;
	}

	inline static int32_t get_offset_of_showSceneButton_27() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showSceneButton_27)); }
	inline bool get_showSceneButton_27() const { return ___showSceneButton_27; }
	inline bool* get_address_of_showSceneButton_27() { return &___showSceneButton_27; }
	inline void set_showSceneButton_27(bool value)
	{
		___showSceneButton_27 = value;
	}

	inline static int32_t get_offset_of_showMemButton_28() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showMemButton_28)); }
	inline bool get_showMemButton_28() const { return ___showMemButton_28; }
	inline bool* get_address_of_showMemButton_28() { return &___showMemButton_28; }
	inline void set_showMemButton_28(bool value)
	{
		___showMemButton_28 = value;
	}

	inline static int32_t get_offset_of_showFpsButton_29() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showFpsButton_29)); }
	inline bool get_showFpsButton_29() const { return ___showFpsButton_29; }
	inline bool* get_address_of_showFpsButton_29() { return &___showFpsButton_29; }
	inline void set_showFpsButton_29(bool value)
	{
		___showFpsButton_29 = value;
	}

	inline static int32_t get_offset_of_showSearchText_30() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showSearchText_30)); }
	inline bool get_showSearchText_30() const { return ___showSearchText_30; }
	inline bool* get_address_of_showSearchText_30() { return &___showSearchText_30; }
	inline void set_showSearchText_30(bool value)
	{
		___showSearchText_30 = value;
	}

	inline static int32_t get_offset_of_buildDate_31() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___buildDate_31)); }
	inline String_t* get_buildDate_31() const { return ___buildDate_31; }
	inline String_t** get_address_of_buildDate_31() { return &___buildDate_31; }
	inline void set_buildDate_31(String_t* value)
	{
		___buildDate_31 = value;
		Il2CppCodeGenWriteBarrier(&___buildDate_31, value);
	}

	inline static int32_t get_offset_of_logDate_32() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logDate_32)); }
	inline String_t* get_logDate_32() const { return ___logDate_32; }
	inline String_t** get_address_of_logDate_32() { return &___logDate_32; }
	inline void set_logDate_32(String_t* value)
	{
		___logDate_32 = value;
		Il2CppCodeGenWriteBarrier(&___logDate_32, value);
	}

	inline static int32_t get_offset_of_logsMemUsage_33() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logsMemUsage_33)); }
	inline float get_logsMemUsage_33() const { return ___logsMemUsage_33; }
	inline float* get_address_of_logsMemUsage_33() { return &___logsMemUsage_33; }
	inline void set_logsMemUsage_33(float value)
	{
		___logsMemUsage_33 = value;
	}

	inline static int32_t get_offset_of_graphMemUsage_34() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphMemUsage_34)); }
	inline float get_graphMemUsage_34() const { return ___graphMemUsage_34; }
	inline float* get_address_of_graphMemUsage_34() { return &___graphMemUsage_34; }
	inline void set_graphMemUsage_34(float value)
	{
		___graphMemUsage_34 = value;
	}

	inline static int32_t get_offset_of_gcTotalMemory_35() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___gcTotalMemory_35)); }
	inline float get_gcTotalMemory_35() const { return ___gcTotalMemory_35; }
	inline float* get_address_of_gcTotalMemory_35() { return &___gcTotalMemory_35; }
	inline void set_gcTotalMemory_35(float value)
	{
		___gcTotalMemory_35 = value;
	}

	inline static int32_t get_offset_of_UserData_36() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___UserData_36)); }
	inline String_t* get_UserData_36() const { return ___UserData_36; }
	inline String_t** get_address_of_UserData_36() { return &___UserData_36; }
	inline void set_UserData_36(String_t* value)
	{
		___UserData_36 = value;
		Il2CppCodeGenWriteBarrier(&___UserData_36, value);
	}

	inline static int32_t get_offset_of_fps_37() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___fps_37)); }
	inline float get_fps_37() const { return ___fps_37; }
	inline float* get_address_of_fps_37() { return &___fps_37; }
	inline void set_fps_37(float value)
	{
		___fps_37 = value;
	}

	inline static int32_t get_offset_of_fpsText_38() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___fpsText_38)); }
	inline String_t* get_fpsText_38() const { return ___fpsText_38; }
	inline String_t** get_address_of_fpsText_38() { return &___fpsText_38; }
	inline void set_fpsText_38(String_t* value)
	{
		___fpsText_38 = value;
		Il2CppCodeGenWriteBarrier(&___fpsText_38, value);
	}

	inline static int32_t get_offset_of_currentView_39() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___currentView_39)); }
	inline int32_t get_currentView_39() const { return ___currentView_39; }
	inline int32_t* get_address_of_currentView_39() { return &___currentView_39; }
	inline void set_currentView_39(int32_t value)
	{
		___currentView_39 = value;
	}

	inline static int32_t get_offset_of_images_41() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___images_41)); }
	inline Images_t563431294 * get_images_41() const { return ___images_41; }
	inline Images_t563431294 ** get_address_of_images_41() { return &___images_41; }
	inline void set_images_41(Images_t563431294 * value)
	{
		___images_41 = value;
		Il2CppCodeGenWriteBarrier(&___images_41, value);
	}

	inline static int32_t get_offset_of_clearContent_42() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___clearContent_42)); }
	inline GUIContent_t4210063000 * get_clearContent_42() const { return ___clearContent_42; }
	inline GUIContent_t4210063000 ** get_address_of_clearContent_42() { return &___clearContent_42; }
	inline void set_clearContent_42(GUIContent_t4210063000 * value)
	{
		___clearContent_42 = value;
		Il2CppCodeGenWriteBarrier(&___clearContent_42, value);
	}

	inline static int32_t get_offset_of_collapseContent_43() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___collapseContent_43)); }
	inline GUIContent_t4210063000 * get_collapseContent_43() const { return ___collapseContent_43; }
	inline GUIContent_t4210063000 ** get_address_of_collapseContent_43() { return &___collapseContent_43; }
	inline void set_collapseContent_43(GUIContent_t4210063000 * value)
	{
		___collapseContent_43 = value;
		Il2CppCodeGenWriteBarrier(&___collapseContent_43, value);
	}

	inline static int32_t get_offset_of_clearOnNewSceneContent_44() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___clearOnNewSceneContent_44)); }
	inline GUIContent_t4210063000 * get_clearOnNewSceneContent_44() const { return ___clearOnNewSceneContent_44; }
	inline GUIContent_t4210063000 ** get_address_of_clearOnNewSceneContent_44() { return &___clearOnNewSceneContent_44; }
	inline void set_clearOnNewSceneContent_44(GUIContent_t4210063000 * value)
	{
		___clearOnNewSceneContent_44 = value;
		Il2CppCodeGenWriteBarrier(&___clearOnNewSceneContent_44, value);
	}

	inline static int32_t get_offset_of_showTimeContent_45() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showTimeContent_45)); }
	inline GUIContent_t4210063000 * get_showTimeContent_45() const { return ___showTimeContent_45; }
	inline GUIContent_t4210063000 ** get_address_of_showTimeContent_45() { return &___showTimeContent_45; }
	inline void set_showTimeContent_45(GUIContent_t4210063000 * value)
	{
		___showTimeContent_45 = value;
		Il2CppCodeGenWriteBarrier(&___showTimeContent_45, value);
	}

	inline static int32_t get_offset_of_showSceneContent_46() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showSceneContent_46)); }
	inline GUIContent_t4210063000 * get_showSceneContent_46() const { return ___showSceneContent_46; }
	inline GUIContent_t4210063000 ** get_address_of_showSceneContent_46() { return &___showSceneContent_46; }
	inline void set_showSceneContent_46(GUIContent_t4210063000 * value)
	{
		___showSceneContent_46 = value;
		Il2CppCodeGenWriteBarrier(&___showSceneContent_46, value);
	}

	inline static int32_t get_offset_of_userContent_47() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___userContent_47)); }
	inline GUIContent_t4210063000 * get_userContent_47() const { return ___userContent_47; }
	inline GUIContent_t4210063000 ** get_address_of_userContent_47() { return &___userContent_47; }
	inline void set_userContent_47(GUIContent_t4210063000 * value)
	{
		___userContent_47 = value;
		Il2CppCodeGenWriteBarrier(&___userContent_47, value);
	}

	inline static int32_t get_offset_of_showMemoryContent_48() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showMemoryContent_48)); }
	inline GUIContent_t4210063000 * get_showMemoryContent_48() const { return ___showMemoryContent_48; }
	inline GUIContent_t4210063000 ** get_address_of_showMemoryContent_48() { return &___showMemoryContent_48; }
	inline void set_showMemoryContent_48(GUIContent_t4210063000 * value)
	{
		___showMemoryContent_48 = value;
		Il2CppCodeGenWriteBarrier(&___showMemoryContent_48, value);
	}

	inline static int32_t get_offset_of_softwareContent_49() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___softwareContent_49)); }
	inline GUIContent_t4210063000 * get_softwareContent_49() const { return ___softwareContent_49; }
	inline GUIContent_t4210063000 ** get_address_of_softwareContent_49() { return &___softwareContent_49; }
	inline void set_softwareContent_49(GUIContent_t4210063000 * value)
	{
		___softwareContent_49 = value;
		Il2CppCodeGenWriteBarrier(&___softwareContent_49, value);
	}

	inline static int32_t get_offset_of_dateContent_50() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___dateContent_50)); }
	inline GUIContent_t4210063000 * get_dateContent_50() const { return ___dateContent_50; }
	inline GUIContent_t4210063000 ** get_address_of_dateContent_50() { return &___dateContent_50; }
	inline void set_dateContent_50(GUIContent_t4210063000 * value)
	{
		___dateContent_50 = value;
		Il2CppCodeGenWriteBarrier(&___dateContent_50, value);
	}

	inline static int32_t get_offset_of_showFpsContent_51() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___showFpsContent_51)); }
	inline GUIContent_t4210063000 * get_showFpsContent_51() const { return ___showFpsContent_51; }
	inline GUIContent_t4210063000 ** get_address_of_showFpsContent_51() { return &___showFpsContent_51; }
	inline void set_showFpsContent_51(GUIContent_t4210063000 * value)
	{
		___showFpsContent_51 = value;
		Il2CppCodeGenWriteBarrier(&___showFpsContent_51, value);
	}

	inline static int32_t get_offset_of_infoContent_52() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___infoContent_52)); }
	inline GUIContent_t4210063000 * get_infoContent_52() const { return ___infoContent_52; }
	inline GUIContent_t4210063000 ** get_address_of_infoContent_52() { return &___infoContent_52; }
	inline void set_infoContent_52(GUIContent_t4210063000 * value)
	{
		___infoContent_52 = value;
		Il2CppCodeGenWriteBarrier(&___infoContent_52, value);
	}

	inline static int32_t get_offset_of_searchContent_53() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___searchContent_53)); }
	inline GUIContent_t4210063000 * get_searchContent_53() const { return ___searchContent_53; }
	inline GUIContent_t4210063000 ** get_address_of_searchContent_53() { return &___searchContent_53; }
	inline void set_searchContent_53(GUIContent_t4210063000 * value)
	{
		___searchContent_53 = value;
		Il2CppCodeGenWriteBarrier(&___searchContent_53, value);
	}

	inline static int32_t get_offset_of_closeContent_54() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___closeContent_54)); }
	inline GUIContent_t4210063000 * get_closeContent_54() const { return ___closeContent_54; }
	inline GUIContent_t4210063000 ** get_address_of_closeContent_54() { return &___closeContent_54; }
	inline void set_closeContent_54(GUIContent_t4210063000 * value)
	{
		___closeContent_54 = value;
		Il2CppCodeGenWriteBarrier(&___closeContent_54, value);
	}

	inline static int32_t get_offset_of_buildFromContent_55() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___buildFromContent_55)); }
	inline GUIContent_t4210063000 * get_buildFromContent_55() const { return ___buildFromContent_55; }
	inline GUIContent_t4210063000 ** get_address_of_buildFromContent_55() { return &___buildFromContent_55; }
	inline void set_buildFromContent_55(GUIContent_t4210063000 * value)
	{
		___buildFromContent_55 = value;
		Il2CppCodeGenWriteBarrier(&___buildFromContent_55, value);
	}

	inline static int32_t get_offset_of_systemInfoContent_56() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___systemInfoContent_56)); }
	inline GUIContent_t4210063000 * get_systemInfoContent_56() const { return ___systemInfoContent_56; }
	inline GUIContent_t4210063000 ** get_address_of_systemInfoContent_56() { return &___systemInfoContent_56; }
	inline void set_systemInfoContent_56(GUIContent_t4210063000 * value)
	{
		___systemInfoContent_56 = value;
		Il2CppCodeGenWriteBarrier(&___systemInfoContent_56, value);
	}

	inline static int32_t get_offset_of_graphicsInfoContent_57() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphicsInfoContent_57)); }
	inline GUIContent_t4210063000 * get_graphicsInfoContent_57() const { return ___graphicsInfoContent_57; }
	inline GUIContent_t4210063000 ** get_address_of_graphicsInfoContent_57() { return &___graphicsInfoContent_57; }
	inline void set_graphicsInfoContent_57(GUIContent_t4210063000 * value)
	{
		___graphicsInfoContent_57 = value;
		Il2CppCodeGenWriteBarrier(&___graphicsInfoContent_57, value);
	}

	inline static int32_t get_offset_of_backContent_58() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___backContent_58)); }
	inline GUIContent_t4210063000 * get_backContent_58() const { return ___backContent_58; }
	inline GUIContent_t4210063000 ** get_address_of_backContent_58() { return &___backContent_58; }
	inline void set_backContent_58(GUIContent_t4210063000 * value)
	{
		___backContent_58 = value;
		Il2CppCodeGenWriteBarrier(&___backContent_58, value);
	}

	inline static int32_t get_offset_of_logContent_59() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logContent_59)); }
	inline GUIContent_t4210063000 * get_logContent_59() const { return ___logContent_59; }
	inline GUIContent_t4210063000 ** get_address_of_logContent_59() { return &___logContent_59; }
	inline void set_logContent_59(GUIContent_t4210063000 * value)
	{
		___logContent_59 = value;
		Il2CppCodeGenWriteBarrier(&___logContent_59, value);
	}

	inline static int32_t get_offset_of_warningContent_60() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___warningContent_60)); }
	inline GUIContent_t4210063000 * get_warningContent_60() const { return ___warningContent_60; }
	inline GUIContent_t4210063000 ** get_address_of_warningContent_60() { return &___warningContent_60; }
	inline void set_warningContent_60(GUIContent_t4210063000 * value)
	{
		___warningContent_60 = value;
		Il2CppCodeGenWriteBarrier(&___warningContent_60, value);
	}

	inline static int32_t get_offset_of_errorContent_61() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___errorContent_61)); }
	inline GUIContent_t4210063000 * get_errorContent_61() const { return ___errorContent_61; }
	inline GUIContent_t4210063000 ** get_address_of_errorContent_61() { return &___errorContent_61; }
	inline void set_errorContent_61(GUIContent_t4210063000 * value)
	{
		___errorContent_61 = value;
		Il2CppCodeGenWriteBarrier(&___errorContent_61, value);
	}

	inline static int32_t get_offset_of_barStyle_62() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___barStyle_62)); }
	inline GUIStyle_t1799908754 * get_barStyle_62() const { return ___barStyle_62; }
	inline GUIStyle_t1799908754 ** get_address_of_barStyle_62() { return &___barStyle_62; }
	inline void set_barStyle_62(GUIStyle_t1799908754 * value)
	{
		___barStyle_62 = value;
		Il2CppCodeGenWriteBarrier(&___barStyle_62, value);
	}

	inline static int32_t get_offset_of_buttonActiveStyle_63() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___buttonActiveStyle_63)); }
	inline GUIStyle_t1799908754 * get_buttonActiveStyle_63() const { return ___buttonActiveStyle_63; }
	inline GUIStyle_t1799908754 ** get_address_of_buttonActiveStyle_63() { return &___buttonActiveStyle_63; }
	inline void set_buttonActiveStyle_63(GUIStyle_t1799908754 * value)
	{
		___buttonActiveStyle_63 = value;
		Il2CppCodeGenWriteBarrier(&___buttonActiveStyle_63, value);
	}

	inline static int32_t get_offset_of_nonStyle_64() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___nonStyle_64)); }
	inline GUIStyle_t1799908754 * get_nonStyle_64() const { return ___nonStyle_64; }
	inline GUIStyle_t1799908754 ** get_address_of_nonStyle_64() { return &___nonStyle_64; }
	inline void set_nonStyle_64(GUIStyle_t1799908754 * value)
	{
		___nonStyle_64 = value;
		Il2CppCodeGenWriteBarrier(&___nonStyle_64, value);
	}

	inline static int32_t get_offset_of_lowerLeftFontStyle_65() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___lowerLeftFontStyle_65)); }
	inline GUIStyle_t1799908754 * get_lowerLeftFontStyle_65() const { return ___lowerLeftFontStyle_65; }
	inline GUIStyle_t1799908754 ** get_address_of_lowerLeftFontStyle_65() { return &___lowerLeftFontStyle_65; }
	inline void set_lowerLeftFontStyle_65(GUIStyle_t1799908754 * value)
	{
		___lowerLeftFontStyle_65 = value;
		Il2CppCodeGenWriteBarrier(&___lowerLeftFontStyle_65, value);
	}

	inline static int32_t get_offset_of_backStyle_66() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___backStyle_66)); }
	inline GUIStyle_t1799908754 * get_backStyle_66() const { return ___backStyle_66; }
	inline GUIStyle_t1799908754 ** get_address_of_backStyle_66() { return &___backStyle_66; }
	inline void set_backStyle_66(GUIStyle_t1799908754 * value)
	{
		___backStyle_66 = value;
		Il2CppCodeGenWriteBarrier(&___backStyle_66, value);
	}

	inline static int32_t get_offset_of_evenLogStyle_67() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___evenLogStyle_67)); }
	inline GUIStyle_t1799908754 * get_evenLogStyle_67() const { return ___evenLogStyle_67; }
	inline GUIStyle_t1799908754 ** get_address_of_evenLogStyle_67() { return &___evenLogStyle_67; }
	inline void set_evenLogStyle_67(GUIStyle_t1799908754 * value)
	{
		___evenLogStyle_67 = value;
		Il2CppCodeGenWriteBarrier(&___evenLogStyle_67, value);
	}

	inline static int32_t get_offset_of_oddLogStyle_68() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___oddLogStyle_68)); }
	inline GUIStyle_t1799908754 * get_oddLogStyle_68() const { return ___oddLogStyle_68; }
	inline GUIStyle_t1799908754 ** get_address_of_oddLogStyle_68() { return &___oddLogStyle_68; }
	inline void set_oddLogStyle_68(GUIStyle_t1799908754 * value)
	{
		___oddLogStyle_68 = value;
		Il2CppCodeGenWriteBarrier(&___oddLogStyle_68, value);
	}

	inline static int32_t get_offset_of_logButtonStyle_69() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logButtonStyle_69)); }
	inline GUIStyle_t1799908754 * get_logButtonStyle_69() const { return ___logButtonStyle_69; }
	inline GUIStyle_t1799908754 ** get_address_of_logButtonStyle_69() { return &___logButtonStyle_69; }
	inline void set_logButtonStyle_69(GUIStyle_t1799908754 * value)
	{
		___logButtonStyle_69 = value;
		Il2CppCodeGenWriteBarrier(&___logButtonStyle_69, value);
	}

	inline static int32_t get_offset_of_selectedLogStyle_70() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___selectedLogStyle_70)); }
	inline GUIStyle_t1799908754 * get_selectedLogStyle_70() const { return ___selectedLogStyle_70; }
	inline GUIStyle_t1799908754 ** get_address_of_selectedLogStyle_70() { return &___selectedLogStyle_70; }
	inline void set_selectedLogStyle_70(GUIStyle_t1799908754 * value)
	{
		___selectedLogStyle_70 = value;
		Il2CppCodeGenWriteBarrier(&___selectedLogStyle_70, value);
	}

	inline static int32_t get_offset_of_selectedLogFontStyle_71() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___selectedLogFontStyle_71)); }
	inline GUIStyle_t1799908754 * get_selectedLogFontStyle_71() const { return ___selectedLogFontStyle_71; }
	inline GUIStyle_t1799908754 ** get_address_of_selectedLogFontStyle_71() { return &___selectedLogFontStyle_71; }
	inline void set_selectedLogFontStyle_71(GUIStyle_t1799908754 * value)
	{
		___selectedLogFontStyle_71 = value;
		Il2CppCodeGenWriteBarrier(&___selectedLogFontStyle_71, value);
	}

	inline static int32_t get_offset_of_stackLabelStyle_72() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___stackLabelStyle_72)); }
	inline GUIStyle_t1799908754 * get_stackLabelStyle_72() const { return ___stackLabelStyle_72; }
	inline GUIStyle_t1799908754 ** get_address_of_stackLabelStyle_72() { return &___stackLabelStyle_72; }
	inline void set_stackLabelStyle_72(GUIStyle_t1799908754 * value)
	{
		___stackLabelStyle_72 = value;
		Il2CppCodeGenWriteBarrier(&___stackLabelStyle_72, value);
	}

	inline static int32_t get_offset_of_scrollerStyle_73() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___scrollerStyle_73)); }
	inline GUIStyle_t1799908754 * get_scrollerStyle_73() const { return ___scrollerStyle_73; }
	inline GUIStyle_t1799908754 ** get_address_of_scrollerStyle_73() { return &___scrollerStyle_73; }
	inline void set_scrollerStyle_73(GUIStyle_t1799908754 * value)
	{
		___scrollerStyle_73 = value;
		Il2CppCodeGenWriteBarrier(&___scrollerStyle_73, value);
	}

	inline static int32_t get_offset_of_searchStyle_74() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___searchStyle_74)); }
	inline GUIStyle_t1799908754 * get_searchStyle_74() const { return ___searchStyle_74; }
	inline GUIStyle_t1799908754 ** get_address_of_searchStyle_74() { return &___searchStyle_74; }
	inline void set_searchStyle_74(GUIStyle_t1799908754 * value)
	{
		___searchStyle_74 = value;
		Il2CppCodeGenWriteBarrier(&___searchStyle_74, value);
	}

	inline static int32_t get_offset_of_sliderBackStyle_75() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___sliderBackStyle_75)); }
	inline GUIStyle_t1799908754 * get_sliderBackStyle_75() const { return ___sliderBackStyle_75; }
	inline GUIStyle_t1799908754 ** get_address_of_sliderBackStyle_75() { return &___sliderBackStyle_75; }
	inline void set_sliderBackStyle_75(GUIStyle_t1799908754 * value)
	{
		___sliderBackStyle_75 = value;
		Il2CppCodeGenWriteBarrier(&___sliderBackStyle_75, value);
	}

	inline static int32_t get_offset_of_sliderThumbStyle_76() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___sliderThumbStyle_76)); }
	inline GUIStyle_t1799908754 * get_sliderThumbStyle_76() const { return ___sliderThumbStyle_76; }
	inline GUIStyle_t1799908754 ** get_address_of_sliderThumbStyle_76() { return &___sliderThumbStyle_76; }
	inline void set_sliderThumbStyle_76(GUIStyle_t1799908754 * value)
	{
		___sliderThumbStyle_76 = value;
		Il2CppCodeGenWriteBarrier(&___sliderThumbStyle_76, value);
	}

	inline static int32_t get_offset_of_toolbarScrollerSkin_77() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___toolbarScrollerSkin_77)); }
	inline GUISkin_t1436893342 * get_toolbarScrollerSkin_77() const { return ___toolbarScrollerSkin_77; }
	inline GUISkin_t1436893342 ** get_address_of_toolbarScrollerSkin_77() { return &___toolbarScrollerSkin_77; }
	inline void set_toolbarScrollerSkin_77(GUISkin_t1436893342 * value)
	{
		___toolbarScrollerSkin_77 = value;
		Il2CppCodeGenWriteBarrier(&___toolbarScrollerSkin_77, value);
	}

	inline static int32_t get_offset_of_logScrollerSkin_78() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logScrollerSkin_78)); }
	inline GUISkin_t1436893342 * get_logScrollerSkin_78() const { return ___logScrollerSkin_78; }
	inline GUISkin_t1436893342 ** get_address_of_logScrollerSkin_78() { return &___logScrollerSkin_78; }
	inline void set_logScrollerSkin_78(GUISkin_t1436893342 * value)
	{
		___logScrollerSkin_78 = value;
		Il2CppCodeGenWriteBarrier(&___logScrollerSkin_78, value);
	}

	inline static int32_t get_offset_of_graphScrollerSkin_79() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphScrollerSkin_79)); }
	inline GUISkin_t1436893342 * get_graphScrollerSkin_79() const { return ___graphScrollerSkin_79; }
	inline GUISkin_t1436893342 ** get_address_of_graphScrollerSkin_79() { return &___graphScrollerSkin_79; }
	inline void set_graphScrollerSkin_79(GUISkin_t1436893342 * value)
	{
		___graphScrollerSkin_79 = value;
		Il2CppCodeGenWriteBarrier(&___graphScrollerSkin_79, value);
	}

	inline static int32_t get_offset_of_size_80() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___size_80)); }
	inline Vector2_t2243707579  get_size_80() const { return ___size_80; }
	inline Vector2_t2243707579 * get_address_of_size_80() { return &___size_80; }
	inline void set_size_80(Vector2_t2243707579  value)
	{
		___size_80 = value;
	}

	inline static int32_t get_offset_of_maxSize_81() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___maxSize_81)); }
	inline float get_maxSize_81() const { return ___maxSize_81; }
	inline float* get_address_of_maxSize_81() { return &___maxSize_81; }
	inline void set_maxSize_81(float value)
	{
		___maxSize_81 = value;
	}

	inline static int32_t get_offset_of_numOfCircleToShow_82() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___numOfCircleToShow_82)); }
	inline int32_t get_numOfCircleToShow_82() const { return ___numOfCircleToShow_82; }
	inline int32_t* get_address_of_numOfCircleToShow_82() { return &___numOfCircleToShow_82; }
	inline void set_numOfCircleToShow_82(int32_t value)
	{
		___numOfCircleToShow_82 = value;
	}

	inline static int32_t get_offset_of_currentScene_84() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___currentScene_84)); }
	inline String_t* get_currentScene_84() const { return ___currentScene_84; }
	inline String_t** get_address_of_currentScene_84() { return &___currentScene_84; }
	inline void set_currentScene_84(String_t* value)
	{
		___currentScene_84 = value;
		Il2CppCodeGenWriteBarrier(&___currentScene_84, value);
	}

	inline static int32_t get_offset_of_filterText_85() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___filterText_85)); }
	inline String_t* get_filterText_85() const { return ___filterText_85; }
	inline String_t** get_address_of_filterText_85() { return &___filterText_85; }
	inline void set_filterText_85(String_t* value)
	{
		___filterText_85 = value;
		Il2CppCodeGenWriteBarrier(&___filterText_85, value);
	}

	inline static int32_t get_offset_of_deviceModel_86() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___deviceModel_86)); }
	inline String_t* get_deviceModel_86() const { return ___deviceModel_86; }
	inline String_t** get_address_of_deviceModel_86() { return &___deviceModel_86; }
	inline void set_deviceModel_86(String_t* value)
	{
		___deviceModel_86 = value;
		Il2CppCodeGenWriteBarrier(&___deviceModel_86, value);
	}

	inline static int32_t get_offset_of_deviceType_87() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___deviceType_87)); }
	inline String_t* get_deviceType_87() const { return ___deviceType_87; }
	inline String_t** get_address_of_deviceType_87() { return &___deviceType_87; }
	inline void set_deviceType_87(String_t* value)
	{
		___deviceType_87 = value;
		Il2CppCodeGenWriteBarrier(&___deviceType_87, value);
	}

	inline static int32_t get_offset_of_deviceName_88() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___deviceName_88)); }
	inline String_t* get_deviceName_88() const { return ___deviceName_88; }
	inline String_t** get_address_of_deviceName_88() { return &___deviceName_88; }
	inline void set_deviceName_88(String_t* value)
	{
		___deviceName_88 = value;
		Il2CppCodeGenWriteBarrier(&___deviceName_88, value);
	}

	inline static int32_t get_offset_of_graphicsMemorySize_89() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphicsMemorySize_89)); }
	inline String_t* get_graphicsMemorySize_89() const { return ___graphicsMemorySize_89; }
	inline String_t** get_address_of_graphicsMemorySize_89() { return &___graphicsMemorySize_89; }
	inline void set_graphicsMemorySize_89(String_t* value)
	{
		___graphicsMemorySize_89 = value;
		Il2CppCodeGenWriteBarrier(&___graphicsMemorySize_89, value);
	}

	inline static int32_t get_offset_of_maxTextureSize_90() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___maxTextureSize_90)); }
	inline String_t* get_maxTextureSize_90() const { return ___maxTextureSize_90; }
	inline String_t** get_address_of_maxTextureSize_90() { return &___maxTextureSize_90; }
	inline void set_maxTextureSize_90(String_t* value)
	{
		___maxTextureSize_90 = value;
		Il2CppCodeGenWriteBarrier(&___maxTextureSize_90, value);
	}

	inline static int32_t get_offset_of_systemMemorySize_91() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___systemMemorySize_91)); }
	inline String_t* get_systemMemorySize_91() const { return ___systemMemorySize_91; }
	inline String_t** get_address_of_systemMemorySize_91() { return &___systemMemorySize_91; }
	inline void set_systemMemorySize_91(String_t* value)
	{
		___systemMemorySize_91 = value;
		Il2CppCodeGenWriteBarrier(&___systemMemorySize_91, value);
	}

	inline static int32_t get_offset_of_Initialized_92() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___Initialized_92)); }
	inline bool get_Initialized_92() const { return ___Initialized_92; }
	inline bool* get_address_of_Initialized_92() { return &___Initialized_92; }
	inline void set_Initialized_92(bool value)
	{
		___Initialized_92 = value;
	}

	inline static int32_t get_offset_of_screenRect_93() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___screenRect_93)); }
	inline Rect_t3681755626  get_screenRect_93() const { return ___screenRect_93; }
	inline Rect_t3681755626 * get_address_of_screenRect_93() { return &___screenRect_93; }
	inline void set_screenRect_93(Rect_t3681755626  value)
	{
		___screenRect_93 = value;
	}

	inline static int32_t get_offset_of_toolBarRect_94() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___toolBarRect_94)); }
	inline Rect_t3681755626  get_toolBarRect_94() const { return ___toolBarRect_94; }
	inline Rect_t3681755626 * get_address_of_toolBarRect_94() { return &___toolBarRect_94; }
	inline void set_toolBarRect_94(Rect_t3681755626  value)
	{
		___toolBarRect_94 = value;
	}

	inline static int32_t get_offset_of_logsRect_95() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___logsRect_95)); }
	inline Rect_t3681755626  get_logsRect_95() const { return ___logsRect_95; }
	inline Rect_t3681755626 * get_address_of_logsRect_95() { return &___logsRect_95; }
	inline void set_logsRect_95(Rect_t3681755626  value)
	{
		___logsRect_95 = value;
	}

	inline static int32_t get_offset_of_stackRect_96() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___stackRect_96)); }
	inline Rect_t3681755626  get_stackRect_96() const { return ___stackRect_96; }
	inline Rect_t3681755626 * get_address_of_stackRect_96() { return &___stackRect_96; }
	inline void set_stackRect_96(Rect_t3681755626  value)
	{
		___stackRect_96 = value;
	}

	inline static int32_t get_offset_of_graphRect_97() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphRect_97)); }
	inline Rect_t3681755626  get_graphRect_97() const { return ___graphRect_97; }
	inline Rect_t3681755626 * get_address_of_graphRect_97() { return &___graphRect_97; }
	inline void set_graphRect_97(Rect_t3681755626  value)
	{
		___graphRect_97 = value;
	}

	inline static int32_t get_offset_of_graphMinRect_98() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphMinRect_98)); }
	inline Rect_t3681755626  get_graphMinRect_98() const { return ___graphMinRect_98; }
	inline Rect_t3681755626 * get_address_of_graphMinRect_98() { return &___graphMinRect_98; }
	inline void set_graphMinRect_98(Rect_t3681755626  value)
	{
		___graphMinRect_98 = value;
	}

	inline static int32_t get_offset_of_graphMaxRect_99() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphMaxRect_99)); }
	inline Rect_t3681755626  get_graphMaxRect_99() const { return ___graphMaxRect_99; }
	inline Rect_t3681755626 * get_address_of_graphMaxRect_99() { return &___graphMaxRect_99; }
	inline void set_graphMaxRect_99(Rect_t3681755626  value)
	{
		___graphMaxRect_99 = value;
	}

	inline static int32_t get_offset_of_buttomRect_100() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___buttomRect_100)); }
	inline Rect_t3681755626  get_buttomRect_100() const { return ___buttomRect_100; }
	inline Rect_t3681755626 * get_address_of_buttomRect_100() { return &___buttomRect_100; }
	inline void set_buttomRect_100(Rect_t3681755626  value)
	{
		___buttomRect_100 = value;
	}

	inline static int32_t get_offset_of_stackRectTopLeft_101() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___stackRectTopLeft_101)); }
	inline Vector2_t2243707579  get_stackRectTopLeft_101() const { return ___stackRectTopLeft_101; }
	inline Vector2_t2243707579 * get_address_of_stackRectTopLeft_101() { return &___stackRectTopLeft_101; }
	inline void set_stackRectTopLeft_101(Vector2_t2243707579  value)
	{
		___stackRectTopLeft_101 = value;
	}

	inline static int32_t get_offset_of_detailRect_102() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___detailRect_102)); }
	inline Rect_t3681755626  get_detailRect_102() const { return ___detailRect_102; }
	inline Rect_t3681755626 * get_address_of_detailRect_102() { return &___detailRect_102; }
	inline void set_detailRect_102(Rect_t3681755626  value)
	{
		___detailRect_102 = value;
	}

	inline static int32_t get_offset_of_scrollPosition_103() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___scrollPosition_103)); }
	inline Vector2_t2243707579  get_scrollPosition_103() const { return ___scrollPosition_103; }
	inline Vector2_t2243707579 * get_address_of_scrollPosition_103() { return &___scrollPosition_103; }
	inline void set_scrollPosition_103(Vector2_t2243707579  value)
	{
		___scrollPosition_103 = value;
	}

	inline static int32_t get_offset_of_scrollPosition2_104() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___scrollPosition2_104)); }
	inline Vector2_t2243707579  get_scrollPosition2_104() const { return ___scrollPosition2_104; }
	inline Vector2_t2243707579 * get_address_of_scrollPosition2_104() { return &___scrollPosition2_104; }
	inline void set_scrollPosition2_104(Vector2_t2243707579  value)
	{
		___scrollPosition2_104 = value;
	}

	inline static int32_t get_offset_of_toolbarScrollPosition_105() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___toolbarScrollPosition_105)); }
	inline Vector2_t2243707579  get_toolbarScrollPosition_105() const { return ___toolbarScrollPosition_105; }
	inline Vector2_t2243707579 * get_address_of_toolbarScrollPosition_105() { return &___toolbarScrollPosition_105; }
	inline void set_toolbarScrollPosition_105(Vector2_t2243707579  value)
	{
		___toolbarScrollPosition_105 = value;
	}

	inline static int32_t get_offset_of_selectedLog_106() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___selectedLog_106)); }
	inline Log_t3604182180 * get_selectedLog_106() const { return ___selectedLog_106; }
	inline Log_t3604182180 ** get_address_of_selectedLog_106() { return &___selectedLog_106; }
	inline void set_selectedLog_106(Log_t3604182180 * value)
	{
		___selectedLog_106 = value;
		Il2CppCodeGenWriteBarrier(&___selectedLog_106, value);
	}

	inline static int32_t get_offset_of_toolbarOldDrag_107() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___toolbarOldDrag_107)); }
	inline float get_toolbarOldDrag_107() const { return ___toolbarOldDrag_107; }
	inline float* get_address_of_toolbarOldDrag_107() { return &___toolbarOldDrag_107; }
	inline void set_toolbarOldDrag_107(float value)
	{
		___toolbarOldDrag_107 = value;
	}

	inline static int32_t get_offset_of_oldDrag_108() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___oldDrag_108)); }
	inline float get_oldDrag_108() const { return ___oldDrag_108; }
	inline float* get_address_of_oldDrag_108() { return &___oldDrag_108; }
	inline void set_oldDrag_108(float value)
	{
		___oldDrag_108 = value;
	}

	inline static int32_t get_offset_of_oldDrag2_109() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___oldDrag2_109)); }
	inline float get_oldDrag2_109() const { return ___oldDrag2_109; }
	inline float* get_address_of_oldDrag2_109() { return &___oldDrag2_109; }
	inline void set_oldDrag2_109(float value)
	{
		___oldDrag2_109 = value;
	}

	inline static int32_t get_offset_of_oldDrag3_110() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___oldDrag3_110)); }
	inline float get_oldDrag3_110() const { return ___oldDrag3_110; }
	inline float* get_address_of_oldDrag3_110() { return &___oldDrag3_110; }
	inline void set_oldDrag3_110(float value)
	{
		___oldDrag3_110 = value;
	}

	inline static int32_t get_offset_of_startIndex_111() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___startIndex_111)); }
	inline int32_t get_startIndex_111() const { return ___startIndex_111; }
	inline int32_t* get_address_of_startIndex_111() { return &___startIndex_111; }
	inline void set_startIndex_111(int32_t value)
	{
		___startIndex_111 = value;
	}

	inline static int32_t get_offset_of_countRect_112() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___countRect_112)); }
	inline Rect_t3681755626  get_countRect_112() const { return ___countRect_112; }
	inline Rect_t3681755626 * get_address_of_countRect_112() { return &___countRect_112; }
	inline void set_countRect_112(Rect_t3681755626  value)
	{
		___countRect_112 = value;
	}

	inline static int32_t get_offset_of_timeRect_113() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___timeRect_113)); }
	inline Rect_t3681755626  get_timeRect_113() const { return ___timeRect_113; }
	inline Rect_t3681755626 * get_address_of_timeRect_113() { return &___timeRect_113; }
	inline void set_timeRect_113(Rect_t3681755626  value)
	{
		___timeRect_113 = value;
	}

	inline static int32_t get_offset_of_timeLabelRect_114() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___timeLabelRect_114)); }
	inline Rect_t3681755626  get_timeLabelRect_114() const { return ___timeLabelRect_114; }
	inline Rect_t3681755626 * get_address_of_timeLabelRect_114() { return &___timeLabelRect_114; }
	inline void set_timeLabelRect_114(Rect_t3681755626  value)
	{
		___timeLabelRect_114 = value;
	}

	inline static int32_t get_offset_of_sceneRect_115() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___sceneRect_115)); }
	inline Rect_t3681755626  get_sceneRect_115() const { return ___sceneRect_115; }
	inline Rect_t3681755626 * get_address_of_sceneRect_115() { return &___sceneRect_115; }
	inline void set_sceneRect_115(Rect_t3681755626  value)
	{
		___sceneRect_115 = value;
	}

	inline static int32_t get_offset_of_sceneLabelRect_116() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___sceneLabelRect_116)); }
	inline Rect_t3681755626  get_sceneLabelRect_116() const { return ___sceneLabelRect_116; }
	inline Rect_t3681755626 * get_address_of_sceneLabelRect_116() { return &___sceneLabelRect_116; }
	inline void set_sceneLabelRect_116(Rect_t3681755626  value)
	{
		___sceneLabelRect_116 = value;
	}

	inline static int32_t get_offset_of_memoryRect_117() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___memoryRect_117)); }
	inline Rect_t3681755626  get_memoryRect_117() const { return ___memoryRect_117; }
	inline Rect_t3681755626 * get_address_of_memoryRect_117() { return &___memoryRect_117; }
	inline void set_memoryRect_117(Rect_t3681755626  value)
	{
		___memoryRect_117 = value;
	}

	inline static int32_t get_offset_of_memoryLabelRect_118() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___memoryLabelRect_118)); }
	inline Rect_t3681755626  get_memoryLabelRect_118() const { return ___memoryLabelRect_118; }
	inline Rect_t3681755626 * get_address_of_memoryLabelRect_118() { return &___memoryLabelRect_118; }
	inline void set_memoryLabelRect_118(Rect_t3681755626  value)
	{
		___memoryLabelRect_118 = value;
	}

	inline static int32_t get_offset_of_fpsRect_119() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___fpsRect_119)); }
	inline Rect_t3681755626  get_fpsRect_119() const { return ___fpsRect_119; }
	inline Rect_t3681755626 * get_address_of_fpsRect_119() { return &___fpsRect_119; }
	inline void set_fpsRect_119(Rect_t3681755626  value)
	{
		___fpsRect_119 = value;
	}

	inline static int32_t get_offset_of_fpsLabelRect_120() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___fpsLabelRect_120)); }
	inline Rect_t3681755626  get_fpsLabelRect_120() const { return ___fpsLabelRect_120; }
	inline Rect_t3681755626 * get_address_of_fpsLabelRect_120() { return &___fpsLabelRect_120; }
	inline void set_fpsLabelRect_120(Rect_t3681755626  value)
	{
		___fpsLabelRect_120 = value;
	}

	inline static int32_t get_offset_of_tempContent_121() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___tempContent_121)); }
	inline GUIContent_t4210063000 * get_tempContent_121() const { return ___tempContent_121; }
	inline GUIContent_t4210063000 ** get_address_of_tempContent_121() { return &___tempContent_121; }
	inline void set_tempContent_121(GUIContent_t4210063000 * value)
	{
		___tempContent_121 = value;
		Il2CppCodeGenWriteBarrier(&___tempContent_121, value);
	}

	inline static int32_t get_offset_of_infoScrollPosition_122() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___infoScrollPosition_122)); }
	inline Vector2_t2243707579  get_infoScrollPosition_122() const { return ___infoScrollPosition_122; }
	inline Vector2_t2243707579 * get_address_of_infoScrollPosition_122() { return &___infoScrollPosition_122; }
	inline void set_infoScrollPosition_122(Vector2_t2243707579  value)
	{
		___infoScrollPosition_122 = value;
	}

	inline static int32_t get_offset_of_oldInfoDrag_123() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___oldInfoDrag_123)); }
	inline Vector2_t2243707579  get_oldInfoDrag_123() const { return ___oldInfoDrag_123; }
	inline Vector2_t2243707579 * get_address_of_oldInfoDrag_123() { return &___oldInfoDrag_123; }
	inline void set_oldInfoDrag_123(Vector2_t2243707579  value)
	{
		___oldInfoDrag_123 = value;
	}

	inline static int32_t get_offset_of_tempRect_124() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___tempRect_124)); }
	inline Rect_t3681755626  get_tempRect_124() const { return ___tempRect_124; }
	inline Rect_t3681755626 * get_address_of_tempRect_124() { return &___tempRect_124; }
	inline void set_tempRect_124(Rect_t3681755626  value)
	{
		___tempRect_124 = value;
	}

	inline static int32_t get_offset_of_graphSize_125() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphSize_125)); }
	inline float get_graphSize_125() const { return ___graphSize_125; }
	inline float* get_address_of_graphSize_125() { return &___graphSize_125; }
	inline void set_graphSize_125(float value)
	{
		___graphSize_125 = value;
	}

	inline static int32_t get_offset_of_startFrame_126() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___startFrame_126)); }
	inline int32_t get_startFrame_126() const { return ___startFrame_126; }
	inline int32_t* get_address_of_startFrame_126() { return &___startFrame_126; }
	inline void set_startFrame_126(int32_t value)
	{
		___startFrame_126 = value;
	}

	inline static int32_t get_offset_of_currentFrame_127() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___currentFrame_127)); }
	inline int32_t get_currentFrame_127() const { return ___currentFrame_127; }
	inline int32_t* get_address_of_currentFrame_127() { return &___currentFrame_127; }
	inline void set_currentFrame_127(int32_t value)
	{
		___currentFrame_127 = value;
	}

	inline static int32_t get_offset_of_tempVector1_128() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___tempVector1_128)); }
	inline Vector3_t2243707580  get_tempVector1_128() const { return ___tempVector1_128; }
	inline Vector3_t2243707580 * get_address_of_tempVector1_128() { return &___tempVector1_128; }
	inline void set_tempVector1_128(Vector3_t2243707580  value)
	{
		___tempVector1_128 = value;
	}

	inline static int32_t get_offset_of_tempVector2_129() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___tempVector2_129)); }
	inline Vector3_t2243707580  get_tempVector2_129() const { return ___tempVector2_129; }
	inline Vector3_t2243707580 * get_address_of_tempVector2_129() { return &___tempVector2_129; }
	inline void set_tempVector2_129(Vector3_t2243707580  value)
	{
		___tempVector2_129 = value;
	}

	inline static int32_t get_offset_of_graphScrollerPos_130() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___graphScrollerPos_130)); }
	inline Vector2_t2243707579  get_graphScrollerPos_130() const { return ___graphScrollerPos_130; }
	inline Vector2_t2243707579 * get_address_of_graphScrollerPos_130() { return &___graphScrollerPos_130; }
	inline void set_graphScrollerPos_130(Vector2_t2243707579  value)
	{
		___graphScrollerPos_130 = value;
	}

	inline static int32_t get_offset_of_maxFpsValue_131() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___maxFpsValue_131)); }
	inline float get_maxFpsValue_131() const { return ___maxFpsValue_131; }
	inline float* get_address_of_maxFpsValue_131() { return &___maxFpsValue_131; }
	inline void set_maxFpsValue_131(float value)
	{
		___maxFpsValue_131 = value;
	}

	inline static int32_t get_offset_of_minFpsValue_132() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___minFpsValue_132)); }
	inline float get_minFpsValue_132() const { return ___minFpsValue_132; }
	inline float* get_address_of_minFpsValue_132() { return &___minFpsValue_132; }
	inline void set_minFpsValue_132(float value)
	{
		___minFpsValue_132 = value;
	}

	inline static int32_t get_offset_of_maxMemoryValue_133() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___maxMemoryValue_133)); }
	inline float get_maxMemoryValue_133() const { return ___maxMemoryValue_133; }
	inline float* get_address_of_maxMemoryValue_133() { return &___maxMemoryValue_133; }
	inline void set_maxMemoryValue_133(float value)
	{
		___maxMemoryValue_133 = value;
	}

	inline static int32_t get_offset_of_minMemoryValue_134() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___minMemoryValue_134)); }
	inline float get_minMemoryValue_134() const { return ___minMemoryValue_134; }
	inline float* get_address_of_minMemoryValue_134() { return &___minMemoryValue_134; }
	inline void set_minMemoryValue_134(float value)
	{
		___minMemoryValue_134 = value;
	}

	inline static int32_t get_offset_of_gestureDetector_135() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___gestureDetector_135)); }
	inline List_1_t1612828711 * get_gestureDetector_135() const { return ___gestureDetector_135; }
	inline List_1_t1612828711 ** get_address_of_gestureDetector_135() { return &___gestureDetector_135; }
	inline void set_gestureDetector_135(List_1_t1612828711 * value)
	{
		___gestureDetector_135 = value;
		Il2CppCodeGenWriteBarrier(&___gestureDetector_135, value);
	}

	inline static int32_t get_offset_of_gestureSum_136() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___gestureSum_136)); }
	inline Vector2_t2243707579  get_gestureSum_136() const { return ___gestureSum_136; }
	inline Vector2_t2243707579 * get_address_of_gestureSum_136() { return &___gestureSum_136; }
	inline void set_gestureSum_136(Vector2_t2243707579  value)
	{
		___gestureSum_136 = value;
	}

	inline static int32_t get_offset_of_gestureLength_137() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___gestureLength_137)); }
	inline float get_gestureLength_137() const { return ___gestureLength_137; }
	inline float* get_address_of_gestureLength_137() { return &___gestureLength_137; }
	inline void set_gestureLength_137(float value)
	{
		___gestureLength_137 = value;
	}

	inline static int32_t get_offset_of_gestureCount_138() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___gestureCount_138)); }
	inline int32_t get_gestureCount_138() const { return ___gestureCount_138; }
	inline int32_t* get_address_of_gestureCount_138() { return &___gestureCount_138; }
	inline void set_gestureCount_138(int32_t value)
	{
		___gestureCount_138 = value;
	}

	inline static int32_t get_offset_of_lastClickTime_139() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___lastClickTime_139)); }
	inline float get_lastClickTime_139() const { return ___lastClickTime_139; }
	inline float* get_address_of_lastClickTime_139() { return &___lastClickTime_139; }
	inline void set_lastClickTime_139(float value)
	{
		___lastClickTime_139 = value;
	}

	inline static int32_t get_offset_of_startPos_140() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___startPos_140)); }
	inline Vector2_t2243707579  get_startPos_140() const { return ___startPos_140; }
	inline Vector2_t2243707579 * get_address_of_startPos_140() { return &___startPos_140; }
	inline void set_startPos_140(Vector2_t2243707579  value)
	{
		___startPos_140 = value;
	}

	inline static int32_t get_offset_of_downPos_141() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___downPos_141)); }
	inline Vector2_t2243707579  get_downPos_141() const { return ___downPos_141; }
	inline Vector2_t2243707579 * get_address_of_downPos_141() { return &___downPos_141; }
	inline void set_downPos_141(Vector2_t2243707579  value)
	{
		___downPos_141 = value;
	}

	inline static int32_t get_offset_of_mousePosition_142() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___mousePosition_142)); }
	inline Vector2_t2243707579  get_mousePosition_142() const { return ___mousePosition_142; }
	inline Vector2_t2243707579 * get_address_of_mousePosition_142() { return &___mousePosition_142; }
	inline void set_mousePosition_142(Vector2_t2243707579  value)
	{
		___mousePosition_142 = value;
	}

	inline static int32_t get_offset_of_frames_143() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___frames_143)); }
	inline int32_t get_frames_143() const { return ___frames_143; }
	inline int32_t* get_address_of_frames_143() { return &___frames_143; }
	inline void set_frames_143(int32_t value)
	{
		___frames_143 = value;
	}

	inline static int32_t get_offset_of_firstTime_144() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___firstTime_144)); }
	inline bool get_firstTime_144() const { return ___firstTime_144; }
	inline bool* get_address_of_firstTime_144() { return &___firstTime_144; }
	inline void set_firstTime_144(bool value)
	{
		___firstTime_144 = value;
	}

	inline static int32_t get_offset_of_lastUpdate_145() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___lastUpdate_145)); }
	inline float get_lastUpdate_145() const { return ___lastUpdate_145; }
	inline float* get_address_of_lastUpdate_145() { return &___lastUpdate_145; }
	inline void set_lastUpdate_145(float value)
	{
		___lastUpdate_145 = value;
	}

	inline static int32_t get_offset_of_threadedLogs_148() { return static_cast<int32_t>(offsetof(Reporter_t3561640551, ___threadedLogs_148)); }
	inline List_1_t2973303312 * get_threadedLogs_148() const { return ___threadedLogs_148; }
	inline List_1_t2973303312 ** get_address_of_threadedLogs_148() { return &___threadedLogs_148; }
	inline void set_threadedLogs_148(List_1_t2973303312 * value)
	{
		___threadedLogs_148 = value;
		Il2CppCodeGenWriteBarrier(&___threadedLogs_148, value);
	}
};

struct Reporter_t3561640551_StaticFields
{
public:
	// System.Boolean Reporter::created
	bool ___created_40;
	// System.String[] Reporter::scenes
	StringU5BU5D_t1642385972* ___scenes_83;

public:
	inline static int32_t get_offset_of_created_40() { return static_cast<int32_t>(offsetof(Reporter_t3561640551_StaticFields, ___created_40)); }
	inline bool get_created_40() const { return ___created_40; }
	inline bool* get_address_of_created_40() { return &___created_40; }
	inline void set_created_40(bool value)
	{
		___created_40 = value;
	}

	inline static int32_t get_offset_of_scenes_83() { return static_cast<int32_t>(offsetof(Reporter_t3561640551_StaticFields, ___scenes_83)); }
	inline StringU5BU5D_t1642385972* get_scenes_83() const { return ___scenes_83; }
	inline StringU5BU5D_t1642385972** get_address_of_scenes_83() { return &___scenes_83; }
	inline void set_scenes_83(StringU5BU5D_t1642385972* value)
	{
		___scenes_83 = value;
		Il2CppCodeGenWriteBarrier(&___scenes_83, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
