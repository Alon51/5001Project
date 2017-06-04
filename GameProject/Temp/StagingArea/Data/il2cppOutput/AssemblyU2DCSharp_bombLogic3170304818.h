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

// bombLogic
struct  bombLogic_t3170304818  : public MonoBehaviour_t1158329972
{
public:
	// System.Single bombLogic::startTime
	float ___startTime_2;
	// System.Single bombLogic::elapsedTime
	float ___elapsedTime_3;
	// UnityEngine.GameObject bombLogic::explosion
	GameObject_t1756533147 * ___explosion_4;

public:
	inline static int32_t get_offset_of_startTime_2() { return static_cast<int32_t>(offsetof(bombLogic_t3170304818, ___startTime_2)); }
	inline float get_startTime_2() const { return ___startTime_2; }
	inline float* get_address_of_startTime_2() { return &___startTime_2; }
	inline void set_startTime_2(float value)
	{
		___startTime_2 = value;
	}

	inline static int32_t get_offset_of_elapsedTime_3() { return static_cast<int32_t>(offsetof(bombLogic_t3170304818, ___elapsedTime_3)); }
	inline float get_elapsedTime_3() const { return ___elapsedTime_3; }
	inline float* get_address_of_elapsedTime_3() { return &___elapsedTime_3; }
	inline void set_elapsedTime_3(float value)
	{
		___elapsedTime_3 = value;
	}

	inline static int32_t get_offset_of_explosion_4() { return static_cast<int32_t>(offsetof(bombLogic_t3170304818, ___explosion_4)); }
	inline GameObject_t1756533147 * get_explosion_4() const { return ___explosion_4; }
	inline GameObject_t1756533147 ** get_address_of_explosion_4() { return &___explosion_4; }
	inline void set_explosion_4(GameObject_t1756533147 * value)
	{
		___explosion_4 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
