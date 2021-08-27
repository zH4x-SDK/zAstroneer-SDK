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

// Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.UserConstructionScript
struct AChassisPad_Small_StreamingPower_C_UserConstructionScript_Params
{
};

// Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.OnSpawn
struct AChassisPad_Small_StreamingPower_C_OnSpawn_Params
{
	bool                                               withTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
struct AChassisPad_Small_StreamingPower_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params
{
	struct FStreamingPowerNodeVisualizationData        VisualizationData;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_2_OxygenChangeDelegate__DelegateSignature
struct AChassisPad_Small_StreamingPower_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_2_OxygenChangeDelegate__DelegateSignature_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.ExecuteUbergraph_ChassisPad_Small_StreamingPower
struct AChassisPad_Small_StreamingPower_C_ExecuteUbergraph_ChassisPad_Small_StreamingPower_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
