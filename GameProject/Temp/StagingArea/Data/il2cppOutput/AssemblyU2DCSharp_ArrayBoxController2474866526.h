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

// ArrayBoxController
struct  ArrayBoxController_t2474866526  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ArrayBoxController::weight
	int32_t ___weight_2;
	// UnityEngine.GameObject ArrayBoxController::underPlatform
	GameObject_t1756533147 * ___underPlatform_3;
	// System.Boolean ArrayBoxController::removePlatform
	bool ___removePlatform_4;
	// System.Boolean ArrayBoxController::slotOneSuccess
	bool ___slotOneSuccess_5;
	// UnityEngine.Vector3 ArrayBoxController::initialPosition
	Vector3_t2243707580  ___initialPosition_6;

public:
	inline static int32_t get_offset_of_weight_2() { return static_cast<int32_t>(offsetof(ArrayBoxController_t2474866526, ___weight_2)); }
	inline int32_t get_weight_2() const { return ___weight_2; }
	inline int32_t* get_address_of_weight_2() { return &___weight_2; }
	inline void set_weight_2(int32_t value)
	{
		___weight_2 = value;
	}

	inline static int32_t get_offset_of_underPlatform_3() { return static_cast<int32_t>(offsetof(ArrayBoxController_t2474866526, ___underPlatform_3)); }
	inline GameObject_t1756533147 * get_underPlatform_3() const { return ___underPlatform_3; }
	inline GameObject_t1756533147 ** get_address_of_underPlatform_3() { return &___underPlatform_3; }
	inline void set_underPlatform_3(GameObject_t1756533147 * value)
	{
		___underPlatform_3 = value;
		Il2CppCodeGenWriteBarrier(&___underPlatform_3, value);
	}

	inline static int32_t get_offset_of_removePlatform_4() { return static_cast<int32_t>(offsetof(ArrayBoxController_t2474866526, ___removePlatform_4)); }
	inline bool get_removePlatform_4() const { return ___removePlatform_4; }
	inline bool* get_address_of_removePlatform_4() { return &___removePlatform_4; }
	inline void set_removePlatform_4(bool value)
	{
		___removePlatform_4 = value;
	}

	inline static int32_t get_offset_of_slotOneSuccess_5() { return static_cast<int32_t>(offsetof(ArrayBoxController_t2474866526, ___slotOneSuccess_5)); }
	inline bool get_slotOneSuccess_5() const { return ___slotOneSuccess_5; }
	inline bool* get_address_of_slotOneSuccess_5() { return &___slotOneSuccess_5; }
	inline void set_slotOneSuccess_5(bool value)
	{
		___slotOneSuccess_5 = value;
	}

	inline static int32_t get_offset_of_initialPosition_6() { return static_cast<int32_t>(offsetof(ArrayBoxController_t2474866526, ___initialPosition_6)); }
	inline Vector3_t2243707580  get_initialPosition_6() const { return ___initialPosition_6; }
	inline Vector3_t2243707580 * get_address_of_initialPosition_6() { return &___initialPosition_6; }
	inline void set_initialPosition_6(Vector3_t2243707580  value)
	{
		___initialPosition_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
