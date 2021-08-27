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

// Function GameMenuTabBarButtonStore.GameMenuTabBarButtonStore_C.Construct
struct UGameMenuTabBarButtonStore_C_Construct_Params
{
};

// Function GameMenuTabBarButtonStore.GameMenuTabBarButtonStore_C.CustomEvent_UsedDelegate
struct UGameMenuTabBarButtonStore_C_CustomEvent_UsedDelegate_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuTabBarButtonStore.GameMenuTabBarButtonStore_C.ExecuteUbergraph_GameMenuTabBarButtonStore
struct UGameMenuTabBarButtonStore_C_ExecuteUbergraph_GameMenuTabBarButtonStore_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
