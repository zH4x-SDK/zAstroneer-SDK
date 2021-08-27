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

// Function GlobalPostProcess.GlobalPostProcess_C.SetPlayerTints
struct AGlobalPostProcess_C_SetPlayerTints_Params
{
};

// Function GlobalPostProcess.GlobalPostProcess_C.UserConstructionScript
struct AGlobalPostProcess_C_UserConstructionScript_Params
{
};

// Function GlobalPostProcess.GlobalPostProcess_C.InpActEvt_Semicolon_K2Node_InputKeyEvent_2
struct AGlobalPostProcess_C_InpActEvt_Semicolon_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GlobalPostProcess.GlobalPostProcess_C.InpActEvt_Apostrophe_K2Node_InputKeyEvent_1
struct AGlobalPostProcess_C_InpActEvt_Apostrophe_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GlobalPostProcess.GlobalPostProcess_C.ReceiveTick
struct AGlobalPostProcess_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalPostProcess.GlobalPostProcess_C.ReceiveBeginPlay
struct AGlobalPostProcess_C_ReceiveBeginPlay_Params
{
};

// Function GlobalPostProcess.GlobalPostProcess_C.ExecuteUbergraph_GlobalPostProcess
struct AGlobalPostProcess_C_ExecuteUbergraph_GlobalPostProcess_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
