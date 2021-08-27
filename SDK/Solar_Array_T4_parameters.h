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

// Function Solar_Array_T4.Solar_Array_T4_C.GetBodySlotLegacy
struct ASolar_Array_T4_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solar_Array_T4.Solar_Array_T4_C.Disable Tether Connections
struct ASolar_Array_T4_C_Disable_Tether_Connections_Params
{
};

// Function Solar_Array_T4.Solar_Array_T4_C.Attempt to make Tether Connections
struct ASolar_Array_T4_C_Attempt_to_make_Tether_Connections_Params
{
};

// Function Solar_Array_T4.Solar_Array_T4_C.OnRep_HasOxygen
struct ASolar_Array_T4_C_OnRep_HasOxygen_Params
{
};

// Function Solar_Array_T4.Solar_Array_T4_C.Setup Cable Slots
struct ASolar_Array_T4_C_Setup_Cable_Slots_Params
{
};

// Function Solar_Array_T4.Solar_Array_T4_C.UserConstructionScript
struct ASolar_Array_T4_C_UserConstructionScript_Params
{
};

// Function Solar_Array_T4.Solar_Array_T4_C.ReceiveHit
struct ASolar_Array_T4_C_ReceiveHit_Params
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

// Function Solar_Array_T4.Solar_Array_T4_C.DroppedInWorld
struct ASolar_Array_T4_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Solar_Array_T4.Solar_Array_T4_C.PickedUpFromWorld
struct ASolar_Array_T4_C_PickedUpFromWorld_Params
{
};

// Function Solar_Array_T4.Solar_Array_T4_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
struct ASolar_Array_T4_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params
{
	struct FStreamingPowerNodeVisualizationData        VisualizationData;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Solar_Array_T4.Solar_Array_T4_C.ReceiveBeginPlay
struct ASolar_Array_T4_C_ReceiveBeginPlay_Params
{
};

// Function Solar_Array_T4.Solar_Array_T4_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature
struct ASolar_Array_T4_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Solar_Array_T4.Solar_Array_T4_C.ExecuteUbergraph_Solar_Array_T4
struct ASolar_Array_T4_C_ExecuteUbergraph_Solar_Array_T4_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
