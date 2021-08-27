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

// Function GameMenuTabBarButtonOptions.GameMenuTabBarButtonOptions_C.Construct
struct UGameMenuTabBarButtonOptions_C_Construct_Params
{
};

// Function GameMenuTabBarButtonOptions.GameMenuTabBarButtonOptions_C.CustomEvent_UsedDelegate
struct UGameMenuTabBarButtonOptions_C_CustomEvent_UsedDelegate_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuTabBarButtonOptions.GameMenuTabBarButtonOptions_C.ExecuteUbergraph_GameMenuTabBarButtonOptions
struct UGameMenuTabBarButtonOptions_C_ExecuteUbergraph_GameMenuTabBarButtonOptions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
