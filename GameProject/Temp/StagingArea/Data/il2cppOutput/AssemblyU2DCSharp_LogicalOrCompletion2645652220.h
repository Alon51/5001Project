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

// ArrayReaction
struct ArrayReaction_t3000959918;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LogicalOrCompletion
struct  LogicalOrCompletion_t2645652220  : public MonoBehaviour_t1158329972
{
public:
	// ArrayReaction LogicalOrCompletion::trueSuccess
	ArrayReaction_t3000959918 * ___trueSuccess_2;
	// ArrayReaction LogicalOrCompletion::falseSuccess
	ArrayReaction_t3000959918 * ___falseSuccess_3;
	// ArrayReaction LogicalOrCompletion::orSuccess
	ArrayReaction_t3000959918 * ___orSuccess_4;
	// ArrayReaction LogicalOrCompletion::replacementTrue
	ArrayReaction_t3000959918 * ___replacementTrue_5;
	// ArrayReaction LogicalOrCompletion::replacementFalse
	ArrayReaction_t3000959918 * ___replacementFalse_6;
	// ArrayReaction LogicalOrCompletion::replacementOr
	ArrayReaction_t3000959918 * ___replacementOr_7;
	// System.Boolean LogicalOrCompletion::puzzleFinished
	bool ___puzzleFinished_8;
	// System.Boolean LogicalOrCompletion::camToggled
	bool ___camToggled_9;
	// System.Boolean LogicalOrCompletion::leftPylonFlag
	bool ___leftPylonFlag_10;
	// System.Boolean LogicalOrCompletion::rightPylonFlag
	bool ___rightPylonFlag_11;
	// System.Boolean LogicalOrCompletion::doorOpened
	bool ___doorOpened_12;
	// System.Boolean LogicalOrCompletion::scoreChanged
	bool ___scoreChanged_13;
	// UnityEngine.GameObject[] LogicalOrCompletion::arrayTiles
	GameObjectU5BU5D_t3057952154* ___arrayTiles_14;
	// UnityEngine.GameObject[] LogicalOrCompletion::replacementTiles
	GameObjectU5BU5D_t3057952154* ___replacementTiles_15;
	// UnityEngine.GameObject LogicalOrCompletion::leftPylonClosed
	GameObject_t1756533147 * ___leftPylonClosed_16;
	// UnityEngine.GameObject LogicalOrCompletion::rightPylonClosed
	GameObject_t1756533147 * ___rightPylonClosed_17;
	// UnityEngine.GameObject LogicalOrCompletion::leftPylonRaised
	GameObject_t1756533147 * ___leftPylonRaised_18;
	// UnityEngine.GameObject LogicalOrCompletion::rightPylonRaised
	GameObject_t1756533147 * ___rightPylonRaised_19;
	// UnityEngine.GameObject LogicalOrCompletion::doorOne
	GameObject_t1756533147 * ___doorOne_20;
	// UnityEngine.AudioSource LogicalOrCompletion::solved
	AudioSource_t1135106623 * ___solved_21;
	// UnityEngine.AudioSource LogicalOrCompletion::raisePillarSound
	AudioSource_t1135106623 * ___raisePillarSound_22;
	// UnityEngine.AudioSource LogicalOrCompletion::raiseDoor
	AudioSource_t1135106623 * ___raiseDoor_23;
	// System.Single LogicalOrCompletion::rightX
	float ___rightX_24;
	// System.Single LogicalOrCompletion::leftX
	float ___leftX_25;
	// System.Single LogicalOrCompletion::inSceneY
	float ___inSceneY_26;
	// System.Single LogicalOrCompletion::offScreenY
	float ___offScreenY_27;
	// UnityEngine.Vector3 LogicalOrCompletion::doorOneStartingPosition
	Vector3_t2243707580  ___doorOneStartingPosition_28;
	// UnityEngine.Vector3 LogicalOrCompletion::doorOneOpenPosition
	Vector3_t2243707580  ___doorOneOpenPosition_29;

public:
	inline static int32_t get_offset_of_trueSuccess_2() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___trueSuccess_2)); }
	inline ArrayReaction_t3000959918 * get_trueSuccess_2() const { return ___trueSuccess_2; }
	inline ArrayReaction_t3000959918 ** get_address_of_trueSuccess_2() { return &___trueSuccess_2; }
	inline void set_trueSuccess_2(ArrayReaction_t3000959918 * value)
	{
		___trueSuccess_2 = value;
		Il2CppCodeGenWriteBarrier(&___trueSuccess_2, value);
	}

	inline static int32_t get_offset_of_falseSuccess_3() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___falseSuccess_3)); }
	inline ArrayReaction_t3000959918 * get_falseSuccess_3() const { return ___falseSuccess_3; }
	inline ArrayReaction_t3000959918 ** get_address_of_falseSuccess_3() { return &___falseSuccess_3; }
	inline void set_falseSuccess_3(ArrayReaction_t3000959918 * value)
	{
		___falseSuccess_3 = value;
		Il2CppCodeGenWriteBarrier(&___falseSuccess_3, value);
	}

	inline static int32_t get_offset_of_orSuccess_4() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___orSuccess_4)); }
	inline ArrayReaction_t3000959918 * get_orSuccess_4() const { return ___orSuccess_4; }
	inline ArrayReaction_t3000959918 ** get_address_of_orSuccess_4() { return &___orSuccess_4; }
	inline void set_orSuccess_4(ArrayReaction_t3000959918 * value)
	{
		___orSuccess_4 = value;
		Il2CppCodeGenWriteBarrier(&___orSuccess_4, value);
	}

	inline static int32_t get_offset_of_replacementTrue_5() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___replacementTrue_5)); }
	inline ArrayReaction_t3000959918 * get_replacementTrue_5() const { return ___replacementTrue_5; }
	inline ArrayReaction_t3000959918 ** get_address_of_replacementTrue_5() { return &___replacementTrue_5; }
	inline void set_replacementTrue_5(ArrayReaction_t3000959918 * value)
	{
		___replacementTrue_5 = value;
		Il2CppCodeGenWriteBarrier(&___replacementTrue_5, value);
	}

	inline static int32_t get_offset_of_replacementFalse_6() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___replacementFalse_6)); }
	inline ArrayReaction_t3000959918 * get_replacementFalse_6() const { return ___replacementFalse_6; }
	inline ArrayReaction_t3000959918 ** get_address_of_replacementFalse_6() { return &___replacementFalse_6; }
	inline void set_replacementFalse_6(ArrayReaction_t3000959918 * value)
	{
		___replacementFalse_6 = value;
		Il2CppCodeGenWriteBarrier(&___replacementFalse_6, value);
	}

	inline static int32_t get_offset_of_replacementOr_7() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___replacementOr_7)); }
	inline ArrayReaction_t3000959918 * get_replacementOr_7() const { return ___replacementOr_7; }
	inline ArrayReaction_t3000959918 ** get_address_of_replacementOr_7() { return &___replacementOr_7; }
	inline void set_replacementOr_7(ArrayReaction_t3000959918 * value)
	{
		___replacementOr_7 = value;
		Il2CppCodeGenWriteBarrier(&___replacementOr_7, value);
	}

	inline static int32_t get_offset_of_puzzleFinished_8() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___puzzleFinished_8)); }
	inline bool get_puzzleFinished_8() const { return ___puzzleFinished_8; }
	inline bool* get_address_of_puzzleFinished_8() { return &___puzzleFinished_8; }
	inline void set_puzzleFinished_8(bool value)
	{
		___puzzleFinished_8 = value;
	}

	inline static int32_t get_offset_of_camToggled_9() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___camToggled_9)); }
	inline bool get_camToggled_9() const { return ___camToggled_9; }
	inline bool* get_address_of_camToggled_9() { return &___camToggled_9; }
	inline void set_camToggled_9(bool value)
	{
		___camToggled_9 = value;
	}

	inline static int32_t get_offset_of_leftPylonFlag_10() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___leftPylonFlag_10)); }
	inline bool get_leftPylonFlag_10() const { return ___leftPylonFlag_10; }
	inline bool* get_address_of_leftPylonFlag_10() { return &___leftPylonFlag_10; }
	inline void set_leftPylonFlag_10(bool value)
	{
		___leftPylonFlag_10 = value;
	}

	inline static int32_t get_offset_of_rightPylonFlag_11() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___rightPylonFlag_11)); }
	inline bool get_rightPylonFlag_11() const { return ___rightPylonFlag_11; }
	inline bool* get_address_of_rightPylonFlag_11() { return &___rightPylonFlag_11; }
	inline void set_rightPylonFlag_11(bool value)
	{
		___rightPylonFlag_11 = value;
	}

	inline static int32_t get_offset_of_doorOpened_12() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___doorOpened_12)); }
	inline bool get_doorOpened_12() const { return ___doorOpened_12; }
	inline bool* get_address_of_doorOpened_12() { return &___doorOpened_12; }
	inline void set_doorOpened_12(bool value)
	{
		___doorOpened_12 = value;
	}

	inline static int32_t get_offset_of_scoreChanged_13() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___scoreChanged_13)); }
	inline bool get_scoreChanged_13() const { return ___scoreChanged_13; }
	inline bool* get_address_of_scoreChanged_13() { return &___scoreChanged_13; }
	inline void set_scoreChanged_13(bool value)
	{
		___scoreChanged_13 = value;
	}

	inline static int32_t get_offset_of_arrayTiles_14() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___arrayTiles_14)); }
	inline GameObjectU5BU5D_t3057952154* get_arrayTiles_14() const { return ___arrayTiles_14; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_arrayTiles_14() { return &___arrayTiles_14; }
	inline void set_arrayTiles_14(GameObjectU5BU5D_t3057952154* value)
	{
		___arrayTiles_14 = value;
		Il2CppCodeGenWriteBarrier(&___arrayTiles_14, value);
	}

	inline static int32_t get_offset_of_replacementTiles_15() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___replacementTiles_15)); }
	inline GameObjectU5BU5D_t3057952154* get_replacementTiles_15() const { return ___replacementTiles_15; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_replacementTiles_15() { return &___replacementTiles_15; }
	inline void set_replacementTiles_15(GameObjectU5BU5D_t3057952154* value)
	{
		___replacementTiles_15 = value;
		Il2CppCodeGenWriteBarrier(&___replacementTiles_15, value);
	}

	inline static int32_t get_offset_of_leftPylonClosed_16() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___leftPylonClosed_16)); }
	inline GameObject_t1756533147 * get_leftPylonClosed_16() const { return ___leftPylonClosed_16; }
	inline GameObject_t1756533147 ** get_address_of_leftPylonClosed_16() { return &___leftPylonClosed_16; }
	inline void set_leftPylonClosed_16(GameObject_t1756533147 * value)
	{
		___leftPylonClosed_16 = value;
		Il2CppCodeGenWriteBarrier(&___leftPylonClosed_16, value);
	}

	inline static int32_t get_offset_of_rightPylonClosed_17() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___rightPylonClosed_17)); }
	inline GameObject_t1756533147 * get_rightPylonClosed_17() const { return ___rightPylonClosed_17; }
	inline GameObject_t1756533147 ** get_address_of_rightPylonClosed_17() { return &___rightPylonClosed_17; }
	inline void set_rightPylonClosed_17(GameObject_t1756533147 * value)
	{
		___rightPylonClosed_17 = value;
		Il2CppCodeGenWriteBarrier(&___rightPylonClosed_17, value);
	}

	inline static int32_t get_offset_of_leftPylonRaised_18() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___leftPylonRaised_18)); }
	inline GameObject_t1756533147 * get_leftPylonRaised_18() const { return ___leftPylonRaised_18; }
	inline GameObject_t1756533147 ** get_address_of_leftPylonRaised_18() { return &___leftPylonRaised_18; }
	inline void set_leftPylonRaised_18(GameObject_t1756533147 * value)
	{
		___leftPylonRaised_18 = value;
		Il2CppCodeGenWriteBarrier(&___leftPylonRaised_18, value);
	}

	inline static int32_t get_offset_of_rightPylonRaised_19() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___rightPylonRaised_19)); }
	inline GameObject_t1756533147 * get_rightPylonRaised_19() const { return ___rightPylonRaised_19; }
	inline GameObject_t1756533147 ** get_address_of_rightPylonRaised_19() { return &___rightPylonRaised_19; }
	inline void set_rightPylonRaised_19(GameObject_t1756533147 * value)
	{
		___rightPylonRaised_19 = value;
		Il2CppCodeGenWriteBarrier(&___rightPylonRaised_19, value);
	}

	inline static int32_t get_offset_of_doorOne_20() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___doorOne_20)); }
	inline GameObject_t1756533147 * get_doorOne_20() const { return ___doorOne_20; }
	inline GameObject_t1756533147 ** get_address_of_doorOne_20() { return &___doorOne_20; }
	inline void set_doorOne_20(GameObject_t1756533147 * value)
	{
		___doorOne_20 = value;
		Il2CppCodeGenWriteBarrier(&___doorOne_20, value);
	}

	inline static int32_t get_offset_of_solved_21() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___solved_21)); }
	inline AudioSource_t1135106623 * get_solved_21() const { return ___solved_21; }
	inline AudioSource_t1135106623 ** get_address_of_solved_21() { return &___solved_21; }
	inline void set_solved_21(AudioSource_t1135106623 * value)
	{
		___solved_21 = value;
		Il2CppCodeGenWriteBarrier(&___solved_21, value);
	}

	inline static int32_t get_offset_of_raisePillarSound_22() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___raisePillarSound_22)); }
	inline AudioSource_t1135106623 * get_raisePillarSound_22() const { return ___raisePillarSound_22; }
	inline AudioSource_t1135106623 ** get_address_of_raisePillarSound_22() { return &___raisePillarSound_22; }
	inline void set_raisePillarSound_22(AudioSource_t1135106623 * value)
	{
		___raisePillarSound_22 = value;
		Il2CppCodeGenWriteBarrier(&___raisePillarSound_22, value);
	}

	inline static int32_t get_offset_of_raiseDoor_23() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___raiseDoor_23)); }
	inline AudioSource_t1135106623 * get_raiseDoor_23() const { return ___raiseDoor_23; }
	inline AudioSource_t1135106623 ** get_address_of_raiseDoor_23() { return &___raiseDoor_23; }
	inline void set_raiseDoor_23(AudioSource_t1135106623 * value)
	{
		___raiseDoor_23 = value;
		Il2CppCodeGenWriteBarrier(&___raiseDoor_23, value);
	}

	inline static int32_t get_offset_of_rightX_24() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___rightX_24)); }
	inline float get_rightX_24() const { return ___rightX_24; }
	inline float* get_address_of_rightX_24() { return &___rightX_24; }
	inline void set_rightX_24(float value)
	{
		___rightX_24 = value;
	}

	inline static int32_t get_offset_of_leftX_25() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___leftX_25)); }
	inline float get_leftX_25() const { return ___leftX_25; }
	inline float* get_address_of_leftX_25() { return &___leftX_25; }
	inline void set_leftX_25(float value)
	{
		___leftX_25 = value;
	}

	inline static int32_t get_offset_of_inSceneY_26() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___inSceneY_26)); }
	inline float get_inSceneY_26() const { return ___inSceneY_26; }
	inline float* get_address_of_inSceneY_26() { return &___inSceneY_26; }
	inline void set_inSceneY_26(float value)
	{
		___inSceneY_26 = value;
	}

	inline static int32_t get_offset_of_offScreenY_27() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___offScreenY_27)); }
	inline float get_offScreenY_27() const { return ___offScreenY_27; }
	inline float* get_address_of_offScreenY_27() { return &___offScreenY_27; }
	inline void set_offScreenY_27(float value)
	{
		___offScreenY_27 = value;
	}

	inline static int32_t get_offset_of_doorOneStartingPosition_28() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___doorOneStartingPosition_28)); }
	inline Vector3_t2243707580  get_doorOneStartingPosition_28() const { return ___doorOneStartingPosition_28; }
	inline Vector3_t2243707580 * get_address_of_doorOneStartingPosition_28() { return &___doorOneStartingPosition_28; }
	inline void set_doorOneStartingPosition_28(Vector3_t2243707580  value)
	{
		___doorOneStartingPosition_28 = value;
	}

	inline static int32_t get_offset_of_doorOneOpenPosition_29() { return static_cast<int32_t>(offsetof(LogicalOrCompletion_t2645652220, ___doorOneOpenPosition_29)); }
	inline Vector3_t2243707580  get_doorOneOpenPosition_29() const { return ___doorOneOpenPosition_29; }
	inline Vector3_t2243707580 * get_address_of_doorOneOpenPosition_29() { return &___doorOneOpenPosition_29; }
	inline void set_doorOneOpenPosition_29(Vector3_t2243707580  value)
	{
		___doorOneOpenPosition_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
