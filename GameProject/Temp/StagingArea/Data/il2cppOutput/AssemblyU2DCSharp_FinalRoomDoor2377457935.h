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

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FinalRoomDoor
struct  FinalRoomDoor_t2377457935  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject FinalRoomDoor::doorOne
	GameObject_t1756533147 * ___doorOne_2;
	// UnityEngine.Vector3 FinalRoomDoor::doorOneStartingPosition
	Vector3_t2243707580  ___doorOneStartingPosition_3;
	// UnityEngine.Vector3 FinalRoomDoor::doorOneOpenPosition
	Vector3_t2243707580  ___doorOneOpenPosition_4;
	// System.Boolean FinalRoomDoor::doorOpened
	bool ___doorOpened_5;

public:
	inline static int32_t get_offset_of_doorOne_2() { return static_cast<int32_t>(offsetof(FinalRoomDoor_t2377457935, ___doorOne_2)); }
	inline GameObject_t1756533147 * get_doorOne_2() const { return ___doorOne_2; }
	inline GameObject_t1756533147 ** get_address_of_doorOne_2() { return &___doorOne_2; }
	inline void set_doorOne_2(GameObject_t1756533147 * value)
	{
		___doorOne_2 = value;
		Il2CppCodeGenWriteBarrier(&___doorOne_2, value);
	}

	inline static int32_t get_offset_of_doorOneStartingPosition_3() { return static_cast<int32_t>(offsetof(FinalRoomDoor_t2377457935, ___doorOneStartingPosition_3)); }
	inline Vector3_t2243707580  get_doorOneStartingPosition_3() const { return ___doorOneStartingPosition_3; }
	inline Vector3_t2243707580 * get_address_of_doorOneStartingPosition_3() { return &___doorOneStartingPosition_3; }
	inline void set_doorOneStartingPosition_3(Vector3_t2243707580  value)
	{
		___doorOneStartingPosition_3 = value;
	}

	inline static int32_t get_offset_of_doorOneOpenPosition_4() { return static_cast<int32_t>(offsetof(FinalRoomDoor_t2377457935, ___doorOneOpenPosition_4)); }
	inline Vector3_t2243707580  get_doorOneOpenPosition_4() const { return ___doorOneOpenPosition_4; }
	inline Vector3_t2243707580 * get_address_of_doorOneOpenPosition_4() { return &___doorOneOpenPosition_4; }
	inline void set_doorOneOpenPosition_4(Vector3_t2243707580  value)
	{
		___doorOneOpenPosition_4 = value;
	}

	inline static int32_t get_offset_of_doorOpened_5() { return static_cast<int32_t>(offsetof(FinalRoomDoor_t2377457935, ___doorOpened_5)); }
	inline bool get_doorOpened_5() const { return ___doorOpened_5; }
	inline bool* get_address_of_doorOpened_5() { return &___doorOpened_5; }
	inline void set_doorOpened_5(bool value)
	{
		___doorOpened_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
