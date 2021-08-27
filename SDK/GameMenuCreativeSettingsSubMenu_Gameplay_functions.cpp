
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

// Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuCreativeSettingsSubMenu_Gameplay_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.LayoutWidget");

	UGameMenuCreativeSettingsSubMenu_Gameplay_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.BndEvt__GameMenuEntryCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeSettingsSubMenu_Gameplay_C::BndEvt__GameMenuEntryCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.BndEvt__GameMenuEntryCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCreativeSettingsSubMenu_Gameplay_C_BndEvt__GameMenuEntryCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.ToggleCreativeModeCheckbox
// (BlueprintCallable, BlueprintEvent)

void UGameMenuCreativeSettingsSubMenu_Gameplay_C::ToggleCreativeModeCheckbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.ToggleCreativeModeCheckbox");

	UGameMenuCreativeSettingsSubMenu_Gameplay_C_ToggleCreativeModeCheckbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.HandleEnterCreativeModeAccepted
// (BlueprintCallable, BlueprintEvent)

void UGameMenuCreativeSettingsSubMenu_Gameplay_C::HandleEnterCreativeModeAccepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.HandleEnterCreativeModeAccepted");

	UGameMenuCreativeSettingsSubMenu_Gameplay_C_HandleEnterCreativeModeAccepted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuCreativeSettingsSubMenu_Gameplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.Construct");

	UGameMenuCreativeSettingsSubMenu_Gameplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeSettingsSubMenu_Gameplay_C::CustomEvent_1(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.CustomEvent_1");

	UGameMenuCreativeSettingsSubMenu_Gameplay_C_CustomEvent_1_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.BndEvt__CreativeDroneLaunchRecall_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeSettingsSubMenu_Gameplay_C::BndEvt__CreativeDroneLaunchRecall_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.BndEvt__CreativeDroneLaunchRecall_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCreativeSettingsSubMenu_Gameplay_C_BndEvt__CreativeDroneLaunchRecall_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.HandleDroneFlightStateChanged
// (BlueprintCallable, BlueprintEvent)

void UGameMenuCreativeSettingsSubMenu_Gameplay_C::HandleDroneFlightStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.HandleDroneFlightStateChanged");

	UGameMenuCreativeSettingsSubMenu_Gameplay_C_HandleDroneFlightStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.NavigatedAwayFrom
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           isNavigateBack                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeSettingsSubMenu_Gameplay_C::NavigatedAwayFrom(bool isNavigateBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.NavigatedAwayFrom");

	UGameMenuCreativeSettingsSubMenu_Gameplay_C_NavigatedAwayFrom_Params params;
	params.isNavigateBack = isNavigateBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.MenuBeingClosed
// (Event, Public, BlueprintEvent)

void UGameMenuCreativeSettingsSubMenu_Gameplay_C::MenuBeingClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.MenuBeingClosed");

	UGameMenuCreativeSettingsSubMenu_Gameplay_C_MenuBeingClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.ExecuteUbergraph_GameMenuCreativeSettingsSubMenu_Gameplay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeSettingsSubMenu_Gameplay_C::ExecuteUbergraph_GameMenuCreativeSettingsSubMenu_Gameplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeSettingsSubMenu_Gameplay.GameMenuCreativeSettingsSubMenu_Gameplay_C.ExecuteUbergraph_GameMenuCreativeSettingsSubMenu_Gameplay");

	UGameMenuCreativeSettingsSubMenu_Gameplay_C_ExecuteUbergraph_GameMenuCreativeSettingsSubMenu_Gameplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
