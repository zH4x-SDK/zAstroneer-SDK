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

// Function LeftAux_Indicator.LeftAux_Indicator_C.UserConstructionScript
struct ALeftAux_Indicator_C_UserConstructionScript_Params
{
};

// Function LeftAux_Indicator.LeftAux_Indicator_C.ReceiveTick
struct ALeftAux_Indicator_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeftAux_Indicator.LeftAux_Indicator_C.ExecuteUbergraph_LeftAux_Indicator
struct ALeftAux_Indicator_C_ExecuteUbergraph_LeftAux_Indicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
