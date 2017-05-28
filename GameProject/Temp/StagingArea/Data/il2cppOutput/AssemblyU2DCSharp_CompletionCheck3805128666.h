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
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompletionCheck
struct  CompletionCheck_t3805128666  : public MonoBehaviour_t1158329972
{
public:
	// ArrayReaction CompletionCheck::twoSuccess
	ArrayReaction_t3000959918 * ___twoSuccess_2;
	// ArrayReaction CompletionCheck::plusSuccess
	ArrayReaction_t3000959918 * ___plusSuccess_3;
	// ArrayReaction CompletionCheck::plusPlusSuccess
	ArrayReaction_t3000959918 * ___plusPlusSuccess_4;
	// ArrayReaction CompletionCheck::replacementTwo
	ArrayReaction_t3000959918 * ___replacementTwo_5;
	// ArrayReaction CompletionCheck::replacementPlus
	ArrayReaction_t3000959918 * ___replacementPlus_6;
	// ArrayReaction CompletionCheck::replacementPlusPlus
	ArrayReaction_t3000959918 * ___replacementPlusPlus_7;
	// UnityEngine.AudioSource CompletionCheck::solved
	AudioSource_t1135106623 * ___solved_8;
	// UnityEngine.AudioSource CompletionCheck::raiseDoor
	AudioSource_t1135106623 * ___raiseDoor_9;
	// System.Boolean CompletionCheck::puzzleFinished
	bool ___puzzleFinished_10;
	// System.Boolean CompletionCheck::camToggled
	bool ___camToggled_11;
	// System.Boolean CompletionCheck::doorOpened
	bool ___doorOpened_12;
	// System.Boolean CompletionCheck::scoreChanged
	bool ___scoreChanged_13;
	// UnityEngine.GameObject CompletionCheck::doorOne
	GameObject_t1756533147 * ___doorOne_14;
	// UnityEngine.Vector3 CompletionCheck::doorOneStartingPosition
	Vector3_t2243707580  ___doorOneStartingPosition_15;
	// UnityEngine.Vector3 CompletionCheck::doorOneOpenPosition
	Vector3_t2243707580  ___doorOneOpenPosition_16;
	// UnityEngine.GameObject[] CompletionCheck::arrayTiles
	GameObjectU5BU5D_t3057952154* ___arrayTiles_17;
	// UnityEngine.GameObject[] CompletionCheck::replacementTiles
	GameObjectU5BU5D_t3057952154* ___replacementTiles_18;

public:
	inline static int32_t get_offset_of_twoSuccess_2() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___twoSuccess_2)); }
	inline ArrayReaction_t3000959918 * get_twoSuccess_2() const { return ___twoSuccess_2; }
	inline ArrayReaction_t3000959918 ** get_address_of_twoSuccess_2() { return &___twoSuccess_2; }
	inline void set_twoSuccess_2(ArrayReaction_t3000959918 * value)
	{
		___twoSuccess_2 = value;
		Il2CppCodeGenWriteBarrier(&___twoSuccess_2, value);
	}

	inline static int32_t get_offset_of_plusSuccess_3() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___plusSuccess_3)); }
	inline ArrayReaction_t3000959918 * get_plusSuccess_3() const { return ___plusSuccess_3; }
	inline ArrayReaction_t3000959918 ** get_address_of_plusSuccess_3() { return &___plusSuccess_3; }
	inline void set_plusSuccess_3(ArrayReaction_t3000959918 * value)
	{
		___plusSuccess_3 = value;
		Il2CppCodeGenWriteBarrier(&___plusSuccess_3, value);
	}

	inline static int32_t get_offset_of_plusPlusSuccess_4() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___plusPlusSuccess_4)); }
	inline ArrayReaction_t3000959918 * get_plusPlusSuccess_4() const { return ___plusPlusSuccess_4; }
	inline ArrayReaction_t3000959918 ** get_address_of_plusPlusSuccess_4() { return &___plusPlusSuccess_4; }
	inline void set_plusPlusSuccess_4(ArrayReaction_t3000959918 * value)
	{
		___plusPlusSuccess_4 = value;
		Il2CppCodeGenWriteBarrier(&___plusPlusSuccess_4, value);
	}

	inline static int32_t get_offset_of_replacementTwo_5() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___replacementTwo_5)); }
	inline ArrayReaction_t3000959918 * get_replacementTwo_5() const { return ___replacementTwo_5; }
	inline ArrayReaction_t3000959918 ** get_address_of_replacementTwo_5() { return &___replacementTwo_5; }
	inline void set_replacementTwo_5(ArrayReaction_t3000959918 * value)
	{
		___replacementTwo_5 = value;
		Il2CppCodeGenWriteBarrier(&___replacementTwo_5, value);
	}

	inline static int32_t get_offset_of_replacementPlus_6() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___replacementPlus_6)); }
	inline ArrayReaction_t3000959918 * get_replacementPlus_6() const { return ___replacementPlus_6; }
	inline ArrayReaction_t3000959918 ** get_address_of_replacementPlus_6() { return &___replacementPlus_6; }
	inline void set_replacementPlus_6(ArrayReaction_t3000959918 * value)
	{
		___replacementPlus_6 = value;
		Il2CppCodeGenWriteBarrier(&___replacementPlus_6, value);
	}

	inline static int32_t get_offset_of_replacementPlusPlus_7() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___replacementPlusPlus_7)); }
	inline ArrayReaction_t3000959918 * get_replacementPlusPlus_7() const { return ___replacementPlusPlus_7; }
	inline ArrayReaction_t3000959918 ** get_address_of_replacementPlusPlus_7() { return &___replacementPlusPlus_7; }
	inline void set_replacementPlusPlus_7(ArrayReaction_t3000959918 * value)
	{
		___replacementPlusPlus_7 = value;
		Il2CppCodeGenWriteBarrier(&___replacementPlusPlus_7, value);
	}

	inline static int32_t get_offset_of_solved_8() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___solved_8)); }
	inline AudioSource_t1135106623 * get_solved_8() const { return ___solved_8; }
	inline AudioSource_t1135106623 ** get_address_of_solved_8() { return &___solved_8; }
	inline void set_solved_8(AudioSource_t1135106623 * value)
	{
		___solved_8 = value;
		Il2CppCodeGenWriteBarrier(&___solved_8, value);
	}

	inline static int32_t get_offset_of_raiseDoor_9() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___raiseDoor_9)); }
	inline AudioSource_t1135106623 * get_raiseDoor_9() const { return ___raiseDoor_9; }
	inline AudioSource_t1135106623 ** get_address_of_raiseDoor_9() { return &___raiseDoor_9; }
	inline void set_raiseDoor_9(AudioSource_t1135106623 * value)
	{
		___raiseDoor_9 = value;
		Il2CppCodeGenWriteBarrier(&___raiseDoor_9, value);
	}

	inline static int32_t get_offset_of_puzzleFinished_10() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___puzzleFinished_10)); }
	inline bool get_puzzleFinished_10() const { return ___puzzleFinished_10; }
	inline bool* get_address_of_puzzleFinished_10() { return &___puzzleFinished_10; }
	inline void set_puzzleFinished_10(bool value)
	{
		___puzzleFinished_10 = value;
	}

	inline static int32_t get_offset_of_camToggled_11() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___camToggled_11)); }
	inline bool get_camToggled_11() const { return ___camToggled_11; }
	inline bool* get_address_of_camToggled_11() { return &___camToggled_11; }
	inline void set_camToggled_11(bool value)
	{
		___camToggled_11 = value;
	}

	inline static int32_t get_offset_of_doorOpened_12() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___doorOpened_12)); }
	inline bool get_doorOpened_12() const { return ___doorOpened_12; }
	inline bool* get_address_of_doorOpened_12() { return &___doorOpened_12; }
	inline void set_doorOpened_12(bool value)
	{
		___doorOpened_12 = value;
	}

	inline static int32_t get_offset_of_scoreChanged_13() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___scoreChanged_13)); }
	inline bool get_scoreChanged_13() const { return ___scoreChanged_13; }
	inline bool* get_address_of_scoreChanged_13() { return &___scoreChanged_13; }
	inline void set_scoreChanged_13(bool value)
	{
		___scoreChanged_13 = value;
	}

	inline static int32_t get_offset_of_doorOne_14() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___doorOne_14)); }
	inline GameObject_t1756533147 * get_doorOne_14() const { return ___doorOne_14; }
	inline GameObject_t1756533147 ** get_address_of_doorOne_14() { return &___doorOne_14; }
	inline void set_doorOne_14(GameObject_t1756533147 * value)
	{
		___doorOne_14 = value;
		Il2CppCodeGenWriteBarrier(&___doorOne_14, value);
	}

	inline static int32_t get_offset_of_doorOneStartingPosition_15() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___doorOneStartingPosition_15)); }
	inline Vector3_t2243707580  get_doorOneStartingPosition_15() const { return ___doorOneStartingPosition_15; }
	inline Vector3_t2243707580 * get_address_of_doorOneStartingPosition_15() { return &___doorOneStartingPosition_15; }
	inline void set_doorOneStartingPosition_15(Vector3_t2243707580  value)
	{
		___doorOneStartingPosition_15 = value;
	}

	inline static int32_t get_offset_of_doorOneOpenPosition_16() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___doorOneOpenPosition_16)); }
	inline Vector3_t2243707580  get_doorOneOpenPosition_16() const { return ___doorOneOpenPosition_16; }
	inline Vector3_t2243707580 * get_address_of_doorOneOpenPosition_16() { return &___doorOneOpenPosition_16; }
	inline void set_doorOneOpenPosition_16(Vector3_t2243707580  value)
	{
		___doorOneOpenPosition_16 = value;
	}

	inline static int32_t get_offset_of_arrayTiles_17() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___arrayTiles_17)); }
	inline GameObjectU5BU5D_t3057952154* get_arrayTiles_17() const { return ___arrayTiles_17; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_arrayTiles_17() { return &___arrayTiles_17; }
	inline void set_arrayTiles_17(GameObjectU5BU5D_t3057952154* value)
	{
		___arrayTiles_17 = value;
		Il2CppCodeGenWriteBarrier(&___arrayTiles_17, value);
	}

	inline static int32_t get_offset_of_replacementTiles_18() { return static_cast<int32_t>(offsetof(CompletionCheck_t3805128666, ___replacementTiles_18)); }
	inline GameObjectU5BU5D_t3057952154* get_replacementTiles_18() const { return ___replacementTiles_18; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_replacementTiles_18() { return &___replacementTiles_18; }
	inline void set_replacementTiles_18(GameObjectU5BU5D_t3057952154* value)
	{
		___replacementTiles_18 = value;
		Il2CppCodeGenWriteBarrier(&___replacementTiles_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
