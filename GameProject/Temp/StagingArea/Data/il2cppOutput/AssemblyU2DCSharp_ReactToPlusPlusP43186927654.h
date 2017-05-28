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

// ReactToPlusPlusP4
struct  ReactToPlusPlusP4_t3186927654  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ReactToPlusPlusP4::completedTile
	GameObject_t1756533147 * ___completedTile_2;
	// System.Boolean ReactToPlusPlusP4::success
	bool ___success_3;

public:
	inline static int32_t get_offset_of_completedTile_2() { return static_cast<int32_t>(offsetof(ReactToPlusPlusP4_t3186927654, ___completedTile_2)); }
	inline GameObject_t1756533147 * get_completedTile_2() const { return ___completedTile_2; }
	inline GameObject_t1756533147 ** get_address_of_completedTile_2() { return &___completedTile_2; }
	inline void set_completedTile_2(GameObject_t1756533147 * value)
	{
		___completedTile_2 = value;
		Il2CppCodeGenWriteBarrier(&___completedTile_2, value);
	}

	inline static int32_t get_offset_of_success_3() { return static_cast<int32_t>(offsetof(ReactToPlusPlusP4_t3186927654, ___success_3)); }
	inline bool get_success_3() const { return ___success_3; }
	inline bool* get_address_of_success_3() { return &___success_3; }
	inline void set_success_3(bool value)
	{
		___success_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
