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

// NestedForDeskTopInteraction
struct  NestedForDeskTopInteraction_t4006902462  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text NestedForDeskTopInteraction::prompt
	Text_t356221433 * ___prompt_2;
	// System.Boolean NestedForDeskTopInteraction::inArea
	bool ___inArea_3;
	// UnityEngine.Camera NestedForDeskTopInteraction::mainCam
	Camera_t189460977 * ___mainCam_4;
	// UnityEngine.Camera NestedForDeskTopInteraction::puzzleCam
	Camera_t189460977 * ___puzzleCam_5;
	// System.Boolean NestedForDeskTopInteraction::onMainCam
	bool ___onMainCam_6;

public:
	inline static int32_t get_offset_of_prompt_2() { return static_cast<int32_t>(offsetof(NestedForDeskTopInteraction_t4006902462, ___prompt_2)); }
	inline Text_t356221433 * get_prompt_2() const { return ___prompt_2; }
	inline Text_t356221433 ** get_address_of_prompt_2() { return &___prompt_2; }
	inline void set_prompt_2(Text_t356221433 * value)
	{
		___prompt_2 = value;
		Il2CppCodeGenWriteBarrier(&___prompt_2, value);
	}

	inline static int32_t get_offset_of_inArea_3() { return static_cast<int32_t>(offsetof(NestedForDeskTopInteraction_t4006902462, ___inArea_3)); }
	inline bool get_inArea_3() const { return ___inArea_3; }
	inline bool* get_address_of_inArea_3() { return &___inArea_3; }
	inline void set_inArea_3(bool value)
	{
		___inArea_3 = value;
	}

	inline static int32_t get_offset_of_mainCam_4() { return static_cast<int32_t>(offsetof(NestedForDeskTopInteraction_t4006902462, ___mainCam_4)); }
	inline Camera_t189460977 * get_mainCam_4() const { return ___mainCam_4; }
	inline Camera_t189460977 ** get_address_of_mainCam_4() { return &___mainCam_4; }
	inline void set_mainCam_4(Camera_t189460977 * value)
	{
		___mainCam_4 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_4, value);
	}

	inline static int32_t get_offset_of_puzzleCam_5() { return static_cast<int32_t>(offsetof(NestedForDeskTopInteraction_t4006902462, ___puzzleCam_5)); }
	inline Camera_t189460977 * get_puzzleCam_5() const { return ___puzzleCam_5; }
	inline Camera_t189460977 ** get_address_of_puzzleCam_5() { return &___puzzleCam_5; }
	inline void set_puzzleCam_5(Camera_t189460977 * value)
	{
		___puzzleCam_5 = value;
		Il2CppCodeGenWriteBarrier(&___puzzleCam_5, value);
	}

	inline static int32_t get_offset_of_onMainCam_6() { return static_cast<int32_t>(offsetof(NestedForDeskTopInteraction_t4006902462, ___onMainCam_6)); }
	inline bool get_onMainCam_6() const { return ___onMainCam_6; }
	inline bool* get_address_of_onMainCam_6() { return &___onMainCam_6; }
	inline void set_onMainCam_6(bool value)
	{
		___onMainCam_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
