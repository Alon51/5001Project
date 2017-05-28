#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// BoolOpsCompletion
struct BoolOpsCompletion_t2472738366;
// LogicalAndCompletion
struct LogicalAndCompletion_t2218840738;
// LogicalOrCompletion
struct LogicalOrCompletion_t2645652220;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// resetButton
struct  resetButton_t348579509  : public MonoBehaviour_t1158329972
{
public:
	// BoolOpsCompletion resetButton::boolOpsPuzzle
	BoolOpsCompletion_t2472738366 * ___boolOpsPuzzle_2;
	// LogicalAndCompletion resetButton::logAndPuzzle
	LogicalAndCompletion_t2218840738 * ___logAndPuzzle_3;
	// LogicalOrCompletion resetButton::logOrPuzzle
	LogicalOrCompletion_t2645652220 * ___logOrPuzzle_4;

public:
	inline static int32_t get_offset_of_boolOpsPuzzle_2() { return static_cast<int32_t>(offsetof(resetButton_t348579509, ___boolOpsPuzzle_2)); }
	inline BoolOpsCompletion_t2472738366 * get_boolOpsPuzzle_2() const { return ___boolOpsPuzzle_2; }
	inline BoolOpsCompletion_t2472738366 ** get_address_of_boolOpsPuzzle_2() { return &___boolOpsPuzzle_2; }
	inline void set_boolOpsPuzzle_2(BoolOpsCompletion_t2472738366 * value)
	{
		___boolOpsPuzzle_2 = value;
		Il2CppCodeGenWriteBarrier(&___boolOpsPuzzle_2, value);
	}

	inline static int32_t get_offset_of_logAndPuzzle_3() { return static_cast<int32_t>(offsetof(resetButton_t348579509, ___logAndPuzzle_3)); }
	inline LogicalAndCompletion_t2218840738 * get_logAndPuzzle_3() const { return ___logAndPuzzle_3; }
	inline LogicalAndCompletion_t2218840738 ** get_address_of_logAndPuzzle_3() { return &___logAndPuzzle_3; }
	inline void set_logAndPuzzle_3(LogicalAndCompletion_t2218840738 * value)
	{
		___logAndPuzzle_3 = value;
		Il2CppCodeGenWriteBarrier(&___logAndPuzzle_3, value);
	}

	inline static int32_t get_offset_of_logOrPuzzle_4() { return static_cast<int32_t>(offsetof(resetButton_t348579509, ___logOrPuzzle_4)); }
	inline LogicalOrCompletion_t2645652220 * get_logOrPuzzle_4() const { return ___logOrPuzzle_4; }
	inline LogicalOrCompletion_t2645652220 ** get_address_of_logOrPuzzle_4() { return &___logOrPuzzle_4; }
	inline void set_logOrPuzzle_4(LogicalOrCompletion_t2645652220 * value)
	{
		___logOrPuzzle_4 = value;
		Il2CppCodeGenWriteBarrier(&___logOrPuzzle_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
