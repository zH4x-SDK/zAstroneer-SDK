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

// Function CameraDrillingRig.CameraDrillingRig_C.UpdateFacingAndLocation
struct ACameraDrillingRig_C_UpdateFacingAndLocation_Params
{
	bool                                               Facing_Backards;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CameraDrillingRig.CameraDrillingRig_C.UserConstructionScript
struct ACameraDrillingRig_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
