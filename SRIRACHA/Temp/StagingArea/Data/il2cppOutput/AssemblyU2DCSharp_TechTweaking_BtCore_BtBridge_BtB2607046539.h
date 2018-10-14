#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// TechTweaking.BtCore.BtBridge.BtBridge
struct BtBridge_t2607046539;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4131667876;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TechTweaking.BtCore.BtBridge.BtBridge
struct  BtBridge_t2607046539  : public Il2CppObject
{
public:
	// UnityEngine.AndroidJavaObject TechTweaking.BtCore.BtBridge.BtBridge::ajc
	AndroidJavaObject_t4131667876 * ___ajc_1;
	// System.Boolean TechTweaking.BtCore.BtBridge.BtBridge::PluginReady
	bool ___PluginReady_2;

public:
	inline static int32_t get_offset_of_ajc_1() { return static_cast<int32_t>(offsetof(BtBridge_t2607046539, ___ajc_1)); }
	inline AndroidJavaObject_t4131667876 * get_ajc_1() const { return ___ajc_1; }
	inline AndroidJavaObject_t4131667876 ** get_address_of_ajc_1() { return &___ajc_1; }
	inline void set_ajc_1(AndroidJavaObject_t4131667876 * value)
	{
		___ajc_1 = value;
		Il2CppCodeGenWriteBarrier(&___ajc_1, value);
	}

	inline static int32_t get_offset_of_PluginReady_2() { return static_cast<int32_t>(offsetof(BtBridge_t2607046539, ___PluginReady_2)); }
	inline bool get_PluginReady_2() const { return ___PluginReady_2; }
	inline bool* get_address_of_PluginReady_2() { return &___PluginReady_2; }
	inline void set_PluginReady_2(bool value)
	{
		___PluginReady_2 = value;
	}
};

struct BtBridge_t2607046539_StaticFields
{
public:
	// TechTweaking.BtCore.BtBridge.BtBridge TechTweaking.BtCore.BtBridge.BtBridge::instance
	BtBridge_t2607046539 * ___instance_0;
	// System.String TechTweaking.BtCore.BtBridge.BtBridge::unity_game_object_name
	String_t* ___unity_game_object_name_25;
	// System.Boolean TechTweaking.BtCore.BtBridge.BtBridge::needCommitObjectName
	bool ___needCommitObjectName_26;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(BtBridge_t2607046539_StaticFields, ___instance_0)); }
	inline BtBridge_t2607046539 * get_instance_0() const { return ___instance_0; }
	inline BtBridge_t2607046539 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(BtBridge_t2607046539 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}

	inline static int32_t get_offset_of_unity_game_object_name_25() { return static_cast<int32_t>(offsetof(BtBridge_t2607046539_StaticFields, ___unity_game_object_name_25)); }
	inline String_t* get_unity_game_object_name_25() const { return ___unity_game_object_name_25; }
	inline String_t** get_address_of_unity_game_object_name_25() { return &___unity_game_object_name_25; }
	inline void set_unity_game_object_name_25(String_t* value)
	{
		___unity_game_object_name_25 = value;
		Il2CppCodeGenWriteBarrier(&___unity_game_object_name_25, value);
	}

	inline static int32_t get_offset_of_needCommitObjectName_26() { return static_cast<int32_t>(offsetof(BtBridge_t2607046539_StaticFields, ___needCommitObjectName_26)); }
	inline bool get_needCommitObjectName_26() const { return ___needCommitObjectName_26; }
	inline bool* get_address_of_needCommitObjectName_26() { return &___needCommitObjectName_26; }
	inline void set_needCommitObjectName_26(bool value)
	{
		___needCommitObjectName_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
