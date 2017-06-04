#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// ArrayReaction
struct ArrayReaction_t3000959918;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArrayAccessCompletion
struct  ArrayAccessCompletion_t440704391  : public MonoBehaviour_t1158329972
{
public:
	// ArrayReaction ArrayAccessCompletion::checkOne
	ArrayReaction_t3000959918 * ___checkOne_2;
	// ArrayReaction ArrayAccessCompletion::checkTwo
	ArrayReaction_t3000959918 * ___checkTwo_3;
	// ArrayReaction ArrayAccessCompletion::checkThree
	ArrayReaction_t3000959918 * ___checkThree_4;
	// UnityEngine.GameObject[] ArrayAccessCompletion::arrayTiles
	GameObjectU5BU5D_t3057952154* ___arrayTiles_5;
	// UnityEngine.GameObject[] ArrayAccessCompletion::replacementTiles
	GameObjectU5BU5D_t3057952154* ___replacementTiles_6;
	// UnityEngine.Camera ArrayAccessCompletion::errorCam
	Camera_t189460977 * ___errorCam_7;
	// UnityEngine.Camera ArrayAccessCompletion::puzzleCam
	Camera_t189460977 * ___puzzleCam_8;
	// UnityEngine.UI.Text ArrayAccessCompletion::errorMessage
	Text_t356221433 * ___errorMessage_9;
	// System.Boolean ArrayAccessCompletion::puzzleFinished
	bool ___puzzleFinished_10;
	// System.Boolean ArrayAccessCompletion::camToggled
	bool ___camToggled_11;
	// System.Boolean ArrayAccessCompletion::errorValUsed
	bool ___errorValUsed_12;
	// System.Boolean ArrayAccessCompletion::scoreChanged
	bool ___scoreChanged_13;

public:
	inline static int32_t get_offset_of_checkOne_2() { return static_cast<int32_t>(offsetof(ArrayAccessCompletion_t440704391, ___checkOne_2)); }
	inline ArrayReaction_t3000959918 * get_checkOne_2() const { return ___checkOne_2; }
	inline ArrayReaction_t3000959918 ** get_address_of_checkOne_2() { return &___checkOne_2; }
	inline void set_checkOne_2(ArrayReaction_t3000959918 * value)
	{
		___checkOne_2 = value;
		Il2CppCodeGenWriteBarrier(&___checkOne_2, value);
	}

	inline static int32_t get_offset_of_checkTwo_3() { return static_cast<int32_t>(offsetof(ArrayAccessCompletion_t440704391, ___checkTwo_3)); }
	inline ArrayReaction_t3000959918 * get_checkTwo_3() const { return ___checkTwo_3; }
	inline ArrayReaction_t3000959918 ** get_address_of_checkTwo_3() { return &___checkTwo_3; }
	inline void set_checkTwo_3(ArrayReaction_t3000959918 * value)
	{
		___checkTwo_3 = value;
		Il2CppCodeGenWriteBarrier(&___checkTwo_3, value);
	}

	inline static int32_t get_offset_of_checkThree_4() { return static_cast<int32_t>(offsetof(ArrayAccessCompletion_t440704391, ___checkThree_4)); }
	inline ArrayReaction_t3000959918 * get_checkThree_4() const { return ___checkThree_4; }
	inline ArrayReaction_t3000959918 ** get_address_of_checkThree_4() { return &___checkThree_4; }
	inline void set_checkThree_4(ArrayReaction_t3000959918 * value)
	{
		___checkThree_4 = value;
		Il2CppCodeGenWriteBarrier(&___checkThree_4, value);
	}

