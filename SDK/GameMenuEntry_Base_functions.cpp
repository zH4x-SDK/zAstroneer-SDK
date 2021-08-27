
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

// Function GameMenuEntry_Base.GameMenuEntry_Base_C.SetBadgeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntry_Base_C::SetBadgeVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.SetBadgeVisibility");

	UGameMenuEntry_Base_C_SetBadgeVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnLockedUseAttemptAudioEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuEntry_Base_C::PlayOnLockedUseAttemptAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnLockedUseAttemptAudioEvent");

	UGameMenuEntry_Base_C_PlayOnLockedUseAttemptAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.UpdateColors
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuEntry_Base_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.UpdateColors");

	UGameMenuEntry_Base_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnEditValueChangedAudioEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuEntry_Base_C::PlayOnEditValueChangedAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnEditValueChangedAudioEvent");

	UGameMenuEntry_Base_C_PlayOnEditValueChangedAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnEditCompletedAudioEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuEntry_Base_C::PlayOnEditCompletedAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnEditCompletedAudioEvent");

	UGameMenuEntry_Base_C_PlayOnEditCompletedAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnEditStartedAudioEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuEntry_Base_C::PlayOnEditStartedAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnEditStartedAudioEvent");

	UGameMenuEntry_Base_C_PlayOnEditStartedAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnFocusGainedAudioEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuEntry_Base_C::PlayOnFocusGainedAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnFocusGainedAudioEvent");

	UGameMenuEntry_Base_C_PlayOnFocusGainedAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnUsedAudioEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuEntry_Base_C::PlayOnUsedAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.PlayOnUsedAudioEvent");

	UGameMenuEntry_Base_C_PlayOnUsedAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.CustomEvent_BaseFocusGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewIsFocused                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusableWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFocusItemFocusChangeCause     FocusChangeCause               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntry_Base_C::CustomEvent_BaseFocusGained(bool NewIsFocused, class UAstroGameMenuFocusItemWidget* FocusableWidget, EFocusItemFocusChangeCause FocusChangeCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.CustomEvent_BaseFocusGained");

	UGameMenuEntry_Base_C_CustomEvent_BaseFocusGained_Params params;
	params.NewIsFocused = NewIsFocused;
	params.FocusableWidget = FocusableWidget;
	params.FocusChangeCause = FocusChangeCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuEntry_Base_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.Construct");

	UGameMenuEntry_Base_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.CustomEvent_BaseUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntry_Base_C::CustomEvent_BaseUsed(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.CustomEvent_BaseUsed");

	UGameMenuEntry_Base_C_CustomEvent_BaseUsed_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuEntry_Base_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.SetupStylingData");

	UGameMenuEntry_Base_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.OnFocusItemFocusStateChangedDelegate_Base
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewIsFocused                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusableWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFocusItemFocusChangeCause     FocusChangeCause               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntry_Base_C::OnFocusItemFocusStateChangedDelegate_Base(bool NewIsFocused, class UAstroGameMenuFocusItemWidget* FocusableWidget, EFocusItemFocusChangeCause FocusChangeCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.OnFocusItemFocusStateChangedDelegate_Base");

	UGameMenuEntry_Base_C_OnFocusItemFocusStateChangedDelegate_Base_Params params;
	params.NewIsFocused = NewIsFocused;
	params.FocusableWidget = FocusableWidget;
	params.FocusChangeCause = FocusChangeCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.SetInteractionBlocked
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInteractionBlocked           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntry_Base_C::SetInteractionBlocked(bool IsInteractionBlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.SetInteractionBlocked");

	UGameMenuEntry_Base_C_SetInteractionBlocked_Params params;
	params.IsInteractionBlocked = IsInteractionBlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.CustomEvent_BaseLockedUseAttempted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntry_Base_C::CustomEvent_BaseLockedUseAttempted(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.CustomEvent_BaseLockedUseAttempted");

	UGameMenuEntry_Base_C_CustomEvent_BaseLockedUseAttempted_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_Base.GameMenuEntry_Base_C.ExecuteUbergraph_GameMenuEntry_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntry_Base_C::ExecuteUbergraph_GameMenuEntry_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_Base.GameMenuEntry_Base_C.ExecuteUbergraph_GameMenuEntry_Base");

	UGameMenuEntry_Base_C_ExecuteUbergraph_GameMenuEntry_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
