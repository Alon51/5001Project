#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// BoolOpsCompletion
struct BoolOpsCompletion_t2472738366;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ElevatorController
struct  ElevatorController_t4139563814  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform ElevatorController::startMarker
	Transform_t3275118058 * ___startMarker_2;
	// UnityEngine.Transform ElevatorController::endMarkerUp
	Transform_t3275118058 * ___endMarkerUp_3;
	// UnityEngine.Transform ElevatorController::endMarkerDown
	Transform_t3275118058 * ___endMarkerDown_4;
	// UnityEngine.Transform ElevatorController::midMarker
	Transform_t3275118058 * ___midMarker_5;
	// UnityEngine.GameObject ElevatorController::player
	GameObject_t1756533147 * ___player_6;
	// System.Single ElevatorController::upSpeed
	float ___upSpeed_7;
	// System.Single ElevatorController::downSpeed
	float ___downSpeed_8;
	// System.Single ElevatorController::startTime
	float ___startTime_9;
	// System.Single ElevatorController::elapsedTime
	float ___elapsedTime_10;
	// System.Single ElevatorController::journeyLengthUp
	float ___journeyLengthUp_11;
	// System.Single ElevatorController::journeyLengthDown
	float ___journeyLengthDown_12;
	// UnityEngine.AudioSource ElevatorController::elevator
	AudioSource_t1135106623 * ___elevator_13;
	// System.Boolean ElevatorController::inArea
	bool ___inArea_14;
	// System.Boolean ElevatorController::up
	bool ___up_15;
	// System.Boolean ElevatorController::down
	bool ___down_16;
	// System.Boolean ElevatorController::soundFlag
	bool ___soundFlag_17;
	// BoolOpsCompletion ElevatorController::elevatorFlag
	BoolOpsCompletion_t2472738366 * ___elevatorFlag_18;
	// BoolOpsCompletion ElevatorController::goingUp
	BoolOpsCompletion_t2472738366 * ___goingUp_19;
	// UnityEngine.Camera ElevatorController::logicalAndCamera
	Camera_t189460977 * ___logicalAndCamera_20;
	// UnityEngine.Camera ElevatorController::logicalOrCamera
	Camera_t189460977 * ___logicalOrCamera_21;

