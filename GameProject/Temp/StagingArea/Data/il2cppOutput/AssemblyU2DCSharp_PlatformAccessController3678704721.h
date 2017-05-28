#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlatformAccessController
struct  PlatformAccessController_t3678704721  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean PlatformAccessController::isVisible
	bool ___isVisible_2;
	// UnityEngine.BoxCollider2D PlatformAccessController::bCol
	BoxCollider2D_t948534547 * ___bCol_3;
	// UnityEngine.SpriteRenderer PlatformAccessController::spr
	SpriteRenderer_t1209076198 * ___spr_4;
	// UnityEngine.SpriteRenderer PlatformAccessController::indexNumSpr
	SpriteRenderer_t1209076198 * ___indexNumSpr_5;

public:
	inline static int32_t get_offset_of_isVisible_2() { return static_cast<int32_t>(offsetof(PlatformAccessController_t3678704721, ___isVisible_2)); }
	inline bool get_isVisible_2() const { return ___isVisible_2; }
	inline bool* get_address_of_isVisible_2() { return &___isVisible_2; }
	inline void set_isVisible_2(bool value)
	{
		___isVisible_2 = value;
	}

	inline static int32_t get_offset_of_bCol_3() { return static_cast<int32_t>(offsetof(PlatformAccessController_t3678704721, ___bCol_3)); }
	inline BoxCollider2D_t948534547 * get_bCol_3() const { return ___bCol_3; }
	inline BoxCollider2D_t948534547 ** get_address_of_bCol_3() { return &___bCol_3; }
	inline void set_bCol_3(BoxCollider2D_t948534547 * value)
	{
		___bCol_3 = value;
		Il2CppCodeGenWriteBarrier(&___bCol_3, value);
	}

	inline static int32_t get_offset_of_spr_4() { return static_cast<int32_t>(offsetof(PlatformAccessController_t3678704721, ___spr_4)); }
	inline SpriteRenderer_t1209076198 * get_spr_4() const { return ___spr_4; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spr_4() { return &___spr_4; }
	inline void set_spr_4(SpriteRenderer_t1209076198 * value)
	{
		___spr_4 = value;
		Il2CppCodeGenWriteBarrier(&___spr_4, value);
	}

	inline static int32_t get_offset_of_indexNumSpr_5() { return static_cast<int32_t>(offsetof(PlatformAccessController_t3678704721, ___indexNumSpr_5)); }
	inline SpriteRenderer_t1209076198 * get_indexNumSpr_5() const { return ___indexNumSpr_5; }
	inline SpriteRenderer_t1209076198 ** get_address_of_indexNumSpr_5() { return &___indexNumSpr_5; }
	inline void set_indexNumSpr_5(SpriteRenderer_t1209076198 * value)
	{
		___indexNumSpr_5 = value;
		Il2CppCodeGenWriteBarrier(&___indexNumSpr_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
