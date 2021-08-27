#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function GameMenuTabBarButtonQuit.GameMenuTabBarButtonQuit_C.ProvideColorPalette
struct UGameMenuTabBarButtonQuit_C_ProvideColorPalette_Params
{
	struct FColorPaletteGameMenuTabBarButton           ButtonColorPalette;                                       // (Parm, OutParm, IsPlainOldData)
};

// Function GameMenuTabBarButtonQuit.GameMenuTabBarButtonQuit_C.Construct
struct UGameMenuTabBarButtonQuit_C_Construct_Params
{
};

// Function GameMenuTabBarButtonQuit.GameMenuTabBarButtonQuit_C.OnFocusItemUsedDelegate_Event_1
struct UGameMenuTabBarButtonQuit_C_OnFocusItemUsedDelegate_Event_1_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuTabBarButtonQuit.GameMenuTabBarButtonQuit_C.ExecuteUbergraph_GameMenuTabBarButtonQuit
struct UGameMenuTabBarButtonQuit_C_ExecuteUbergraph_GameMenuTabBarButtonQuit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
