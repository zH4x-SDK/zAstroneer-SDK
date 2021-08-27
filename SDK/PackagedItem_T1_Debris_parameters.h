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

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.HandleOnIndicatorVisibleChanged
struct APackagedItem_T1_Debris_C_HandleOnIndicatorVisibleChanged_Params
{
	bool                                               IndicatorVisible;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.HandleOnAssignPackageMaterial
struct APackagedItem_T1_Debris_C_HandleOnAssignPackageMaterial_Params
{
	class UMaterialInterface*                          PackageMaterial;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.HandleOnDeployReadyChanged
struct APackagedItem_T1_Debris_C_HandleOnDeployReadyChanged_Params
{
	bool                                               DeployReady;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.GetBodySlotLegacy
struct APackagedItem_T1_Debris_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.UserConstructionScript
struct APackagedItem_T1_Debris_C_UserConstructionScript_Params
{
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct APackagedItem_T1_Debris_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.DroppedInWorld
struct APackagedItem_T1_Debris_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.PickedUpFromWorld
struct APackagedItem_T1_Debris_C_PickedUpFromWorld_Params
{
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.ReceiveHit
struct APackagedItem_T1_Debris_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.Authority_Unpack
struct APackagedItem_T1_Debris_C_Authority_Unpack_Params
{
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.DoUnpackAudioRPC
struct APackagedItem_T1_Debris_C_DoUnpackAudioRPC_Params
{
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_PackageIndicatorEvent__DelegateSignature
struct APackagedItem_T1_Debris_C_BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_PackageIndicatorEvent__DelegateSignature_Params
{
	bool                                               IndicatorVisible;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_1_PackageReadyEvent__DelegateSignature
struct APackagedItem_T1_Debris_C_BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_1_PackageReadyEvent__DelegateSignature_Params
{
	bool                                               DeployReady;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_2_AssignMaterialEvent__DelegateSignature
struct APackagedItem_T1_Debris_C_BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_2_AssignMaterialEvent__DelegateSignature_Params
{
	class UMaterialInterface*                          PackageMaterial;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackagedItem_T1_Debris.PackagedItem_T1_Debris_C.ExecuteUbergraph_PackagedItem_T1_Debris
struct APackagedItem_T1_Debris_C_ExecuteUbergraph_PackagedItem_T1_Debris_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
