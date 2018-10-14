#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t1901882714;
// ScrollTerminalUI
struct ScrollTerminalUI_t2066915464;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// TechTweaking.Bluetooth.BluetoothDevice
struct BluetoothDevice_t609655636;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ServerClient
struct  ServerClient_t3903090839  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text ServerClient::devicNameText
	Text_t1901882714 * ___devicNameText_3;
	// ScrollTerminalUI ServerClient::readDataText
	ScrollTerminalUI_t2066915464 * ___readDataText_4;
	// UnityEngine.GameObject ServerClient::InfoCanvas
	GameObject_t1113636619 * ___InfoCanvas_5;
	// UnityEngine.GameObject ServerClient::DataCanvas
	GameObject_t1113636619 * ___DataCanvas_6;
	// TechTweaking.Bluetooth.BluetoothDevice ServerClient::device
	BluetoothDevice_t609655636 * ___device_7;
	// UnityEngine.UI.Text ServerClient::dataToSend
	Text_t1901882714 * ___dataToSend_8;

public:
	inline static int32_t get_offset_of_devicNameText_3() { return static_cast<int32_t>(offsetof(ServerClient_t3903090839, ___devicNameText_3)); }
	inline Text_t1901882714 * get_devicNameText_3() const { return ___devicNameText_3; }
	inline Text_t1901882714 ** get_address_of_devicNameText_3() { return &___devicNameText_3; }
	inline void set_devicNameText_3(Text_t1901882714 * value)
	{
		___devicNameText_3 = value;
		Il2CppCodeGenWriteBarrier(&___devicNameText_3, value);
	}

	inline static int32_t get_offset_of_readDataText_4() { return static_cast<int32_t>(offsetof(ServerClient_t3903090839, ___readDataText_4)); }
	inline ScrollTerminalUI_t2066915464 * get_readDataText_4() const { return ___readDataText_4; }
	inline ScrollTerminalUI_t2066915464 ** get_address_of_readDataText_4() { return &___readDataText_4; }
	inline void set_readDataText_4(ScrollTerminalUI_t2066915464 * value)
	{
		___readDataText_4 = value;
		Il2CppCodeGenWriteBarrier(&___readDataText_4, value);
	}

	inline static int32_t get_offset_of_InfoCanvas_5() { return static_cast<int32_t>(offsetof(ServerClient_t3903090839, ___InfoCanvas_5)); }
	inline GameObject_t1113636619 * get_InfoCanvas_5() const { return ___InfoCanvas_5; }
	inline GameObject_t1113636619 ** get_address_of_InfoCanvas_5() { return &___InfoCanvas_5; }
	inline void set_InfoCanvas_5(GameObject_t1113636619 * value)
	{
		___InfoCanvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___InfoCanvas_5, value);
	}

	inline static int32_t get_offset_of_DataCanvas_6() { return static_cast<int32_t>(offsetof(ServerClient_t3903090839, ___DataCanvas_6)); }
	inline GameObject_t1113636619 * get_DataCanvas_6() const { return ___DataCanvas_6; }
	inline GameObject_t1113636619 ** get_address_of_DataCanvas_6() { return &___DataCanvas_6; }
	inline void set_DataCanvas_6(GameObject_t1113636619 * value)
	{
		___DataCanvas_6 = value;
		Il2CppCodeGenWriteBarrier(&___DataCanvas_6, value);
	}

	inline static int32_t get_offset_of_device_7() { return static_cast<int32_t>(offsetof(ServerClient_t3903090839, ___device_7)); }
	inline BluetoothDevice_t609655636 * get_device_7() const { return ___device_7; }
	inline BluetoothDevice_t609655636 ** get_address_of_device_7() { return &___device_7; }
	inline void set_device_7(BluetoothDevice_t609655636 * value)
	{
		___device_7 = value;
		Il2CppCodeGenWriteBarrier(&___device_7, value);
	}

	inline static int32_t get_offset_of_dataToSend_8() { return static_cast<int32_t>(offsetof(ServerClient_t3903090839, ___dataToSend_8)); }
	inline Text_t1901882714 * get_dataToSend_8() const { return ___dataToSend_8; }
	inline Text_t1901882714 ** get_address_of_dataToSend_8() { return &___dataToSend_8; }
	inline void set_dataToSend_8(Text_t1901882714 * value)
	{
		___dataToSend_8 = value;
		Il2CppCodeGenWriteBarrier(&___dataToSend_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
