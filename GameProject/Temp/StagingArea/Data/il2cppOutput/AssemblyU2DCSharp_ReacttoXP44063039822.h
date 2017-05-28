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
// TileDrag
struct TileDrag_t1730188494;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReacttoXP4
struct  ReacttoXP4_t4063039822  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ReacttoXP4::completedTile
	GameObject_t1756533147 * ___completedTile_2;
	// System.Boolean ReacttoXP4::success
	bool ___success_3;
	// TileDrag ReacttoXP4::activate
	TileDrag_t1730188494 * ___activate_4;
	// System.Single ReacttoXP4::tossThis
	float ___tossThis_5;

public:
	inline static int32_t get_offset_of_completedTile_2() { return static_cast<int32_t>(offsetof(ReacttoXP4_t4063039822, ___completedTile_2)); }
	inline GameObject_t1756533147 * get_completedTile_2() const { return ___completedTile_2; }
	inline GameObject_t1756533147 ** get_address_of_completedTile_2() { return &___completedTile_2; }
	inline void set_completedTile_2(GameObject_t1756533147 * value)
	{
		___completedTile_2 = value;
		Il2CppCodeGenWriteBarrier(&___completedTile_2, value);
	}

	inline static int32_t get_offset_of_success_3() { return static_cast<int32_t>(offsetof(ReacttoXP4_t4063039822, ___success_3)); }
	inline bool get_success_3() const { return ___success_3; }
	inline bool* get_address_of_success_3() { return &___success_3; }
	inline void set_success_3(bool value)
	{
		___success_3 = value;
	}

	inline static int32_t get_offset_of_activate_4() { return static_cast<int32_t>(offsetof(ReacttoXP4_t4063039822, ___activate_4)); }
	inline TileDrag_t1730188494 * get_activate_4() const { return ___activate_4; }
	inline TileDrag_t1730188494 ** get_address_of_activate_4() { return &___activate_4; }
	inline void set_activate_4(TileDrag_t1730188494 * value)
	{
		___activate_4 = value;
		Il2CppCodeGenWriteBarrier(&___activate_4, value);
	}

	inline static int32_t get_offset_of_tossThis_5() { return static_cast<int32_t>(offsetof(ReacttoXP4_t4063039822, ___tossThis_5)); }
	inline float get_tossThis_5() const { return ___tossThis_5; }
	inline float* get_address_of_tossThis_5() { return &___tossThis_5; }
	inline void set_tossThis_5(float value)
	{
		___tossThis_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
