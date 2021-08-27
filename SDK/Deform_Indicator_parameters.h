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

// Function Deform_Indicator.Deform_Indicator_C.UserConstructionScript
struct ADeform_Indicator_C_UserConstructionScript_Params
{
};

// Function Deform_Indicator.Deform_Indicator_C.ReceiveTick
struct ADeform_Indicator_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deform_Indicator.Deform_Indicator_C.ExecuteUbergraph_Deform_Indicator
struct ADeform_Indicator_C_ExecuteUbergraph_Deform_Indicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
