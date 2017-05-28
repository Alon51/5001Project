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

// Console
struct  Console_t55256533  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text Console::prompt
	Text_t356221433 * ___prompt_2;
	// System.Boolean Console::inTrigger
	bool ___inTrigger_3;

public:
	inline static int32_t get_offset_of_prompt_2() { return static_cast<int32_t>(offsetof(Console_t55256533, ___prompt_2)); }
	inline Text_t356221433 * get_prompt_2() const { return ___prompt_2; }
	inline Text_t356221433 ** get_address_of_prompt_2() { return &___prompt_2; }
	inline void set_prompt_2(Text_t356221433 * value)
	{
		___prompt_2 = value;
		Il2CppCodeGenWriteBarrier(&___prompt_2, value);
	}

	inline static int32_t get_offset_of_inTrigger_3() { return static_cast<int32_t>(offsetof(Console_t55256533, ___inTrigger_3)); }
	inline bool get_inTrigger_3() const { return ___inTrigger_3; }
	inline bool* get_address_of_inTrigger_3() { return &___inTrigger_3; }
	inline void set_inTrigger_3(bool value)
	{
		___inTrigger_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
