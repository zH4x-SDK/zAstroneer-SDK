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

// Function Game_Tutorial.Game_Tutorial_C.UserConstructionScript
struct AGame_Tutorial_C_UserConstructionScript_Params
{
};

// Function Game_Tutorial.Game_Tutorial_C.ReceiveBeginPlay
struct AGame_Tutorial_C_ReceiveBeginPlay_Params
{
};

// Function Game_Tutorial.Game_Tutorial_C.OnTutorialNotify
struct AGame_Tutorial_C_OnTutorialNotify_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               First;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Game_Tutorial.Game_Tutorial_C.ExecuteUbergraph_Game_Tutorial
struct AGame_Tutorial_C_ExecuteUbergraph_Game_Tutorial_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
