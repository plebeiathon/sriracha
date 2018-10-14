#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// TechTweaking.Bluetooth.BluetoothDevice
struct BluetoothDevice_t609655636;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Transform
struct Transform_t3600365921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JoystickHandler
struct  JoystickHandler_t2341504121  : public MonoBehaviour_t3962482529
{
public:
	// TechTweaking.Bluetooth.BluetoothDevice JoystickHandler::device
	BluetoothDevice_t609655636 * ___device_2;
	// UnityEngine.UI.Text JoystickHandler::statusText
	Text_t1901882714 * ___statusText_3;
	// UnityEngine.UI.Text JoystickHandler::logsOnScreen
	Text_t1901882714 * ___logsOnScreen_4;
	// UnityEngine.Transform JoystickHandler::cube
	Transform_t3600365921 * ___cube_5;
	// System.Single JoystickHandler::speed
	float ___speed_6;

public:
	inline static int32_t get_offset_of_device_2() { return static_cast<int32_t>(offsetof(JoystickHandler_t2341504121, ___device_2)); }
	inline BluetoothDevice_t609655636 * get_device_2() const { return ___device_2; }
	inline BluetoothDevice_t609655636 ** get_address_of_device_2() { return &___device_2; }
	inline void set_device_2(BluetoothDevice_t609655636 * value)
	{
		___device_2 = value;
		Il2CppCodeGenWriteBarrier(&___device_2, value);
	}

	inline static int32_t get_offset_of_statusText_3() { return static_cast<int32_t>(offsetof(JoystickHandler_t2341504121, ___statusText_3)); }
	inline Text_t1901882714 * get_statusText_3() const { return ___statusText_3; }
	inline Text_t1901882714 ** get_address_of_statusText_3() { return &___statusText_3; }
	inline void set_statusText_3(Text_t1901882714 * value)
	{
		___statusText_3 = value;
		Il2CppCodeGenWriteBarrier(&___statusText_3, value);
	}

	inline static int32_t get_offset_of_logsOnScreen_4() { return static_cast<int32_t>(offsetof(JoystickHandler_t2341504121, ___logsOnScreen_4)); }
	inline Text_t1901882714 * get_logsOnScreen_4() const { return ___logsOnScreen_4; }
	inline Text_t1901882714 ** get_address_of_logsOnScreen_4() { return &___logsOnScreen_4; }
	inline void set_logsOnScreen_4(Text_t1901882714 * value)
	{
		___logsOnScreen_4 = value;
		Il2CppCodeGenWriteBarrier(&___logsOnScreen_4, value);
	}

	inline static int32_t get_offset_of_cube_5() { return static_cast<int32_t>(offsetof(JoystickHandler_t2341504121, ___cube_5)); }
	inline Transform_t3600365921 * get_cube_5() const { return ___cube_5; }
	inline Transform_t3600365921 ** get_address_of_cube_5() { return &___cube_5; }
	inline void set_cube_5(Transform_t3600365921 * value)
	{
		___cube_5 = value;
		Il2CppCodeGenWriteBarrier(&___cube_5, value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(JoystickHandler_t2341504121, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
