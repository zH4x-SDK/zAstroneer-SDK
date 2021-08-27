
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

// Function TutorialInputBox.TutorialInputBox_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTutorialInputBox_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialInputBox.TutorialInputBox_C.LayoutWidget");

	UTutorialInputBox_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutorialInputBox.TutorialInputBox_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTutorialInputBox_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialInputBox.TutorialInputBox_C.SetupStylingData");

	UTutorialInputBox_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialInputBox.TutorialInputBox_C.ExecuteUbergraph_TutorialInputBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorialInputBox_C::ExecuteUbergraph_TutorialInputBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialInputBox.TutorialInputBox_C.ExecuteUbergraph_TutorialInputBox");

	UTutorialInputBox_C_ExecuteUbergraph_TutorialInputBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
