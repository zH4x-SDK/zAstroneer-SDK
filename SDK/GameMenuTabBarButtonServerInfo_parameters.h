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

// Function GameMenuTabBarButtonServerInfo.GameMenuTabBarButtonServerInfo_C.Construct
struct UGameMenuTabBarButtonServerInfo_C_Construct_Params
{
};

// Function GameMenuTabBarButtonServerInfo.GameMenuTabBarButtonServerInfo_C.CustomEvent_UsedDelegate
struct UGameMenuTabBarButtonServerInfo_C_CustomEvent_UsedDelegate_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuTabBarButtonServerInfo.GameMenuTabBarButtonServerInfo_C.ExecuteUbergraph_GameMenuTabBarButtonServerInfo
struct UGameMenuTabBarButtonServerInfo_C_ExecuteUbergraph_GameMenuTabBarButtonServerInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
