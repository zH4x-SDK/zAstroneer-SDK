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

// Function Planet_Effect_Base.Planet_Effect_Base_C.UserConstructionScript
struct APlanet_Effect_Base_C_UserConstructionScript_Params
{
};

// Function Planet_Effect_Base.Planet_Effect_Base_C.ReceiveTick
struct APlanet_Effect_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Planet_Effect_Base.Planet_Effect_Base_C.ExecuteUbergraph_Planet_Effect_Base
struct APlanet_Effect_Base_C_ExecuteUbergraph_Planet_Effect_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
