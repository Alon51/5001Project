#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// ArrayBoxController
struct ArrayBoxController_t2474866526;
// PlatformAccessController
struct PlatformAccessController_t3678704721;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArrayTileController
struct  ArrayTileController_t1127702187  : public MonoBehaviour_t1158329972
{
public:
	// System.String ArrayTileController::tileName
	String_t* ___tileName_2;
	// ArrayBoxController ArrayTileController::connectedBox
	ArrayBoxController_t2474866526 * ___connectedBox_3;
	// PlatformAccessController ArrayTileController::connectedPlatform
	PlatformAccessController_t3678704721 * ___connectedPlatform_4;
	// System.Boolean ArrayTileController::isUsed
	bool ___isUsed_5;

public:
	inline static int32_t get_offset_of_tileName_2() { return static_cast<int32_t>(offsetof(ArrayTileController_t1127702187, ___tileName_2)); }
	inline String_t* get_tileName_2() const { return ___tileName_2; }
	inline String_t** get_address_of_tileName_2() { return &___tileName_2; }
	inline void set_tileName_2(String_t* value)
	{
		___tileName_2 = value;
		Il2CppCodeGenWriteBarrier(&___tileName_2, value);
	}

	inline static int32_t get_offset_of_connectedBox_3() { return static_cast<int32_t>(offsetof(ArrayTileController_t1127702187, ___connectedBox_3)); }
	inline ArrayBoxController_t2474866526 * get_connectedBox_3() const { return ___connectedBox_3; }
	inline ArrayBoxController_t2474866526 ** get_address_of_connectedBox_3() { return &___connectedBox_3; }
	inline void set_connectedBox_3(ArrayBoxController_t2474866526 * value)
	{
		___connectedBox_3 = value;
		Il2CppCodeGenWriteBarrier(&___connectedBox_3, value);
	}

	inline static int32_t get_offset_of_connectedPlatform_4() { return static_cast<int32_t>(offsetof(ArrayTileController_t1127702187, ___connectedPlatform_4)); }
	inline PlatformAccessController_t3678704721 * get_connectedPlatform_4() const { return ___connectedPlatform_4; }
	inline PlatformAccessController_t3678704721 ** get_address_of_connectedPlatform_4() { return &___connectedPlatform_4; }
	inline void set_connectedPlatform_4(PlatformAccessController_t3678704721 * value)
	{
		___connectedPlatform_4 = value;
		Il2CppCodeGenWriteBarrier(&___connectedPlatform_4, value);
	}

	inline static int32_t get_offset_of_isUsed_5() { return static_cast<int32_t>(offsetof(ArrayTileController_t1127702187, ___isUsed_5)); }
	inline bool get_isUsed_5() const { return ___isUsed_5; }
	inline bool* get_address_of_isUsed_5() { return &___isUsed_5; }
	inline void set_isUsed_5(bool value)
	{
		___isUsed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
