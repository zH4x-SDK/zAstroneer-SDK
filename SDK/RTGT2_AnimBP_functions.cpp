
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

// Function RTGT2_AnimBP.RTGT2_AnimBP_C.ToggleOff
// (Public, BlueprintCallable, BlueprintEvent)

void URTGT2_AnimBP_C::ToggleOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTGT2_AnimBP.RTGT2_AnimBP_C.ToggleOff");

	URTGT2_AnimBP_C_ToggleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTGT2_AnimBP.RTGT2_AnimBP_C.ToggleOn
// (Public, BlueprintCallable, BlueprintEvent)

void URTGT2_AnimBP_C::ToggleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTGT2_AnimBP.RTGT2_AnimBP_C.ToggleOn");

	URTGT2_AnimBP_C_ToggleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTGT2_AnimBP.RTGT2_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RTGT2_AnimBP_AnimGraphNode_TransitionResult_14C6DDD9440500845BD7988E01DD6F9D
// (BlueprintEvent)

void URTGT2_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RTGT2_AnimBP_AnimGraphNode_TransitionResult_14C6DDD9440500845BD7988E01DD6F9D()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTGT2_AnimBP.RTGT2_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RTGT2_AnimBP_AnimGraphNode_TransitionResult_14C6DDD9440500845BD7988E01DD6F9D");

	URTGT2_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RTGT2_AnimBP_AnimGraphNode_TransitionResult_14C6DDD9440500845BD7988E01DD6F9D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTGT2_AnimBP.RTGT2_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RTGT2_AnimBP_AnimGraphNode_TransitionResult_1AD2608241C87FAA8F1ABAABF587C9FE
// (BlueprintEvent)

void URTGT2_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RTGT2_AnimBP_AnimGraphNode_TransitionResult_1AD2608241C87FAA8F1ABAABF587C9FE()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTGT2_AnimBP.RTGT2_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RTGT2_AnimBP_AnimGraphNode_TransitionResult_1AD2608241C87FAA8F1ABAABF587C9FE");

	URTGT2_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RTGT2_AnimBP_AnimGraphNode_TransitionResult_1AD2608241C87FAA8F1ABAABF587C9FE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTGT2_AnimBP.RTGT2_AnimBP_C.ExecuteUbergraph_RTGT2_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URTGT2_AnimBP_C::ExecuteUbergraph_RTGT2_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTGT2_AnimBP.RTGT2_AnimBP_C.ExecuteUbergraph_RTGT2_AnimBP");

	URTGT2_AnimBP_C_ExecuteUbergraph_RTGT2_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
