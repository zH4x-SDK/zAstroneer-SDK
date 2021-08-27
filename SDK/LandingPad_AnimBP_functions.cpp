
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

// Function LandingPad_AnimBP.LandingPad_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_LandingPad_AnimBP_AnimGraphNode_TransitionResult_604EC36143CDB2651EFC07A95335CD49
// (BlueprintEvent)

void ULandingPad_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_LandingPad_AnimBP_AnimGraphNode_TransitionResult_604EC36143CDB2651EFC07A95335CD49()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandingPad_AnimBP.LandingPad_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_LandingPad_AnimBP_AnimGraphNode_TransitionResult_604EC36143CDB2651EFC07A95335CD49");

	ULandingPad_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_LandingPad_AnimBP_AnimGraphNode_TransitionResult_604EC36143CDB2651EFC07A95335CD49_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandingPad_AnimBP.LandingPad_AnimBP_C.ExecuteUbergraph_LandingPad_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULandingPad_AnimBP_C::ExecuteUbergraph_LandingPad_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandingPad_AnimBP.LandingPad_AnimBP_C.ExecuteUbergraph_LandingPad_AnimBP");

	ULandingPad_AnimBP_C_ExecuteUbergraph_LandingPad_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
