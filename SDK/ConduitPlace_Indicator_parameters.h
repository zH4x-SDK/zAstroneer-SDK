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

// Function ConduitPlace_Indicator.ConduitPlace_Indicator_C.UserConstructionScript
struct AConduitPlace_Indicator_C_UserConstructionScript_Params
{
};

// Function ConduitPlace_Indicator.ConduitPlace_Indicator_C.ReceiveTick
struct AConduitPlace_Indicator_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConduitPlace_Indicator.ConduitPlace_Indicator_C.OnSpawn
struct AConduitPlace_Indicator_C_OnSpawn_Params
{
};

// Function ConduitPlace_Indicator.ConduitPlace_Indicator_C.ExecuteUbergraph_ConduitPlace_Indicator
struct AConduitPlace_Indicator_C_ExecuteUbergraph_ConduitPlace_Indicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
