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
// AutoConnect
struct AutoConnect_t643615794;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AutoConnect/<ManageConnection>c__Iterator0
struct  U3CManageConnectionU3Ec__Iterator0_t3035459355  : public Il2CppObject
{
public:
	// TechTweaking.Bluetooth.BluetoothDevice AutoConnect/<ManageConnection>c__Iterator0::device
	BluetoothDevice_t609655636 * ___device_0;
	// AutoConnect AutoConnect/<ManageConnection>c__Iterator0::$this
	AutoConnect_t643615794 * ___U24this_1;
	// System.Object AutoConnect/<ManageConnection>c__Iterator0::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean AutoConnect/<ManageConnection>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 AutoConnect/<ManageConnection>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_device_0() { return static_cast<int32_t>(offsetof(U3CManageConnectionU3Ec__Iterator0_t3035459355, ___device_0)); }
	inline BluetoothDevice_t609655636 * get_device_0() const { return ___device_0; }
	inline BluetoothDevice_t609655636 ** get_address_of_device_0() { return &___device_0; }
	inline void set_device_0(BluetoothDevice_t609655636 * value)
	{
		___device_0 = value;
		Il2CppCodeGenWriteBarrier(&___device_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CManageConnectionU3Ec__Iterator0_t3035459355, ___U24this_1)); }
	inline AutoConnect_t643615794 * get_U24this_1() const { return ___U24this_1; }
	inline AutoConnect_t643615794 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(AutoConnect_t643615794 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CManageConnectionU3Ec__Iterator0_t3035459355, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CManageConnectionU3Ec__Iterator0_t3035459355, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CManageConnectionU3Ec__Iterator0_t3035459355, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
