
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

// Function WreckageArray_01.WreckageArray_01_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWreckageArray_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WreckageArray_01.WreckageArray_01_C.UserConstructionScript");

	AWreckageArray_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WreckageArray_01.WreckageArray_01_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FStreamingPowerNodeVisualizationData VisualizationData              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWreckageArray_01_C::BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WreckageArray_01.WreckageArray_01_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature");

	AWreckageArray_01_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params params;
	params.VisualizationData = VisualizationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WreckageArray_01.WreckageArray_01_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AWreckageArray_01_C::BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WreckageArray_01.WreckageArray_01_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AWreckageArray_01_C_BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WreckageArray_01.WreckageArray_01_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void AWreckageArray_01_C::BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WreckageArray_01.WreckageArray_01_C.BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	AWreckageArray_01_C_BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WreckageArray_01.WreckageArray_01_C.ExecuteUbergraph_WreckageArray_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWreckageArray_01_C::ExecuteUbergraph_WreckageArray_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WreckageArray_01.WreckageArray_01_C.ExecuteUbergraph_WreckageArray_01");

	AWreckageArray_01_C_ExecuteUbergraph_WreckageArray_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
