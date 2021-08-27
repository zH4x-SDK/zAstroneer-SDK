
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

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetLockedIconActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuDedicatedServerEntry_C::SetLockedIconActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetLockedIconActive");

	UGameMenuDedicatedServerEntry_C_SetLockedIconActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.OverrideRightTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             OverrideColor                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuDedicatedServerEntry_C::OverrideRightTextColor(const struct FSlateColor& OverrideColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.OverrideRightTextColor");

	UGameMenuDedicatedServerEntry_C_OverrideRightTextColor_Params params;
	params.OverrideColor = OverrideColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetPreferredIconActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuDedicatedServerEntry_C::SetPreferredIconActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetPreferredIconActive");

	UGameMenuDedicatedServerEntry_C_SetPreferredIconActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetIsRightTextBold
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBold                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuDedicatedServerEntry_C::SetIsRightTextBold(bool IsBold)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetIsRightTextBold");

	UGameMenuDedicatedServerEntry_C_SetIsRightTextBold_Params params;
	params.IsBold = IsBold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetRightText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   RightText                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuDedicatedServerEntry_C::SetRightText(const struct FText& RightText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetRightText");

	UGameMenuDedicatedServerEntry_C_SetRightText_Params params;
	params.RightText = RightText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetLeftText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   LeftText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameMenuDedicatedServerEntry_C::SetLeftText(const struct FText& LeftText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetLeftText");

	UGameMenuDedicatedServerEntry_C_SetLeftText_Params params;
	params.LeftText = LeftText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.UpdateTextWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuDedicatedServerEntry_C::UpdateTextWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.UpdateTextWidgets");

	UGameMenuDedicatedServerEntry_C_UpdateTextWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuDedicatedServerEntry_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.GetMenuFocusWidgetSize");

	UGameMenuDedicatedServerEntry_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuDedicatedServerEntry_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.LayoutWidget");

	UGameMenuDedicatedServerEntry_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.UpdateColors
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuDedicatedServerEntry_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.UpdateColors");

	UGameMenuDedicatedServerEntry_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuDedicatedServerEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.Construct");

	UGameMenuDedicatedServerEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuDedicatedServerEntry_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetupStylingData");

	UGameMenuDedicatedServerEntry_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.ExecuteUbergraph_GameMenuDedicatedServerEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuDedicatedServerEntry_C::ExecuteUbergraph_GameMenuDedicatedServerEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.ExecuteUbergraph_GameMenuDedicatedServerEntry");

	UGameMenuDedicatedServerEntry_C_ExecuteUbergraph_GameMenuDedicatedServerEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
