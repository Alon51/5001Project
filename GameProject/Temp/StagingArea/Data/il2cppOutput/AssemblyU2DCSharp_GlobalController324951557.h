#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// GlobalController
struct GlobalController_t324951557;
// GoogleAnalyticsV4
struct GoogleAnalyticsV4_t198817271;
// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// PlayerMovement
struct PlayerMovement_t3166138480;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GlobalController
struct  GlobalController_t324951557  : public MonoBehaviour_t1158329972
{
public:
	// GoogleAnalyticsV4 GlobalController::googleAnalytics
	GoogleAnalyticsV4_t198817271 * ___googleAnalytics_3;
	// System.Boolean GlobalController::timeStarted
	bool ___timeStarted_5;
	// System.String GlobalController::niceTime
	String_t* ___niceTime_6;
	// System.Int64 GlobalController::minutes
	int64_t ___minutes_7;
	// System.Int64 GlobalController::failedAttempts
	int64_t ___failedAttempts_8;
	// UnityEngine.Camera GlobalController::mainCam
	Camera_t189460977 * ___mainCam_9;
	// UnityEngine.Camera GlobalController::secondCam
	Camera_t189460977 * ___secondCam_10;
	// System.Boolean GlobalController::onMainCam
	bool ___onMainCam_11;
	// System.String GlobalController::camName
	String_t* ___camName_12;
	// UnityEngine.GameObject[] GlobalController::scientistSprites
	GameObjectU5BU5D_t3057952154* ___scientistSprites_13;
	// System.Boolean GlobalController::arithComplete
	bool ___arithComplete_14;
	// System.Boolean GlobalController::condComplete
	bool ___condComplete_15;
	// System.Boolean GlobalController::arrayComplete
	bool ___arrayComplete_16;
	// System.Boolean GlobalController::loopComplete
	bool ___loopComplete_17;
	// System.Boolean GlobalController::arrayPortalActive
	bool ___arrayPortalActive_18;
	// System.Boolean GlobalController::loopPortalActive
	bool ___loopPortalActive_19;
	// System.Boolean GlobalController::singleForLoopComplete
	bool ___singleForLoopComplete_20;
	// System.Boolean GlobalController::nestedForLoopComplete
	bool ___nestedForLoopComplete_21;
	// System.Boolean GlobalController::whileLoopComplete
	bool ___whileLoopComplete_22;
	// System.Boolean GlobalController::boolOpsComplete
	bool ___boolOpsComplete_23;
	// System.Boolean GlobalController::logicalOrComplete
	bool ___logicalOrComplete_24;
	// System.Boolean GlobalController::logicalAndComplete
	bool ___logicalAndComplete_25;
	// System.Boolean GlobalController::indentComplete
	bool ___indentComplete_26;
	// PlayerMovement GlobalController::thePlayer
	PlayerMovement_t3166138480 * ___thePlayer_27;
	// UnityEngine.Vector3 GlobalController::glPlayerPos
	Vector3_t2243707580  ___glPlayerPos_28;
	// UnityEngine.UI.Text GlobalController::scoreText
	Text_t356221433 * ___scoreText_29;
	// UnityEngine.UI.Text GlobalController::scientistText
	Text_t356221433 * ___scientistText_30;
	// System.Int32 GlobalController::score
	int32_t ___score_31;
	// System.Int32 GlobalController::scientistCount
	int32_t ___scientistCount_32;
	// System.Int32 GlobalController::totalScientists
	int32_t ___totalScientists_33;
	// System.Int32 GlobalController::scrAdditive
	int32_t ___scrAdditive_34;
	// UnityEngine.UI.Text GlobalController::wordDisplay
	Text_t356221433 * ___wordDisplay_35;
	// System.String GlobalController::previousSceneName
	String_t* ___previousSceneName_36;
	// System.Boolean GlobalController::hasBombs
	bool ___hasBombs_37;
	// System.Boolean GlobalController::hasDoubleJump
	bool ___hasDoubleJump_38;
	// System.Boolean GlobalController::hasSpeedUp
	bool ___hasSpeedUp_39;

public:
	inline static int32_t get_offset_of_googleAnalytics_3() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___googleAnalytics_3)); }
	inline GoogleAnalyticsV4_t198817271 * get_googleAnalytics_3() const { return ___googleAnalytics_3; }
	inline GoogleAnalyticsV4_t198817271 ** get_address_of_googleAnalytics_3() { return &___googleAnalytics_3; }
	inline void set_googleAnalytics_3(GoogleAnalyticsV4_t198817271 * value)
	{
		___googleAnalytics_3 = value;
		Il2CppCodeGenWriteBarrier(&___googleAnalytics_3, value);
	}

	inline static int32_t get_offset_of_timeStarted_5() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___timeStarted_5)); }
	inline bool get_timeStarted_5() const { return ___timeStarted_5; }
	inline bool* get_address_of_timeStarted_5() { return &___timeStarted_5; }
	inline void set_timeStarted_5(bool value)
	{
		___timeStarted_5 = value;
	}

	inline static int32_t get_offset_of_niceTime_6() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___niceTime_6)); }
	inline String_t* get_niceTime_6() const { return ___niceTime_6; }
	inline String_t** get_address_of_niceTime_6() { return &___niceTime_6; }
	inline void set_niceTime_6(String_t* value)
	{
		___niceTime_6 = value;
		Il2CppCodeGenWriteBarrier(&___niceTime_6, value);
	}

	inline static int32_t get_offset_of_minutes_7() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___minutes_7)); }
	inline int64_t get_minutes_7() const { return ___minutes_7; }
	inline int64_t* get_address_of_minutes_7() { return &___minutes_7; }
	inline void set_minutes_7(int64_t value)
	{
		___minutes_7 = value;
	}

	inline static int32_t get_offset_of_failedAttempts_8() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___failedAttempts_8)); }
	inline int64_t get_failedAttempts_8() const { return ___failedAttempts_8; }
	inline int64_t* get_address_of_failedAttempts_8() { return &___failedAttempts_8; }
	inline void set_failedAttempts_8(int64_t value)
	{
		___failedAttempts_8 = value;
	}

	inline static int32_t get_offset_of_mainCam_9() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___mainCam_9)); }
	inline Camera_t189460977 * get_mainCam_9() const { return ___mainCam_9; }
	inline Camera_t189460977 ** get_address_of_mainCam_9() { return &___mainCam_9; }
	inline void set_mainCam_9(Camera_t189460977 * value)
	{
		___mainCam_9 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_9, value);
	}

	inline static int32_t get_offset_of_secondCam_10() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___secondCam_10)); }
	inline Camera_t189460977 * get_secondCam_10() const { return ___secondCam_10; }
	inline Camera_t189460977 ** get_address_of_secondCam_10() { return &___secondCam_10; }
	inline void set_secondCam_10(Camera_t189460977 * value)
	{
		___secondCam_10 = value;
		Il2CppCodeGenWriteBarrier(&___secondCam_10, value);
	}

	inline static int32_t get_offset_of_onMainCam_11() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___onMainCam_11)); }
	inline bool get_onMainCam_11() const { return ___onMainCam_11; }
	inline bool* get_address_of_onMainCam_11() { return &___onMainCam_11; }
	inline void set_onMainCam_11(bool value)
	{
		___onMainCam_11 = value;
	}

	inline static int32_t get_offset_of_camName_12() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___camName_12)); }
	inline String_t* get_camName_12() const { return ___camName_12; }
	inline String_t** get_address_of_camName_12() { return &___camName_12; }
	inline void set_camName_12(String_t* value)
	{
		___camName_12 = value;
		Il2CppCodeGenWriteBarrier(&___camName_12, value);
	}

	inline static int32_t get_offset_of_scientistSprites_13() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scientistSprites_13)); }
	inline GameObjectU5BU5D_t3057952154* get_scientistSprites_13() const { return ___scientistSprites_13; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_scientistSprites_13() { return &___scientistSprites_13; }
	inline void set_scientistSprites_13(GameObjectU5BU5D_t3057952154* value)
	{
		___scientistSprites_13 = value;
		Il2CppCodeGenWriteBarrier(&___scientistSprites_13, value);
	}

	inline static int32_t get_offset_of_arithComplete_14() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___arithComplete_14)); }
	inline bool get_arithComplete_14() const { return ___arithComplete_14; }
	inline bool* get_address_of_arithComplete_14() { return &___arithComplete_14; }
	inline void set_arithComplete_14(bool value)
	{
		___arithComplete_14 = value;
	}

	inline static int32_t get_offset_of_condComplete_15() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___condComplete_15)); }
	inline bool get_condComplete_15() const { return ___condComplete_15; }
	inline bool* get_address_of_condComplete_15() { return &___condComplete_15; }
	inline void set_condComplete_15(bool value)
	{
		___condComplete_15 = value;
	}

	inline static int32_t get_offset_of_arrayComplete_16() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___arrayComplete_16)); }
	inline bool get_arrayComplete_16() const { return ___arrayComplete_16; }
	inline bool* get_address_of_arrayComplete_16() { return &___arrayComplete_16; }
	inline void set_arrayComplete_16(bool value)
	{
		___arrayComplete_16 = value;
	}

	inline static int32_t get_offset_of_loopComplete_17() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___loopComplete_17)); }
	inline bool get_loopComplete_17() const { return ___loopComplete_17; }
	inline bool* get_address_of_loopComplete_17() { return &___loopComplete_17; }
	inline void set_loopComplete_17(bool value)
	{
		___loopComplete_17 = value;
	}

	inline static int32_t get_offset_of_arrayPortalActive_18() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___arrayPortalActive_18)); }
	inline bool get_arrayPortalActive_18() const { return ___arrayPortalActive_18; }
	inline bool* get_address_of_arrayPortalActive_18() { return &___arrayPortalActive_18; }
	inline void set_arrayPortalActive_18(bool value)
	{
		___arrayPortalActive_18 = value;
	}

	inline static int32_t get_offset_of_loopPortalActive_19() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___loopPortalActive_19)); }
	inline bool get_loopPortalActive_19() const { return ___loopPortalActive_19; }
	inline bool* get_address_of_loopPortalActive_19() { return &___loopPortalActive_19; }
	inline void set_loopPortalActive_19(bool value)
	{
		___loopPortalActive_19 = value;
	}

	inline static int32_t get_offset_of_singleForLoopComplete_20() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___singleForLoopComplete_20)); }
	inline bool get_singleForLoopComplete_20() const { return ___singleForLoopComplete_20; }
	inline bool* get_address_of_singleForLoopComplete_20() { return &___singleForLoopComplete_20; }
	inline void set_singleForLoopComplete_20(bool value)
	{
		___singleForLoopComplete_20 = value;
	}

	inline static int32_t get_offset_of_nestedForLoopComplete_21() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___nestedForLoopComplete_21)); }
	inline bool get_nestedForLoopComplete_21() const { return ___nestedForLoopComplete_21; }
	inline bool* get_address_of_nestedForLoopComplete_21() { return &___nestedForLoopComplete_21; }
	inline void set_nestedForLoopComplete_21(bool value)
	{
		___nestedForLoopComplete_21 = value;
	}

	inline static int32_t get_offset_of_whileLoopComplete_22() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___whileLoopComplete_22)); }
	inline bool get_whileLoopComplete_22() const { return ___whileLoopComplete_22; }
	inline bool* get_address_of_whileLoopComplete_22() { return &___whileLoopComplete_22; }
	inline void set_whileLoopComplete_22(bool value)
	{
		___whileLoopComplete_22 = value;
	}

	inline static int32_t get_offset_of_boolOpsComplete_23() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___boolOpsComplete_23)); }
	inline bool get_boolOpsComplete_23() const { return ___boolOpsComplete_23; }
	inline bool* get_address_of_boolOpsComplete_23() { return &___boolOpsComplete_23; }
	inline void set_boolOpsComplete_23(bool value)
	{
		___boolOpsComplete_23 = value;
	}

	inline static int32_t get_offset_of_logicalOrComplete_24() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___logicalOrComplete_24)); }
	inline bool get_logicalOrComplete_24() const { return ___logicalOrComplete_24; }
	inline bool* get_address_of_logicalOrComplete_24() { return &___logicalOrComplete_24; }
	inline void set_logicalOrComplete_24(bool value)
	{
		___logicalOrComplete_24 = value;
	}

	inline static int32_t get_offset_of_logicalAndComplete_25() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___logicalAndComplete_25)); }
	inline bool get_logicalAndComplete_25() const { return ___logicalAndComplete_25; }
	inline bool* get_address_of_logicalAndComplete_25() { return &___logicalAndComplete_25; }
	inline void set_logicalAndComplete_25(bool value)
	{
		___logicalAndComplete_25 = value;
	}

	inline static int32_t get_offset_of_indentComplete_26() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___indentComplete_26)); }
	inline bool get_indentComplete_26() const { return ___indentComplete_26; }
	inline bool* get_address_of_indentComplete_26() { return &___indentComplete_26; }
	inline void set_indentComplete_26(bool value)
	{
		___indentComplete_26 = value;
	}

	inline static int32_t get_offset_of_thePlayer_27() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___thePlayer_27)); }
	inline PlayerMovement_t3166138480 * get_thePlayer_27() const { return ___thePlayer_27; }
	inline PlayerMovement_t3166138480 ** get_address_of_thePlayer_27() { return &___thePlayer_27; }
	inline void set_thePlayer_27(PlayerMovement_t3166138480 * value)
	{
		___thePlayer_27 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_27, value);
	}

	inline static int32_t get_offset_of_glPlayerPos_28() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___glPlayerPos_28)); }
	inline Vector3_t2243707580  get_glPlayerPos_28() const { return ___glPlayerPos_28; }
	inline Vector3_t2243707580 * get_address_of_glPlayerPos_28() { return &___glPlayerPos_28; }
	inline void set_glPlayerPos_28(Vector3_t2243707580  value)
	{
		___glPlayerPos_28 = value;
	}

	inline static int32_t get_offset_of_scoreText_29() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scoreText_29)); }
	inline Text_t356221433 * get_scoreText_29() const { return ___scoreText_29; }
	inline Text_t356221433 ** get_address_of_scoreText_29() { return &___scoreText_29; }
	inline void set_scoreText_29(Text_t356221433 * value)
	{
		___scoreText_29 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_29, value);
	}

	inline static int32_t get_offset_of_scientistText_30() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scientistText_30)); }
	inline Text_t356221433 * get_scientistText_30() const { return ___scientistText_30; }
	inline Text_t356221433 ** get_address_of_scientistText_30() { return &___scientistText_30; }
	inline void set_scientistText_30(Text_t356221433 * value)
	{
		___scientistText_30 = value;
		Il2CppCodeGenWriteBarrier(&___scientistText_30, value);
	}

	inline static int32_t get_offset_of_score_31() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___score_31)); }
	inline int32_t get_score_31() const { return ___score_31; }
	inline int32_t* get_address_of_score_31() { return &___score_31; }
	inline void set_score_31(int32_t value)
	{
		___score_31 = value;
	}

	inline static int32_t get_offset_of_scientistCount_32() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scientistCount_32)); }
	inline int32_t get_scientistCount_32() const { return ___scientistCount_32; }
	inline int32_t* get_address_of_scientistCount_32() { return &___scientistCount_32; }
	inline void set_scientistCount_32(int32_t value)
	{
		___scientistCount_32 = value;
	}

	inline static int32_t get_offset_of_totalScientists_33() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___totalScientists_33)); }
	inline int32_t get_totalScientists_33() const { return ___totalScientists_33; }
	inline int32_t* get_address_of_totalScientists_33() { return &___totalScientists_33; }
	inline void set_totalScientists_33(int32_t value)
	{
		___totalScientists_33 = value;
	}

	inline static int32_t get_offset_of_scrAdditive_34() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scrAdditive_34)); }
	inline int32_t get_scrAdditive_34() const { return ___scrAdditive_34; }
	inline int32_t* get_address_of_scrAdditive_34() { return &___scrAdditive_34; }
	inline void set_scrAdditive_34(int32_t value)
	{
		___scrAdditive_34 = value;
	}

	inline static int32_t get_offset_of_wordDisplay_35() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___wordDisplay_35)); }
	inline Text_t356221433 * get_wordDisplay_35() const { return ___wordDisplay_35; }
	inline Text_t356221433 ** get_address_of_wordDisplay_35() { return &___wordDisplay_35; }
	inline void set_wordDisplay_35(Text_t356221433 * value)
	{
		___wordDisplay_35 = value;
		Il2CppCodeGenWriteBarrier(&___wordDisplay_35, value);
	}

	inline static int32_t get_offset_of_previousSceneName_36() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___previousSceneName_36)); }
	inline String_t* get_previousSceneName_36() const { return ___previousSceneName_36; }
	inline String_t** get_address_of_previousSceneName_36() { return &___previousSceneName_36; }
	inline void set_previousSceneName_36(String_t* value)
	{
		___previousSceneName_36 = value;
		Il2CppCodeGenWriteBarrier(&___previousSceneName_36, value);
	}

	inline static int32_t get_offset_of_hasBombs_37() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___hasBombs_37)); }
	inline bool get_hasBombs_37() const { return ___hasBombs_37; }
	inline bool* get_address_of_hasBombs_37() { return &___hasBombs_37; }
	inline void set_hasBombs_37(bool value)
	{
		___hasBombs_37 = value;
	}

	inline static int32_t get_offset_of_hasDoubleJump_38() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___hasDoubleJump_38)); }
	inline bool get_hasDoubleJump_38() const { return ___hasDoubleJump_38; }
	inline bool* get_address_of_hasDoubleJump_38() { return &___hasDoubleJump_38; }
	inline void set_hasDoubleJump_38(bool value)
	{
		___hasDoubleJump_38 = value;
	}

	inline static int32_t get_offset_of_hasSpeedUp_39() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___hasSpeedUp_39)); }
	inline bool get_hasSpeedUp_39() const { return ___hasSpeedUp_39; }
	inline bool* get_address_of_hasSpeedUp_39() { return &___hasSpeedUp_39; }
	inline void set_hasSpeedUp_39(bool value)
	{
		___hasSpeedUp_39 = value;
	}
};

struct GlobalController_t324951557_StaticFields
{
public:
	// GlobalController GlobalController::Instance
	GlobalController_t324951557 * ___Instance_2;
	// System.Single GlobalController::timer
	float ___timer_4;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(GlobalController_t324951557_StaticFields, ___Instance_2)); }
	inline GlobalController_t324951557 * get_Instance_2() const { return ___Instance_2; }
	inline GlobalController_t324951557 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(GlobalController_t324951557 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}

	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(GlobalController_t324951557_StaticFields, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
