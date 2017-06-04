#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GoogleAnalyticsV4
struct GoogleAnalyticsV4_t198817271;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnalyticsByLevel
struct  AnalyticsByLevel_t2233610461  : public MonoBehaviour_t1158329972
{
public:
	// GoogleAnalyticsV4 AnalyticsByLevel::googleAnalytics
	GoogleAnalyticsV4_t198817271 * ___googleAnalytics_2;
	// System.Int64 AnalyticsByLevel::noteButtonCounter
	int64_t ___noteButtonCounter_3;
	// System.Int64 AnalyticsByLevel::helpButtonCounter
	int64_t ___helpButtonCounter_4;

public:
	inline static int32_t get_offset_of_googleAnalytics_2() { return static_cast<int32_t>(offsetof(AnalyticsByLevel_t2233610461, ___googleAnalytics_2)); }
	inline GoogleAnalyticsV4_t198817271 * get_googleAnalytics_2() const { return ___googleAnalytics_2; }
	inline GoogleAnalyticsV4_t198817271 ** get_address_of_googleAnalytics_2() { return &___googleAnalytics_2; }
	inline void set_googleAnalytics_2(GoogleAnalyticsV4_t198817271 * value)
	{
		___googleAnalytics_2 = value;
		Il2CppCodeGenWriteBarrier(&___googleAnalytics_2, value);
	}

	inline static int32_t get_offset_of_noteButtonCounter_3() { return static_cast<int32_t>(offsetof(AnalyticsByLevel_t2233610461, ___noteButtonCounter_3)); }
	inline int64_t get_noteButtonCounter_3() const { return ___noteButtonCounter_3; }
	inline int64_t* get_address_of_noteButtonCounter_3() { return &___noteButtonCounter_3; }
	inline void set_noteButtonCounter_3(int64_t value)
	{
		___noteButtonCounter_3 = value;
	}

	inline static int32_t get_offset_of_helpButtonCounter_4() { return static_cast<int32_t>(offsetof(AnalyticsByLevel_t2233610461, ___helpButtonCounter_4)); }
	inline int64_t get_helpButtonCounter_4() const { return ___helpButtonCounter_4; }
	inline int64_t* get_address_of_helpButtonCounter_4() { return &___helpButtonCounter_4; }
	inline void set_helpButtonCounter_4(int64_t value)
	{
		___helpButtonCounter_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
