#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "AssemblyU2DCSharp_TechTweaking_Bluetooth_BluetoothD663884703.h"
#include "AssemblyU2DCSharp_TechTweaking_Bluetooth_Bluetooth1090265868.h"

// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice>
struct Action_1_t782123231;
// System.Collections.Generic.Dictionary`2<System.Int32,TechTweaking.Bluetooth.BluetoothDevice>
struct Dictionary_2_t3793336263;
// System.String
struct String_t;
// System.Func`2<TechTweaking.Bluetooth.BluetoothDevice,System.Collections.IEnumerator>
struct Func_2_t1671652544;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4131667876;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TechTweaking.Bluetooth.BluetoothDevice
struct  BluetoothDevice_t609655636  : public Il2CppObject
{
public:
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothDevice::OnConnected
	Action_1_t782123231 * ___OnConnected_0;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothDevice::OnDisconnected
	Action_1_t782123231 * ___OnDisconnected_1;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothDevice::OnDeviceNotFound
	Action_1_t782123231 * ___OnDeviceNotFound_2;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothDevice::OnDeviceOFF
	Action_1_t782123231 * ___OnDeviceOFF_3;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothDevice::OnSendingError
	Action_1_t782123231 * ___OnSendingError_4;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothDevice::OnReadingError
	Action_1_t782123231 * ___OnReadingError_5;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothDevice::OnReadingStarted
	Action_1_t782123231 * ___OnReadingStarted_6;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothDevice::OnReadingStoped
	Action_1_t782123231 * ___OnReadingStoped_7;
	// TechTweaking.Bluetooth.BluetoothDevice/READING_MODES TechTweaking.Bluetooth.BluetoothDevice::reading_mode
	int32_t ___reading_mode_8;
	// System.Int32 TechTweaking.Bluetooth.BluetoothDevice::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_9;
	// System.Boolean TechTweaking.Bluetooth.BluetoothDevice::isReading
	bool ___isReading_28;
	// System.Boolean TechTweaking.Bluetooth.BluetoothDevice::isDataAvailable
	bool ___isDataAvailable_29;
	// System.Boolean TechTweaking.Bluetooth.BluetoothDevice::isConnected
	bool ___isConnected_30;
	// System.Func`2<TechTweaking.Bluetooth.BluetoothDevice,System.Collections.IEnumerator> TechTweaking.Bluetooth.BluetoothDevice::readingCoroutine
	Func_2_t1671652544 * ___readingCoroutine_31;
	// System.Byte TechTweaking.Bluetooth.BluetoothDevice::endByte
	uint8_t ___endByte_32;
	// System.Boolean TechTweaking.Bluetooth.BluetoothDevice::isUsingUUID
	bool ___isUsingUUID_33;
	// System.Boolean TechTweaking.Bluetooth.BluetoothDevice::isNeedCommitData
	bool ___isNeedCommitData_34;
	// TechTweaking.Bluetooth.BluetoothDevice/BtConnectionMode TechTweaking.Bluetooth.BluetoothDevice::btConnectionMode
	int32_t ___btConnectionMode_35;
	// UnityEngine.AndroidJavaObject TechTweaking.Bluetooth.BluetoothDevice::javaBtConnection
	AndroidJavaObject_t4131667876 * ___javaBtConnection_36;
	// System.String TechTweaking.Bluetooth.BluetoothDevice::name
	String_t* ___name_37;
	// System.Boolean TechTweaking.Bluetooth.BluetoothDevice::isNameGrabed
	bool ___isNameGrabed_38;
	// System.String TechTweaking.Bluetooth.BluetoothDevice::macAddress
	String_t* ___macAddress_39;
	// System.Boolean TechTweaking.Bluetooth.BluetoothDevice::isMacGrabed
	bool ___isMacGrabed_40;
	// System.String TechTweaking.Bluetooth.BluetoothDevice::uuid
	String_t* ___uuid_41;
	// System.Boolean TechTweaking.Bluetooth.BluetoothDevice::willRead
	bool ___willRead_42;
	// System.Int32 TechTweaking.Bluetooth.BluetoothDevice::threadID
	int32_t ___threadID_43;
	// System.Boolean TechTweaking.Bluetooth.BluetoothDevice::disposed
	bool ___disposed_44;

public:
	inline static int32_t get_offset_of_OnConnected_0() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___OnConnected_0)); }
	inline Action_1_t782123231 * get_OnConnected_0() const { return ___OnConnected_0; }
	inline Action_1_t782123231 ** get_address_of_OnConnected_0() { return &___OnConnected_0; }
	inline void set_OnConnected_0(Action_1_t782123231 * value)
	{
		___OnConnected_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnConnected_0, value);
	}

	inline static int32_t get_offset_of_OnDisconnected_1() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___OnDisconnected_1)); }
	inline Action_1_t782123231 * get_OnDisconnected_1() const { return ___OnDisconnected_1; }
	inline Action_1_t782123231 ** get_address_of_OnDisconnected_1() { return &___OnDisconnected_1; }
	inline void set_OnDisconnected_1(Action_1_t782123231 * value)
	{
		___OnDisconnected_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnDisconnected_1, value);
	}

	inline static int32_t get_offset_of_OnDeviceNotFound_2() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___OnDeviceNotFound_2)); }
	inline Action_1_t782123231 * get_OnDeviceNotFound_2() const { return ___OnDeviceNotFound_2; }
	inline Action_1_t782123231 ** get_address_of_OnDeviceNotFound_2() { return &___OnDeviceNotFound_2; }
	inline void set_OnDeviceNotFound_2(Action_1_t782123231 * value)
	{
		___OnDeviceNotFound_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeviceNotFound_2, value);
	}

	inline static int32_t get_offset_of_OnDeviceOFF_3() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___OnDeviceOFF_3)); }
	inline Action_1_t782123231 * get_OnDeviceOFF_3() const { return ___OnDeviceOFF_3; }
	inline Action_1_t782123231 ** get_address_of_OnDeviceOFF_3() { return &___OnDeviceOFF_3; }
	inline void set_OnDeviceOFF_3(Action_1_t782123231 * value)
	{
		___OnDeviceOFF_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeviceOFF_3, value);
	}

	inline static int32_t get_offset_of_OnSendingError_4() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___OnSendingError_4)); }
	inline Action_1_t782123231 * get_OnSendingError_4() const { return ___OnSendingError_4; }
	inline Action_1_t782123231 ** get_address_of_OnSendingError_4() { return &___OnSendingError_4; }
	inline void set_OnSendingError_4(Action_1_t782123231 * value)
	{
		___OnSendingError_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnSendingError_4, value);
	}

	inline static int32_t get_offset_of_OnReadingError_5() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___OnReadingError_5)); }
	inline Action_1_t782123231 * get_OnReadingError_5() const { return ___OnReadingError_5; }
	inline Action_1_t782123231 ** get_address_of_OnReadingError_5() { return &___OnReadingError_5; }
	inline void set_OnReadingError_5(Action_1_t782123231 * value)
	{
		___OnReadingError_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnReadingError_5, value);
	}

	inline static int32_t get_offset_of_OnReadingStarted_6() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___OnReadingStarted_6)); }
	inline Action_1_t782123231 * get_OnReadingStarted_6() const { return ___OnReadingStarted_6; }
	inline Action_1_t782123231 ** get_address_of_OnReadingStarted_6() { return &___OnReadingStarted_6; }
	inline void set_OnReadingStarted_6(Action_1_t782123231 * value)
	{
		___OnReadingStarted_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnReadingStarted_6, value);
	}

	inline static int32_t get_offset_of_OnReadingStoped_7() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___OnReadingStoped_7)); }
	inline Action_1_t782123231 * get_OnReadingStoped_7() const { return ___OnReadingStoped_7; }
	inline Action_1_t782123231 ** get_address_of_OnReadingStoped_7() { return &___OnReadingStoped_7; }
	inline void set_OnReadingStoped_7(Action_1_t782123231 * value)
	{
		___OnReadingStoped_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnReadingStoped_7, value);
	}

	inline static int32_t get_offset_of_reading_mode_8() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___reading_mode_8)); }
	inline int32_t get_reading_mode_8() const { return ___reading_mode_8; }
	inline int32_t* get_address_of_reading_mode_8() { return &___reading_mode_8; }
	inline void set_reading_mode_8(int32_t value)
	{
		___reading_mode_8 = value;
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___U3CIdU3Ek__BackingField_9)); }
	inline int32_t get_U3CIdU3Ek__BackingField_9() const { return ___U3CIdU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_9() { return &___U3CIdU3Ek__BackingField_9; }
	inline void set_U3CIdU3Ek__BackingField_9(int32_t value)
	{
		___U3CIdU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_isReading_28() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___isReading_28)); }
	inline bool get_isReading_28() const { return ___isReading_28; }
	inline bool* get_address_of_isReading_28() { return &___isReading_28; }
	inline void set_isReading_28(bool value)
	{
		___isReading_28 = value;
	}

	inline static int32_t get_offset_of_isDataAvailable_29() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___isDataAvailable_29)); }
	inline bool get_isDataAvailable_29() const { return ___isDataAvailable_29; }
	inline bool* get_address_of_isDataAvailable_29() { return &___isDataAvailable_29; }
	inline void set_isDataAvailable_29(bool value)
	{
		___isDataAvailable_29 = value;
	}

	inline static int32_t get_offset_of_isConnected_30() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___isConnected_30)); }
	inline bool get_isConnected_30() const { return ___isConnected_30; }
	inline bool* get_address_of_isConnected_30() { return &___isConnected_30; }
	inline void set_isConnected_30(bool value)
	{
		___isConnected_30 = value;
	}

	inline static int32_t get_offset_of_readingCoroutine_31() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___readingCoroutine_31)); }
	inline Func_2_t1671652544 * get_readingCoroutine_31() const { return ___readingCoroutine_31; }
	inline Func_2_t1671652544 ** get_address_of_readingCoroutine_31() { return &___readingCoroutine_31; }
	inline void set_readingCoroutine_31(Func_2_t1671652544 * value)
	{
		___readingCoroutine_31 = value;
		Il2CppCodeGenWriteBarrier(&___readingCoroutine_31, value);
	}

	inline static int32_t get_offset_of_endByte_32() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___endByte_32)); }
	inline uint8_t get_endByte_32() const { return ___endByte_32; }
	inline uint8_t* get_address_of_endByte_32() { return &___endByte_32; }
	inline void set_endByte_32(uint8_t value)
	{
		___endByte_32 = value;
	}

	inline static int32_t get_offset_of_isUsingUUID_33() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___isUsingUUID_33)); }
	inline bool get_isUsingUUID_33() const { return ___isUsingUUID_33; }
	inline bool* get_address_of_isUsingUUID_33() { return &___isUsingUUID_33; }
	inline void set_isUsingUUID_33(bool value)
	{
		___isUsingUUID_33 = value;
	}

	inline static int32_t get_offset_of_isNeedCommitData_34() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___isNeedCommitData_34)); }
	inline bool get_isNeedCommitData_34() const { return ___isNeedCommitData_34; }
	inline bool* get_address_of_isNeedCommitData_34() { return &___isNeedCommitData_34; }
	inline void set_isNeedCommitData_34(bool value)
	{
		___isNeedCommitData_34 = value;
	}

	inline static int32_t get_offset_of_btConnectionMode_35() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___btConnectionMode_35)); }
	inline int32_t get_btConnectionMode_35() const { return ___btConnectionMode_35; }
	inline int32_t* get_address_of_btConnectionMode_35() { return &___btConnectionMode_35; }
	inline void set_btConnectionMode_35(int32_t value)
	{
		___btConnectionMode_35 = value;
	}

	inline static int32_t get_offset_of_javaBtConnection_36() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___javaBtConnection_36)); }
	inline AndroidJavaObject_t4131667876 * get_javaBtConnection_36() const { return ___javaBtConnection_36; }
	inline AndroidJavaObject_t4131667876 ** get_address_of_javaBtConnection_36() { return &___javaBtConnection_36; }
	inline void set_javaBtConnection_36(AndroidJavaObject_t4131667876 * value)
	{
		___javaBtConnection_36 = value;
		Il2CppCodeGenWriteBarrier(&___javaBtConnection_36, value);
	}

	inline static int32_t get_offset_of_name_37() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___name_37)); }
	inline String_t* get_name_37() const { return ___name_37; }
	inline String_t** get_address_of_name_37() { return &___name_37; }
	inline void set_name_37(String_t* value)
	{
		___name_37 = value;
		Il2CppCodeGenWriteBarrier(&___name_37, value);
	}

	inline static int32_t get_offset_of_isNameGrabed_38() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___isNameGrabed_38)); }
	inline bool get_isNameGrabed_38() const { return ___isNameGrabed_38; }
	inline bool* get_address_of_isNameGrabed_38() { return &___isNameGrabed_38; }
	inline void set_isNameGrabed_38(bool value)
	{
		___isNameGrabed_38 = value;
	}

	inline static int32_t get_offset_of_macAddress_39() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___macAddress_39)); }
	inline String_t* get_macAddress_39() const { return ___macAddress_39; }
	inline String_t** get_address_of_macAddress_39() { return &___macAddress_39; }
	inline void set_macAddress_39(String_t* value)
	{
		___macAddress_39 = value;
		Il2CppCodeGenWriteBarrier(&___macAddress_39, value);
	}

	inline static int32_t get_offset_of_isMacGrabed_40() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___isMacGrabed_40)); }
	inline bool get_isMacGrabed_40() const { return ___isMacGrabed_40; }
	inline bool* get_address_of_isMacGrabed_40() { return &___isMacGrabed_40; }
	inline void set_isMacGrabed_40(bool value)
	{
		___isMacGrabed_40 = value;
	}

	inline static int32_t get_offset_of_uuid_41() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___uuid_41)); }
	inline String_t* get_uuid_41() const { return ___uuid_41; }
	inline String_t** get_address_of_uuid_41() { return &___uuid_41; }
	inline void set_uuid_41(String_t* value)
	{
		___uuid_41 = value;
		Il2CppCodeGenWriteBarrier(&___uuid_41, value);
	}

	inline static int32_t get_offset_of_willRead_42() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___willRead_42)); }
	inline bool get_willRead_42() const { return ___willRead_42; }
	inline bool* get_address_of_willRead_42() { return &___willRead_42; }
	inline void set_willRead_42(bool value)
	{
		___willRead_42 = value;
	}

	inline static int32_t get_offset_of_threadID_43() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___threadID_43)); }
	inline int32_t get_threadID_43() const { return ___threadID_43; }
	inline int32_t* get_address_of_threadID_43() { return &___threadID_43; }
	inline void set_threadID_43(int32_t value)
	{
		___threadID_43 = value;
	}

	inline static int32_t get_offset_of_disposed_44() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636, ___disposed_44)); }
	inline bool get_disposed_44() const { return ___disposed_44; }
	inline bool* get_address_of_disposed_44() { return &___disposed_44; }
	inline void set_disposed_44(bool value)
	{
		___disposed_44 = value;
	}
};

struct BluetoothDevice_t609655636_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothDevice::DevicesMap
	Dictionary_2_t3793336263 * ___DevicesMap_10;

public:
	inline static int32_t get_offset_of_DevicesMap_10() { return static_cast<int32_t>(offsetof(BluetoothDevice_t609655636_StaticFields, ___DevicesMap_10)); }
	inline Dictionary_2_t3793336263 * get_DevicesMap_10() const { return ___DevicesMap_10; }
	inline Dictionary_2_t3793336263 ** get_address_of_DevicesMap_10() { return &___DevicesMap_10; }
	inline void set_DevicesMap_10(Dictionary_2_t3793336263 * value)
	{
		___DevicesMap_10 = value;
		Il2CppCodeGenWriteBarrier(&___DevicesMap_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
