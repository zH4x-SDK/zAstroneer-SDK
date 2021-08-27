
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

// Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.ProvideColorPalette
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorPaletteGameMenuTabBarButton ButtonColorPalette             (Parm, OutParm, IsPlainOldData)

void UGameMenuTabBarButtonNavigateBack_C::ProvideColorPalette(struct FColorPaletteGameMenuTabBarButton* ButtonColorPalette)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.ProvideColorPalette");

	UGameMenuTabBarButtonNavigateBack_C_ProvideColorPalette_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonColorPalette != nullptr)
		*ButtonColorPalette = params.ButtonColorPalette;
}


// Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuTabBarButtonNavigateBack_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.Construct");

	UGameMenuTabBarButtonNavigateBack_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.OnFocusItemUsedDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonNavigateBack_C::OnFocusItemUsedDelegate_Event_1(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.OnFocusItemUsedDelegate_Event_1");

	UGameMenuTabBarButtonNavigateBack_C_OnFocusItemUsedDelegate_Event_1_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewIsFocused                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusableWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFocusItemFocusChangeCause     FocusChangeCause               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonNavigateBack_C::CustomEvent_1(bool NewIsFocused, class UAstroGameMenuFocusItemWidget* FocusableWidget, EFocusItemFocusChangeCause FocusChangeCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.CustomEvent_1");

	UGameMenuTabBarButtonNavigateBack_C_CustomEvent_1_Params params;
	params.NewIsFocused = NewIsFocused;
	params.FocusableWidget = FocusableWidget;
	params.FocusChangeCause = FocusChangeCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.ExecuteUbergraph_GameMenuTabBarButtonNavigateBack
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonNavigateBack_C::ExecuteUbergraph_GameMenuTabBarButtonNavigateBack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.ExecuteUbergraph_GameMenuTabBarButtonNavigateBack");

	UGameMenuTabBarButtonNavigateBack_C_ExecuteUbergraph_GameMenuTabBarButtonNavigateBack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
