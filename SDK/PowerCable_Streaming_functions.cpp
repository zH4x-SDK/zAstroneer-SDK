
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function PowerCable_Streaming.PowerCable_Streaming_C.UpdateDirectionalCableMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FlowSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerCable_Streaming_C::UpdateDirectionalCableMaterial(float FlowSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCable_Streaming.PowerCable_Streaming_C.UpdateDirectionalCableMaterial");

	APowerCable_Streaming_C_UpdateDirectionalCableMaterial_Params params;
	params.FlowSpeed = FlowSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCable_Streaming.PowerCable_Streaming_C.UpdateMergedCableMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ConsumptionRatio               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GenerationRatio                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerCable_Streaming_C::UpdateMergedCableMaterial(float ConsumptionRatio, float GenerationRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCable_Streaming.PowerCable_Streaming_C.UpdateMergedCableMaterial");

	APowerCable_Streaming_C_UpdateMergedCableMaterial_Params params;
	params.ConsumptionRatio = ConsumptionRatio;
	params.GenerationRatio = GenerationRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCable_Streaming.PowerCable_Streaming_C.SetupDirectionalConnectionCableVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void APowerCable_Streaming_C::SetupDirectionalConnectionCableVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCable_Streaming.PowerCable_Streaming_C.SetupDirectionalConnectionCableVisuals");

	APowerCable_Streaming_C_SetupDirectionalConnectionCableVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCable_Streaming.PowerCable_Streaming_C.SetupMergedConnectionCableVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void APowerCable_Streaming_C::SetupMergedConnectionCableVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCable_Streaming.PowerCable_Streaming_C.SetupMergedConnectionCableVisuals");

	APowerCable_Streaming_C_SetupMergedConnectionCableVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCable_Streaming.PowerCable_Streaming_C.RestoreOriginalCableVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void APowerCable_Streaming_C::RestoreOriginalCableVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCable_Streaming.PowerCable_Streaming_C.RestoreOriginalCableVisuals");

	APowerCable_Streaming_C_RestoreOriginalCableVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCable_Streaming.PowerCable_Streaming_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerCable_Streaming_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCable_Streaming.PowerCable_Streaming_C.UserConstructionScript");

	APowerCable_Streaming_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCable_Streaming.PowerCable_Streaming_C.BndEvt__ActorStreamingPowerCable_K2Node_ComponentBoundEvent_0_UpdateStreamingPowerCableVisualizationData__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FStreamingPowerCableVisualizationData PowerCableVisualizationData    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APowerCable_Streaming_C::BndEvt__ActorStreamingPowerCable_K2Node_ComponentBoundEvent_0_UpdateStreamingPowerCableVisualizationData__DelegateSignature(const struct FStreamingPowerCableVisualizationData& PowerCableVisualizationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCable_Streaming.PowerCable_Streaming_C.BndEvt__ActorStreamingPowerCable_K2Node_ComponentBoundEvent_0_UpdateStreamingPowerCableVisualizationData__DelegateSignature");

	APowerCable_Streaming_C_BndEvt__ActorStreamingPowerCable_K2Node_ComponentBoundEvent_0_UpdateStreamingPowerCableVisualizationData__DelegateSignature_Params params;
	params.PowerCableVisualizationData = PowerCableVisualizationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCable_Streaming.PowerCable_Streaming_C.OnIsCarryingOxygenChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsCarryingOxygen              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerCable_Streaming_C::OnIsCarryingOxygenChanged(bool bIsCarryingOxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCable_Streaming.PowerCable_Streaming_C.OnIsCarryingOxygenChanged");

	APowerCable_Streaming_C_OnIsCarryingOxygenChanged_Params params;
	params.bIsCarryingOxygen = bIsCarryingOxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCable_Streaming.PowerCable_Streaming_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APowerCable_Streaming_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCable_Streaming.PowerCable_Streaming_C.ReceiveBeginPlay");

	APowerCable_Streaming_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCable_Streaming.PowerCable_Streaming_C.HandleApproximateCableLengthChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ApproximateSplineMeshLength    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerCable_Streaming_C::HandleApproximateCableLengthChanged(float ApproximateSplineMeshLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCable_Streaming.PowerCable_Streaming_C.HandleApproximateCableLengthChanged");

	APowerCable_Streaming_C_HandleApproximateCableLengthChanged_Params params;
	params.ApproximateSplineMeshLength = ApproximateSplineMeshLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCable_Streaming.PowerCable_Streaming_C.OnConnected
// (Event, Public, BlueprintEvent)

void APowerCable_Streaming_C::OnConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCable_Streaming.PowerCable_Streaming_C.OnConnected");

	APowerCable_Streaming_C_OnConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCable_Streaming.PowerCable_Streaming_C.OnDisconnected
// (Event, Public, BlueprintEvent)

void APowerCable_Streaming_C::OnDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCable_Streaming.PowerCable_Streaming_C.OnDisconnected");

	APowerCable_Streaming_C_OnDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerCable_Streaming.PowerCable_Streaming_C.ExecuteUbergraph_PowerCable_Streaming
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerCable_Streaming_C::ExecuteUbergraph_PowerCable_Streaming(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerCable_Streaming.PowerCable_Streaming_C.ExecuteUbergraph_PowerCable_Streaming");

	APowerCable_Streaming_C_ExecuteUbergraph_PowerCable_Streaming_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
