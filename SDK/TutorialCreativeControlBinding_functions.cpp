
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

// Function TutorialCreativeControlBinding.TutorialCreativeControlBinding_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTutorialCreativeControlBinding_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialCreativeControlBinding.TutorialCreativeControlBinding_C.LayoutWidget");

	UTutorialCreativeControlBinding_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutorialCreativeControlBinding.TutorialCreativeControlBinding_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTutorialCreativeControlBinding_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialCreativeControlBinding.TutorialCreativeControlBinding_C.SetupStylingData");

	UTutorialCreativeControlBinding_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialCreativeControlBinding.TutorialCreativeControlBinding_C.ExecuteUbergraph_TutorialCreativeControlBinding
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorialCreativeControlBinding_C::ExecuteUbergraph_TutorialCreativeControlBinding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialCreativeControlBinding.TutorialCreativeControlBinding_C.ExecuteUbergraph_TutorialCreativeControlBinding");

	UTutorialCreativeControlBinding_C_ExecuteUbergraph_TutorialCreativeControlBinding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
