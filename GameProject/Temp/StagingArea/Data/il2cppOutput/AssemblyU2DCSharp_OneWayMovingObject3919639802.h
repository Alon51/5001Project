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
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OneWayMovingObject
struct  OneWayMovingObject_t3919639802  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject OneWayMovingObject::objToMove
	GameObject_t1756533147 * ___objToMove_2;
	// UnityEngine.Transform OneWayMovingObject::endPoint
	Transform_t3275118058 * ___endPoint_3;
	// System.Single OneWayMovingObject::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Vector3 OneWayMovingObject::currentTarget
	Vector3_t2243707580  ___currentTarget_5;
	// UnityEngine.Vector3 OneWayMovingObject::initialPosition
	Vector3_t2243707580  ___initialPosition_6;
	// System.Boolean OneWayMovingObject::finishedMoving
	bool ___finishedMoving_7;

public:
	inline static int32_t get_offset_of_objToMove_2() { return static_cast<int32_t>(offsetof(OneWayMovingObject_t3919639802, ___objToMove_2)); }
	inline GameObject_t1756533147 * get_objToMove_2() const { return ___objToMove_2; }
	inline GameObject_t1756533147 ** get_address_of_objToMove_2() { return &___objToMove_2; }
	inline void set_objToMove_2(GameObject_t1756533147 * value)
	{
		___objToMove_2 = value;
		Il2CppCodeGenWriteBarrier(&___objToMove_2, value);
	}

	inline static int32_t get_offset_of_endPoint_3() { return static_cast<int32_t>(offsetof(OneWayMovingObject_t3919639802, ___endPoint_3)); }
	inline Transform_t3275118058 * get_endPoint_3() const { return ___endPoint_3; }
	inline Transform_t3275118058 ** get_address_of_endPoint_3() { return &___endPoint_3; }
	inline void set_endPoint_3(Transform_t3275118058 * value)
	{
		___endPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___endPoint_3, value);
	}

	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(OneWayMovingObject_t3919639802, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_currentTarget_5() { return static_cast<int32_t>(offsetof(OneWayMovingObject_t3919639802, ___currentTarget_5)); }
	inline Vector3_t2243707580  get_currentTarget_5() const { return ___currentTarget_5; }
	inline Vector3_t2243707580 * get_address_of_currentTarget_5() { return &___currentTarget_5; }
	inline void set_currentTarget_5(Vector3_t2243707580  value)
	{
		___currentTarget_5 = value;
	}

	inline static int32_t get_offset_of_initialPosition_6() { return static_cast<int32_t>(offsetof(OneWayMovingObject_t3919639802, ___initialPosition_6)); }
	inline Vector3_t2243707580  get_initialPosition_6() const { return ___initialPosition_6; }
	inline Vector3_t2243707580 * get_address_of_initialPosition_6() { return &___initialPosition_6; }
	inline void set_initialPosition_6(Vector3_t2243707580  value)
	{
		___initialPosition_6 = value;
	}

	inline static int32_t get_offset_of_finishedMoving_7() { return static_cast<int32_t>(offsetof(OneWayMovingObject_t3919639802, ___finishedMoving_7)); }
	inline bool get_finishedMoving_7() const { return ___finishedMoving_7; }
	inline bool* get_address_of_finishedMoving_7() { return &___finishedMoving_7; }
	inline void set_finishedMoving_7(bool value)
	{
		___finishedMoving_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
