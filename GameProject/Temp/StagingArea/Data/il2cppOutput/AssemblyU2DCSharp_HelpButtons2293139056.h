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
// AnalyticsByLevel
struct AnalyticsByLevel_t2233610461;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HelpButtons
struct  HelpButtons_t2293139056  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text HelpButtons::helpText
	Text_t356221433 * ___helpText_2;
	// AnalyticsByLevel HelpButtons::levelAnalytics
	AnalyticsByLevel_t2233610461 * ___levelAnalytics_3;

public:
	inline static int32_t get_offset_of_helpText_2() { return static_cast<int32_t>(offsetof(HelpButtons_t2293139056, ___helpText_2)); }
	inline Text_t356221433 * get_helpText_2() const { return ___helpText_2; }
	inline Text_t356221433 ** get_address_of_helpText_2() { return &___helpText_2; }
	inline void set_helpText_2(Text_t356221433 * value)
	{
		___helpText_2 = value;
		Il2CppCodeGenWriteBarrier(&___helpText_2, value);
	}

	inline static int32_t get_offset_of_levelAnalytics_3() { return static_cast<int32_t>(offsetof(HelpButtons_t2293139056, ___levelAnalytics_3)); }
	inline AnalyticsByLevel_t2233610461 * get_levelAnalytics_3() const { return ___levelAnalytics_3; }
	inline AnalyticsByLevel_t2233610461 ** get_address_of_levelAnalytics_3() { return &___levelAnalytics_3; }
	inline void set_levelAnalytics_3(AnalyticsByLevel_t2233610461 * value)
	{
		___levelAnalytics_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelAnalytics_3, value);
	}
};

struct HelpButtons_t2293139056_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> HelpButtons::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_4() { return static_cast<int32_t>(offsetof(HelpButtons_t2293139056_StaticFields, ___U3CU3Ef__switchU24map0_4)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_4() const { return ___U3CU3Ef__switchU24map0_4; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_4() { return &___U3CU3Ef__switchU24map0_4; }
	inline void set_U3CU3Ef__switchU24map0_4(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
