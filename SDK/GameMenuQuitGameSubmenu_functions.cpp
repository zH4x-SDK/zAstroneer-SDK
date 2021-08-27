
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

// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.DoesControlledVehiclePreventRespawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           PreventsRespawn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuQuitGameSubmenu_C::DoesControlledVehiclePreventRespawn(bool* PreventsRespawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.DoesControlledVehiclePreventRespawn");

	UGameMenuQuitGameSubmenu_C_DoesControlledVehiclePreventRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PreventsRespawn != nullptr)
		*PreventsRespawn = params.PreventsRespawn;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.GenerateQuitWithFailedSaveWarningPrompt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameMenuEntryDoubleText_C* OwningWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnToTitleScreen            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuQuitGameSubmenu_C::GenerateQuitWithFailedSaveWarningPrompt(class UGameMenuEntryDoubleText_C* OwningWidget, bool ReturnToTitleScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.GenerateQuitWithFailedSaveWarningPrompt");

	UGameMenuQuitGameSubmenu_C_GenerateQuitWithFailedSaveWarningPrompt_Params params;
	params.OwningWidget = OwningWidget;
	params.ReturnToTitleScreen = ReturnToTitleScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.GenerateQuitToMainMenuPrompt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AttemptToSave                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuQuitGameSubmenu_C::GenerateQuitToMainMenuPrompt(class UAstroGameMenuFocusItemWidget* FocusItemWidget, bool AttemptToSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.GenerateQuitToMainMenuPrompt");

	UGameMenuQuitGameSubmenu_C_GenerateQuitToMainMenuPrompt_Params params;
	params.FocusItemWidget = FocusItemWidget;
	params.AttemptToSave = AttemptToSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.GenerateQuitGamePrompt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AttemptToSave                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuQuitGameSubmenu_C::GenerateQuitGamePrompt(class UAstroGameMenuFocusItemWidget* FocusItemWidget, bool AttemptToSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.GenerateQuitGamePrompt");

	UGameMenuQuitGameSubmenu_C_GenerateQuitGamePrompt_Params params;
	params.FocusItemWidget = FocusItemWidget;
	params.AttemptToSave = AttemptToSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuQuitGameSubmenu_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.LayoutWidget");

	UGameMenuQuitGameSubmenu_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__SaveAndQuitToMenu_K2Node_ComponentBoundEvent_52_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuQuitGameSubmenu_C::BndEvt__SaveAndQuitToMenu_K2Node_ComponentBoundEvent_52_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__SaveAndQuitToMenu_K2Node_ComponentBoundEvent_52_OnFocusItemUsed__DelegateSignature");

	UGameMenuQuitGameSubmenu_C_BndEvt__SaveAndQuitToMenu_K2Node_ComponentBoundEvent_52_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__SaveAndQuitGame_K2Node_ComponentBoundEvent_101_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuQuitGameSubmenu_C::BndEvt__SaveAndQuitGame_K2Node_ComponentBoundEvent_101_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__SaveAndQuitGame_K2Node_ComponentBoundEvent_101_OnFocusItemUsed__DelegateSignature");

	UGameMenuQuitGameSubmenu_C_BndEvt__SaveAndQuitGame_K2Node_ComponentBoundEvent_101_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__QuitToMenu_K2Node_ComponentBoundEvent_438_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuQuitGameSubmenu_C::BndEvt__QuitToMenu_K2Node_ComponentBoundEvent_438_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__QuitToMenu_K2Node_ComponentBoundEvent_438_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuQuitGameSubmenu_C_BndEvt__QuitToMenu_K2Node_ComponentBoundEvent_438_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_568_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuQuitGameSubmenu_C::BndEvt__QuitGame_K2Node_ComponentBoundEvent_568_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_568_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuQuitGameSubmenu_C_BndEvt__QuitGame_K2Node_ComponentBoundEvent_568_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ForceQuitGameToMainMenu
// (BlueprintCallable, BlueprintEvent)

void UGameMenuQuitGameSubmenu_C::ForceQuitGameToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ForceQuitGameToMainMenu");

	UGameMenuQuitGameSubmenu_C_ForceQuitGameToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ForceQuitGame
// (BlueprintCallable, BlueprintEvent)

void UGameMenuQuitGameSubmenu_C::ForceQuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ForceQuitGame");

	UGameMenuQuitGameSubmenu_C_ForceQuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.TryToSaveAndQuitToMainMenu
// (BlueprintCallable, BlueprintEvent)

void UGameMenuQuitGameSubmenu_C::TryToSaveAndQuitToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.TryToSaveAndQuitToMainMenu");

	UGameMenuQuitGameSubmenu_C_TryToSaveAndQuitToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.TryToSaveAndQuitGame
// (BlueprintCallable, BlueprintEvent)

void UGameMenuQuitGameSubmenu_C::TryToSaveAndQuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.TryToSaveAndQuitGame");

	UGameMenuQuitGameSubmenu_C_TryToSaveAndQuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.SaveAndQuitToMenuFailed
// (BlueprintCallable, BlueprintEvent)

void UGameMenuQuitGameSubmenu_C::SaveAndQuitToMenuFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.SaveAndQuitToMenuFailed");

	UGameMenuQuitGameSubmenu_C_SaveAndQuitToMenuFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.SaveAndQuitFailed
// (BlueprintCallable, BlueprintEvent)

void UGameMenuQuitGameSubmenu_C::SaveAndQuitFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.SaveAndQuitFailed");

	UGameMenuQuitGameSubmenu_C_SaveAndQuitFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ForceQuitGameToMainMenuWithSave
// (BlueprintCallable, BlueprintEvent)

void UGameMenuQuitGameSubmenu_C::ForceQuitGameToMainMenuWithSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ForceQuitGameToMainMenuWithSave");

	UGameMenuQuitGameSubmenu_C_ForceQuitGameToMainMenuWithSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ForceQuitGameWithSave
// (BlueprintCallable, BlueprintEvent)

void UGameMenuQuitGameSubmenu_C::ForceQuitGameWithSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ForceQuitGameWithSave");

	UGameMenuQuitGameSubmenu_C_ForceQuitGameWithSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__RespawnAtHome_K2Node_ComponentBoundEvent_201_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuQuitGameSubmenu_C::BndEvt__RespawnAtHome_K2Node_ComponentBoundEvent_201_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.BndEvt__RespawnAtHome_K2Node_ComponentBoundEvent_201_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuQuitGameSubmenu_C_BndEvt__RespawnAtHome_K2Node_ComponentBoundEvent_201_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.OnInitialRespawnConfirmationMade
// (BlueprintCallable, BlueprintEvent)

void UGameMenuQuitGameSubmenu_C::OnInitialRespawnConfirmationMade()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.OnInitialRespawnConfirmationMade");

	UGameMenuQuitGameSubmenu_C_OnInitialRespawnConfirmationMade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ExecuteUbergraph_GameMenuQuitGameSubmenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuQuitGameSubmenu_C::ExecuteUbergraph_GameMenuQuitGameSubmenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuQuitGameSubmenu.GameMenuQuitGameSubmenu_C.ExecuteUbergraph_GameMenuQuitGameSubmenu");

	UGameMenuQuitGameSubmenu_C_ExecuteUbergraph_GameMenuQuitGameSubmenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
