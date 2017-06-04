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

// secretDoor
struct  secretDoor_t2011212012  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject secretDoor::explosion
	GameObject_t1756533147 * ___explosion_2;
	// System.Int32 secretDoor::health
	int32_t ___health_3;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(secretDoor_t2011212012, ___explosion_2)); }
	inline GameObject_t1756533147 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1756533147 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1756533147 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_2, value);
	}

	inline static int32_t get_offset_of_health_3() { return static_cast<int32_t>(offsetof(secretDoor_t2011212012, ___health_3)); }
	inline int32_t get_health_3() const { return ___health_3; }
	inline int32_t* get_address_of_health_3() { return &___health_3; }
	inline void set_health_3(int32_t value)
	{
		___health_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