	inline static int32_t get_offset_of_arrayTiles_5() { return static_cast<int32_t>(offsetof(ArrayAccessCompletion_t440704391, ___arrayTiles_5)); }
	inline GameObjectU5BU5D_t3057952154* get_arrayTiles_5() const { return ___arrayTiles_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_arrayTiles_5() { return &___arrayTiles_5; }
	inline void set_arrayTiles_5(GameObjectU5BU5D_t3057952154* value)
	{
		___arrayTiles_5 = value;
		Il2CppCodeGenWriteBarrier(&___arrayTiles_5, value);
	}

	inline static int32_t get_offset_of_replacementTiles_6() { return static_cast<int32_t>(offsetof(ArrayAccessCompletion_t440704391, ___replacementTiles_6)); }
	inline GameObjectU5BU5D_t3057952154* get_replacementTiles_6() const { return ___replacementTiles_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_replacementTiles_6() { return &___replacementTiles_6; }
	inline void set_replacementTiles_6(GameObjectU5BU5D_t3057952154* value)
	{
		___replacementTiles_6 = value;
		Il2CppCodeGenWriteBarrier(&___replacementTiles_6, value);
	}

	inline static int32_t get_offset_of_errorCam_7() { return static_cast<int32_t>(offsetof(ArrayAccessCompletion_t440704391, ___errorCam_7)); }
	inline Camera_t189460977 * get_errorCam_7() const { return ___errorCam_7; }
	inline Camera_t189460977 ** get_address_of_errorCam_7() { return &___errorCam_7; }
	inline void set_errorCam_7(Camera_t189460977 * value)
	{
		___errorCam_7 = value;
		Il2CppCodeGenWriteBarrier(&___errorCam_7, value);
	}

	inline static int32_t get_offset_of_puzzleCam_8() { return static_cast<int32_t>(offsetof(ArrayAccessCompletion_t440704391, ___puzzleCam_8)); }
	inline Camera_t189460977 * get_puzzleCam_8() const { return ___puzzleCam_8; }
	inline Camera_t189460977 ** get_address_of_puzzleCam_8() { return &___puzzleCam_8; }
	inline void set_puzzleCam_8(Camera_t189460977 * value)
	{
		___puzzleCam_8 = value;
		Il2CppCodeGenWriteBarrier(&___puzzleCam_8, value);
	}

	inline static int32_t get_offset_of_errorMessage_9() { return static_cast<int32_t>(offsetof(ArrayAccessCompletion_t440704391, ___errorMessage_9)); }
	inline Text_t356221433 * get_errorMessage_9() const { return ___errorMessage_9; }
	inline Text_t356221433 ** get_address_of_errorMessage_9() { return &___errorMessage_9; }
	inline void set_errorMessage_9(Text_t356221433 * value)
	{
		___errorMessage_9 = value;
		Il2CppCodeGenWriteBarrier(&___errorMessage_9, value);
	}

	inline static int32_t get_offset_of_puzzleFinished_10() { return static_cast<int32_t>(offsetof(ArrayAccessCompletion_t440704391, ___puzzleFinished_10)); }
	inline bool get_puzzleFinished_10() const { return ___puzzleFinished_10; }
	inline bool* get_address_of_puzzleFinished_10() { return &___puzzleFinished_10; }
	inline void set_puzzleFinished_10(bool value)
	{
		___puzzleFinished_10 = value;
	}

	inline static int32_t get_offset_of_camToggled_11() { return static_cast<int32_t>(offsetof(ArrayAccessCompletion_t440704391, ___camToggled_11)); }
	inline bool get_camToggled_11() const { return ___camToggled_11; }
	inline bool* get_address_of_camToggled_11() { return &___camToggled_11; }
	inline void set_camToggled_11(bool value)
	{
		___camToggled_11 = value;
	}

	inline static int32_t get_offset_of_errorValUsed_12() { return static_cast<int32_t>(offsetof(ArrayAccessCompletion_t440704391, ___errorValUsed_12)); }
	inline bool get_errorValUsed_12() const { return ___errorValUsed_12; }
	inline bool* get_address_of_errorValUsed_12() { return &___errorValUsed_12; }
	inline void set_errorValUsed_12(bool value)
	{
		___errorValUsed_12 = value;
	}

	inline static int32_t get_offset_of_scoreChanged_13() { return static_cast<int32_t>(offsetof(ArrayAccessCompletion_t440704391, ___scoreChanged_13)); }
	inline bool get_scoreChanged_13() const { return ___scoreChanged_13; }
	inline bool* get_address_of_scoreChanged_13() { return &___scoreChanged_13; }
	inline void set_scoreChanged_13(bool value)
	{
		___scoreChanged_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
