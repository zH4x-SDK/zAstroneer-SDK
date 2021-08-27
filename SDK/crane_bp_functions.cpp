
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

// Function crane_bp.crane_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_bp_AnimGraphNode_Fabrik_6EF18F9545DEBC679E0BBBB6DF5FC14C
// (BlueprintEvent)

void Ucrane_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_crane_bp_AnimGraphNode_Fabrik_6EF18F9545DEBC679E0BBBB6DF5FC14C()
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_bp.crane_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_bp_AnimGraphNode_Fabrik_6EF18F9545DEBC679E0BBBB6DF5FC14C");

	Ucrane_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_bp_AnimGraphNode_Fabrik_6EF18F9545DEBC679E0BBBB6DF5FC14C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function crane_bp.crane_bp_C.ExecuteUbergraph_crane_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucrane_bp_C::ExecuteUbergraph_crane_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_bp.crane_bp_C.ExecuteUbergraph_crane_bp");

	Ucrane_bp_C_ExecuteUbergraph_crane_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
