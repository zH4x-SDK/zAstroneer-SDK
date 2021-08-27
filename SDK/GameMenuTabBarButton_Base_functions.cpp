
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

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.SetNotificationIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButton_Base_C::SetNotificationIconVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.SetNotificationIconVisibility");

	UGameMenuTabBarButton_Base_C_SetNotificationIconVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.PlayOnFocusGainedAudioEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuTabBarButton_Base_C::PlayOnFocusGainedAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.PlayOnFocusGainedAudioEvent");

	UGameMenuTabBarButton_Base_C_PlayOnFocusGainedAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.PlayOnUsedAudioEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuTabBarButton_Base_C::PlayOnUsedAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.PlayOnUsedAudioEvent");

	UGameMenuTabBarButton_Base_C_PlayOnUsedAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.ProvideColorPalette
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorPaletteGameMenuTabBarButton ButtonColorPalette             (Parm, OutParm, IsPlainOldData)

void UGameMenuTabBarButton_Base_C::ProvideColorPalette(struct FColorPaletteGameMenuTabBarButton* ButtonColorPalette)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.ProvideColorPalette");

	UGameMenuTabBarButton_Base_C_ProvideColorPalette_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonColorPalette != nullptr)
		*ButtonColorPalette = params.ButtonColorPalette;
}


// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.PopulateButtonColorData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FColorPaletteGameMenuTabBarButton ButtonColorPalette             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UGameMenuTabBarButton_Base_C::PopulateButtonColorData(const struct FColorPaletteGameMenuTabBarButton& ButtonColorPalette)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.PopulateButtonColorData");

	UGameMenuTabBarButton_Base_C_PopulateButtonColorData_Params params;
	params.ButtonColorPalette = ButtonColorPalette;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.UpdateButtonColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuTabBarButton_Base_C::UpdateButtonColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.UpdateButtonColors");

	UGameMenuTabBarButton_Base_C_UpdateButtonColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuTabBarButton_Base_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.LayoutWidget");

	UGameMenuTabBarButton_Base_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuTabBarButton_Base_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.Construct");

	UGameMenuTabBarButton_Base_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.OnFocusItemFocusStateChangedDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewIsFocused                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusableWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFocusItemFocusChangeCause     FocusChangeCause               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButton_Base_C::OnFocusItemFocusStateChangedDelegate_Event_1(bool NewIsFocused, class UAstroGameMenuFocusItemWidget* FocusableWidget, EFocusItemFocusChangeCause FocusChangeCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.OnFocusItemFocusStateChangedDelegate_Event_1");

	UGameMenuTabBarButton_Base_C_OnFocusItemFocusStateChangedDelegate_Event_1_Params params;
	params.NewIsFocused = NewIsFocused;
	params.FocusableWidget = FocusableWidget;
	params.FocusChangeCause = FocusChangeCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.OnFocusItemIsLastUsedStateChangedDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewLastUsed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusableWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButton_Base_C::OnFocusItemIsLastUsedStateChangedDelegate_Event_1(bool NewLastUsed, class UAstroGameMenuFocusItemWidget* FocusableWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.OnFocusItemIsLastUsedStateChangedDelegate_Event_1");

	UGameMenuTabBarButton_Base_C_OnFocusItemIsLastUsedStateChangedDelegate_Event_1_Params params;
	params.NewLastUsed = NewLastUsed;
	params.FocusableWidget = FocusableWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuTabBarButton_Base_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.SetupStylingData");

	UGameMenuTabBarButton_Base_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.CustomEvent_TabBarButtonUsedBase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButton_Base_C::CustomEvent_TabBarButtonUsedBase(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.CustomEvent_TabBarButtonUsedBase");

	UGameMenuTabBarButton_Base_C_CustomEvent_TabBarButtonUsedBase_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.ExecuteUbergraph_GameMenuTabBarButton_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButton_Base_C::ExecuteUbergraph_GameMenuTabBarButton_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.ExecuteUbergraph_GameMenuTabBarButton_Base");

	UGameMenuTabBarButton_Base_C_ExecuteUbergraph_GameMenuTabBarButton_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
