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

// Function Breadboard_BASE.Breadboard_BASE_C.OnRep_HasOxygen
struct ABreadboard_BASE_C_OnRep_HasOxygen_Params
{
};

// Function Breadboard_BASE.Breadboard_BASE_C.SetupCableSlots
struct ABreadboard_BASE_C_SetupCableSlots_Params
{
};

// Function Breadboard_BASE.Breadboard_BASE_C.SetupSecondarySlots
struct ABreadboard_BASE_C_SetupSecondarySlots_Params
{
};

// Function Breadboard_BASE.Breadboard_BASE_C.SetupPrimarySlots
struct ABreadboard_BASE_C_SetupPrimarySlots_Params
{
};

// Function Breadboard_BASE.Breadboard_BASE_C.DisableTetherConnections
struct ABreadboard_BASE_C_DisableTetherConnections_Params
{
};

// Function Breadboard_BASE.Breadboard_BASE_C.AttemptToMakeTetherConnections
struct ABreadboard_BASE_C_AttemptToMakeTetherConnections_Params
{
};

// Function Breadboard_BASE.Breadboard_BASE_C.GetBodySlotLegacy
struct ABreadboard_BASE_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Breadboard_BASE.Breadboard_BASE_C.UserConstructionScript
struct ABreadboard_BASE_C_UserConstructionScript_Params
{
};

// Function Breadboard_BASE.Breadboard_BASE_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature
struct ABreadboard_BASE_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Breadboard_BASE.Breadboard_BASE_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct ABreadboard_BASE_C_BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Breadboard_BASE.Breadboard_BASE_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature
struct ABreadboard_BASE_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Breadboard_BASE.Breadboard_BASE_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
struct ABreadboard_BASE_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params
{
	struct FStreamingPowerNodeVisualizationData        VisualizationData;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Breadboard_BASE.Breadboard_BASE_C.ReceiveHit
struct ABreadboard_BASE_C_ReceiveHit_Params
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

// Function Breadboard_BASE.Breadboard_BASE_C.DroppedInWorld
struct ABreadboard_BASE_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Breadboard_BASE.Breadboard_BASE_C.PickedUpFromWorld
struct ABreadboard_BASE_C_PickedUpFromWorld_Params
{
};

// Function Breadboard_BASE.Breadboard_BASE_C.ReceiveBeginPlay
struct ABreadboard_BASE_C_ReceiveBeginPlay_Params
{
};

// Function Breadboard_BASE.Breadboard_BASE_C.HandleItemUnpacked
struct ABreadboard_BASE_C_HandleItemUnpacked_Params
{
};

// Function Breadboard_BASE.Breadboard_BASE_C.HandleDroppedInWorld
struct ABreadboard_BASE_C_HandleDroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Breadboard_BASE.Breadboard_BASE_C.HandlePickedUpFromWorld
struct ABreadboard_BASE_C_HandlePickedUpFromWorld_Params
{
	bool                                               PhysicalMovement;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Breadboard_BASE.Breadboard_BASE_C.ExecuteUbergraph_Breadboard_BASE
struct ABreadboard_BASE_C_ExecuteUbergraph_Breadboard_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
