#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// TechTweaking.Bluetooth.BluetoothDevice
struct BluetoothDevice_t609655636;
// UnityEngine.UI.Button
struct Button_t4055032469;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BtDiscovery/DeviceData
struct  DeviceData_t1478391047  : public Il2CppObject
{
public:
	// TechTweaking.Bluetooth.BluetoothDevice BtDiscovery/DeviceData::device
	BluetoothDevice_t609655636 * ___device_0;
	// System.Int16 BtDiscovery/DeviceData::RSSI
	int16_t ___RSSI_1;
	// UnityEngine.UI.Button BtDiscovery/DeviceData::button
	Button_t4055032469 * ___button_2;

public:
	inline static int32_t get_offset_of_device_0() { return static_cast<int32_t>(offsetof(DeviceData_t1478391047, ___device_0)); }
	inline BluetoothDevice_t609655636 * get_device_0() const { return ___device_0; }
	inline BluetoothDevice_t609655636 ** get_address_of_device_0() { return &___device_0; }
	inline void set_device_0(BluetoothDevice_t609655636 * value)
	{
		___device_0 = value;
		Il2CppCodeGenWriteBarrier(&___device_0, value);
	}

	inline static int32_t get_offset_of_RSSI_1() { return static_cast<int32_t>(offsetof(DeviceData_t1478391047, ___RSSI_1)); }
	inline int16_t get_RSSI_1() const { return ___RSSI_1; }
	inline int16_t* get_address_of_RSSI_1() { return &___RSSI_1; }
	inline void set_RSSI_1(int16_t value)
	{
		___RSSI_1 = value;
	}

	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(DeviceData_t1478391047, ___button_2)); }
	inline Button_t4055032469 * get_button_2() const { return ___button_2; }
	inline Button_t4055032469 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Button_t4055032469 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
