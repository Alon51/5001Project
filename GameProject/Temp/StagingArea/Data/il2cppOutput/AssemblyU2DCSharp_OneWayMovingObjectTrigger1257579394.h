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

// PlayerMovement
struct PlayerMovement_t3166138480;
// JITScript
struct JITScript_t4133567744;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OneWayMovingObjectTrigger
struct  OneWayMovingObjectTrigger_t1257579394  : public MonoBehaviour_t1158329972
{
public:
	// PlayerMovement OneWayMovingObjectTrigger::player
	PlayerMovement_t3166138480 * ___player_2;
	// JITScript OneWayMovingObjectTrigger::triggerCollider
	JITScript_t4133567744 * ___triggerCollider_3;
	// UnityEngine.GameObject OneWayMovingObjectTrigger::objToMove
	GameObject_t1756533147 * ___objToMove_4;
	// UnityEngine.Transform OneWayMovingObjectTrigger::endPoint
	Transform_t3275118058 * ___endPoint_5;
	// System.Single OneWayMovingObjectTrigger::moveSpeed
	float ___moveSpeed_6;
	// UnityEngine.Vector3 OneWayMovingObjectTrigger::currentTarget
	Vector3_t2243707580  ___currentTarget_7;
	// UnityEngine.Vector3 OneWayMovingObjectTrigger::initialPosition
	Vector3_t2243707580  ___initialPosition_8;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(OneWayMovingObjectTrigger_t1257579394, ___player_2)); }
	inline PlayerMovement_t3166138480 * get_player_2() const { return ___player_2; }
	inline PlayerMovement_t3166138480 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(PlayerMovement_t3166138480 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_triggerCollider_3() { return static_cast<int32_t>(offsetof(OneWayMovingObjectTrigger_t1257579394, ___triggerCollider_3)); }
	inline JITScript_t4133567744 * get_triggerCollider_3() const { return ___triggerCollider_3; }
	inline JITScript_t4133567744 ** get_address_of_triggerCollider_3() { return &___triggerCollider_3; }
	inline void set_triggerCollider_3(JITScript_t4133567744 * value)
	{
		___triggerCollider_3 = value;
		Il2CppCodeGenWriteBarrier(&___triggerCollider_3, value);
	}

	inline static int32_t get_offset_of_objToMove_4() { return static_cast<int32_t>(offsetof(OneWayMovingObjectTrigger_t1257579394, ___objToMove_4)); }
	inline GameObject_t1756533147 * get_objToMove_4() const { return ___objToMove_4; }
	inline GameObject_t1756533147 ** get_address_of_objToMove_4() { return &___objToMove_4; }
	inline void set_objToMove_4(GameObject_t1756533147 * value)
	{
		___objToMove_4 = value;
		Il2CppCodeGenWriteBarrier(&___objToMove_4, value);
	}

	inline static int32_t get_offset_of_endPoint_5() { return static_cast<int32_t>(offsetof(OneWayMovingObjectTrigger_t1257579394, ___endPoint_5)); }
	inline Transform_t3275118058 * get_endPoint_5() const { return ___endPoint_5; }
	inline Transform_t3275118058 ** get_address_of_endPoint_5() { return &___endPoint_5; }
	inline void set_endPoint_5(Transform_t3275118058 * value)
	{
		___endPoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___endPoint_5, value);
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(OneWayMovingObjectTrigger_t1257579394, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_currentTarget_7() { return static_cast<int32_t>(offsetof(OneWayMovingObjectTrigger_t1257579394, ___currentTarget_7)); }
	inline Vector3_t2243707580  get_currentTarget_7() const { return ___currentTarget_7; }
	inline Vector3_t2243707580 * get_address_of_currentTarget_7() { return &___currentTarget_7; }
	inline void set_currentTarget_7(Vector3_t2243707580  value)
	{
		___currentTarget_7 = value;
	}

	inline static int32_t get_offset_of_initialPosition_8() { return static_cast<int32_t>(offsetof(OneWayMovingObjectTrigger_t1257579394, ___initialPosition_8)); }
	inline Vector3_t2243707580  get_initialPosition_8() const { return ___initialPosition_8; }
	inline Vector3_t2243707580 * get_address_of_initialPosition_8() { return &___initialPosition_8; }
	inline void set_initialPosition_8(Vector3_t2243707580  value)
	{
		___initialPosition_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
