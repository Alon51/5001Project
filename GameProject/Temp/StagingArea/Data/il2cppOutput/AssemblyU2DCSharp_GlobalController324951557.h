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
	// System.Boolean GlobalController::arrayPortalActive
	bool ___arrayPortalActive_3;
	// System.Boolean GlobalController::loopPortalActive
	bool ___loopPortalActive_4;
	// UnityEngine.Camera GlobalController::mainCam
	Camera_t189460977 * ___mainCam_5;
	// UnityEngine.Camera GlobalController::secondCam
	Camera_t189460977 * ___secondCam_6;
	// System.Boolean GlobalController::onMainCam
	bool ___onMainCam_7;
	// System.String GlobalController::camName
	String_t* ___camName_8;
	// UnityEngine.GameObject[] GlobalController::scientistSprites
	GameObjectU5BU5D_t3057952154* ___scientistSprites_9;
	// System.Boolean GlobalController::singleForLoopComplete
	bool ___singleForLoopComplete_10;
	// System.Boolean GlobalController::nestedForLoopComplete
	bool ___nestedForLoopComplete_11;
	// System.Boolean GlobalController::whileLoopComplete
	bool ___whileLoopComplete_12;
	// System.Boolean GlobalController::boolOpsComplete
	bool ___boolOpsComplete_13;
	// System.Boolean GlobalController::logicalOrComplete
	bool ___logicalOrComplete_14;
	// System.Boolean GlobalController::logicalAndComplete
	bool ___logicalAndComplete_15;
	// System.Boolean GlobalController::indentComplete
	bool ___indentComplete_16;
	// PlayerMovement GlobalController::thePlayer
	PlayerMovement_t3166138480 * ___thePlayer_17;
	// UnityEngine.Vector3 GlobalController::glPlayerPos
	Vector3_t2243707580  ___glPlayerPos_18;
	// UnityEngine.UI.Text GlobalController::scoreText
	Text_t356221433 * ___scoreText_19;
	// UnityEngine.UI.Text GlobalController::scientistText
	Text_t356221433 * ___scientistText_20;
	// System.Int32 GlobalController::score
	int32_t ___score_21;
	// System.Int32 GlobalController::scientistCount
	int32_t ___scientistCount_22;
	// System.Int32 GlobalController::totalScientists
	int32_t ___totalScientists_23;
	// System.Int32 GlobalController::scrAdditive
	int32_t ___scrAdditive_24;
	// UnityEngine.UI.Text GlobalController::wordDisplay
	Text_t356221433 * ___wordDisplay_25;
	// System.String GlobalController::previousSceneName
	String_t* ___previousSceneName_26;
	// System.Boolean GlobalController::hasBombs
	bool ___hasBombs_27;
	// System.Boolean GlobalController::hasDoubleJump
	bool ___hasDoubleJump_28;
	// System.Boolean GlobalController::hasSpeedUp
	bool ___hasSpeedUp_29;

