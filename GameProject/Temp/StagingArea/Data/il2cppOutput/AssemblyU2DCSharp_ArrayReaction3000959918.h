#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArrayReaction
struct  ArrayReaction_t3000959918  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean ArrayReaction::success
	bool ___success_2;
	// System.String ArrayReaction::giveName
	String_t* ___giveName_3;
	// UnityEngine.AudioSource ArrayReaction::correct
	AudioSource_t1135106623 * ___correct_4;

public:
	inline static int32_t get_offset_of_success_2() { return static_cast<int32_t>(offsetof(ArrayReaction_t3000959918, ___success_2)); }
	inline bool get_success_2() const { return ___success_2; }
	inline bool* get_address_of_success_2() { return &___success_2; }
	inline void set_success_2(bool value)
	{
		___success_2 = value;
	}

	inline static int32_t get_offset_of_giveName_3() { return static_cast<int32_t>(offsetof(ArrayReaction_t3000959918, ___giveName_3)); }
	inline String_t* get_giveName_3() const { return ___giveName_3; }
	inline String_t** get_address_of_giveName_3() { return &___giveName_3; }
	inline void set_giveName_3(String_t* value)
	{
		___giveName_3 = value;
		Il2CppCodeGenWriteBarrier(&___giveName_3, value);
	}

	inline static int32_t get_offset_of_correct_4() { return static_cast<int32_t>(offsetof(ArrayReaction_t3000959918, ___correct_4)); }
	inline AudioSource_t1135106623 * get_correct_4() const { return ___correct_4; }
	inline AudioSource_t1135106623 ** get_address_of_correct_4() { return &___correct_4; }
	inline void set_correct_4(AudioSource_t1135106623 * value)
	{
		___correct_4 = value;
		Il2CppCodeGenWriteBarrier(&___correct_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
