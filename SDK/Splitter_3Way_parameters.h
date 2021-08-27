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

// Function Splitter_3Way.Splitter_3Way_C.GetControlPanel
struct ASplitter_3Way_C_GetControlPanel_Params
{
	class ASplitterControlPanel_C*                     ControlPanel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Splitter_3Way.Splitter_3Way_C.UpdateSplitterLights
struct ASplitter_3Way_C_UpdateSplitterLights_Params
{
	struct FStreamingPowerSplitterReplicationData      SplitterRepData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Splitter_3Way.Splitter_3Way_C.GetBodySlotLegacy
struct ASplitter_3Way_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Splitter_3Way.Splitter_3Way_C.UserConstructionScript
struct ASplitter_3Way_C_UserConstructionScript_Params
{
};

// Function Splitter_3Way.Splitter_3Way_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
struct ASplitter_3Way_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params
{
	struct FStreamingPowerNodeVisualizationData        VisualizationData;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Splitter_3Way.Splitter_3Way_C.ReceiveHit
struct ASplitter_3Way_C_ReceiveHit_Params
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

// Function Splitter_3Way.Splitter_3Way_C.PickedUpFromWorld
struct ASplitter_3Way_C_PickedUpFromWorld_Params
{
};

// Function Splitter_3Way.Splitter_3Way_C.DroppedInWorld
struct ASplitter_3Way_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Splitter_3Way.Splitter_3Way_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature
struct ASplitter_3Way_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Splitter_3Way.Splitter_3Way_C.ReceiveBeginPlay
struct ASplitter_3Way_C_ReceiveBeginPlay_Params
{
};

// Function Splitter_3Way.Splitter_3Way_C.OnControlPanelCrackedChanged
struct ASplitter_3Way_C_OnControlPanelCrackedChanged_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCracked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Splitter_3Way.Splitter_3Way_C.HandleSplitterVisualizationUpdate
struct ASplitter_3Way_C_HandleSplitterVisualizationUpdate_Params
{
};

// Function Splitter_3Way.Splitter_3Way_C.ExecuteUbergraph_Splitter_3Way
struct ASplitter_3Way_C_ExecuteUbergraph_Splitter_3Way_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
