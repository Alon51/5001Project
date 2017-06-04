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

// RespawnController
struct RespawnController_t775140768;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayerMovement
struct PlayerMovement_t3166138480;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RespawnController
struct  RespawnController_t775140768  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 RespawnController::respawnPos
	Vector3_t2243707580  ___respawnPos_3;
	// UnityEngine.GameObject RespawnController::objToRespawnAt
	GameObject_t1756533147 * ___objToRespawnAt_4;
	// PlayerMovement RespawnController::player
	PlayerMovement_t3166138480 * ___player_5;

public:
	inline static int32_t get_offset_of_respawnPos_3() { return static_cast<int32_t>(offsetof(RespawnController_t775140768, ___respawnPos_3)); }
	inline Vector3_t2243707580  get_respawnPos_3() const { return ___respawnPos_3; }
	inline Vector3_t2243707580 * get_address_of_respawnPos_3() { return &___respawnPos_3; }
	inline void set_respawnPos_3(Vector3_t2243707580  value)
	{
		___respawnPos_3 = value;
	}

	inline static int32_t get_offset_of_objToRespawnAt_4() { return static_cast<int32_t>(offsetof(RespawnController_t775140768, ___objToRespawnAt_4)); }
	inline GameObject_t1756533147 * get_objToRespawnAt_4() const { return ___objToRespawnAt_4; }
	inline GameObject_t1756533147 ** get_address_of_objToRespawnAt_4() { return &___objToRespawnAt_4; }
	inline void set_objToRespawnAt_4(GameObject_t1756533147 * value)
	{
		___objToRespawnAt_4 = value;
		Il2CppCodeGenWriteBarrier(&___objToRespawnAt_4, value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(RespawnController_t775140768, ___player_5)); }
	inline PlayerMovement_t3166138480 * get_player_5() const { return ___player_5; }
	inline PlayerMovement_t3166138480 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(PlayerMovement_t3166138480 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}
};

struct RespawnController_t775140768_StaticFields
{
public:
	// RespawnController RespawnController::Instance
	RespawnController_t775140768 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(RespawnController_t775140768_StaticFields, ___Instance_2)); }
	inline RespawnController_t775140768 * get_Instance_2() const { return ___Instance_2; }
	inline RespawnController_t775140768 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(RespawnController_t775140768 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
