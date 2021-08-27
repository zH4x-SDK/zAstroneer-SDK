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

// Function Conduit_Chassis_StreamingPower.Conduit_Chassis_StreamingPower_C.UserConstructionScript
struct AConduit_Chassis_StreamingPower_C_UserConstructionScript_Params
{
};

// Function Conduit_Chassis_StreamingPower.Conduit_Chassis_StreamingPower_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
struct AConduit_Chassis_StreamingPower_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params
{
	struct FStreamingPowerNodeVisualizationData        VisualizationData;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Conduit_Chassis_StreamingPower.Conduit_Chassis_StreamingPower_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature
struct AConduit_Chassis_StreamingPower_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Conduit_Chassis_StreamingPower.Conduit_Chassis_StreamingPower_C.ExecuteUbergraph_Conduit_Chassis_StreamingPower
struct AConduit_Chassis_StreamingPower_C_ExecuteUbergraph_Conduit_Chassis_StreamingPower_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
