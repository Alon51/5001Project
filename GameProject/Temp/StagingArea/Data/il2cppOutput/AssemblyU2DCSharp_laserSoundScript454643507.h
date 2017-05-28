#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// CompletionScriptFour
struct CompletionScriptFour_t2901659311;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// laserSoundScript
struct  laserSoundScript_t454643507  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean laserSoundScript::inArea
	bool ___inArea_2;
	// UnityEngine.AudioSource laserSoundScript::laser
	AudioSource_t1135106623 * ___laser_3;
	// CompletionScriptFour laserSoundScript::turnOff
	CompletionScriptFour_t2901659311 * ___turnOff_4;

public:
	inline static int32_t get_offset_of_inArea_2() { return static_cast<int32_t>(offsetof(laserSoundScript_t454643507, ___inArea_2)); }
	inline bool get_inArea_2() const { return ___inArea_2; }
	inline bool* get_address_of_inArea_2() { return &___inArea_2; }
	inline void set_inArea_2(bool value)
	{
		___inArea_2 = value;
	}

	inline static int32_t get_offset_of_laser_3() { return static_cast<int32_t>(offsetof(laserSoundScript_t454643507, ___laser_3)); }
	inline AudioSource_t1135106623 * get_laser_3() const { return ___laser_3; }
	inline AudioSource_t1135106623 ** get_address_of_laser_3() { return &___laser_3; }
	inline void set_laser_3(AudioSource_t1135106623 * value)
	{
		___laser_3 = value;
		Il2CppCodeGenWriteBarrier(&___laser_3, value);
	}

	inline static int32_t get_offset_of_turnOff_4() { return static_cast<int32_t>(offsetof(laserSoundScript_t454643507, ___turnOff_4)); }
	inline CompletionScriptFour_t2901659311 * get_turnOff_4() const { return ___turnOff_4; }
	inline CompletionScriptFour_t2901659311 ** get_address_of_turnOff_4() { return &___turnOff_4; }
	inline void set_turnOff_4(CompletionScriptFour_t2901659311 * value)
	{
		___turnOff_4 = value;
		Il2CppCodeGenWriteBarrier(&___turnOff_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
