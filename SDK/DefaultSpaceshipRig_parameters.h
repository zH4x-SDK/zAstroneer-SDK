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

// Function DefaultSpaceshipRig.DefaultSpaceshipRig_C.GetViewTargetLocation
struct ADefaultSpaceshipRig_C_GetViewTargetLocation_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DefaultSpaceshipRig.DefaultSpaceshipRig_C.GetViewTargetUp
struct ADefaultSpaceshipRig_C_GetViewTargetUp_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DefaultSpaceshipRig.DefaultSpaceshipRig_C.UserConstructionScript
struct ADefaultSpaceshipRig_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
