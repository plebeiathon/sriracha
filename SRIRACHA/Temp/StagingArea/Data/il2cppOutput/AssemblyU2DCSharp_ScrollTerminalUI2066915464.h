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
// System.Text.StringBuilder
struct StringBuilder_t1712802186;
// UnityEngine.UI.Text
struct Text_t1901882714;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t2797205247;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollTerminalUI
struct  ScrollTerminalUI_t2066915464  : public MonoBehaviour_t3962482529
{
public:
	// System.String ScrollTerminalUI::newLine
	String_t* ___newLine_2;
	// System.Int32 ScrollTerminalUI::maxLength
	int32_t ___maxLength_3;
	// System.Int32 ScrollTerminalUI::maxNumberOfMessages
	int32_t ___maxNumberOfMessages_4;
	// System.Text.StringBuilder ScrollTerminalUI::SB
	StringBuilder_t1712802186 * ___SB_5;
	// UnityEngine.UI.Text ScrollTerminalUI::mainText
	Text_t1901882714 * ___mainText_6;
	// System.Int32 ScrollTerminalUI::newLineLen
	int32_t ___newLineLen_7;
	// System.Collections.Generic.Queue`1<System.Int32> ScrollTerminalUI::lengths
	Queue_1_t2797205247 * ___lengths_8;

public:
	inline static int32_t get_offset_of_newLine_2() { return static_cast<int32_t>(offsetof(ScrollTerminalUI_t2066915464, ___newLine_2)); }
	inline String_t* get_newLine_2() const { return ___newLine_2; }
	inline String_t** get_address_of_newLine_2() { return &___newLine_2; }
	inline void set_newLine_2(String_t* value)
	{
		___newLine_2 = value;
		Il2CppCodeGenWriteBarrier(&___newLine_2, value);
	}

	inline static int32_t get_offset_of_maxLength_3() { return static_cast<int32_t>(offsetof(ScrollTerminalUI_t2066915464, ___maxLength_3)); }
	inline int32_t get_maxLength_3() const { return ___maxLength_3; }
	inline int32_t* get_address_of_maxLength_3() { return &___maxLength_3; }
	inline void set_maxLength_3(int32_t value)
	{
		___maxLength_3 = value;
	}

	inline static int32_t get_offset_of_maxNumberOfMessages_4() { return static_cast<int32_t>(offsetof(ScrollTerminalUI_t2066915464, ___maxNumberOfMessages_4)); }
	inline int32_t get_maxNumberOfMessages_4() const { return ___maxNumberOfMessages_4; }
	inline int32_t* get_address_of_maxNumberOfMessages_4() { return &___maxNumberOfMessages_4; }
	inline void set_maxNumberOfMessages_4(int32_t value)
	{
		___maxNumberOfMessages_4 = value;
	}

	inline static int32_t get_offset_of_SB_5() { return static_cast<int32_t>(offsetof(ScrollTerminalUI_t2066915464, ___SB_5)); }
	inline StringBuilder_t1712802186 * get_SB_5() const { return ___SB_5; }
	inline StringBuilder_t1712802186 ** get_address_of_SB_5() { return &___SB_5; }
	inline void set_SB_5(StringBuilder_t1712802186 * value)
	{
		___SB_5 = value;
		Il2CppCodeGenWriteBarrier(&___SB_5, value);
	}

	inline static int32_t get_offset_of_mainText_6() { return static_cast<int32_t>(offsetof(ScrollTerminalUI_t2066915464, ___mainText_6)); }
	inline Text_t1901882714 * get_mainText_6() const { return ___mainText_6; }
	inline Text_t1901882714 ** get_address_of_mainText_6() { return &___mainText_6; }
	inline void set_mainText_6(Text_t1901882714 * value)
	{
		___mainText_6 = value;
		Il2CppCodeGenWriteBarrier(&___mainText_6, value);
	}

	inline static int32_t get_offset_of_newLineLen_7() { return static_cast<int32_t>(offsetof(ScrollTerminalUI_t2066915464, ___newLineLen_7)); }
	inline int32_t get_newLineLen_7() const { return ___newLineLen_7; }
	inline int32_t* get_address_of_newLineLen_7() { return &___newLineLen_7; }
	inline void set_newLineLen_7(int32_t value)
	{
		___newLineLen_7 = value;
	}

	inline static int32_t get_offset_of_lengths_8() { return static_cast<int32_t>(offsetof(ScrollTerminalUI_t2066915464, ___lengths_8)); }
	inline Queue_1_t2797205247 * get_lengths_8() const { return ___lengths_8; }
	inline Queue_1_t2797205247 ** get_address_of_lengths_8() { return &___lengths_8; }
	inline void set_lengths_8(Queue_1_t2797205247 * value)
	{
		___lengths_8 = value;
		Il2CppCodeGenWriteBarrier(&___lengths_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
