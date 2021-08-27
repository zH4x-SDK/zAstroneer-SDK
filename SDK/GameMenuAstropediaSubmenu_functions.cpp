
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

// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.DisplayTutorialSlideDeck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAstroGameMenuTutorialSlideDeckKey SlideDeckKey                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAstropediaSubmenu_C::DisplayTutorialSlideDeck(EAstroGameMenuTutorialSlideDeckKey SlideDeckKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.DisplayTutorialSlideDeck");

	UGameMenuAstropediaSubmenu_C_DisplayTutorialSlideDeck_Params params;
	params.SlideDeckKey = SlideDeckKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuAstropediaSubmenu_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.LayoutWidget");

	UGameMenuAstropediaSubmenu_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.OnTutorialDeckEntryUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAstropediaSubmenu_C::OnTutorialDeckEntryUsed(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.OnTutorialDeckEntryUsed");

	UGameMenuAstropediaSubmenu_C_OnTutorialDeckEntryUsed_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.OnQuickHelpDeckEntryUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAstropediaSubmenu_C::OnQuickHelpDeckEntryUsed(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.OnQuickHelpDeckEntryUsed");

	UGameMenuAstropediaSubmenu_C_OnQuickHelpDeckEntryUsed_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.OnTutorialCardCarouselHidden
// (BlueprintCallable, BlueprintEvent)

void UGameMenuAstropediaSubmenu_C::OnTutorialCardCarouselHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.OnTutorialCardCarouselHidden");

	UGameMenuAstropediaSubmenu_C_OnTutorialCardCarouselHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.BndEvt__ViewCreditsOption_K2Node_ComponentBoundEvent_117_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAstropediaSubmenu_C::BndEvt__ViewCreditsOption_K2Node_ComponentBoundEvent_117_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.BndEvt__ViewCreditsOption_K2Node_ComponentBoundEvent_117_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuAstropediaSubmenu_C_BndEvt__ViewCreditsOption_K2Node_ComponentBoundEvent_117_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuAstropediaSubmenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.Destruct");

	UGameMenuAstropediaSubmenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.ExecuteUbergraph_GameMenuAstropediaSubmenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAstropediaSubmenu_C::ExecuteUbergraph_GameMenuAstropediaSubmenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.ExecuteUbergraph_GameMenuAstropediaSubmenu");

	UGameMenuAstropediaSubmenu_C_ExecuteUbergraph_GameMenuAstropediaSubmenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
