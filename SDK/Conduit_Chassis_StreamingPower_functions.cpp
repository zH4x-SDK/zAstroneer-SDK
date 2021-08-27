
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

// Function Conduit_Chassis_StreamingPower.Conduit_Chassis_StreamingPower_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AConduit_Chassis_StreamingPower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Chassis_StreamingPower.Conduit_Chassis_StreamingPower_C.UserConstructionScript");

	AConduit_Chassis_StreamingPower_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Conduit_Chassis_StreamingPower.Conduit_Chassis_StreamingPower_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FStreamingPowerNodeVisualizationData VisualizationData              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AConduit_Chassis_StreamingPower_C::BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Chassis_StreamingPower.Conduit_Chassis_StreamingPower_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature");

	AConduit_Chassis_StreamingPower_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params params;
	params.VisualizationData = VisualizationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Conduit_Chassis_StreamingPower.Conduit_Chassis_StreamingPower_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConduit_Chassis_StreamingPower_C::BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Chassis_StreamingPower.Conduit_Chassis_StreamingPower_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature");

	AConduit_Chassis_StreamingPower_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Conduit_Chassis_StreamingPower.Conduit_Chassis_StreamingPower_C.ExecuteUbergraph_Conduit_Chassis_StreamingPower
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConduit_Chassis_StreamingPower_C::ExecuteUbergraph_Conduit_Chassis_StreamingPower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Chassis_StreamingPower.Conduit_Chassis_StreamingPower_C.ExecuteUbergraph_Conduit_Chassis_StreamingPower");

	AConduit_Chassis_StreamingPower_C_ExecuteUbergraph_Conduit_Chassis_StreamingPower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
