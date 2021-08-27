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

// Function PlanetRig.PlanetRig_C.GetViewTargetUp
struct APlanetRig_C_GetViewTargetUp_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function PlanetRig.PlanetRig_C.UserConstructionScript
struct APlanetRig_C_UserConstructionScript_Params
{
};

// Function PlanetRig.PlanetRig_C.OnSetView
struct APlanetRig_C_OnSetView_Params
{
};

// Function PlanetRig.PlanetRig_C.OnRemoveView
struct APlanetRig_C_OnRemoveView_Params
{
};

// Function PlanetRig.PlanetRig_C.ExecuteUbergraph_PlanetRig
struct APlanetRig_C_ExecuteUbergraph_PlanetRig_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
