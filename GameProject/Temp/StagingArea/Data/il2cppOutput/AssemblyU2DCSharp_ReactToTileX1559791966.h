#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReactToTileX
struct  ReactToTileX_t1559791966  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource ReactToTileX::correct
	AudioSource_t1135106623 * ___correct_2;
	// UnityEngine.GameObject ReactToTileX::completedTile
	GameObject_t1756533147 * ___completedTile_3;
	// System.Boolean ReactToTileX::success
	bool ___success_4;

public:
	inline static int32_t get_offset_of_correct_2() { return static_cast<int32_t>(offsetof(ReactToTileX_t1559791966, ___correct_2)); }
	inline AudioSource_t1135106623 * get_correct_2() const { return ___correct_2; }
	inline AudioSource_t1135106623 ** get_address_of_correct_2() { return &___correct_2; }
	inline void set_correct_2(AudioSource_t1135106623 * value)
	{
		___correct_2 = value;
		Il2CppCodeGenWriteBarrier(&___correct_2, value);
	}

	inline static int32_t get_offset_of_completedTile_3() { return static_cast<int32_t>(offsetof(ReactToTileX_t1559791966, ___completedTile_3)); }
	inline GameObject_t1756533147 * get_completedTile_3() const { return ___completedTile_3; }
	inline GameObject_t1756533147 ** get_address_of_completedTile_3() { return &___completedTile_3; }
	inline void set_completedTile_3(GameObject_t1756533147 * value)
	{
		___completedTile_3 = value;
		Il2CppCodeGenWriteBarrier(&___completedTile_3, value);
	}

	inline static int32_t get_offset_of_success_4() { return static_cast<int32_t>(offsetof(ReactToTileX_t1559791966, ___success_4)); }
	inline bool get_success_4() const { return ___success_4; }
	inline bool* get_address_of_success_4() { return &___success_4; }
	inline void set_success_4(bool value)
	{
		___success_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
