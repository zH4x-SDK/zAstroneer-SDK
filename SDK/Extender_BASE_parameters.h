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

// Function Extender_BASE.Extender_BASE_C.GetBodySlotLegacy
struct AExtender_BASE_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Extender_BASE.Extender_BASE_C.UserConstructionScript
struct AExtender_BASE_C_UserConstructionScript_Params
{
};

// Function Extender_BASE.Extender_BASE_C.BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AExtender_BASE_C_BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Extender_BASE.Extender_BASE_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
struct AExtender_BASE_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params
{
	struct FStreamingPowerNodeVisualizationData        VisualizationData;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Extender_BASE.Extender_BASE_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature
struct AExtender_BASE_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Extender_BASE.Extender_BASE_C.ReceiveBeginPlay
struct AExtender_BASE_C_ReceiveBeginPlay_Params
{
};

// Function Extender_BASE.Extender_BASE_C.DroppedInWorld
struct AExtender_BASE_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Extender_BASE.Extender_BASE_C.PickedUpFromWorld
struct AExtender_BASE_C_PickedUpFromWorld_Params
{
};

// Function Extender_BASE.Extender_BASE_C.ReceiveHit
struct AExtender_BASE_C_ReceiveHit_Params
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

// Function Extender_BASE.Extender_BASE_C.ExecuteUbergraph_Extender_BASE
struct AExtender_BASE_C_ExecuteUbergraph_Extender_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
