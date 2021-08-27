
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

// Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuPopoutTextLabel_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.GetMenuFocusWidgetSize");

	UGameMenuPopoutTextLabel_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuPopoutTextLabel_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.UpdateText");

	UGameMenuPopoutTextLabel_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.UpdateColors
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuPopoutTextLabel_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.UpdateColors");

	UGameMenuPopoutTextLabel_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuPopoutTextLabel_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.LayoutWidget");

	UGameMenuPopoutTextLabel_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuPopoutTextLabel_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.SetupStylingData");

	UGameMenuPopoutTextLabel_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.ExecuteUbergraph_GameMenuPopoutTextLabel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuPopoutTextLabel_C::ExecuteUbergraph_GameMenuPopoutTextLabel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.ExecuteUbergraph_GameMenuPopoutTextLabel");

	UGameMenuPopoutTextLabel_C_ExecuteUbergraph_GameMenuPopoutTextLabel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
