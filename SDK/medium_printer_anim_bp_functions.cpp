
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

// Function medium_printer_anim_bp.medium_printer_anim_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_medium_printer_anim_bp_AnimGraphNode_ModifyBone_6C94F5134EAB5430DFBC74B40C71FC83
// (BlueprintEvent)

void Umedium_printer_anim_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_medium_printer_anim_bp_AnimGraphNode_ModifyBone_6C94F5134EAB5430DFBC74B40C71FC83()
{
	static auto fn = UObject::FindObject<UFunction>("Function medium_printer_anim_bp.medium_printer_anim_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_medium_printer_anim_bp_AnimGraphNode_ModifyBone_6C94F5134EAB5430DFBC74B40C71FC83");

	Umedium_printer_anim_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_medium_printer_anim_bp_AnimGraphNode_ModifyBone_6C94F5134EAB5430DFBC74B40C71FC83_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function medium_printer_anim_bp.medium_printer_anim_bp_C.ExecuteUbergraph_medium_printer_anim_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umedium_printer_anim_bp_C::ExecuteUbergraph_medium_printer_anim_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function medium_printer_anim_bp.medium_printer_anim_bp_C.ExecuteUbergraph_medium_printer_anim_bp");

	Umedium_printer_anim_bp_C_ExecuteUbergraph_medium_printer_anim_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
