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

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArithCompletionCheck
struct  ArithCompletionCheck_t1720071536  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] ArithCompletionCheck::checkSlots
	GameObjectU5BU5D_t3057952154* ___checkSlots_2;
	// UnityEngine.GameObject[] ArithCompletionCheck::arrayTiles
	GameObjectU5BU5D_t3057952154* ___arrayTiles_3;
	// UnityEngine.GameObject[] ArithCompletionCheck::replacementTiles
	GameObjectU5BU5D_t3057952154* ___replacementTiles_4;
	// UnityEngine.GameObject ArithCompletionCheck::door
	GameObject_t1756533147 * ___door_5;
	// UnityEngine.Vector3 ArithCompletionCheck::initialDoorPosition
	Vector3_t2243707580  ___initialDoorPosition_6;
	// System.Boolean ArithCompletionCheck::puzzleFinished
	bool ___puzzleFinished_7;
	// System.Boolean ArithCompletionCheck::camToggled
	bool ___camToggled_8;
	// System.Boolean ArithCompletionCheck::scoreChanged
	bool ___scoreChanged_9;

public:
	inline static int32_t get_offset_of_checkSlots_2() { return static_cast<int32_t>(offsetof(ArithCompletionCheck_t1720071536, ___checkSlots_2)); }
	inline GameObjectU5BU5D_t3057952154* get_checkSlots_2() const { return ___checkSlots_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_checkSlots_2() { return &___checkSlots_2; }
	inline void set_checkSlots_2(GameObjectU5BU5D_t3057952154* value)
	{
		___checkSlots_2 = value;
		Il2CppCodeGenWriteBarrier(&___checkSlots_2, value);
	}

	inline static int32_t get_offset_of_arrayTiles_3() { return static_cast<int32_t>(offsetof(ArithCompletionCheck_t1720071536, ___arrayTiles_3)); }
	inline GameObjectU5BU5D_t3057952154* get_arrayTiles_3() const { return ___arrayTiles_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_arrayTiles_3() { return &___arrayTiles_3; }
	inline void set_arrayTiles_3(GameObjectU5BU5D_t3057952154* value)
	{
		___arrayTiles_3 = value;
		Il2CppCodeGenWriteBarrier(&___arrayTiles_3, value);
	}

	inline static int32_t get_offset_of_replacementTiles_4() { return static_cast<int32_t>(offsetof(ArithCompletionCheck_t1720071536, ___replacementTiles_4)); }
	inline GameObjectU5BU5D_t3057952154* get_replacementTiles_4() const { return ___replacementTiles_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_replacementTiles_4() { return &___replacementTiles_4; }
	inline void set_replacementTiles_4(GameObjectU5BU5D_t3057952154* value)
	{
		___replacementTiles_4 = value;
		Il2CppCodeGenWriteBarrier(&___replacementTiles_4, value);
	}

	inline static int32_t get_offset_of_door_5() { return static_cast<int32_t>(offsetof(ArithCompletionCheck_t1720071536, ___door_5)); }
	inline GameObject_t1756533147 * get_door_5() const { return ___door_5; }
	inline GameObject_t1756533147 ** get_address_of_door_5() { return &___door_5; }
	inline void set_door_5(GameObject_t1756533147 * value)
	{
		___door_5 = value;
		Il2CppCodeGenWriteBarrier(&___door_5, value);
	}

	inline static int32_t get_offset_of_initialDoorPosition_6() { return static_cast<int32_t>(offsetof(ArithCompletionCheck_t1720071536, ___initialDoorPosition_6)); }
	inline Vector3_t2243707580  get_initialDoorPosition_6() const { return ___initialDoorPosition_6; }
	inline Vector3_t2243707580 * get_address_of_initialDoorPosition_6() { return &___initialDoorPosition_6; }
	inline void set_initialDoorPosition_6(Vector3_t2243707580  value)
	{
		___initialDoorPosition_6 = value;
	}

	inline static int32_t get_offset_of_puzzleFinished_7() { return static_cast<int32_t>(offsetof(ArithCompletionCheck_t1720071536, ___puzzleFinished_7)); }
	inline bool get_puzzleFinished_7() const { return ___puzzleFinished_7; }
	inline bool* get_address_of_puzzleFinished_7() { return &___puzzleFinished_7; }
	inline void set_puzzleFinished_7(bool value)
	{
		___puzzleFinished_7 = value;
	}

	inline static int32_t get_offset_of_camToggled_8() { return static_cast<int32_t>(offsetof(ArithCompletionCheck_t1720071536, ___camToggled_8)); }
	inline bool get_camToggled_8() const { return ___camToggled_8; }
	inline bool* get_address_of_camToggled_8() { return &___camToggled_8; }
	inline void set_camToggled_8(bool value)
	{
		___camToggled_8 = value;
	}

	inline static int32_t get_offset_of_scoreChanged_9() { return static_cast<int32_t>(offsetof(ArithCompletionCheck_t1720071536, ___scoreChanged_9)); }
	inline bool get_scoreChanged_9() const { return ___scoreChanged_9; }
	inline bool* get_address_of_scoreChanged_9() { return &___scoreChanged_9; }
	inline void set_scoreChanged_9(bool value)
	{
		___scoreChanged_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
