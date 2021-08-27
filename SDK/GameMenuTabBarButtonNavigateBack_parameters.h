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

// Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.ProvideColorPalette
struct UGameMenuTabBarButtonNavigateBack_C_ProvideColorPalette_Params
{
	struct FColorPaletteGameMenuTabBarButton           ButtonColorPalette;                                       // (Parm, OutParm, IsPlainOldData)
};

// Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.Construct
struct UGameMenuTabBarButtonNavigateBack_C_Construct_Params
{
};

// Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.OnFocusItemUsedDelegate_Event_1
struct UGameMenuTabBarButtonNavigateBack_C_OnFocusItemUsedDelegate_Event_1_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.CustomEvent_1
struct UGameMenuTabBarButtonNavigateBack_C_CustomEvent_1_Params
{
	bool                                               NewIsFocused;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusableWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFocusItemFocusChangeCause                         FocusChangeCause;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuTabBarButtonNavigateBack.GameMenuTabBarButtonNavigateBack_C.ExecuteUbergraph_GameMenuTabBarButtonNavigateBack
struct UGameMenuTabBarButtonNavigateBack_C_ExecuteUbergraph_GameMenuTabBarButtonNavigateBack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
