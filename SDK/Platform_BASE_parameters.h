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

// Function Platform_BASE.Platform_BASE_C.GetLinearTetherAttachPoints
struct APlatform_BASE_C_GetLinearTetherAttachPoints_Params
{
	TArray<struct FLinearAttachPoint>                  Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Platform_BASE.Platform_BASE_C.GetTetherAttachPoints
struct APlatform_BASE_C_GetTetherAttachPoints_Params
{
	TArray<struct FCircularAttachPoint>                AttachPoints;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Platform_BASE.Platform_BASE_C.OnRep_HasOxygen
struct APlatform_BASE_C_OnRep_HasOxygen_Params
{
};

// Function Platform_BASE.Platform_BASE_C.SetupCableSlots
struct APlatform_BASE_C_SetupCableSlots_Params
{
};

// Function Platform_BASE.Platform_BASE_C.SetupSecondarySlots
struct APlatform_BASE_C_SetupSecondarySlots_Params
{
};

// Function Platform_BASE.Platform_BASE_C.SetupPrimarySlots
struct APlatform_BASE_C_SetupPrimarySlots_Params
{
};

// Function Platform_BASE.Platform_BASE_C.DisableTetherConnections
struct APlatform_BASE_C_DisableTetherConnections_Params
{
};

// Function Platform_BASE.Platform_BASE_C.AttemptToMakeTetherConnections
struct APlatform_BASE_C_AttemptToMakeTetherConnections_Params
{
};

// Function Platform_BASE.Platform_BASE_C.GetBodySlotLegacy
struct APlatform_BASE_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Platform_BASE.Platform_BASE_C.UserConstructionScript
struct APlatform_BASE_C_UserConstructionScript_Params
{
};

// Function Platform_BASE.Platform_BASE_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature
struct APlatform_BASE_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Platform_BASE.Platform_BASE_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct APlatform_BASE_C_BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Platform_BASE.Platform_BASE_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature
struct APlatform_BASE_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Platform_BASE.Platform_BASE_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
struct APlatform_BASE_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params
{
	struct FStreamingPowerNodeVisualizationData        VisualizationData;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Platform_BASE.Platform_BASE_C.ReceiveHit
struct APlatform_BASE_C_ReceiveHit_Params
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

// Function Platform_BASE.Platform_BASE_C.DroppedInWorld
struct APlatform_BASE_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Platform_BASE.Platform_BASE_C.PickedUpFromWorld
struct APlatform_BASE_C_PickedUpFromWorld_Params
{
};

// Function Platform_BASE.Platform_BASE_C.ReceiveBeginPlay
struct APlatform_BASE_C_ReceiveBeginPlay_Params
{
};

// Function Platform_BASE.Platform_BASE_C.HandleItemUnpacked
struct APlatform_BASE_C_HandleItemUnpacked_Params
{
};

// Function Platform_BASE.Platform_BASE_C.HandleDroppedInWorld
struct APlatform_BASE_C_HandleDroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Platform_BASE.Platform_BASE_C.HandlePickedUpFromWorld
struct APlatform_BASE_C_HandlePickedUpFromWorld_Params
{
	bool                                               PhysicalMovement;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Platform_BASE.Platform_BASE_C.ExecuteUbergraph_Platform_BASE
struct APlatform_BASE_C_ExecuteUbergraph_Platform_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
