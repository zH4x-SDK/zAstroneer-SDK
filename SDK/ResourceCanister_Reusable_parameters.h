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

// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.UpdateTankVisuals_Internal
struct AResourceCanister_Reusable_C_UpdateTankVisuals_Internal_Params
{
};

// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.UserConstructionScript
struct AResourceCanister_Reusable_C_UserConstructionScript_Params
{
};

// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AResourceCanister_Reusable_C_BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct AResourceCanister_Reusable_C_BndEvt__ItemComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.PlayDrainedAudio
struct AResourceCanister_Reusable_C_PlayDrainedAudio_Params
{
};

// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.PlayFilledAudio
struct AResourceCanister_Reusable_C_PlayFilledAudio_Params
{
};

// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.UpdateTankVisuals
struct AResourceCanister_Reusable_C_UpdateTankVisuals_Params
{
};

// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.ReceiveHit
struct AResourceCanister_Reusable_C_ReceiveHit_Params
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

// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.DroppedInWorld
struct AResourceCanister_Reusable_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.PickedUpFromWorld
struct AResourceCanister_Reusable_C_PickedUpFromWorld_Params
{
};

// Function ResourceCanister_Reusable.ResourceCanister_Reusable_C.ExecuteUbergraph_ResourceCanister_Reusable
struct AResourceCanister_Reusable_C_ExecuteUbergraph_ResourceCanister_Reusable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
