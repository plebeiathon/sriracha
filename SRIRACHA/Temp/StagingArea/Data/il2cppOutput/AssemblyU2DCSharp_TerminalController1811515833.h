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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TerminalController
struct  TerminalController_t1811515833  : public MonoBehaviour_t3962482529
{
public:
	// System.Byte TerminalController::message
	uint8_t ___message_2;
	// TechTweaking.Bluetooth.BluetoothDevice TerminalController::device
	BluetoothDevice_t609655636 * ___device_3;

public:
	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(TerminalController_t1811515833, ___message_2)); }
	inline uint8_t get_message_2() const { return ___message_2; }
	inline uint8_t* get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(uint8_t value)
	{
		___message_2 = value;
	}

	inline static int32_t get_offset_of_device_3() { return static_cast<int32_t>(offsetof(TerminalController_t1811515833, ___device_3)); }
	inline BluetoothDevice_t609655636 * get_device_3() const { return ___device_3; }
	inline BluetoothDevice_t609655636 ** get_address_of_device_3() { return &___device_3; }
	inline void set_device_3(BluetoothDevice_t609655636 * value)
	{
		___device_3 = value;
		Il2CppCodeGenWriteBarrier(&___device_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
