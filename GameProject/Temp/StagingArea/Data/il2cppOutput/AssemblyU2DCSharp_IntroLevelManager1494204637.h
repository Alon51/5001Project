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

// IntroLevelManager
struct  IntroLevelManager_t1494204637  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject IntroLevelManager::arrayPortal
	GameObject_t1756533147 * ___arrayPortal_2;
	// UnityEngine.GameObject IntroLevelManager::loopPortal
	GameObject_t1756533147 * ___loopPortal_3;
	// System.Single IntroLevelManager::x1
	float ___x1_4;
	// System.Single IntroLevelManager::x2
	float ___x2_5;
	// System.Single IntroLevelManager::y
	float ___y_6;

public:
	inline static int32_t get_offset_of_arrayPortal_2() { return static_cast<int32_t>(offsetof(IntroLevelManager_t1494204637, ___arrayPortal_2)); }
	inline GameObject_t1756533147 * get_arrayPortal_2() const { return ___arrayPortal_2; }
	inline GameObject_t1756533147 ** get_address_of_arrayPortal_2() { return &___arrayPortal_2; }
	inline void set_arrayPortal_2(GameObject_t1756533147 * value)
	{
		___arrayPortal_2 = value;
		Il2CppCodeGenWriteBarrier(&___arrayPortal_2, value);
	}

	inline static int32_t get_offset_of_loopPortal_3() { return static_cast<int32_t>(offsetof(IntroLevelManager_t1494204637, ___loopPortal_3)); }
	inline GameObject_t1756533147 * get_loopPortal_3() const { return ___loopPortal_3; }
	inline GameObject_t1756533147 ** get_address_of_loopPortal_3() { return &___loopPortal_3; }
	inline void set_loopPortal_3(GameObject_t1756533147 * value)
	{
		___loopPortal_3 = value;
		Il2CppCodeGenWriteBarrier(&___loopPortal_3, value);
	}

	inline static int32_t get_offset_of_x1_4() { return static_cast<int32_t>(offsetof(IntroLevelManager_t1494204637, ___x1_4)); }
	inline float get_x1_4() const { return ___x1_4; }
	inline float* get_address_of_x1_4() { return &___x1_4; }
	inline void set_x1_4(float value)
	{
		___x1_4 = value;
	}

	inline static int32_t get_offset_of_x2_5() { return static_cast<int32_t>(offsetof(IntroLevelManager_t1494204637, ___x2_5)); }
	inline float get_x2_5() const { return ___x2_5; }
	inline float* get_address_of_x2_5() { return &___x2_5; }
	inline void set_x2_5(float value)
	{
		___x2_5 = value;
	}

	inline static int32_t get_offset_of_y_6() { return static_cast<int32_t>(offsetof(IntroLevelManager_t1494204637, ___y_6)); }
	inline float get_y_6() const { return ___y_6; }
	inline float* get_address_of_y_6() { return &___y_6; }
	inline void set_y_6(float value)
	{
		___y_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
