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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ForLoopDeskTopInteraction
struct  ForLoopDeskTopInteraction_t3997531493  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ForLoopDeskTopInteraction::prompt
	Text_t356221433 * ___prompt_2;
	// System.Boolean ForLoopDeskTopInteraction::inArea
	bool ___inArea_3;

public:
	inline static int32_t get_offset_of_prompt_2() { return static_cast<int32_t>(offsetof(ForLoopDeskTopInteraction_t3997531493, ___prompt_2)); }
	inline Text_t356221433 * get_prompt_2() const { return ___prompt_2; }
	inline Text_t356221433 ** get_address_of_prompt_2() { return &___prompt_2; }
	inline void set_prompt_2(Text_t356221433 * value)
	{
		___prompt_2 = value;
		Il2CppCodeGenWriteBarrier(&___prompt_2, value);
	}

	inline static int32_t get_offset_of_inArea_3() { return static_cast<int32_t>(offsetof(ForLoopDeskTopInteraction_t3997531493, ___inArea_3)); }
	inline bool get_inArea_3() const { return ___inArea_3; }
	inline bool* get_address_of_inArea_3() { return &___inArea_3; }
	inline void set_inArea_3(bool value)
	{
		___inArea_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
