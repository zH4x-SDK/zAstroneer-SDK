
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

// Function GameMenuTabBarButtonSoloTitleScreen.GameMenuTabBarButtonSoloTitleScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuTabBarButtonSoloTitleScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonSoloTitleScreen.GameMenuTabBarButtonSoloTitleScreen_C.Construct");

	UGameMenuTabBarButtonSoloTitleScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonSoloTitleScreen.GameMenuTabBarButtonSoloTitleScreen_C.OnFocusItemUsedDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonSoloTitleScreen_C::OnFocusItemUsedDelegate_Event_1(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonSoloTitleScreen.GameMenuTabBarButtonSoloTitleScreen_C.OnFocusItemUsedDelegate_Event_1");

	UGameMenuTabBarButtonSoloTitleScreen_C_OnFocusItemUsedDelegate_Event_1_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonSoloTitleScreen.GameMenuTabBarButtonSoloTitleScreen_C.ExecuteUbergraph_GameMenuTabBarButtonSoloTitleScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonSoloTitleScreen_C::ExecuteUbergraph_GameMenuTabBarButtonSoloTitleScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonSoloTitleScreen.GameMenuTabBarButtonSoloTitleScreen_C.ExecuteUbergraph_GameMenuTabBarButtonSoloTitleScreen");

	UGameMenuTabBarButtonSoloTitleScreen_C_ExecuteUbergraph_GameMenuTabBarButtonSoloTitleScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
