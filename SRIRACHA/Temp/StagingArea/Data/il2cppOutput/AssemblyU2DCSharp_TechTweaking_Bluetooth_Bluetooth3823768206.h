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
// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice>
struct Action_1_t782123231;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.Action`2<TechTweaking.Bluetooth.BluetoothDevice,System.Int16>
struct Action_2_t2394067157;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TechTweaking.Bluetooth.BluetoothAdapter
struct  BluetoothAdapter_t3823768206  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct BluetoothAdapter_t3823768206_StaticFields
{
public:
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothAdapter::OnConnected
	Action_1_t782123231 * ___OnConnected_6;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothAdapter::OnDisconnected
	Action_1_t782123231 * ___OnDisconnected_7;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothAdapter::OnDeviceNotFound
	Action_1_t782123231 * ___OnDeviceNotFound_8;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothAdapter::OnDeviceOFF
	Action_1_t782123231 * ___OnDeviceOFF_9;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothAdapter::OnSendingError
	Action_1_t782123231 * ___OnSendingError_10;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothAdapter::OnReadingError
	Action_1_t782123231 * ___OnReadingError_11;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothAdapter::OnDevicePicked
	Action_1_t782123231 * ___OnDevicePicked_12;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothAdapter::OnClientRequest
	Action_1_t782123231 * ___OnClientRequest_13;
	// System.Action TechTweaking.Bluetooth.BluetoothAdapter::OnServerFinishedListening
	Action_t1264377477 * ___OnServerFinishedListening_14;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothAdapter::OnReadingStarted
	Action_1_t782123231 * ___OnReadingStarted_15;
	// System.Action`1<TechTweaking.Bluetooth.BluetoothDevice> TechTweaking.Bluetooth.BluetoothAdapter::OnReadingStoped
	Action_1_t782123231 * ___OnReadingStoped_16;
	// System.Action TechTweaking.Bluetooth.BluetoothAdapter::OnBluetoothON
	Action_t1264377477 * ___OnBluetoothON_17;
	// System.Action TechTweaking.Bluetooth.BluetoothAdapter::OnBluetoothOFF
	Action_t1264377477 * ___OnBluetoothOFF_18;
	// System.Action`1<System.Boolean> TechTweaking.Bluetooth.BluetoothAdapter::OnBluetoothStateChanged
	Action_1_t269755560 * ___OnBluetoothStateChanged_19;
	// System.Action`2<TechTweaking.Bluetooth.BluetoothDevice,System.Int16> TechTweaking.Bluetooth.BluetoothAdapter::OnDeviceDiscovered
	Action_2_t2394067157 * ___OnDeviceDiscovered_20;
	// System.Action TechTweaking.Bluetooth.BluetoothAdapter::OnDiscoveryFinished
	Action_t1264377477 * ___OnDiscoveryFinished_21;

