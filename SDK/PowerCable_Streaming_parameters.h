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

// Function PowerCable_Streaming.PowerCable_Streaming_C.UpdateDirectionalCableMaterial
struct APowerCable_Streaming_C_UpdateDirectionalCableMaterial_Params
{
	float                                              FlowSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerCable_Streaming.PowerCable_Streaming_C.UpdateMergedCableMaterial
struct APowerCable_Streaming_C_UpdateMergedCableMaterial_Params
{
	float                                              ConsumptionRatio;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenerationRatio;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerCable_Streaming.PowerCable_Streaming_C.SetupDirectionalConnectionCableVisuals
struct APowerCable_Streaming_C_SetupDirectionalConnectionCableVisuals_Params
{
};

// Function PowerCable_Streaming.PowerCable_Streaming_C.SetupMergedConnectionCableVisuals
struct APowerCable_Streaming_C_SetupMergedConnectionCableVisuals_Params
{
};

// Function PowerCable_Streaming.PowerCable_Streaming_C.RestoreOriginalCableVisuals
struct APowerCable_Streaming_C_RestoreOriginalCableVisuals_Params
{
};

// Function PowerCable_Streaming.PowerCable_Streaming_C.UserConstructionScript
struct APowerCable_Streaming_C_UserConstructionScript_Params
{
};

// Function PowerCable_Streaming.PowerCable_Streaming_C.BndEvt__ActorStreamingPowerCable_K2Node_ComponentBoundEvent_0_UpdateStreamingPowerCableVisualizationData__DelegateSignature
struct APowerCable_Streaming_C_BndEvt__ActorStreamingPowerCable_K2Node_ComponentBoundEvent_0_UpdateStreamingPowerCableVisualizationData__DelegateSignature_Params
{
	struct FStreamingPowerCableVisualizationData       PowerCableVisualizationData;                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PowerCable_Streaming.PowerCable_Streaming_C.OnIsCarryingOxygenChanged
struct APowerCable_Streaming_C_OnIsCarryingOxygenChanged_Params
{
	bool                                               bIsCarryingOxygen;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerCable_Streaming.PowerCable_Streaming_C.ReceiveBeginPlay
struct APowerCable_Streaming_C_ReceiveBeginPlay_Params
{
};

// Function PowerCable_Streaming.PowerCable_Streaming_C.HandleApproximateCableLengthChanged
struct APowerCable_Streaming_C_HandleApproximateCableLengthChanged_Params
{
	float                                              ApproximateSplineMeshLength;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerCable_Streaming.PowerCable_Streaming_C.OnConnected
struct APowerCable_Streaming_C_OnConnected_Params
{
};

// Function PowerCable_Streaming.PowerCable_Streaming_C.OnDisconnected
struct APowerCable_Streaming_C_OnDisconnected_Params
{
};

// Function PowerCable_Streaming.PowerCable_Streaming_C.ExecuteUbergraph_PowerCable_Streaming
struct APowerCable_Streaming_C_ExecuteUbergraph_PowerCable_Streaming_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
