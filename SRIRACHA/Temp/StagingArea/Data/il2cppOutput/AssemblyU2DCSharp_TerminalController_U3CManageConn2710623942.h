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
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TerminalController/<ManageConnection>c__Iterator0
struct  U3CManageConnectionU3Ec__Iterator0_t2710623942  : public Il2CppObject
{
public:
	// TechTweaking.Bluetooth.BluetoothDevice TerminalController/<ManageConnection>c__Iterator0::device
	BluetoothDevice_t609655636 * ___device_0;
	// System.Object TerminalController/<ManageConnection>c__Iterator0::$current
	Il2CppObject * ___U24current_1;
	// System.Boolean TerminalController/<ManageConnection>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 TerminalController/<ManageConnection>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_device_0() { return static_cast<int32_t>(offsetof(U3CManageConnectionU3Ec__Iterator0_t2710623942, ___device_0)); }
	inline BluetoothDevice_t609655636 * get_device_0() const { return ___device_0; }
	inline BluetoothDevice_t609655636 ** get_address_of_device_0() { return &___device_0; }
	inline void set_device_0(BluetoothDevice_t609655636 * value)
	{
		___device_0 = value;
		Il2CppCodeGenWriteBarrier(&___device_0, value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CManageConnectionU3Ec__Iterator0_t2710623942, ___U24current_1)); }
	inline Il2CppObject * get_U24current_1() const { return ___U24current_1; }
	inline Il2CppObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(Il2CppObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_1, value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CManageConnectionU3Ec__Iterator0_t2710623942, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CManageConnectionU3Ec__Iterator0_t2710623942, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
