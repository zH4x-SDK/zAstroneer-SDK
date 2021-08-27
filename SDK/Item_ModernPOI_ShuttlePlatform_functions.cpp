
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

// Function Item_ModernPOI_ShuttlePlatform.Item_ModernPOI_ShuttlePlatform_C.UpdateCableMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ConsumptionRatio               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GenerationRatio                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_ModernPOI_ShuttlePlatform_C::UpdateCableMaterial(float ConsumptionRatio, float GenerationRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_ModernPOI_ShuttlePlatform.Item_ModernPOI_ShuttlePlatform_C.UpdateCableMaterial");

	AItem_ModernPOI_ShuttlePlatform_C_UpdateCableMaterial_Params params;
	params.ConsumptionRatio = ConsumptionRatio;
	params.GenerationRatio = GenerationRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_ModernPOI_ShuttlePlatform.Item_ModernPOI_ShuttlePlatform_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AItem_ModernPOI_ShuttlePlatform_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_ModernPOI_ShuttlePlatform.Item_ModernPOI_ShuttlePlatform_C.UserConstructionScript");

	AItem_ModernPOI_ShuttlePlatform_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_ModernPOI_ShuttlePlatform.Item_ModernPOI_ShuttlePlatform_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FStreamingPowerNodeVisualizationData VisualizationData              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AItem_ModernPOI_ShuttlePlatform_C::BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_ModernPOI_ShuttlePlatform.Item_ModernPOI_ShuttlePlatform_C.BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature");

	AItem_ModernPOI_ShuttlePlatform_C_BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature_Params params;
	params.VisualizationData = VisualizationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_ModernPOI_ShuttlePlatform.Item_ModernPOI_ShuttlePlatform_C.ExecuteUbergraph_Item_ModernPOI_ShuttlePlatform
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_ModernPOI_ShuttlePlatform_C::ExecuteUbergraph_Item_ModernPOI_ShuttlePlatform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_ModernPOI_ShuttlePlatform.Item_ModernPOI_ShuttlePlatform_C.ExecuteUbergraph_Item_ModernPOI_ShuttlePlatform");

	AItem_ModernPOI_ShuttlePlatform_C_ExecuteUbergraph_Item_ModernPOI_ShuttlePlatform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
