#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// bombLogic
struct bombLogic_t3170304818;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Camera
struct Camera_t189460977;
// GlobalController
struct GlobalController_t324951557;
// RespawnController
struct RespawnController_t775140768;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t3166138480  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerMovement::moveSpeed
	float ___moveSpeed_2;
	// System.Single PlayerMovement::jumpSpeed
	float ___jumpSpeed_3;
	// System.Boolean PlayerMovement::isGrounded
	bool ___isGrounded_4;
	// System.Boolean PlayerMovement::isJumping
	bool ___isJumping_5;
	// System.Boolean PlayerMovement::leftFacing
	bool ___leftFacing_6;
	// System.Boolean PlayerMovement::canDoubleJump
	bool ___canDoubleJump_7;
	// System.Boolean PlayerMovement::canSpeedUp
	bool ___canSpeedUp_8;
	// UnityEngine.GameObject PlayerMovement::bomb
	GameObject_t1756533147 * ___bomb_9;
	// bombLogic PlayerMovement::timer
	bombLogic_t3170304818 * ___timer_10;
	// System.Single PlayerMovement::startTime
	float ___startTime_11;
	// System.Single PlayerMovement::elapsedTime
	float ___elapsedTime_12;
	// UnityEngine.Transform PlayerMovement::groundCheck
	Transform_t3275118058 * ___groundCheck_13;
	// System.Single PlayerMovement::groundCheckRadius
	float ___groundCheckRadius_14;
	// UnityEngine.LayerMask PlayerMovement::whatIsGround
	LayerMask_t3188175821  ___whatIsGround_15;
	// UnityEngine.Rigidbody2D PlayerMovement::myRigidBody
	Rigidbody2D_t502193897 * ___myRigidBody_16;
	// System.Boolean PlayerMovement::zoom
	bool ___zoom_17;
	// UnityEngine.Animator PlayerMovement::anim
	Animator_t69676727 * ___anim_18;
	// UnityEngine.Camera PlayerMovement::cam
	Camera_t189460977 * ___cam_19;
	// GlobalController PlayerMovement::gameManager
	GlobalController_t324951557 * ___gameManager_20;
	// RespawnController PlayerMovement::respawnManager
	RespawnController_t775140768 * ___respawnManager_21;
	// System.Int32 PlayerMovement::currentAnimState
	int32_t ___currentAnimState_26;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___jumpSpeed_3)); }
	inline float get_jumpSpeed_3() const { return ___jumpSpeed_3; }
	inline float* get_address_of_jumpSpeed_3() { return &___jumpSpeed_3; }
	inline void set_jumpSpeed_3(float value)
	{
		___jumpSpeed_3 = value;
	}

	inline static int32_t get_offset_of_isGrounded_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___isGrounded_4)); }
	inline bool get_isGrounded_4() const { return ___isGrounded_4; }
	inline bool* get_address_of_isGrounded_4() { return &___isGrounded_4; }
	inline void set_isGrounded_4(bool value)
	{
		___isGrounded_4 = value;
	}

	inline static int32_t get_offset_of_isJumping_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___isJumping_5)); }
	inline bool get_isJumping_5() const { return ___isJumping_5; }
	inline bool* get_address_of_isJumping_5() { return &___isJumping_5; }
	inline void set_isJumping_5(bool value)
	{
		___isJumping_5 = value;
	}

	inline static int32_t get_offset_of_leftFacing_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___leftFacing_6)); }
	inline bool get_leftFacing_6() const { return ___leftFacing_6; }
	inline bool* get_address_of_leftFacing_6() { return &___leftFacing_6; }
	inline void set_leftFacing_6(bool value)
	{
		___leftFacing_6 = value;
	}

	inline static int32_t get_offset_of_canDoubleJump_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___canDoubleJump_7)); }
	inline bool get_canDoubleJump_7() const { return ___canDoubleJump_7; }
	inline bool* get_address_of_canDoubleJump_7() { return &___canDoubleJump_7; }
	inline void set_canDoubleJump_7(bool value)
	{
		___canDoubleJump_7 = value;
	}

	inline static int32_t get_offset_of_canSpeedUp_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___canSpeedUp_8)); }
	inline bool get_canSpeedUp_8() const { return ___canSpeedUp_8; }
	inline bool* get_address_of_canSpeedUp_8() { return &___canSpeedUp_8; }
	inline void set_canSpeedUp_8(bool value)
	{
		___canSpeedUp_8 = value;
	}

	inline static int32_t get_offset_of_bomb_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___bomb_9)); }
	inline GameObject_t1756533147 * get_bomb_9() const { return ___bomb_9; }
	inline GameObject_t1756533147 ** get_address_of_bomb_9() { return &___bomb_9; }
	inline void set_bomb_9(GameObject_t1756533147 * value)
	{
		___bomb_9 = value;
		Il2CppCodeGenWriteBarrier(&___bomb_9, value);
	}

	inline static int32_t get_offset_of_timer_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___timer_10)); }
	inline bombLogic_t3170304818 * get_timer_10() const { return ___timer_10; }
	inline bombLogic_t3170304818 ** get_address_of_timer_10() { return &___timer_10; }
	inline void set_timer_10(bombLogic_t3170304818 * value)
	{
		___timer_10 = value;
		Il2CppCodeGenWriteBarrier(&___timer_10, value);
	}

	inline static int32_t get_offset_of_startTime_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___startTime_11)); }
	inline float get_startTime_11() const { return ___startTime_11; }
	inline float* get_address_of_startTime_11() { return &___startTime_11; }
	inline void set_startTime_11(float value)
	{
		___startTime_11 = value;
	}

	inline static int32_t get_offset_of_elapsedTime_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___elapsedTime_12)); }
	inline float get_elapsedTime_12() const { return ___elapsedTime_12; }
	inline float* get_address_of_elapsedTime_12() { return &___elapsedTime_12; }
	inline void set_elapsedTime_12(float value)
	{
		___elapsedTime_12 = value;
	}

	inline static int32_t get_offset_of_groundCheck_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___groundCheck_13)); }
	inline Transform_t3275118058 * get_groundCheck_13() const { return ___groundCheck_13; }
	inline Transform_t3275118058 ** get_address_of_groundCheck_13() { return &___groundCheck_13; }
	inline void set_groundCheck_13(Transform_t3275118058 * value)
	{
		___groundCheck_13 = value;
		Il2CppCodeGenWriteBarrier(&___groundCheck_13, value);
	}

	inline static int32_t get_offset_of_groundCheckRadius_14() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___groundCheckRadius_14)); }
	inline float get_groundCheckRadius_14() const { return ___groundCheckRadius_14; }
	inline float* get_address_of_groundCheckRadius_14() { return &___groundCheckRadius_14; }
	inline void set_groundCheckRadius_14(float value)
	{
		___groundCheckRadius_14 = value;
	}

	inline static int32_t get_offset_of_whatIsGround_15() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___whatIsGround_15)); }
	inline LayerMask_t3188175821  get_whatIsGround_15() const { return ___whatIsGround_15; }
	inline LayerMask_t3188175821 * get_address_of_whatIsGround_15() { return &___whatIsGround_15; }
	inline void set_whatIsGround_15(LayerMask_t3188175821  value)
	{
		___whatIsGround_15 = value;
	}

	inline static int32_t get_offset_of_myRigidBody_16() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___myRigidBody_16)); }
	inline Rigidbody2D_t502193897 * get_myRigidBody_16() const { return ___myRigidBody_16; }
	inline Rigidbody2D_t502193897 ** get_address_of_myRigidBody_16() { return &___myRigidBody_16; }
	inline void set_myRigidBody_16(Rigidbody2D_t502193897 * value)
	{
		___myRigidBody_16 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidBody_16, value);
	}

	inline static int32_t get_offset_of_zoom_17() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___zoom_17)); }
	inline bool get_zoom_17() const { return ___zoom_17; }
	inline bool* get_address_of_zoom_17() { return &___zoom_17; }
	inline void set_zoom_17(bool value)
	{
		___zoom_17 = value;
	}

	inline static int32_t get_offset_of_anim_18() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___anim_18)); }
	inline Animator_t69676727 * get_anim_18() const { return ___anim_18; }
	inline Animator_t69676727 ** get_address_of_anim_18() { return &___anim_18; }
	inline void set_anim_18(Animator_t69676727 * value)
	{
		___anim_18 = value;
		Il2CppCodeGenWriteBarrier(&___anim_18, value);
	}

	inline static int32_t get_offset_of_cam_19() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___cam_19)); }
	inline Camera_t189460977 * get_cam_19() const { return ___cam_19; }
	inline Camera_t189460977 ** get_address_of_cam_19() { return &___cam_19; }
	inline void set_cam_19(Camera_t189460977 * value)
	{
		___cam_19 = value;
		Il2CppCodeGenWriteBarrier(&___cam_19, value);
	}

	inline static int32_t get_offset_of_gameManager_20() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___gameManager_20)); }
	inline GlobalController_t324951557 * get_gameManager_20() const { return ___gameManager_20; }
	inline GlobalController_t324951557 ** get_address_of_gameManager_20() { return &___gameManager_20; }
	inline void set_gameManager_20(GlobalController_t324951557 * value)
	{
		___gameManager_20 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_20, value);
	}

	inline static int32_t get_offset_of_respawnManager_21() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___respawnManager_21)); }
	inline RespawnController_t775140768 * get_respawnManager_21() const { return ___respawnManager_21; }
	inline RespawnController_t775140768 ** get_address_of_respawnManager_21() { return &___respawnManager_21; }
	inline void set_respawnManager_21(RespawnController_t775140768 * value)
	{
		___respawnManager_21 = value;
		Il2CppCodeGenWriteBarrier(&___respawnManager_21, value);
	}

	inline static int32_t get_offset_of_currentAnimState_26() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___currentAnimState_26)); }
	inline int32_t get_currentAnimState_26() const { return ___currentAnimState_26; }
	inline int32_t* get_address_of_currentAnimState_26() { return &___currentAnimState_26; }
	inline void set_currentAnimState_26(int32_t value)
	{
		___currentAnimState_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
