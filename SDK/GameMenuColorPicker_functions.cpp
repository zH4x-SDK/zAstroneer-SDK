
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

// Function GameMenuColorPicker.GameMenuColorPicker_C.SetIsObfuscated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsObfuscated                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuColorPicker_C::SetIsObfuscated(bool IsObfuscated)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuColorPicker.GameMenuColorPicker_C.SetIsObfuscated");

	UGameMenuColorPicker_C_SetIsObfuscated_Params params;
	params.IsObfuscated = IsObfuscated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuColorPicker.GameMenuColorPicker_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuColorPicker_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuColorPicker.GameMenuColorPicker_C.GetMenuFocusWidgetSize");

	UGameMenuColorPicker_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuColorPicker.GameMenuColorPicker_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuColorPicker_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuColorPicker.GameMenuColorPicker_C.LayoutWidget");

	UGameMenuColorPicker_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuColorPicker.GameMenuColorPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuColorPicker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuColorPicker.GameMenuColorPicker_C.Construct");

	UGameMenuColorPicker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuColorPicker.GameMenuColorPicker_C.UpdateColors
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuColorPicker_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuColorPicker.GameMenuColorPicker_C.UpdateColors");

	UGameMenuColorPicker_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuColorPicker.GameMenuColorPicker_C.SetBadgeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuColorPicker_C::SetBadgeVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuColorPicker.GameMenuColorPicker_C.SetBadgeVisibility");

	UGameMenuColorPicker_C_SetBadgeVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuColorPicker.GameMenuColorPicker_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuColorPicker_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuColorPicker.GameMenuColorPicker_C.SetupStylingData");

	UGameMenuColorPicker_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuColorPicker.GameMenuColorPicker_C.ExecuteUbergraph_GameMenuColorPicker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuColorPicker_C::ExecuteUbergraph_GameMenuColorPicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuColorPicker.GameMenuColorPicker_C.ExecuteUbergraph_GameMenuColorPicker");

	UGameMenuColorPicker_C_ExecuteUbergraph_GameMenuColorPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
