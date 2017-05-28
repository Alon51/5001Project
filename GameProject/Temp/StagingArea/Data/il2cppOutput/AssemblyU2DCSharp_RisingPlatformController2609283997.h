#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t1098056643;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RisingPlatformController
struct  RisingPlatformController_t2609283997  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject RisingPlatformController::risingPlatform
	GameObject_t1756533147 * ___risingPlatform_2;
	// System.Single RisingPlatformController::unit
	float ___unit_3;
	// UnityEngine.UI.Text RisingPlatformController::weightText
	Text_t356221433 * ___weightText_4;
	// System.Single RisingPlatformController::sumWeight
	float ___sumWeight_5;
	// UnityEngine.SpriteRenderer[] RisingPlatformController::sprites
	SpriteRendererU5BU5D_t1098056643* ___sprites_6;
	// UnityEngine.GameObject RisingPlatformController::desktop
	GameObject_t1756533147 * ___desktop_7;
	// UnityEngine.GameObject RisingPlatformController::invisibleWall
	GameObject_t1756533147 * ___invisibleWall_8;
	// UnityEngine.Vector3 RisingPlatformController::initialPosition
	Vector3_t2243707580  ___initialPosition_9;
	// System.Boolean RisingPlatformController::scoreChanged
	bool ___scoreChanged_10;

public:
	inline static int32_t get_offset_of_risingPlatform_2() { return static_cast<int32_t>(offsetof(RisingPlatformController_t2609283997, ___risingPlatform_2)); }
	inline GameObject_t1756533147 * get_risingPlatform_2() const { return ___risingPlatform_2; }
	inline GameObject_t1756533147 ** get_address_of_risingPlatform_2() { return &___risingPlatform_2; }
	inline void set_risingPlatform_2(GameObject_t1756533147 * value)
	{
		___risingPlatform_2 = value;
		Il2CppCodeGenWriteBarrier(&___risingPlatform_2, value);
	}

	inline static int32_t get_offset_of_unit_3() { return static_cast<int32_t>(offsetof(RisingPlatformController_t2609283997, ___unit_3)); }
	inline float get_unit_3() const { return ___unit_3; }
	inline float* get_address_of_unit_3() { return &___unit_3; }
	inline void set_unit_3(float value)
	{
		___unit_3 = value;
	}

	inline static int32_t get_offset_of_weightText_4() { return static_cast<int32_t>(offsetof(RisingPlatformController_t2609283997, ___weightText_4)); }
	inline Text_t356221433 * get_weightText_4() const { return ___weightText_4; }
	inline Text_t356221433 ** get_address_of_weightText_4() { return &___weightText_4; }
	inline void set_weightText_4(Text_t356221433 * value)
	{
		___weightText_4 = value;
		Il2CppCodeGenWriteBarrier(&___weightText_4, value);
	}

	inline static int32_t get_offset_of_sumWeight_5() { return static_cast<int32_t>(offsetof(RisingPlatformController_t2609283997, ___sumWeight_5)); }
	inline float get_sumWeight_5() const { return ___sumWeight_5; }
	inline float* get_address_of_sumWeight_5() { return &___sumWeight_5; }
	inline void set_sumWeight_5(float value)
	{
		___sumWeight_5 = value;
	}

	inline static int32_t get_offset_of_sprites_6() { return static_cast<int32_t>(offsetof(RisingPlatformController_t2609283997, ___sprites_6)); }
	inline SpriteRendererU5BU5D_t1098056643* get_sprites_6() const { return ___sprites_6; }
	inline SpriteRendererU5BU5D_t1098056643** get_address_of_sprites_6() { return &___sprites_6; }
	inline void set_sprites_6(SpriteRendererU5BU5D_t1098056643* value)
	{
		___sprites_6 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_6, value);
	}

	inline static int32_t get_offset_of_desktop_7() { return static_cast<int32_t>(offsetof(RisingPlatformController_t2609283997, ___desktop_7)); }
	inline GameObject_t1756533147 * get_desktop_7() const { return ___desktop_7; }
	inline GameObject_t1756533147 ** get_address_of_desktop_7() { return &___desktop_7; }
	inline void set_desktop_7(GameObject_t1756533147 * value)
	{
		___desktop_7 = value;
		Il2CppCodeGenWriteBarrier(&___desktop_7, value);
	}

	inline static int32_t get_offset_of_invisibleWall_8() { return static_cast<int32_t>(offsetof(RisingPlatformController_t2609283997, ___invisibleWall_8)); }
	inline GameObject_t1756533147 * get_invisibleWall_8() const { return ___invisibleWall_8; }
	inline GameObject_t1756533147 ** get_address_of_invisibleWall_8() { return &___invisibleWall_8; }
	inline void set_invisibleWall_8(GameObject_t1756533147 * value)
	{
		___invisibleWall_8 = value;
		Il2CppCodeGenWriteBarrier(&___invisibleWall_8, value);
	}

	inline static int32_t get_offset_of_initialPosition_9() { return static_cast<int32_t>(offsetof(RisingPlatformController_t2609283997, ___initialPosition_9)); }
	inline Vector3_t2243707580  get_initialPosition_9() const { return ___initialPosition_9; }
	inline Vector3_t2243707580 * get_address_of_initialPosition_9() { return &___initialPosition_9; }
	inline void set_initialPosition_9(Vector3_t2243707580  value)
	{
		___initialPosition_9 = value;
	}

	inline static int32_t get_offset_of_scoreChanged_10() { return static_cast<int32_t>(offsetof(RisingPlatformController_t2609283997, ___scoreChanged_10)); }
	inline bool get_scoreChanged_10() const { return ___scoreChanged_10; }
	inline bool* get_address_of_scoreChanged_10() { return &___scoreChanged_10; }
	inline void set_scoreChanged_10(bool value)
	{
		___scoreChanged_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
