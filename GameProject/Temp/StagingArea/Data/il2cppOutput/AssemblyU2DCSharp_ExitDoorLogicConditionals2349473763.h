#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitDoorLogicConditionals
struct  ExitDoorLogicConditionals_t2349473763  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean ExitDoorLogicConditionals::checkFlag
	bool ___checkFlag_2;
	// UnityEngine.GameObject ExitDoorLogicConditionals::exitDoor
	GameObject_t1756533147 * ___exitDoor_3;

public:
	inline static int32_t get_offset_of_checkFlag_2() { return static_cast<int32_t>(offsetof(ExitDoorLogicConditionals_t2349473763, ___checkFlag_2)); }
	inline bool get_checkFlag_2() const { return ___checkFlag_2; }
	inline bool* get_address_of_checkFlag_2() { return &___checkFlag_2; }
	inline void set_checkFlag_2(bool value)
	{
		___checkFlag_2 = value;
	}

	inline static int32_t get_offset_of_exitDoor_3() { return static_cast<int32_t>(offsetof(ExitDoorLogicConditionals_t2349473763, ___exitDoor_3)); }
	inline GameObject_t1756533147 * get_exitDoor_3() const { return ___exitDoor_3; }
	inline GameObject_t1756533147 ** get_address_of_exitDoor_3() { return &___exitDoor_3; }
	inline void set_exitDoor_3(GameObject_t1756533147 * value)
	{
		___exitDoor_3 = value;
		Il2CppCodeGenWriteBarrier(&___exitDoor_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