public:
	inline static int32_t get_offset_of_OnConnected_6() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnConnected_6)); }
	inline Action_1_t782123231 * get_OnConnected_6() const { return ___OnConnected_6; }
	inline Action_1_t782123231 ** get_address_of_OnConnected_6() { return &___OnConnected_6; }
	inline void set_OnConnected_6(Action_1_t782123231 * value)
	{
		___OnConnected_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnConnected_6, value);
	}

	inline static int32_t get_offset_of_OnDisconnected_7() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnDisconnected_7)); }
	inline Action_1_t782123231 * get_OnDisconnected_7() const { return ___OnDisconnected_7; }
	inline Action_1_t782123231 ** get_address_of_OnDisconnected_7() { return &___OnDisconnected_7; }
	inline void set_OnDisconnected_7(Action_1_t782123231 * value)
	{
		___OnDisconnected_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnDisconnected_7, value);
	}

	inline static int32_t get_offset_of_OnDeviceNotFound_8() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnDeviceNotFound_8)); }
	inline Action_1_t782123231 * get_OnDeviceNotFound_8() const { return ___OnDeviceNotFound_8; }
	inline Action_1_t782123231 ** get_address_of_OnDeviceNotFound_8() { return &___OnDeviceNotFound_8; }
	inline void set_OnDeviceNotFound_8(Action_1_t782123231 * value)
	{
		___OnDeviceNotFound_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeviceNotFound_8, value);
	}

	inline static int32_t get_offset_of_OnDeviceOFF_9() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnDeviceOFF_9)); }
	inline Action_1_t782123231 * get_OnDeviceOFF_9() const { return ___OnDeviceOFF_9; }
	inline Action_1_t782123231 ** get_address_of_OnDeviceOFF_9() { return &___OnDeviceOFF_9; }
	inline void set_OnDeviceOFF_9(Action_1_t782123231 * value)
	{
		___OnDeviceOFF_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeviceOFF_9, value);
	}

	inline static int32_t get_offset_of_OnSendingError_10() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnSendingError_10)); }
	inline Action_1_t782123231 * get_OnSendingError_10() const { return ___OnSendingError_10; }
	inline Action_1_t782123231 ** get_address_of_OnSendingError_10() { return &___OnSendingError_10; }
	inline void set_OnSendingError_10(Action_1_t782123231 * value)
	{
		___OnSendingError_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnSendingError_10, value);
	}

	inline static int32_t get_offset_of_OnReadingError_11() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnReadingError_11)); }
	inline Action_1_t782123231 * get_OnReadingError_11() const { return ___OnReadingError_11; }
	inline Action_1_t782123231 ** get_address_of_OnReadingError_11() { return &___OnReadingError_11; }
	inline void set_OnReadingError_11(Action_1_t782123231 * value)
	{
		___OnReadingError_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnReadingError_11, value);
	}

	inline static int32_t get_offset_of_OnDevicePicked_12() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnDevicePicked_12)); }
	inline Action_1_t782123231 * get_OnDevicePicked_12() const { return ___OnDevicePicked_12; }
	inline Action_1_t782123231 ** get_address_of_OnDevicePicked_12() { return &___OnDevicePicked_12; }
	inline void set_OnDevicePicked_12(Action_1_t782123231 * value)
	{
		___OnDevicePicked_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnDevicePicked_12, value);
	}

	inline static int32_t get_offset_of_OnClientRequest_13() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnClientRequest_13)); }
	inline Action_1_t782123231 * get_OnClientRequest_13() const { return ___OnClientRequest_13; }
	inline Action_1_t782123231 ** get_address_of_OnClientRequest_13() { return &___OnClientRequest_13; }
	inline void set_OnClientRequest_13(Action_1_t782123231 * value)
	{
		___OnClientRequest_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnClientRequest_13, value);
	}

	inline static int32_t get_offset_of_OnServerFinishedListening_14() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnServerFinishedListening_14)); }
	inline Action_t1264377477 * get_OnServerFinishedListening_14() const { return ___OnServerFinishedListening_14; }
	inline Action_t1264377477 ** get_address_of_OnServerFinishedListening_14() { return &___OnServerFinishedListening_14; }
	inline void set_OnServerFinishedListening_14(Action_t1264377477 * value)
	{
		___OnServerFinishedListening_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnServerFinishedListening_14, value);
	}

	inline static int32_t get_offset_of_OnReadingStarted_15() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnReadingStarted_15)); }
	inline Action_1_t782123231 * get_OnReadingStarted_15() const { return ___OnReadingStarted_15; }
	inline Action_1_t782123231 ** get_address_of_OnReadingStarted_15() { return &___OnReadingStarted_15; }
	inline void set_OnReadingStarted_15(Action_1_t782123231 * value)
	{
		___OnReadingStarted_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnReadingStarted_15, value);
	}

	inline static int32_t get_offset_of_OnReadingStoped_16() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnReadingStoped_16)); }
	inline Action_1_t782123231 * get_OnReadingStoped_16() const { return ___OnReadingStoped_16; }
	inline Action_1_t782123231 ** get_address_of_OnReadingStoped_16() { return &___OnReadingStoped_16; }
	inline void set_OnReadingStoped_16(Action_1_t782123231 * value)
	{
		___OnReadingStoped_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnReadingStoped_16, value);
	}

	inline static int32_t get_offset_of_OnBluetoothON_17() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnBluetoothON_17)); }
	inline Action_t1264377477 * get_OnBluetoothON_17() const { return ___OnBluetoothON_17; }
	inline Action_t1264377477 ** get_address_of_OnBluetoothON_17() { return &___OnBluetoothON_17; }
	inline void set_OnBluetoothON_17(Action_t1264377477 * value)
	{
		___OnBluetoothON_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnBluetoothON_17, value);
	}

	inline static int32_t get_offset_of_OnBluetoothOFF_18() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnBluetoothOFF_18)); }
	inline Action_t1264377477 * get_OnBluetoothOFF_18() const { return ___OnBluetoothOFF_18; }
	inline Action_t1264377477 ** get_address_of_OnBluetoothOFF_18() { return &___OnBluetoothOFF_18; }
	inline void set_OnBluetoothOFF_18(Action_t1264377477 * value)
	{
		___OnBluetoothOFF_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnBluetoothOFF_18, value);
	}

	inline static int32_t get_offset_of_OnBluetoothStateChanged_19() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnBluetoothStateChanged_19)); }
	inline Action_1_t269755560 * get_OnBluetoothStateChanged_19() const { return ___OnBluetoothStateChanged_19; }
	inline Action_1_t269755560 ** get_address_of_OnBluetoothStateChanged_19() { return &___OnBluetoothStateChanged_19; }
	inline void set_OnBluetoothStateChanged_19(Action_1_t269755560 * value)
	{
		___OnBluetoothStateChanged_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnBluetoothStateChanged_19, value);
	}

	inline static int32_t get_offset_of_OnDeviceDiscovered_20() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnDeviceDiscovered_20)); }
	inline Action_2_t2394067157 * get_OnDeviceDiscovered_20() const { return ___OnDeviceDiscovered_20; }
	inline Action_2_t2394067157 ** get_address_of_OnDeviceDiscovered_20() { return &___OnDeviceDiscovered_20; }
	inline void set_OnDeviceDiscovered_20(Action_2_t2394067157 * value)
	{
		___OnDeviceDiscovered_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeviceDiscovered_20, value);
	}

	inline static int32_t get_offset_of_OnDiscoveryFinished_21() { return static_cast<int32_t>(offsetof(BluetoothAdapter_t3823768206_StaticFields, ___OnDiscoveryFinished_21)); }
	inline Action_t1264377477 * get_OnDiscoveryFinished_21() const { return ___OnDiscoveryFinished_21; }
	inline Action_t1264377477 ** get_address_of_OnDiscoveryFinished_21() { return &___OnDiscoveryFinished_21; }
	inline void set_OnDiscoveryFinished_21(Action_t1264377477 * value)
	{
		___OnDiscoveryFinished_21 = value;
		Il2CppCodeGenWriteBarrier(&___OnDiscoveryFinished_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