public:
	inline static int32_t get_offset_of_startMarker_2() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___startMarker_2)); }
	inline Transform_t3275118058 * get_startMarker_2() const { return ___startMarker_2; }
	inline Transform_t3275118058 ** get_address_of_startMarker_2() { return &___startMarker_2; }
	inline void set_startMarker_2(Transform_t3275118058 * value)
	{
		___startMarker_2 = value;
		Il2CppCodeGenWriteBarrier(&___startMarker_2, value);
	}

	inline static int32_t get_offset_of_endMarkerUp_3() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___endMarkerUp_3)); }
	inline Transform_t3275118058 * get_endMarkerUp_3() const { return ___endMarkerUp_3; }
	inline Transform_t3275118058 ** get_address_of_endMarkerUp_3() { return &___endMarkerUp_3; }
	inline void set_endMarkerUp_3(Transform_t3275118058 * value)
	{
		___endMarkerUp_3 = value;
		Il2CppCodeGenWriteBarrier(&___endMarkerUp_3, value);
	}

	inline static int32_t get_offset_of_endMarkerDown_4() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___endMarkerDown_4)); }
	inline Transform_t3275118058 * get_endMarkerDown_4() const { return ___endMarkerDown_4; }
	inline Transform_t3275118058 ** get_address_of_endMarkerDown_4() { return &___endMarkerDown_4; }
	inline void set_endMarkerDown_4(Transform_t3275118058 * value)
	{
		___endMarkerDown_4 = value;
		Il2CppCodeGenWriteBarrier(&___endMarkerDown_4, value);
	}

	inline static int32_t get_offset_of_midMarker_5() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___midMarker_5)); }
	inline Transform_t3275118058 * get_midMarker_5() const { return ___midMarker_5; }
	inline Transform_t3275118058 ** get_address_of_midMarker_5() { return &___midMarker_5; }
	inline void set_midMarker_5(Transform_t3275118058 * value)
	{
		___midMarker_5 = value;
		Il2CppCodeGenWriteBarrier(&___midMarker_5, value);
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___player_6)); }
	inline GameObject_t1756533147 * get_player_6() const { return ___player_6; }
	inline GameObject_t1756533147 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(GameObject_t1756533147 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier(&___player_6, value);
	}

	inline static int32_t get_offset_of_upSpeed_7() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___upSpeed_7)); }
	inline float get_upSpeed_7() const { return ___upSpeed_7; }
	inline float* get_address_of_upSpeed_7() { return &___upSpeed_7; }
	inline void set_upSpeed_7(float value)
	{
		___upSpeed_7 = value;
	}

	inline static int32_t get_offset_of_downSpeed_8() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___downSpeed_8)); }
	inline float get_downSpeed_8() const { return ___downSpeed_8; }
	inline float* get_address_of_downSpeed_8() { return &___downSpeed_8; }
	inline void set_downSpeed_8(float value)
	{
		___downSpeed_8 = value;
	}

	inline static int32_t get_offset_of_startTime_9() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___startTime_9)); }
	inline float get_startTime_9() const { return ___startTime_9; }
	inline float* get_address_of_startTime_9() { return &___startTime_9; }
	inline void set_startTime_9(float value)
	{
		___startTime_9 = value;
	}

	inline static int32_t get_offset_of_elapsedTime_10() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___elapsedTime_10)); }
	inline float get_elapsedTime_10() const { return ___elapsedTime_10; }
	inline float* get_address_of_elapsedTime_10() { return &___elapsedTime_10; }
	inline void set_elapsedTime_10(float value)
	{
		___elapsedTime_10 = value;
	}

	inline static int32_t get_offset_of_journeyLengthUp_11() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___journeyLengthUp_11)); }
	inline float get_journeyLengthUp_11() const { return ___journeyLengthUp_11; }
	inline float* get_address_of_journeyLengthUp_11() { return &___journeyLengthUp_11; }
	inline void set_journeyLengthUp_11(float value)
	{
		___journeyLengthUp_11 = value;
	}

	inline static int32_t get_offset_of_journeyLengthDown_12() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___journeyLengthDown_12)); }
	inline float get_journeyLengthDown_12() const { return ___journeyLengthDown_12; }
	inline float* get_address_of_journeyLengthDown_12() { return &___journeyLengthDown_12; }
	inline void set_journeyLengthDown_12(float value)
	{
		___journeyLengthDown_12 = value;
	}

	inline static int32_t get_offset_of_elevator_13() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___elevator_13)); }
	inline AudioSource_t1135106623 * get_elevator_13() const { return ___elevator_13; }
	inline AudioSource_t1135106623 ** get_address_of_elevator_13() { return &___elevator_13; }
	inline void set_elevator_13(AudioSource_t1135106623 * value)
	{
		___elevator_13 = value;
		Il2CppCodeGenWriteBarrier(&___elevator_13, value);
	}

	inline static int32_t get_offset_of_inArea_14() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___inArea_14)); }
	inline bool get_inArea_14() const { return ___inArea_14; }
	inline bool* get_address_of_inArea_14() { return &___inArea_14; }
	inline void set_inArea_14(bool value)
	{
		___inArea_14 = value;
	}

	inline static int32_t get_offset_of_up_15() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___up_15)); }
	inline bool get_up_15() const { return ___up_15; }
	inline bool* get_address_of_up_15() { return &___up_15; }
	inline void set_up_15(bool value)
	{
		___up_15 = value;
	}

	inline static int32_t get_offset_of_down_16() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___down_16)); }
	inline bool get_down_16() const { return ___down_16; }
	inline bool* get_address_of_down_16() { return &___down_16; }
	inline void set_down_16(bool value)
	{
		___down_16 = value;
	}

	inline static int32_t get_offset_of_soundFlag_17() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___soundFlag_17)); }
	inline bool get_soundFlag_17() const { return ___soundFlag_17; }
	inline bool* get_address_of_soundFlag_17() { return &___soundFlag_17; }
	inline void set_soundFlag_17(bool value)
	{
		___soundFlag_17 = value;
	}

	inline static int32_t get_offset_of_elevatorFlag_18() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___elevatorFlag_18)); }
	inline BoolOpsCompletion_t2472738366 * get_elevatorFlag_18() const { return ___elevatorFlag_18; }
	inline BoolOpsCompletion_t2472738366 ** get_address_of_elevatorFlag_18() { return &___elevatorFlag_18; }
	inline void set_elevatorFlag_18(BoolOpsCompletion_t2472738366 * value)
	{
		___elevatorFlag_18 = value;
		Il2CppCodeGenWriteBarrier(&___elevatorFlag_18, value);
	}

	inline static int32_t get_offset_of_goingUp_19() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___goingUp_19)); }
	inline BoolOpsCompletion_t2472738366 * get_goingUp_19() const { return ___goingUp_19; }
	inline BoolOpsCompletion_t2472738366 ** get_address_of_goingUp_19() { return &___goingUp_19; }
	inline void set_goingUp_19(BoolOpsCompletion_t2472738366 * value)
	{
		___goingUp_19 = value;
		Il2CppCodeGenWriteBarrier(&___goingUp_19, value);
	}

	inline static int32_t get_offset_of_logicalAndCamera_20() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___logicalAndCamera_20)); }
	inline Camera_t189460977 * get_logicalAndCamera_20() const { return ___logicalAndCamera_20; }
	inline Camera_t189460977 ** get_address_of_logicalAndCamera_20() { return &___logicalAndCamera_20; }
	inline void set_logicalAndCamera_20(Camera_t189460977 * value)
	{
		___logicalAndCamera_20 = value;
		Il2CppCodeGenWriteBarrier(&___logicalAndCamera_20, value);
	}

	inline static int32_t get_offset_of_logicalOrCamera_21() { return static_cast<int32_t>(offsetof(ElevatorController_t4139563814, ___logicalOrCamera_21)); }
	inline Camera_t189460977 * get_logicalOrCamera_21() const { return ___logicalOrCamera_21; }
	inline Camera_t189460977 ** get_address_of_logicalOrCamera_21() { return &___logicalOrCamera_21; }
	inline void set_logicalOrCamera_21(Camera_t189460977 * value)
	{
		___logicalOrCamera_21 = value;
		Il2CppCodeGenWriteBarrier(&___logicalOrCamera_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
