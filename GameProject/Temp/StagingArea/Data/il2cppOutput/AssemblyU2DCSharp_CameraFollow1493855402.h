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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t1493855402  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 CameraFollow::playerTransform
	Vector3_t2243707580  ___playerTransform_2;
	// System.Single CameraFollow::cameraTransformX
	float ___cameraTransformX_3;
	// System.Single CameraFollow::cameraTransformY
	float ___cameraTransformY_4;
	// UnityEngine.Vector3 CameraFollow::cameraVector
	Vector3_t2243707580  ___cameraVector_5;
	// UnityEngine.Vector3 CameraFollow::playerVector
	Vector3_t2243707580  ___playerVector_6;
	// System.Single CameraFollow::cameraSpeed
	float ___cameraSpeed_7;

public:
	inline static int32_t get_offset_of_playerTransform_2() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___playerTransform_2)); }
	inline Vector3_t2243707580  get_playerTransform_2() const { return ___playerTransform_2; }
	inline Vector3_t2243707580 * get_address_of_playerTransform_2() { return &___playerTransform_2; }
	inline void set_playerTransform_2(Vector3_t2243707580  value)
	{
		___playerTransform_2 = value;
	}

	inline static int32_t get_offset_of_cameraTransformX_3() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___cameraTransformX_3)); }
	inline float get_cameraTransformX_3() const { return ___cameraTransformX_3; }
	inline float* get_address_of_cameraTransformX_3() { return &___cameraTransformX_3; }
	inline void set_cameraTransformX_3(float value)
	{
		___cameraTransformX_3 = value;
	}

	inline static int32_t get_offset_of_cameraTransformY_4() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___cameraTransformY_4)); }
	inline float get_cameraTransformY_4() const { return ___cameraTransformY_4; }
	inline float* get_address_of_cameraTransformY_4() { return &___cameraTransformY_4; }
	inline void set_cameraTransformY_4(float value)
	{
		___cameraTransformY_4 = value;
	}

	inline static int32_t get_offset_of_cameraVector_5() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___cameraVector_5)); }
	inline Vector3_t2243707580  get_cameraVector_5() const { return ___cameraVector_5; }
	inline Vector3_t2243707580 * get_address_of_cameraVector_5() { return &___cameraVector_5; }
	inline void set_cameraVector_5(Vector3_t2243707580  value)
	{
		___cameraVector_5 = value;
	}

	inline static int32_t get_offset_of_playerVector_6() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___playerVector_6)); }
	inline Vector3_t2243707580  get_playerVector_6() const { return ___playerVector_6; }
	inline Vector3_t2243707580 * get_address_of_playerVector_6() { return &___playerVector_6; }
	inline void set_playerVector_6(Vector3_t2243707580  value)
	{
		___playerVector_6 = value;
	}

	inline static int32_t get_offset_of_cameraSpeed_7() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___cameraSpeed_7)); }
	inline float get_cameraSpeed_7() const { return ___cameraSpeed_7; }
	inline float* get_address_of_cameraSpeed_7() { return &___cameraSpeed_7; }
	inline void set_cameraSpeed_7(float value)
	{
		___cameraSpeed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
