
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

// Function GameMenuTextLabelCredits.GameMenuTextLabelCredits_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuTextLabelCredits_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTextLabelCredits.GameMenuTextLabelCredits_C.GetMenuFocusWidgetSize");

	UGameMenuTextLabelCredits_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuTextLabelCredits.GameMenuTextLabelCredits_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuTextLabelCredits_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTextLabelCredits.GameMenuTextLabelCredits_C.UpdateText");

	UGameMenuTextLabelCredits_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTextLabelCredits.GameMenuTextLabelCredits_C.UpdateColors
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuTextLabelCredits_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTextLabelCredits.GameMenuTextLabelCredits_C.UpdateColors");

	UGameMenuTextLabelCredits_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTextLabelCredits.GameMenuTextLabelCredits_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuTextLabelCredits_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTextLabelCredits.GameMenuTextLabelCredits_C.LayoutWidget");

	UGameMenuTextLabelCredits_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuTextLabelCredits.GameMenuTextLabelCredits_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuTextLabelCredits_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTextLabelCredits.GameMenuTextLabelCredits_C.SetupStylingData");

	UGameMenuTextLabelCredits_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTextLabelCredits.GameMenuTextLabelCredits_C.ExecuteUbergraph_GameMenuTextLabelCredits
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTextLabelCredits_C::ExecuteUbergraph_GameMenuTextLabelCredits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTextLabelCredits.GameMenuTextLabelCredits_C.ExecuteUbergraph_GameMenuTextLabelCredits");

	UGameMenuTextLabelCredits_C_ExecuteUbergraph_GameMenuTextLabelCredits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
