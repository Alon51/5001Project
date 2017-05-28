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

// SingleForJIT
struct  SingleForJIT_t850898510  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text SingleForJIT::help
	Text_t356221433 * ___help_2;
	// System.Boolean SingleForJIT::down
	bool ___down_3;

public:
	inline static int32_t get_offset_of_help_2() { return static_cast<int32_t>(offsetof(SingleForJIT_t850898510, ___help_2)); }
	inline Text_t356221433 * get_help_2() const { return ___help_2; }
	inline Text_t356221433 ** get_address_of_help_2() { return &___help_2; }
	inline void set_help_2(Text_t356221433 * value)
	{
		___help_2 = value;
		Il2CppCodeGenWriteBarrier(&___help_2, value);
	}

	inline static int32_t get_offset_of_down_3() { return static_cast<int32_t>(offsetof(SingleForJIT_t850898510, ___down_3)); }
	inline bool get_down_3() const { return ___down_3; }
	inline bool* get_address_of_down_3() { return &___down_3; }
	inline void set_down_3(bool value)
	{
		___down_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
