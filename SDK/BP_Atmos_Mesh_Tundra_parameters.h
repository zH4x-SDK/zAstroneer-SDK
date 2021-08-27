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

// Function BP_Atmos_Mesh_Tundra.BP_Atmos_Mesh_Tundra_C.UserConstructionScript
struct ABP_Atmos_Mesh_Tundra_C_UserConstructionScript_Params
{
};

// Function BP_Atmos_Mesh_Tundra.BP_Atmos_Mesh_Tundra_C.ReceiveBeginPlay
struct ABP_Atmos_Mesh_Tundra_C_ReceiveBeginPlay_Params
{
};

// Function BP_Atmos_Mesh_Tundra.BP_Atmos_Mesh_Tundra_C.BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_3_OnEventActiveStatusChanged__DelegateSignature
struct ABP_Atmos_Mesh_Tundra_C_BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_3_OnEventActiveStatusChanged__DelegateSignature_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bIsEventActive;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Atmos_Mesh_Tundra.BP_Atmos_Mesh_Tundra_C.BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature
struct ABP_Atmos_Mesh_Tundra_C_BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature_Params
{
	TArray<struct FString>                             activeEventsOfInterest;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Atmos_Mesh_Tundra.BP_Atmos_Mesh_Tundra_C.ExecuteUbergraph_BP_Atmos_Mesh_Tundra
struct ABP_Atmos_Mesh_Tundra_C_ExecuteUbergraph_BP_Atmos_Mesh_Tundra_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
