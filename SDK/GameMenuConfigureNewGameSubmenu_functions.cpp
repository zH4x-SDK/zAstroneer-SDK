
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

// Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.BndEvt__LaunchOption_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuConfigureNewGameSubmenu_C::BndEvt__LaunchOption_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.BndEvt__LaunchOption_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuConfigureNewGameSubmenu_C_BndEvt__LaunchOption_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuConfigureNewGameSubmenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.Construct");

	UGameMenuConfigureNewGameSubmenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.OnFocusIndexChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewFocusIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuConfigureNewGameSubmenu_C::OnFocusIndexChanged(int NewFocusIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.OnFocusIndexChanged");

	UGameMenuConfigureNewGameSubmenu_C_OnFocusIndexChanged_Params params;
	params.NewFocusIndex = NewFocusIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.NavigatedAwayFrom
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           isNavigateBack                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuConfigureNewGameSubmenu_C::NavigatedAwayFrom(bool isNavigateBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.NavigatedAwayFrom");

	UGameMenuConfigureNewGameSubmenu_C_NavigatedAwayFrom_Params params;
	params.isNavigateBack = isNavigateBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.OnCustomizationFinalizationCanceled
// (BlueprintCallable, BlueprintEvent)

void UGameMenuConfigureNewGameSubmenu_C::OnCustomizationFinalizationCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.OnCustomizationFinalizationCanceled");

	UGameMenuConfigureNewGameSubmenu_C_OnCustomizationFinalizationCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.MenuBeingClosed
// (Event, Public, BlueprintEvent)

void UGameMenuConfigureNewGameSubmenu_C::MenuBeingClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.MenuBeingClosed");

	UGameMenuConfigureNewGameSubmenu_C_MenuBeingClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.ExecuteUbergraph_GameMenuConfigureNewGameSubmenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuConfigureNewGameSubmenu_C::ExecuteUbergraph_GameMenuConfigureNewGameSubmenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuConfigureNewGameSubmenu.GameMenuConfigureNewGameSubmenu_C.ExecuteUbergraph_GameMenuConfigureNewGameSubmenu");

	UGameMenuConfigureNewGameSubmenu_C_ExecuteUbergraph_GameMenuConfigureNewGameSubmenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
