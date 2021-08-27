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

// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.DisplayTutorialSlideDeck
struct UGameMenuAstropediaSubmenu_C_DisplayTutorialSlideDeck_Params
{
	EAstroGameMenuTutorialSlideDeckKey                 SlideDeckKey;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.LayoutWidget
struct UGameMenuAstropediaSubmenu_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.OnTutorialDeckEntryUsed
struct UGameMenuAstropediaSubmenu_C_OnTutorialDeckEntryUsed_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.OnQuickHelpDeckEntryUsed
struct UGameMenuAstropediaSubmenu_C_OnQuickHelpDeckEntryUsed_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.OnTutorialCardCarouselHidden
struct UGameMenuAstropediaSubmenu_C_OnTutorialCardCarouselHidden_Params
{
};

// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.BndEvt__ViewCreditsOption_K2Node_ComponentBoundEvent_117_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuAstropediaSubmenu_C_BndEvt__ViewCreditsOption_K2Node_ComponentBoundEvent_117_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.Destruct
struct UGameMenuAstropediaSubmenu_C_Destruct_Params
{
};

// Function GameMenuAstropediaSubmenu.GameMenuAstropediaSubmenu_C.ExecuteUbergraph_GameMenuAstropediaSubmenu
struct UGameMenuAstropediaSubmenu_C_ExecuteUbergraph_GameMenuAstropediaSubmenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
