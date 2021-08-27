
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

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.OverrideRightTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             OverrideColor                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuEntryDoubleText_C::OverrideRightTextColor(const struct FSlateColor& OverrideColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.OverrideRightTextColor");

	UGameMenuEntryDoubleText_C_OverrideRightTextColor_Params params;
	params.OverrideColor = OverrideColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetBadgeActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryDoubleText_C::SetBadgeActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetBadgeActive");

	UGameMenuEntryDoubleText_C_SetBadgeActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetIsRightTextBold
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBold                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryDoubleText_C::SetIsRightTextBold(bool IsBold)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetIsRightTextBold");

	UGameMenuEntryDoubleText_C_SetIsRightTextBold_Params params;
	params.IsBold = IsBold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetRightText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   RightText                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuEntryDoubleText_C::SetRightText(const struct FText& RightText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetRightText");

	UGameMenuEntryDoubleText_C_SetRightText_Params params;
	params.RightText = RightText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetLeftText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   LeftText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuEntryDoubleText_C::SetLeftText(const struct FText& LeftText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetLeftText");

	UGameMenuEntryDoubleText_C_SetLeftText_Params params;
	params.LeftText = LeftText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.UpdateTextWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuEntryDoubleText_C::UpdateTextWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.UpdateTextWidgets");

	UGameMenuEntryDoubleText_C_UpdateTextWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuEntryDoubleText_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.GetMenuFocusWidgetSize");

	UGameMenuEntryDoubleText_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuEntryDoubleText_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.LayoutWidget");

	UGameMenuEntryDoubleText_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.UpdateColors
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuEntryDoubleText_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.UpdateColors");

	UGameMenuEntryDoubleText_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetBadgeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryDoubleText_C::SetBadgeVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetBadgeVisibility");

	UGameMenuEntryDoubleText_C_SetBadgeVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuEntryDoubleText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.Construct");

	UGameMenuEntryDoubleText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuEntryDoubleText_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetupStylingData");

	UGameMenuEntryDoubleText_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.ExecuteUbergraph_GameMenuEntryDoubleText
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntryDoubleText_C::ExecuteUbergraph_GameMenuEntryDoubleText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.ExecuteUbergraph_GameMenuEntryDoubleText");

	UGameMenuEntryDoubleText_C_ExecuteUbergraph_GameMenuEntryDoubleText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
