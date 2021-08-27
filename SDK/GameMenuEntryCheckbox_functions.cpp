
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

// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetIsChecked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryCheckbox_C::SetIsChecked(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetIsChecked");

	UGameMenuEntryCheckbox_C_SetIsChecked_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.ToggleChecked
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryCheckbox_C::ToggleChecked(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.ToggleChecked");

	UGameMenuEntryCheckbox_C_ToggleChecked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChecked != nullptr)
		*IsChecked = params.IsChecked;
}


// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetBadgeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                BadgeImage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryCheckbox_C::SetBadgeImage(class UTexture* BadgeImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetBadgeImage");

	UGameMenuEntryCheckbox_C_SetBadgeImage_Params params;
	params.BadgeImage = BadgeImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetBadgeActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryCheckbox_C::SetBadgeActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetBadgeActive");

	UGameMenuEntryCheckbox_C_SetBadgeActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetLeftText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   LeftText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuEntryCheckbox_C::SetLeftText(const struct FText& LeftText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetLeftText");

	UGameMenuEntryCheckbox_C_SetLeftText_Params params;
	params.LeftText = LeftText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.UpdateTextWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuEntryCheckbox_C::UpdateTextWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.UpdateTextWidgets");

	UGameMenuEntryCheckbox_C_UpdateTextWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuEntryCheckbox_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.GetMenuFocusWidgetSize");

	UGameMenuEntryCheckbox_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuEntryCheckbox_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.LayoutWidget");

	UGameMenuEntryCheckbox_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuEntryCheckbox_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetupStylingData");

	UGameMenuEntryCheckbox_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.UpdateColors
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuEntryCheckbox_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.UpdateColors");

	UGameMenuEntryCheckbox_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuEntryCheckbox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.Construct");

	UGameMenuEntryCheckbox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.ExecuteUbergraph_GameMenuEntryCheckbox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryCheckbox_C::ExecuteUbergraph_GameMenuEntryCheckbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.ExecuteUbergraph_GameMenuEntryCheckbox");

	UGameMenuEntryCheckbox_C_ExecuteUbergraph_GameMenuEntryCheckbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
