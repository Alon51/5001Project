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
// UnityEngine.Camera
struct Camera_t189460977;
// System.String
struct String_t;
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
	// System.Int64 GlobalController::noteButtonCounter
	int64_t ___noteButtonCounter_4;
	// System.Boolean GlobalController::arrayPortalActive
	bool ___arrayPortalActive_5;
	// System.Boolean GlobalController::loopPortalActive
	bool ___loopPortalActive_6;
	// UnityEngine.Camera GlobalController::mainCam
	Camera_t189460977 * ___mainCam_7;
	// UnityEngine.Camera GlobalController::secondCam
	Camera_t189460977 * ___secondCam_8;
	// System.Boolean GlobalController::onMainCam
	bool ___onMainCam_9;
	// System.String GlobalController::camName
	String_t* ___camName_10;
	// UnityEngine.GameObject[] GlobalController::scientistSprites
	GameObjectU5BU5D_t3057952154* ___scientistSprites_11;
	// System.Boolean GlobalController::singleForLoopComplete
	bool ___singleForLoopComplete_12;
	// System.Boolean GlobalController::nestedForLoopComplete
	bool ___nestedForLoopComplete_13;
	// System.Boolean GlobalController::whileLoopComplete
	bool ___whileLoopComplete_14;
	// System.Boolean GlobalController::boolOpsComplete
	bool ___boolOpsComplete_15;
	// System.Boolean GlobalController::logicalOrComplete
	bool ___logicalOrComplete_16;
	// System.Boolean GlobalController::logicalAndComplete
	bool ___logicalAndComplete_17;
	// System.Boolean GlobalController::indentComplete
	bool ___indentComplete_18;
	// PlayerMovement GlobalController::thePlayer
	PlayerMovement_t3166138480 * ___thePlayer_19;
	// UnityEngine.Vector3 GlobalController::glPlayerPos
	Vector3_t2243707580  ___glPlayerPos_20;
	// UnityEngine.UI.Text GlobalController::scoreText
	Text_t356221433 * ___scoreText_21;
	// UnityEngine.UI.Text GlobalController::scientistText
	Text_t356221433 * ___scientistText_22;
	// System.Int32 GlobalController::score
	int32_t ___score_23;
	// System.Int32 GlobalController::scientistCount
	int32_t ___scientistCount_24;
	// System.Int32 GlobalController::totalScientists
	int32_t ___totalScientists_25;
	// System.Int32 GlobalController::scrAdditive
	int32_t ___scrAdditive_26;
	// UnityEngine.UI.Text GlobalController::wordDisplay
	Text_t356221433 * ___wordDisplay_27;
	// System.String GlobalController::previousSceneName
	String_t* ___previousSceneName_28;
	// System.Boolean GlobalController::hasBombs
	bool ___hasBombs_29;
	// System.Boolean GlobalController::hasDoubleJump
	bool ___hasDoubleJump_30;
	// System.Boolean GlobalController::hasSpeedUp
	bool ___hasSpeedUp_31;

