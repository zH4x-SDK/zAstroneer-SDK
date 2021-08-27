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

// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.UserConstructionScript
struct APackagedItem_T3_StarterShelter_C_UserConstructionScript_Params
{
};

// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct APackagedItem_T3_StarterShelter_C_BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.ReceiveTick
struct APackagedItem_T3_StarterShelter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.ReceiveEndPlay
struct APackagedItem_T3_StarterShelter_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.ReceiveBeginPlay
struct APackagedItem_T3_StarterShelter_C_ReceiveBeginPlay_Params
{
};

// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.HandleOnDeployReadyChanged
struct APackagedItem_T3_StarterShelter_C_HandleOnDeployReadyChanged_Params
{
	bool                                               DeployReady;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.HandleOnAssignPackageMaterial
struct APackagedItem_T3_StarterShelter_C_HandleOnAssignPackageMaterial_Params
{
	class UMaterialInterface*                          PackageMaterial;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.HandleOnIndicatorVisibleChanged
struct APackagedItem_T3_StarterShelter_C_HandleOnIndicatorVisibleChanged_Params
{
	bool                                               IndicatorVisible;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.ExecuteUbergraph_PackagedItem_T3_StarterShelter
struct APackagedItem_T3_StarterShelter_C_ExecuteUbergraph_PackagedItem_T3_StarterShelter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
