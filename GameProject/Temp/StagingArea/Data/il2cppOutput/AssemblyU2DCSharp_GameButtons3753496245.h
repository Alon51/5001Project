#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameButtons
struct  GameButtons_t3753496245  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera GameButtons::helpCamera
	Camera_t189460977 * ___helpCamera_2;

public:
	inline static int32_t get_offset_of_helpCamera_2() { return static_cast<int32_t>(offsetof(GameButtons_t3753496245, ___helpCamera_2)); }
	inline Camera_t189460977 * get_helpCamera_2() const { return ___helpCamera_2; }
	inline Camera_t189460977 ** get_address_of_helpCamera_2() { return &___helpCamera_2; }
	inline void set_helpCamera_2(Camera_t189460977 * value)
	{
		___helpCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___helpCamera_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