public:
	inline static int32_t get_offset_of_googleAnalytics_3() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___googleAnalytics_3)); }
	inline GoogleAnalyticsV4_t198817271 * get_googleAnalytics_3() const { return ___googleAnalytics_3; }
	inline GoogleAnalyticsV4_t198817271 ** get_address_of_googleAnalytics_3() { return &___googleAnalytics_3; }
	inline void set_googleAnalytics_3(GoogleAnalyticsV4_t198817271 * value)
	{
		___googleAnalytics_3 = value;
		Il2CppCodeGenWriteBarrier(&___googleAnalytics_3, value);
	}

	inline static int32_t get_offset_of_noteButtonCounter_4() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___noteButtonCounter_4)); }
	inline int64_t get_noteButtonCounter_4() const { return ___noteButtonCounter_4; }
	inline int64_t* get_address_of_noteButtonCounter_4() { return &___noteButtonCounter_4; }
	inline void set_noteButtonCounter_4(int64_t value)
	{
		___noteButtonCounter_4 = value;
	}

	inline static int32_t get_offset_of_arrayPortalActive_5() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___arrayPortalActive_5)); }
	inline bool get_arrayPortalActive_5() const { return ___arrayPortalActive_5; }
	inline bool* get_address_of_arrayPortalActive_5() { return &___arrayPortalActive_5; }
	inline void set_arrayPortalActive_5(bool value)
	{
		___arrayPortalActive_5 = value;
	}

	inline static int32_t get_offset_of_loopPortalActive_6() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___loopPortalActive_6)); }
	inline bool get_loopPortalActive_6() const { return ___loopPortalActive_6; }
	inline bool* get_address_of_loopPortalActive_6() { return &___loopPortalActive_6; }
	inline void set_loopPortalActive_6(bool value)
	{
		___loopPortalActive_6 = value;
	}

	inline static int32_t get_offset_of_mainCam_7() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___mainCam_7)); }
	inline Camera_t189460977 * get_mainCam_7() const { return ___mainCam_7; }
	inline Camera_t189460977 ** get_address_of_mainCam_7() { return &___mainCam_7; }
	inline void set_mainCam_7(Camera_t189460977 * value)
	{
		___mainCam_7 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_7, value);
	}

	inline static int32_t get_offset_of_secondCam_8() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___secondCam_8)); }
	inline Camera_t189460977 * get_secondCam_8() const { return ___secondCam_8; }
	inline Camera_t189460977 ** get_address_of_secondCam_8() { return &___secondCam_8; }
	inline void set_secondCam_8(Camera_t189460977 * value)
	{
		___secondCam_8 = value;
		Il2CppCodeGenWriteBarrier(&___secondCam_8, value);
	}

	inline static int32_t get_offset_of_onMainCam_9() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___onMainCam_9)); }
	inline bool get_onMainCam_9() const { return ___onMainCam_9; }
	inline bool* get_address_of_onMainCam_9() { return &___onMainCam_9; }
	inline void set_onMainCam_9(bool value)
	{
		___onMainCam_9 = value;
	}

	inline static int32_t get_offset_of_camName_10() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___camName_10)); }
	inline String_t* get_camName_10() const { return ___camName_10; }
	inline String_t** get_address_of_camName_10() { return &___camName_10; }
	inline void set_camName_10(String_t* value)
	{
		___camName_10 = value;
		Il2CppCodeGenWriteBarrier(&___camName_10, value);
	}

	inline static int32_t get_offset_of_scientistSprites_11() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scientistSprites_11)); }
	inline GameObjectU5BU5D_t3057952154* get_scientistSprites_11() const { return ___scientistSprites_11; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_scientistSprites_11() { return &___scientistSprites_11; }
	inline void set_scientistSprites_11(GameObjectU5BU5D_t3057952154* value)
	{
		___scientistSprites_11 = value;
		Il2CppCodeGenWriteBarrier(&___scientistSprites_11, value);
	}

	inline static int32_t get_offset_of_singleForLoopComplete_12() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___singleForLoopComplete_12)); }
	inline bool get_singleForLoopComplete_12() const { return ___singleForLoopComplete_12; }
	inline bool* get_address_of_singleForLoopComplete_12() { return &___singleForLoopComplete_12; }
	inline void set_singleForLoopComplete_12(bool value)
	{
		___singleForLoopComplete_12 = value;
	}

	inline static int32_t get_offset_of_nestedForLoopComplete_13() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___nestedForLoopComplete_13)); }
	inline bool get_nestedForLoopComplete_13() const { return ___nestedForLoopComplete_13; }
	inline bool* get_address_of_nestedForLoopComplete_13() { return &___nestedForLoopComplete_13; }
	inline void set_nestedForLoopComplete_13(bool value)
	{
		___nestedForLoopComplete_13 = value;
	}

	inline static int32_t get_offset_of_whileLoopComplete_14() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___whileLoopComplete_14)); }
	inline bool get_whileLoopComplete_14() const { return ___whileLoopComplete_14; }
	inline bool* get_address_of_whileLoopComplete_14() { return &___whileLoopComplete_14; }
	inline void set_whileLoopComplete_14(bool value)
	{
		___whileLoopComplete_14 = value;
	}

	inline static int32_t get_offset_of_boolOpsComplete_15() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___boolOpsComplete_15)); }
	inline bool get_boolOpsComplete_15() const { return ___boolOpsComplete_15; }
	inline bool* get_address_of_boolOpsComplete_15() { return &___boolOpsComplete_15; }
	inline void set_boolOpsComplete_15(bool value)
	{
		___boolOpsComplete_15 = value;
	}

	inline static int32_t get_offset_of_logicalOrComplete_16() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___logicalOrComplete_16)); }
	inline bool get_logicalOrComplete_16() const { return ___logicalOrComplete_16; }
	inline bool* get_address_of_logicalOrComplete_16() { return &___logicalOrComplete_16; }
	inline void set_logicalOrComplete_16(bool value)
	{
		___logicalOrComplete_16 = value;
	}

	inline static int32_t get_offset_of_logicalAndComplete_17() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___logicalAndComplete_17)); }
	inline bool get_logicalAndComplete_17() const { return ___logicalAndComplete_17; }
	inline bool* get_address_of_logicalAndComplete_17() { return &___logicalAndComplete_17; }
	inline void set_logicalAndComplete_17(bool value)
	{
		___logicalAndComplete_17 = value;
	}

	inline static int32_t get_offset_of_indentComplete_18() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___indentComplete_18)); }
	inline bool get_indentComplete_18() const { return ___indentComplete_18; }
	inline bool* get_address_of_indentComplete_18() { return &___indentComplete_18; }
	inline void set_indentComplete_18(bool value)
	{
		___indentComplete_18 = value;
	}

	inline static int32_t get_offset_of_thePlayer_19() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___thePlayer_19)); }
	inline PlayerMovement_t3166138480 * get_thePlayer_19() const { return ___thePlayer_19; }
	inline PlayerMovement_t3166138480 ** get_address_of_thePlayer_19() { return &___thePlayer_19; }
	inline void set_thePlayer_19(PlayerMovement_t3166138480 * value)
	{
		___thePlayer_19 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_19, value);
	}

	inline static int32_t get_offset_of_glPlayerPos_20() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___glPlayerPos_20)); }
	inline Vector3_t2243707580  get_glPlayerPos_20() const { return ___glPlayerPos_20; }
	inline Vector3_t2243707580 * get_address_of_glPlayerPos_20() { return &___glPlayerPos_20; }
	inline void set_glPlayerPos_20(Vector3_t2243707580  value)
	{
		___glPlayerPos_20 = value;
	}

	inline static int32_t get_offset_of_scoreText_21() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scoreText_21)); }
	inline Text_t356221433 * get_scoreText_21() const { return ___scoreText_21; }
	inline Text_t356221433 ** get_address_of_scoreText_21() { return &___scoreText_21; }
	inline void set_scoreText_21(Text_t356221433 * value)
	{
		___scoreText_21 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_21, value);
	}

	inline static int32_t get_offset_of_scientistText_22() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scientistText_22)); }
	inline Text_t356221433 * get_scientistText_22() const { return ___scientistText_22; }
	inline Text_t356221433 ** get_address_of_scientistText_22() { return &___scientistText_22; }
	inline void set_scientistText_22(Text_t356221433 * value)
	{
		___scientistText_22 = value;
		Il2CppCodeGenWriteBarrier(&___scientistText_22, value);
	}

	inline static int32_t get_offset_of_score_23() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___score_23)); }
	inline int32_t get_score_23() const { return ___score_23; }
	inline int32_t* get_address_of_score_23() { return &___score_23; }
	inline void set_score_23(int32_t value)
	{
		___score_23 = value;
	}

	inline static int32_t get_offset_of_scientistCount_24() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scientistCount_24)); }
	inline int32_t get_scientistCount_24() const { return ___scientistCount_24; }
	inline int32_t* get_address_of_scientistCount_24() { return &___scientistCount_24; }
	inline void set_scientistCount_24(int32_t value)
	{
		___scientistCount_24 = value;
	}

	inline static int32_t get_offset_of_totalScientists_25() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___totalScientists_25)); }
	inline int32_t get_totalScientists_25() const { return ___totalScientists_25; }
	inline int32_t* get_address_of_totalScientists_25() { return &___totalScientists_25; }
	inline void set_totalScientists_25(int32_t value)
	{
		___totalScientists_25 = value;
	}

	inline static int32_t get_offset_of_scrAdditive_26() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scrAdditive_26)); }
	inline int32_t get_scrAdditive_26() const { return ___scrAdditive_26; }
	inline int32_t* get_address_of_scrAdditive_26() { return &___scrAdditive_26; }
	inline void set_scrAdditive_26(int32_t value)
	{
		___scrAdditive_26 = value;
	}

	inline static int32_t get_offset_of_wordDisplay_27() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___wordDisplay_27)); }
	inline Text_t356221433 * get_wordDisplay_27() const { return ___wordDisplay_27; }
	inline Text_t356221433 ** get_address_of_wordDisplay_27() { return &___wordDisplay_27; }
	inline void set_wordDisplay_27(Text_t356221433 * value)
	{
		___wordDisplay_27 = value;
		Il2CppCodeGenWriteBarrier(&___wordDisplay_27, value);
	}

	inline static int32_t get_offset_of_previousSceneName_28() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___previousSceneName_28)); }
	inline String_t* get_previousSceneName_28() const { return ___previousSceneName_28; }
	inline String_t** get_address_of_previousSceneName_28() { return &___previousSceneName_28; }
	inline void set_previousSceneName_28(String_t* value)
	{
		___previousSceneName_28 = value;
		Il2CppCodeGenWriteBarrier(&___previousSceneName_28, value);
	}

	inline static int32_t get_offset_of_hasBombs_29() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___hasBombs_29)); }
	inline bool get_hasBombs_29() const { return ___hasBombs_29; }
	inline bool* get_address_of_hasBombs_29() { return &___hasBombs_29; }
	inline void set_hasBombs_29(bool value)
	{
		___hasBombs_29 = value;
	}

	inline static int32_t get_offset_of_hasDoubleJump_30() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___hasDoubleJump_30)); }
	inline bool get_hasDoubleJump_30() const { return ___hasDoubleJump_30; }
	inline bool* get_address_of_hasDoubleJump_30() { return &___hasDoubleJump_30; }
	inline void set_hasDoubleJump_30(bool value)
	{
		___hasDoubleJump_30 = value;
	}

	inline static int32_t get_offset_of_hasSpeedUp_31() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___hasSpeedUp_31)); }
	inline bool get_hasSpeedUp_31() const { return ___hasSpeedUp_31; }
	inline bool* get_address_of_hasSpeedUp_31() { return &___hasSpeedUp_31; }
	inline void set_hasSpeedUp_31(bool value)
	{
		___hasSpeedUp_31 = value;
	}
};

struct GlobalController_t324951557_StaticFields
{
public:
	// GlobalController GlobalController::Instance
	GlobalController_t324951557 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(GlobalController_t324951557_StaticFields, ___Instance_2)); }
	inline GlobalController_t324951557 * get_Instance_2() const { return ___Instance_2; }
	inline GlobalController_t324951557 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(GlobalController_t324951557 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
