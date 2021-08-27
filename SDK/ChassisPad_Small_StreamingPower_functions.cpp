
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

// Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AChassisPad_Small_StreamingPower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.UserConstructionScript");

	AChassisPad_Small_StreamingPower_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.OnSpawn
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           withTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AChassisPad_Small_StreamingPower_C::OnSpawn(bool withTool, class UPrimitiveComponent* Component, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.OnSpawn");

	AChassisPad_Small_StreamingPower_C_OnSpawn_Params params;
	params.withTool = withTool;
	params.Component = Component;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FStreamingPowerNodeVisualizationData VisualizationData              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AChassisPad_Small_StreamingPower_C::BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature");

	AChassisPad_Small_StreamingPower_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params params;
	params.VisualizationData = VisualizationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_2_OxygenChangeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChassisPad_Small_StreamingPower_C::BndEvt__TetherAttach_K2Node_ComponentBoundEvent_2_OxygenChangeDelegate__DelegateSignature(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_2_OxygenChangeDelegate__DelegateSignature");

	AChassisPad_Small_StreamingPower_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_2_OxygenChangeDelegate__DelegateSignature_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.ExecuteUbergraph_ChassisPad_Small_StreamingPower
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChassisPad_Small_StreamingPower_C::ExecuteUbergraph_ChassisPad_Small_StreamingPower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChassisPad_Small_StreamingPower.ChassisPad_Small_StreamingPower_C.ExecuteUbergraph_ChassisPad_Small_StreamingPower");

	AChassisPad_Small_StreamingPower_C_ExecuteUbergraph_ChassisPad_Small_StreamingPower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
