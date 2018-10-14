#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

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

// HighRateTerminal
struct  HighRateTerminal_t347433574  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text HighRateTerminal::devicNameText
	Text_t1901882714 * ___devicNameText_2;
	// ScrollTerminalUI HighRateTerminal::readDataText
	ScrollTerminalUI_t2066915464 * ___readDataText_3;
	// UnityEngine.GameObject HighRateTerminal::InfoCanvas
	GameObject_t1113636619 * ___InfoCanvas_4;
	// UnityEngine.GameObject HighRateTerminal::DataCanvas
	GameObject_t1113636619 * ___DataCanvas_5;
	// TechTweaking.Bluetooth.BluetoothDevice HighRateTerminal::device
	BluetoothDevice_t609655636 * ___device_6;
	// UnityEngine.UI.Text HighRateTerminal::dataToSend
	Text_t1901882714 * ___dataToSend_7;

public:
	inline static int32_t get_offset_of_devicNameText_2() { return static_cast<int32_t>(offsetof(HighRateTerminal_t347433574, ___devicNameText_2)); }
	inline Text_t1901882714 * get_devicNameText_2() const { return ___devicNameText_2; }
	inline Text_t1901882714 ** get_address_of_devicNameText_2() { return &___devicNameText_2; }
	inline void set_devicNameText_2(Text_t1901882714 * value)
	{
		___devicNameText_2 = value;
		Il2CppCodeGenWriteBarrier(&___devicNameText_2, value);
	}

	inline static int32_t get_offset_of_readDataText_3() { return static_cast<int32_t>(offsetof(HighRateTerminal_t347433574, ___readDataText_3)); }
	inline ScrollTerminalUI_t2066915464 * get_readDataText_3() const { return ___readDataText_3; }
	inline ScrollTerminalUI_t2066915464 ** get_address_of_readDataText_3() { return &___readDataText_3; }
	inline void set_readDataText_3(ScrollTerminalUI_t2066915464 * value)
	{
		___readDataText_3 = value;
		Il2CppCodeGenWriteBarrier(&___readDataText_3, value);
	}

	inline static int32_t get_offset_of_InfoCanvas_4() { return static_cast<int32_t>(offsetof(HighRateTerminal_t347433574, ___InfoCanvas_4)); }
	inline GameObject_t1113636619 * get_InfoCanvas_4() const { return ___InfoCanvas_4; }
	inline GameObject_t1113636619 ** get_address_of_InfoCanvas_4() { return &___InfoCanvas_4; }
	inline void set_InfoCanvas_4(GameObject_t1113636619 * value)
	{
		___InfoCanvas_4 = value;
		Il2CppCodeGenWriteBarrier(&___InfoCanvas_4, value);
	}

	inline static int32_t get_offset_of_DataCanvas_5() { return static_cast<int32_t>(offsetof(HighRateTerminal_t347433574, ___DataCanvas_5)); }
	inline GameObject_t1113636619 * get_DataCanvas_5() const { return ___DataCanvas_5; }
	inline GameObject_t1113636619 ** get_address_of_DataCanvas_5() { return &___DataCanvas_5; }
	inline void set_DataCanvas_5(GameObject_t1113636619 * value)
	{
		___DataCanvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___DataCanvas_5, value);
	}

	inline static int32_t get_offset_of_device_6() { return static_cast<int32_t>(offsetof(HighRateTerminal_t347433574, ___device_6)); }
	inline BluetoothDevice_t609655636 * get_device_6() const { return ___device_6; }
	inline BluetoothDevice_t609655636 ** get_address_of_device_6() { return &___device_6; }
	inline void set_device_6(BluetoothDevice_t609655636 * value)
	{
		___device_6 = value;
		Il2CppCodeGenWriteBarrier(&___device_6, value);
	}

	inline static int32_t get_offset_of_dataToSend_7() { return static_cast<int32_t>(offsetof(HighRateTerminal_t347433574, ___dataToSend_7)); }
	inline Text_t1901882714 * get_dataToSend_7() const { return ___dataToSend_7; }
	inline Text_t1901882714 ** get_address_of_dataToSend_7() { return &___dataToSend_7; }
	inline void set_dataToSend_7(Text_t1901882714 * value)
	{
		___dataToSend_7 = value;
		Il2CppCodeGenWriteBarrier(&___dataToSend_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
