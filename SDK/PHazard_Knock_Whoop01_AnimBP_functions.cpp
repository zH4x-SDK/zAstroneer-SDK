
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

// Function PHazard_Knock_Whoop01_AnimBP.PHazard_Knock_Whoop01_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PHazard_Knock_Whoop01_AnimBP_AnimGraphNode_TwoWayBlend_F2F199E344E15BA1963A0DAC81DD12EC
// (BlueprintEvent)

void UPHazard_Knock_Whoop01_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PHazard_Knock_Whoop01_AnimBP_AnimGraphNode_TwoWayBlend_F2F199E344E15BA1963A0DAC81DD12EC()
{
	static auto fn = UObject::FindObject<UFunction>("Function PHazard_Knock_Whoop01_AnimBP.PHazard_Knock_Whoop01_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PHazard_Knock_Whoop01_AnimBP_AnimGraphNode_TwoWayBlend_F2F199E344E15BA1963A0DAC81DD12EC");

	UPHazard_Knock_Whoop01_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PHazard_Knock_Whoop01_AnimBP_AnimGraphNode_TwoWayBlend_F2F199E344E15BA1963A0DAC81DD12EC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PHazard_Knock_Whoop01_AnimBP.PHazard_Knock_Whoop01_AnimBP_C.ExecuteUbergraph_PHazard_Knock_Whoop01_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPHazard_Knock_Whoop01_AnimBP_C::ExecuteUbergraph_PHazard_Knock_Whoop01_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PHazard_Knock_Whoop01_AnimBP.PHazard_Knock_Whoop01_AnimBP_C.ExecuteUbergraph_PHazard_Knock_Whoop01_AnimBP");

	UPHazard_Knock_Whoop01_AnimBP_C_ExecuteUbergraph_PHazard_Knock_Whoop01_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