public:
	inline static int32_t get_offset_of_arrayPortalActive_3() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___arrayPortalActive_3)); }
	inline bool get_arrayPortalActive_3() const { return ___arrayPortalActive_3; }
	inline bool* get_address_of_arrayPortalActive_3() { return &___arrayPortalActive_3; }
	inline void set_arrayPortalActive_3(bool value)
	{
		___arrayPortalActive_3 = value;
	}

	inline static int32_t get_offset_of_loopPortalActive_4() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___loopPortalActive_4)); }
	inline bool get_loopPortalActive_4() const { return ___loopPortalActive_4; }
	inline bool* get_address_of_loopPortalActive_4() { return &___loopPortalActive_4; }
	inline void set_loopPortalActive_4(bool value)
	{
		___loopPortalActive_4 = value;
	}

	inline static int32_t get_offset_of_mainCam_5() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___mainCam_5)); }
	inline Camera_t189460977 * get_mainCam_5() const { return ___mainCam_5; }
	inline Camera_t189460977 ** get_address_of_mainCam_5() { return &___mainCam_5; }
	inline void set_mainCam_5(Camera_t189460977 * value)
	{
		___mainCam_5 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_5, value);
	}

	inline static int32_t get_offset_of_secondCam_6() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___secondCam_6)); }
	inline Camera_t189460977 * get_secondCam_6() const { return ___secondCam_6; }
	inline Camera_t189460977 ** get_address_of_secondCam_6() { return &___secondCam_6; }
	inline void set_secondCam_6(Camera_t189460977 * value)
	{
		___secondCam_6 = value;
		Il2CppCodeGenWriteBarrier(&___secondCam_6, value);
	}

	inline static int32_t get_offset_of_onMainCam_7() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___onMainCam_7)); }
	inline bool get_onMainCam_7() const { return ___onMainCam_7; }
	inline bool* get_address_of_onMainCam_7() { return &___onMainCam_7; }
	inline void set_onMainCam_7(bool value)
	{
		___onMainCam_7 = value;
	}

	inline static int32_t get_offset_of_camName_8() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___camName_8)); }
	inline String_t* get_camName_8() const { return ___camName_8; }
	inline String_t** get_address_of_camName_8() { return &___camName_8; }
	inline void set_camName_8(String_t* value)
	{
		___camName_8 = value;
		Il2CppCodeGenWriteBarrier(&___camName_8, value);
	}

	inline static int32_t get_offset_of_scientistSprites_9() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scientistSprites_9)); }
	inline GameObjectU5BU5D_t3057952154* get_scientistSprites_9() const { return ___scientistSprites_9; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_scientistSprites_9() { return &___scientistSprites_9; }
	inline void set_scientistSprites_9(GameObjectU5BU5D_t3057952154* value)
	{
		___scientistSprites_9 = value;
		Il2CppCodeGenWriteBarrier(&___scientistSprites_9, value);
	}

	inline static int32_t get_offset_of_singleForLoopComplete_10() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___singleForLoopComplete_10)); }
	inline bool get_singleForLoopComplete_10() const { return ___singleForLoopComplete_10; }
	inline bool* get_address_of_singleForLoopComplete_10() { return &___singleForLoopComplete_10; }
	inline void set_singleForLoopComplete_10(bool value)
	{
		___singleForLoopComplete_10 = value;
	}

	inline static int32_t get_offset_of_nestedForLoopComplete_11() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___nestedForLoopComplete_11)); }
	inline bool get_nestedForLoopComplete_11() const { return ___nestedForLoopComplete_11; }
	inline bool* get_address_of_nestedForLoopComplete_11() { return &___nestedForLoopComplete_11; }
	inline void set_nestedForLoopComplete_11(bool value)
	{
		___nestedForLoopComplete_11 = value;
	}

	inline static int32_t get_offset_of_whileLoopComplete_12() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___whileLoopComplete_12)); }
	inline bool get_whileLoopComplete_12() const { return ___whileLoopComplete_12; }
	inline bool* get_address_of_whileLoopComplete_12() { return &___whileLoopComplete_12; }
	inline void set_whileLoopComplete_12(bool value)
	{
		___whileLoopComplete_12 = value;
	}

	inline static int32_t get_offset_of_boolOpsComplete_13() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___boolOpsComplete_13)); }
	inline bool get_boolOpsComplete_13() const { return ___boolOpsComplete_13; }
	inline bool* get_address_of_boolOpsComplete_13() { return &___boolOpsComplete_13; }
	inline void set_boolOpsComplete_13(bool value)
	{
		___boolOpsComplete_13 = value;
	}

	inline static int32_t get_offset_of_logicalOrComplete_14() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___logicalOrComplete_14)); }
	inline bool get_logicalOrComplete_14() const { return ___logicalOrComplete_14; }
	inline bool* get_address_of_logicalOrComplete_14() { return &___logicalOrComplete_14; }
	inline void set_logicalOrComplete_14(bool value)
	{
		___logicalOrComplete_14 = value;
	}

	inline static int32_t get_offset_of_logicalAndComplete_15() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___logicalAndComplete_15)); }
	inline bool get_logicalAndComplete_15() const { return ___logicalAndComplete_15; }
	inline bool* get_address_of_logicalAndComplete_15() { return &___logicalAndComplete_15; }
	inline void set_logicalAndComplete_15(bool value)
	{
		___logicalAndComplete_15 = value;
	}

	inline static int32_t get_offset_of_indentComplete_16() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___indentComplete_16)); }
	inline bool get_indentComplete_16() const { return ___indentComplete_16; }
	inline bool* get_address_of_indentComplete_16() { return &___indentComplete_16; }
	inline void set_indentComplete_16(bool value)
	{
		___indentComplete_16 = value;
	}

	inline static int32_t get_offset_of_thePlayer_17() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___thePlayer_17)); }
	inline PlayerMovement_t3166138480 * get_thePlayer_17() const { return ___thePlayer_17; }
	inline PlayerMovement_t3166138480 ** get_address_of_thePlayer_17() { return &___thePlayer_17; }
	inline void set_thePlayer_17(PlayerMovement_t3166138480 * value)
	{
		___thePlayer_17 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_17, value);
	}

	inline static int32_t get_offset_of_glPlayerPos_18() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___glPlayerPos_18)); }
	inline Vector3_t2243707580  get_glPlayerPos_18() const { return ___glPlayerPos_18; }
	inline Vector3_t2243707580 * get_address_of_glPlayerPos_18() { return &___glPlayerPos_18; }
	inline void set_glPlayerPos_18(Vector3_t2243707580  value)
	{
		___glPlayerPos_18 = value;
	}

	inline static int32_t get_offset_of_scoreText_19() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scoreText_19)); }
	inline Text_t356221433 * get_scoreText_19() const { return ___scoreText_19; }
	inline Text_t356221433 ** get_address_of_scoreText_19() { return &___scoreText_19; }
	inline void set_scoreText_19(Text_t356221433 * value)
	{
		___scoreText_19 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_19, value);
	}

	inline static int32_t get_offset_of_scientistText_20() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scientistText_20)); }
	inline Text_t356221433 * get_scientistText_20() const { return ___scientistText_20; }
	inline Text_t356221433 ** get_address_of_scientistText_20() { return &___scientistText_20; }
	inline void set_scientistText_20(Text_t356221433 * value)
	{
		___scientistText_20 = value;
		Il2CppCodeGenWriteBarrier(&___scientistText_20, value);
	}

	inline static int32_t get_offset_of_score_21() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___score_21)); }
	inline int32_t get_score_21() const { return ___score_21; }
	inline int32_t* get_address_of_score_21() { return &___score_21; }
	inline void set_score_21(int32_t value)
	{
		___score_21 = value;
	}

	inline static int32_t get_offset_of_scientistCount_22() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scientistCount_22)); }
	inline int32_t get_scientistCount_22() const { return ___scientistCount_22; }
	inline int32_t* get_address_of_scientistCount_22() { return &___scientistCount_22; }
	inline void set_scientistCount_22(int32_t value)
	{
		___scientistCount_22 = value;
	}

	inline static int32_t get_offset_of_totalScientists_23() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___totalScientists_23)); }
	inline int32_t get_totalScientists_23() const { return ___totalScientists_23; }
	inline int32_t* get_address_of_totalScientists_23() { return &___totalScientists_23; }
	inline void set_totalScientists_23(int32_t value)
	{
		___totalScientists_23 = value;
	}

	inline static int32_t get_offset_of_scrAdditive_24() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___scrAdditive_24)); }
	inline int32_t get_scrAdditive_24() const { return ___scrAdditive_24; }
	inline int32_t* get_address_of_scrAdditive_24() { return &___scrAdditive_24; }
	inline void set_scrAdditive_24(int32_t value)
	{
		___scrAdditive_24 = value;
	}

	inline static int32_t get_offset_of_wordDisplay_25() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___wordDisplay_25)); }
	inline Text_t356221433 * get_wordDisplay_25() const { return ___wordDisplay_25; }
	inline Text_t356221433 ** get_address_of_wordDisplay_25() { return &___wordDisplay_25; }
	inline void set_wordDisplay_25(Text_t356221433 * value)
	{
		___wordDisplay_25 = value;
		Il2CppCodeGenWriteBarrier(&___wordDisplay_25, value);
	}

	inline static int32_t get_offset_of_previousSceneName_26() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___previousSceneName_26)); }
	inline String_t* get_previousSceneName_26() const { return ___previousSceneName_26; }
	inline String_t** get_address_of_previousSceneName_26() { return &___previousSceneName_26; }
	inline void set_previousSceneName_26(String_t* value)
	{
		___previousSceneName_26 = value;
		Il2CppCodeGenWriteBarrier(&___previousSceneName_26, value);
	}

	inline static int32_t get_offset_of_hasBombs_27() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___hasBombs_27)); }
	inline bool get_hasBombs_27() const { return ___hasBombs_27; }
	inline bool* get_address_of_hasBombs_27() { return &___hasBombs_27; }
	inline void set_hasBombs_27(bool value)
	{
		___hasBombs_27 = value;
	}

	inline static int32_t get_offset_of_hasDoubleJump_28() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___hasDoubleJump_28)); }
	inline bool get_hasDoubleJump_28() const { return ___hasDoubleJump_28; }
	inline bool* get_address_of_hasDoubleJump_28() { return &___hasDoubleJump_28; }
	inline void set_hasDoubleJump_28(bool value)
	{
		___hasDoubleJump_28 = value;
	}

	inline static int32_t get_offset_of_hasSpeedUp_29() { return static_cast<int32_t>(offsetof(GlobalController_t324951557, ___hasSpeedUp_29)); }
	inline bool get_hasSpeedUp_29() const { return ___hasSpeedUp_29; }
	inline bool* get_address_of_hasSpeedUp_29() { return &___hasSpeedUp_29; }
	inline void set_hasSpeedUp_29(bool value)
	{
		___hasSpeedUp_29 = value;
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
