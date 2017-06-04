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
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreditsScript
struct  CreditsScript_t2388519903  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CreditsScript::objToMove
	GameObject_t1756533147 * ___objToMove_2;
	// UnityEngine.Transform CreditsScript::endPoint
	Transform_t3275118058 * ___endPoint_3;
	// System.Single CreditsScript::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Vector3 CreditsScript::currentTarget
	Vector3_t2243707580  ___currentTarget_5;
	// UnityEngine.Vector3 CreditsScript::initialPosition
	Vector3_t2243707580  ___initialPosition_6;
	// System.Boolean CreditsScript::finishedMoving
	bool ___finishedMoving_7;
	// UnityEngine.UI.Text CreditsScript::titleText
	Text_t356221433 * ___titleText_8;
	// UnityEngine.UI.Button CreditsScript::QuitGameButton
	Button_t2872111280 * ___QuitGameButton_9;
	// UnityEngine.UI.Button CreditsScript::ReturnToTitleButton
	Button_t2872111280 * ___ReturnToTitleButton_10;
	// UnityEngine.Color CreditsScript::rtCol
	Color_t2020392075  ___rtCol_11;
	// UnityEngine.Color CreditsScript::qgCol
	Color_t2020392075  ___qgCol_12;

public:
	inline static int32_t get_offset_of_objToMove_2() { return static_cast<int32_t>(offsetof(CreditsScript_t2388519903, ___objToMove_2)); }
	inline GameObject_t1756533147 * get_objToMove_2() const { return ___objToMove_2; }
	inline GameObject_t1756533147 ** get_address_of_objToMove_2() { return &___objToMove_2; }
	inline void set_objToMove_2(GameObject_t1756533147 * value)
	{
		___objToMove_2 = value;
		Il2CppCodeGenWriteBarrier(&___objToMove_2, value);
	}

	inline static int32_t get_offset_of_endPoint_3() { return static_cast<int32_t>(offsetof(CreditsScript_t2388519903, ___endPoint_3)); }
	inline Transform_t3275118058 * get_endPoint_3() const { return ___endPoint_3; }
	inline Transform_t3275118058 ** get_address_of_endPoint_3() { return &___endPoint_3; }
	inline void set_endPoint_3(Transform_t3275118058 * value)
	{
		___endPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___endPoint_3, value);
	}

	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(CreditsScript_t2388519903, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_currentTarget_5() { return static_cast<int32_t>(offsetof(CreditsScript_t2388519903, ___currentTarget_5)); }
	inline Vector3_t2243707580  get_currentTarget_5() const { return ___currentTarget_5; }
	inline Vector3_t2243707580 * get_address_of_currentTarget_5() { return &___currentTarget_5; }
	inline void set_currentTarget_5(Vector3_t2243707580  value)
	{
		___currentTarget_5 = value;
	}

	inline static int32_t get_offset_of_initialPosition_6() { return static_cast<int32_t>(offsetof(CreditsScript_t2388519903, ___initialPosition_6)); }
	inline Vector3_t2243707580  get_initialPosition_6() const { return ___initialPosition_6; }
	inline Vector3_t2243707580 * get_address_of_initialPosition_6() { return &___initialPosition_6; }
	inline void set_initialPosition_6(Vector3_t2243707580  value)
	{
		___initialPosition_6 = value;
	}

	inline static int32_t get_offset_of_finishedMoving_7() { return static_cast<int32_t>(offsetof(CreditsScript_t2388519903, ___finishedMoving_7)); }
	inline bool get_finishedMoving_7() const { return ___finishedMoving_7; }
	inline bool* get_address_of_finishedMoving_7() { return &___finishedMoving_7; }
	inline void set_finishedMoving_7(bool value)
	{
		___finishedMoving_7 = value;
	}

	inline static int32_t get_offset_of_titleText_8() { return static_cast<int32_t>(offsetof(CreditsScript_t2388519903, ___titleText_8)); }
	inline Text_t356221433 * get_titleText_8() const { return ___titleText_8; }
	inline Text_t356221433 ** get_address_of_titleText_8() { return &___titleText_8; }
	inline void set_titleText_8(Text_t356221433 * value)
	{
		___titleText_8 = value;
		Il2CppCodeGenWriteBarrier(&___titleText_8, value);
	}

	inline static int32_t get_offset_of_QuitGameButton_9() { return static_cast<int32_t>(offsetof(CreditsScript_t2388519903, ___QuitGameButton_9)); }
	inline Button_t2872111280 * get_QuitGameButton_9() const { return ___QuitGameButton_9; }
	inline Button_t2872111280 ** get_address_of_QuitGameButton_9() { return &___QuitGameButton_9; }
	inline void set_QuitGameButton_9(Button_t2872111280 * value)
	{
		___QuitGameButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___QuitGameButton_9, value);
	}

	inline static int32_t get_offset_of_ReturnToTitleButton_10() { return static_cast<int32_t>(offsetof(CreditsScript_t2388519903, ___ReturnToTitleButton_10)); }
	inline Button_t2872111280 * get_ReturnToTitleButton_10() const { return ___ReturnToTitleButton_10; }
	inline Button_t2872111280 ** get_address_of_ReturnToTitleButton_10() { return &___ReturnToTitleButton_10; }
	inline void set_ReturnToTitleButton_10(Button_t2872111280 * value)
	{
		___ReturnToTitleButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___ReturnToTitleButton_10, value);
	}

	inline static int32_t get_offset_of_rtCol_11() { return static_cast<int32_t>(offsetof(CreditsScript_t2388519903, ___rtCol_11)); }
	inline Color_t2020392075  get_rtCol_11() const { return ___rtCol_11; }
	inline Color_t2020392075 * get_address_of_rtCol_11() { return &___rtCol_11; }
	inline void set_rtCol_11(Color_t2020392075  value)
	{
		___rtCol_11 = value;
	}

	inline static int32_t get_offset_of_qgCol_12() { return static_cast<int32_t>(offsetof(CreditsScript_t2388519903, ___qgCol_12)); }
	inline Color_t2020392075  get_qgCol_12() const { return ___qgCol_12; }
	inline Color_t2020392075 * get_address_of_qgCol_12() { return &___qgCol_12; }
	inline void set_qgCol_12(Color_t2020392075  value)
	{
		___qgCol_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
