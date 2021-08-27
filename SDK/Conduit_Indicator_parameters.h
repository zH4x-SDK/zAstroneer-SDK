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

// Function Conduit_Indicator.Conduit_Indicator_C.UserConstructionScript
struct AConduit_Indicator_C_UserConstructionScript_Params
{
};

// Function Conduit_Indicator.Conduit_Indicator_C.ReceiveTick
struct AConduit_Indicator_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Conduit_Indicator.Conduit_Indicator_C.OnSpawn
struct AConduit_Indicator_C_OnSpawn_Params
{
};

// Function Conduit_Indicator.Conduit_Indicator_C.ExecuteUbergraph_Conduit_Indicator
struct AConduit_Indicator_C_ExecuteUbergraph_Conduit_Indicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
