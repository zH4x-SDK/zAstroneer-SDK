
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

// Function GameMenuTabBarButtonQuit.GameMenuTabBarButtonQuit_C.ProvideColorPalette
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColorPaletteGameMenuTabBarButton ButtonColorPalette             (Parm, OutParm, IsPlainOldData)

void UGameMenuTabBarButtonQuit_C::ProvideColorPalette(struct FColorPaletteGameMenuTabBarButton* ButtonColorPalette)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonQuit.GameMenuTabBarButtonQuit_C.ProvideColorPalette");

	UGameMenuTabBarButtonQuit_C_ProvideColorPalette_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonColorPalette != nullptr)
		*ButtonColorPalette = params.ButtonColorPalette;
}


// Function GameMenuTabBarButtonQuit.GameMenuTabBarButtonQuit_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuTabBarButtonQuit_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonQuit.GameMenuTabBarButtonQuit_C.Construct");

	UGameMenuTabBarButtonQuit_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonQuit.GameMenuTabBarButtonQuit_C.OnFocusItemUsedDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonQuit_C::OnFocusItemUsedDelegate_Event_1(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonQuit.GameMenuTabBarButtonQuit_C.OnFocusItemUsedDelegate_Event_1");

	UGameMenuTabBarButtonQuit_C_OnFocusItemUsedDelegate_Event_1_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonQuit.GameMenuTabBarButtonQuit_C.ExecuteUbergraph_GameMenuTabBarButtonQuit
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonQuit_C::ExecuteUbergraph_GameMenuTabBarButtonQuit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonQuit.GameMenuTabBarButtonQuit_C.ExecuteUbergraph_GameMenuTabBarButtonQuit");

	UGameMenuTabBarButtonQuit_C_ExecuteUbergraph_GameMenuTabBarButtonQuit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
