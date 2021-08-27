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

// Function NaturalLandingPad.NaturalLandingPad_C.UserConstructionScript
struct ANaturalLandingPad_C_UserConstructionScript_Params
{
};

// Function NaturalLandingPad.NaturalLandingPad_C.ItemSetOnLandingPad
struct ANaturalLandingPad_C_ItemSetOnLandingPad_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NaturalLandingPad.NaturalLandingPad_C.ItemRemovedFromLandingPad
struct ANaturalLandingPad_C_ItemRemovedFromLandingPad_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NaturalLandingPad.NaturalLandingPad_C.ReceiveBeginPlay
struct ANaturalLandingPad_C_ReceiveBeginPlay_Params
{
};

// Function NaturalLandingPad.NaturalLandingPad_C.ExecuteUbergraph_NaturalLandingPad
struct ANaturalLandingPad_C_ExecuteUbergraph_NaturalLandingPad_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
