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

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileDrag
struct  TileDrag_t1730188494  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TileDrag::x
	float ___x_2;
	// System.Single TileDrag::y
	float ___y_3;
	// System.Single TileDrag::z
	float ___z_4;
	// UnityEngine.Vector3 TileDrag::initialPosition
	Vector3_t2243707580  ___initialPosition_5;
	// UnityEngine.Camera TileDrag::testCam
	Camera_t189460977 * ___testCam_6;
	// System.Boolean TileDrag::canIDragit
	bool ___canIDragit_7;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(TileDrag_t1730188494, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(TileDrag_t1730188494, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(TileDrag_t1730188494, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}

	inline static int32_t get_offset_of_initialPosition_5() { return static_cast<int32_t>(offsetof(TileDrag_t1730188494, ___initialPosition_5)); }
	inline Vector3_t2243707580  get_initialPosition_5() const { return ___initialPosition_5; }
	inline Vector3_t2243707580 * get_address_of_initialPosition_5() { return &___initialPosition_5; }
	inline void set_initialPosition_5(Vector3_t2243707580  value)
	{
		___initialPosition_5 = value;
	}

	inline static int32_t get_offset_of_testCam_6() { return static_cast<int32_t>(offsetof(TileDrag_t1730188494, ___testCam_6)); }
	inline Camera_t189460977 * get_testCam_6() const { return ___testCam_6; }
	inline Camera_t189460977 ** get_address_of_testCam_6() { return &___testCam_6; }
	inline void set_testCam_6(Camera_t189460977 * value)
	{
		___testCam_6 = value;
		Il2CppCodeGenWriteBarrier(&___testCam_6, value);
	}

	inline static int32_t get_offset_of_canIDragit_7() { return static_cast<int32_t>(offsetof(TileDrag_t1730188494, ___canIDragit_7)); }
	inline bool get_canIDragit_7() const { return ___canIDragit_7; }
	inline bool* get_address_of_canIDragit_7() { return &___canIDragit_7; }
	inline void set_canIDragit_7(bool value)
	{
		___canIDragit_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
