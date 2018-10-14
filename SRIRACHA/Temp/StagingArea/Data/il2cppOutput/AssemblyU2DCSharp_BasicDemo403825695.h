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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BasicDemo
struct  BasicDemo_t403825695  : public MonoBehaviour_t3962482529
{
public:
	// TechTweaking.Bluetooth.BluetoothDevice BasicDemo::device
	BluetoothDevice_t609655636 * ___device_2;
	// UnityEngine.UI.Text BasicDemo::statusText
	Text_t1901882714 * ___statusText_3;

public:
	inline static int32_t get_offset_of_device_2() { return static_cast<int32_t>(offsetof(BasicDemo_t403825695, ___device_2)); }
	inline BluetoothDevice_t609655636 * get_device_2() const { return ___device_2; }
	inline BluetoothDevice_t609655636 ** get_address_of_device_2() { return &___device_2; }
	inline void set_device_2(BluetoothDevice_t609655636 * value)
	{
		___device_2 = value;
		Il2CppCodeGenWriteBarrier(&___device_2, value);
	}

	inline static int32_t get_offset_of_statusText_3() { return static_cast<int32_t>(offsetof(BasicDemo_t403825695, ___statusText_3)); }
	inline Text_t1901882714 * get_statusText_3() const { return ___statusText_3; }
	inline Text_t1901882714 ** get_address_of_statusText_3() { return &___statusText_3; }
	inline void set_statusText_3(Text_t1901882714 * value)
	{
		___statusText_3 = value;
		Il2CppCodeGenWriteBarrier(&___statusText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
