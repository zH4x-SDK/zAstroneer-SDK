#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MotD_Message.MotD_Message_C.GetMessageText
struct UMotD_Message_C_GetMessageText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MotD_Message.MotD_Message_C.SetupStylingData
struct UMotD_Message_C_SetupStylingData_Params
{
};

// Function MotD_Message.MotD_Message_C.ExecuteUbergraph_MotD_Message
struct UMotD_Message_C_ExecuteUbergraph_MotD_Message_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
