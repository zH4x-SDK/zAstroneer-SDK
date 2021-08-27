
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

// Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.BndEvt__LaunchOption_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuConfigureJoinMultiplayerGameSubmenu_C::BndEvt__LaunchOption_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.BndEvt__LaunchOption_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuConfigureJoinMultiplayerGameSubmenu_C_BndEvt__LaunchOption_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuConfigureJoinMultiplayerGameSubmenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.Construct");

	UGameMenuConfigureJoinMultiplayerGameSubmenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.OnFocusIndexChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewFocusIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuConfigureJoinMultiplayerGameSubmenu_C::OnFocusIndexChanged(int NewFocusIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.OnFocusIndexChanged");

	UGameMenuConfigureJoinMultiplayerGameSubmenu_C_OnFocusIndexChanged_Params params;
	params.NewFocusIndex = NewFocusIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.NavigatedAwayFrom
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           isNavigateBack                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuConfigureJoinMultiplayerGameSubmenu_C::NavigatedAwayFrom(bool isNavigateBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.NavigatedAwayFrom");

	UGameMenuConfigureJoinMultiplayerGameSubmenu_C_NavigatedAwayFrom_Params params;
	params.isNavigateBack = isNavigateBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.OnCustomizationFinalizationCanceled
// (BlueprintCallable, BlueprintEvent)

void UGameMenuConfigureJoinMultiplayerGameSubmenu_C::OnCustomizationFinalizationCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.OnCustomizationFinalizationCanceled");

	UGameMenuConfigureJoinMultiplayerGameSubmenu_C_OnCustomizationFinalizationCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.MenuBeingClosed
// (Event, Public, BlueprintEvent)

void UGameMenuConfigureJoinMultiplayerGameSubmenu_C::MenuBeingClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.MenuBeingClosed");

	UGameMenuConfigureJoinMultiplayerGameSubmenu_C_MenuBeingClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.ExecuteUbergraph_GameMenuConfigureJoinMultiplayerGameSubmenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuConfigureJoinMultiplayerGameSubmenu_C::ExecuteUbergraph_GameMenuConfigureJoinMultiplayerGameSubmenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureJoinMultiplayerGameSubmenu.GameMenuConfigureJoinMultiplayerGameSubmenu_C.ExecuteUbergraph_GameMenuConfigureJoinMultiplayerGameSubmenu");

	UGameMenuConfigureJoinMultiplayerGameSubmenu_C_ExecuteUbergraph_GameMenuConfigureJoinMultiplayerGameSubmenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
