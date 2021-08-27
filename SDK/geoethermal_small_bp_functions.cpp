
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

// Function geoethermal_small_bp.geoethermal_small_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_geoethermal_small_bp_AnimGraphNode_ModifyBone_C745B58B4DD7BEC1A4853FB30F9B7F43
// (BlueprintEvent)

void Ugeoethermal_small_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_geoethermal_small_bp_AnimGraphNode_ModifyBone_C745B58B4DD7BEC1A4853FB30F9B7F43()
{
	static auto fn = UObject::FindObject<UFunction>("Function geoethermal_small_bp.geoethermal_small_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_geoethermal_small_bp_AnimGraphNode_ModifyBone_C745B58B4DD7BEC1A4853FB30F9B7F43");

	Ugeoethermal_small_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_geoethermal_small_bp_AnimGraphNode_ModifyBone_C745B58B4DD7BEC1A4853FB30F9B7F43_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function geoethermal_small_bp.geoethermal_small_bp_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ugeoethermal_small_bp_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function geoethermal_small_bp.geoethermal_small_bp_C.BlueprintUpdateAnimation");

	Ugeoethermal_small_bp_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function geoethermal_small_bp.geoethermal_small_bp_C.ExecuteUbergraph_geoethermal_small_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ugeoethermal_small_bp_C::ExecuteUbergraph_geoethermal_small_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function geoethermal_small_bp.geoethermal_small_bp_C.ExecuteUbergraph_geoethermal_small_bp");

	Ugeoethermal_small_bp_C_ExecuteUbergraph_geoethermal_small_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
