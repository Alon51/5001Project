#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FinalPuzzleCompletionCheck
struct  FinalPuzzleCompletionCheck_t2283292866  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] FinalPuzzleCompletionCheck::checkSlots
	GameObjectU5BU5D_t3057952154* ___checkSlots_2;
	// UnityEngine.GameObject[] FinalPuzzleCompletionCheck::barriers
	GameObjectU5BU5D_t3057952154* ___barriers_3;
	// UnityEngine.GameObject[] FinalPuzzleCompletionCheck::arrayTiles
	GameObjectU5BU5D_t3057952154* ___arrayTiles_4;
	// UnityEngine.GameObject[] FinalPuzzleCompletionCheck::replacementTiles
	GameObjectU5BU5D_t3057952154* ___replacementTiles_5;
	// System.Boolean FinalPuzzleCompletionCheck::puzzleFinished
	bool ___puzzleFinished_6;
	// System.Boolean FinalPuzzleCompletionCheck::camToggled
	bool ___camToggled_7;
	// System.Boolean FinalPuzzleCompletionCheck::scoreChanged
	bool ___scoreChanged_8;

public:
	inline static int32_t get_offset_of_checkSlots_2() { return static_cast<int32_t>(offsetof(FinalPuzzleCompletionCheck_t2283292866, ___checkSlots_2)); }
	inline GameObjectU5BU5D_t3057952154* get_checkSlots_2() const { return ___checkSlots_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_checkSlots_2() { return &___checkSlots_2; }
	inline void set_checkSlots_2(GameObjectU5BU5D_t3057952154* value)
	{
		___checkSlots_2 = value;
		Il2CppCodeGenWriteBarrier(&___checkSlots_2, value);
	}

	inline static int32_t get_offset_of_barriers_3() { return static_cast<int32_t>(offsetof(FinalPuzzleCompletionCheck_t2283292866, ___barriers_3)); }
	inline GameObjectU5BU5D_t3057952154* get_barriers_3() const { return ___barriers_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_barriers_3() { return &___barriers_3; }
	inline void set_barriers_3(GameObjectU5BU5D_t3057952154* value)
	{
		___barriers_3 = value;
		Il2CppCodeGenWriteBarrier(&___barriers_3, value);
	}

	inline static int32_t get_offset_of_arrayTiles_4() { return static_cast<int32_t>(offsetof(FinalPuzzleCompletionCheck_t2283292866, ___arrayTiles_4)); }
	inline GameObjectU5BU5D_t3057952154* get_arrayTiles_4() const { return ___arrayTiles_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_arrayTiles_4() { return &___arrayTiles_4; }
	inline void set_arrayTiles_4(GameObjectU5BU5D_t3057952154* value)
	{
		___arrayTiles_4 = value;
		Il2CppCodeGenWriteBarrier(&___arrayTiles_4, value);
	}

	inline static int32_t get_offset_of_replacementTiles_5() { return static_cast<int32_t>(offsetof(FinalPuzzleCompletionCheck_t2283292866, ___replacementTiles_5)); }
	inline GameObjectU5BU5D_t3057952154* get_replacementTiles_5() const { return ___replacementTiles_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_replacementTiles_5() { return &___replacementTiles_5; }
	inline void set_replacementTiles_5(GameObjectU5BU5D_t3057952154* value)
	{
		___replacementTiles_5 = value;
		Il2CppCodeGenWriteBarrier(&___replacementTiles_5, value);
	}

	inline static int32_t get_offset_of_puzzleFinished_6() { return static_cast<int32_t>(offsetof(FinalPuzzleCompletionCheck_t2283292866, ___puzzleFinished_6)); }
	inline bool get_puzzleFinished_6() const { return ___puzzleFinished_6; }
	inline bool* get_address_of_puzzleFinished_6() { return &___puzzleFinished_6; }
	inline void set_puzzleFinished_6(bool value)
	{
		___puzzleFinished_6 = value;
	}

	inline static int32_t get_offset_of_camToggled_7() { return static_cast<int32_t>(offsetof(FinalPuzzleCompletionCheck_t2283292866, ___camToggled_7)); }
	inline bool get_camToggled_7() const { return ___camToggled_7; }
	inline bool* get_address_of_camToggled_7() { return &___camToggled_7; }
	inline void set_camToggled_7(bool value)
	{
		___camToggled_7 = value;
	}

	inline static int32_t get_offset_of_scoreChanged_8() { return static_cast<int32_t>(offsetof(FinalPuzzleCompletionCheck_t2283292866, ___scoreChanged_8)); }
	inline bool get_scoreChanged_8() const { return ___scoreChanged_8; }
	inline bool* get_address_of_scoreChanged_8() { return &___scoreChanged_8; }
	inline void set_scoreChanged_8(bool value)
	{
		___scoreChanged_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
