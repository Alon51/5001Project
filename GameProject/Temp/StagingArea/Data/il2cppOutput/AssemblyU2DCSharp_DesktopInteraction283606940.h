#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DesktopInteraction
struct  DesktopInteraction_t283606940  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text DesktopInteraction::prompt
	Text_t356221433 * ___prompt_2;
	// System.Boolean DesktopInteraction::inArea
	bool ___inArea_3;
	// UnityEngine.Camera DesktopInteraction::puzzleCamera
	Camera_t189460977 * ___puzzleCamera_4;

public:
	inline static int32_t get_offset_of_prompt_2() { return static_cast<int32_t>(offsetof(DesktopInteraction_t283606940, ___prompt_2)); }
	inline Text_t356221433 * get_prompt_2() const { return ___prompt_2; }
	inline Text_t356221433 ** get_address_of_prompt_2() { return &___prompt_2; }
	inline void set_prompt_2(Text_t356221433 * value)
	{
		___prompt_2 = value;
		Il2CppCodeGenWriteBarrier(&___prompt_2, value);
	}

	inline static int32_t get_offset_of_inArea_3() { return static_cast<int32_t>(offsetof(DesktopInteraction_t283606940, ___inArea_3)); }
	inline bool get_inArea_3() const { return ___inArea_3; }
	inline bool* get_address_of_inArea_3() { return &___inArea_3; }
	inline void set_inArea_3(bool value)
	{
		___inArea_3 = value;
	}

	inline static int32_t get_offset_of_puzzleCamera_4() { return static_cast<int32_t>(offsetof(DesktopInteraction_t283606940, ___puzzleCamera_4)); }
	inline Camera_t189460977 * get_puzzleCamera_4() const { return ___puzzleCamera_4; }
	inline Camera_t189460977 ** get_address_of_puzzleCamera_4() { return &___puzzleCamera_4; }
	inline void set_puzzleCamera_4(Camera_t189460977 * value)
	{
		___puzzleCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___puzzleCamera_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
