
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

// Function GameMenuTabBarButtonSoloMidGame.GameMenuTabBarButtonSoloMidGame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuTabBarButtonSoloMidGame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonSoloMidGame.GameMenuTabBarButtonSoloMidGame_C.Construct");

	UGameMenuTabBarButtonSoloMidGame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonSoloMidGame.GameMenuTabBarButtonSoloMidGame_C.OnFocusItemUsedDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonSoloMidGame_C::OnFocusItemUsedDelegate_Event_1(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonSoloMidGame.GameMenuTabBarButtonSoloMidGame_C.OnFocusItemUsedDelegate_Event_1");

	UGameMenuTabBarButtonSoloMidGame_C_OnFocusItemUsedDelegate_Event_1_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonSoloMidGame.GameMenuTabBarButtonSoloMidGame_C.ExecuteUbergraph_GameMenuTabBarButtonSoloMidGame
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonSoloMidGame_C::ExecuteUbergraph_GameMenuTabBarButtonSoloMidGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonSoloMidGame.GameMenuTabBarButtonSoloMidGame_C.ExecuteUbergraph_GameMenuTabBarButtonSoloMidGame");

	UGameMenuTabBarButtonSoloMidGame_C_ExecuteUbergraph_GameMenuTabBarButtonSoloMidGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
