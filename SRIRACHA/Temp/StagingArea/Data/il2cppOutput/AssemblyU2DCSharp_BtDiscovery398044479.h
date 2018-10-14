#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Text
struct Text_t1901882714;
// System.Collections.Generic.Dictionary`2<System.String,BtDiscovery/DeviceData>
struct Dictionary_2_t1263647346;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BtDiscovery
struct  BtDiscovery_t398044479  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Button BtDiscovery::deviceButton
	Button_t4055032469 * ___deviceButton_2;
	// UnityEngine.UI.Text BtDiscovery::DeviceText
	Text_t1901882714 * ___DeviceText_3;
	// System.Collections.Generic.Dictionary`2<System.String,BtDiscovery/DeviceData> BtDiscovery::MacAddressToBluetoothDevice
	Dictionary_2_t1263647346 * ___MacAddressToBluetoothDevice_4;

public:
	inline static int32_t get_offset_of_deviceButton_2() { return static_cast<int32_t>(offsetof(BtDiscovery_t398044479, ___deviceButton_2)); }
	inline Button_t4055032469 * get_deviceButton_2() const { return ___deviceButton_2; }
	inline Button_t4055032469 ** get_address_of_deviceButton_2() { return &___deviceButton_2; }
	inline void set_deviceButton_2(Button_t4055032469 * value)
	{
		___deviceButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___deviceButton_2, value);
	}

	inline static int32_t get_offset_of_DeviceText_3() { return static_cast<int32_t>(offsetof(BtDiscovery_t398044479, ___DeviceText_3)); }
	inline Text_t1901882714 * get_DeviceText_3() const { return ___DeviceText_3; }
	inline Text_t1901882714 ** get_address_of_DeviceText_3() { return &___DeviceText_3; }
	inline void set_DeviceText_3(Text_t1901882714 * value)
	{
		___DeviceText_3 = value;
		Il2CppCodeGenWriteBarrier(&___DeviceText_3, value);
	}

	inline static int32_t get_offset_of_MacAddressToBluetoothDevice_4() { return static_cast<int32_t>(offsetof(BtDiscovery_t398044479, ___MacAddressToBluetoothDevice_4)); }
	inline Dictionary_2_t1263647346 * get_MacAddressToBluetoothDevice_4() const { return ___MacAddressToBluetoothDevice_4; }
	inline Dictionary_2_t1263647346 ** get_address_of_MacAddressToBluetoothDevice_4() { return &___MacAddressToBluetoothDevice_4; }
	inline void set_MacAddressToBluetoothDevice_4(Dictionary_2_t1263647346 * value)
	{
		___MacAddressToBluetoothDevice_4 = value;
		Il2CppCodeGenWriteBarrier(&___MacAddressToBluetoothDevice_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
