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

// Function GameMenuTabBarButtonServerList.GameMenuTabBarButtonServerList_C.Construct
struct UGameMenuTabBarButtonServerList_C_Construct_Params
{
};

// Function GameMenuTabBarButtonServerList.GameMenuTabBarButtonServerList_C.CustomEvent_UsedDelegate
struct UGameMenuTabBarButtonServerList_C_CustomEvent_UsedDelegate_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuTabBarButtonServerList.GameMenuTabBarButtonServerList_C.ExecuteUbergraph_GameMenuTabBarButtonServerList
struct UGameMenuTabBarButtonServerList_C_ExecuteUbergraph_GameMenuTabBarButtonServerList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
