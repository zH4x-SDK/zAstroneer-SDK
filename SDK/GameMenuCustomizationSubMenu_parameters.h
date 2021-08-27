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

// Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.OnFocusIndexChanged
struct UGameMenuCustomizationSubMenu_C_OnFocusIndexChanged_Params
{
	int                                                NewFocusIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.NavigatedAwayFrom
struct UGameMenuCustomizationSubMenu_C_NavigatedAwayFrom_Params
{
	bool                                               isNavigateBack;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.Construct
struct UGameMenuCustomizationSubMenu_C_Construct_Params
{
};

// Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.MenuBeingClosed
struct UGameMenuCustomizationSubMenu_C_MenuBeingClosed_Params
{
};

// Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.ExecuteUbergraph_GameMenuCustomizationSubMenu
struct UGameMenuCustomizationSubMenu_C_ExecuteUbergraph_GameMenuCustomizationSubMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
