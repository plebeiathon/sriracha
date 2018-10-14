#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Int32[]
struct Int32U5BU5D_t385246372;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TechTweaking.Bluetooth.BtPackets
struct  BtPackets_t2815011692  : public Il2CppObject
{
public:
	// System.Byte[] TechTweaking.Bluetooth.BtPackets::Buffer
	ByteU5BU5D_t4116647657* ___Buffer_0;
	// System.Int32 TechTweaking.Bluetooth.BtPackets::Count
	int32_t ___Count_1;
	// System.Int32[] TechTweaking.Bluetooth.BtPackets::packet_indices
	Int32U5BU5D_t385246372* ___packet_indices_2;

public:
	inline static int32_t get_offset_of_Buffer_0() { return static_cast<int32_t>(offsetof(BtPackets_t2815011692, ___Buffer_0)); }
	inline ByteU5BU5D_t4116647657* get_Buffer_0() const { return ___Buffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_Buffer_0() { return &___Buffer_0; }
	inline void set_Buffer_0(ByteU5BU5D_t4116647657* value)
	{
		___Buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___Buffer_0, value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(BtPackets_t2815011692, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_packet_indices_2() { return static_cast<int32_t>(offsetof(BtPackets_t2815011692, ___packet_indices_2)); }
	inline Int32U5BU5D_t385246372* get_packet_indices_2() const { return ___packet_indices_2; }
	inline Int32U5BU5D_t385246372** get_address_of_packet_indices_2() { return &___packet_indices_2; }
	inline void set_packet_indices_2(Int32U5BU5D_t385246372* value)
	{
		___packet_indices_2 = value;
		Il2CppCodeGenWriteBarrier(&___packet_indices_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
