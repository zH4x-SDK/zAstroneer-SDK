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

// Function RightAux_Indicator.RightAux_Indicator_C.UserConstructionScript
struct ARightAux_Indicator_C_UserConstructionScript_Params
{
};

// Function RightAux_Indicator.RightAux_Indicator_C.ReceiveTick
struct ARightAux_Indicator_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RightAux_Indicator.RightAux_Indicator_C.ExecuteUbergraph_RightAux_Indicator
struct ARightAux_Indicator_C_ExecuteUbergraph_RightAux_Indicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
