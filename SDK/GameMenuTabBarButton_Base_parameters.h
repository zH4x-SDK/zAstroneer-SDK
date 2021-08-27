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

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.SetNotificationIconVisibility
struct UGameMenuTabBarButton_Base_C_SetNotificationIconVisibility_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.PlayOnFocusGainedAudioEvent
struct UGameMenuTabBarButton_Base_C_PlayOnFocusGainedAudioEvent_Params
{
};

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.PlayOnUsedAudioEvent
struct UGameMenuTabBarButton_Base_C_PlayOnUsedAudioEvent_Params
{
};

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.ProvideColorPalette
struct UGameMenuTabBarButton_Base_C_ProvideColorPalette_Params
{
	struct FColorPaletteGameMenuTabBarButton           ButtonColorPalette;                                       // (Parm, OutParm, IsPlainOldData)
};

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.PopulateButtonColorData
struct UGameMenuTabBarButton_Base_C_PopulateButtonColorData_Params
{
	struct FColorPaletteGameMenuTabBarButton           ButtonColorPalette;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.UpdateButtonColors
struct UGameMenuTabBarButton_Base_C_UpdateButtonColors_Params
{
};

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.LayoutWidget
struct UGameMenuTabBarButton_Base_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.Construct
struct UGameMenuTabBarButton_Base_C_Construct_Params
{
};

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.OnFocusItemFocusStateChangedDelegate_Event_1
struct UGameMenuTabBarButton_Base_C_OnFocusItemFocusStateChangedDelegate_Event_1_Params
{
	bool                                               NewIsFocused;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusableWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFocusItemFocusChangeCause                         FocusChangeCause;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.OnFocusItemIsLastUsedStateChangedDelegate_Event_1
struct UGameMenuTabBarButton_Base_C_OnFocusItemIsLastUsedStateChangedDelegate_Event_1_Params
{
	bool                                               NewLastUsed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusableWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.SetupStylingData
struct UGameMenuTabBarButton_Base_C_SetupStylingData_Params
{
};

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.CustomEvent_TabBarButtonUsedBase
struct UGameMenuTabBarButton_Base_C_CustomEvent_TabBarButtonUsedBase_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C.ExecuteUbergraph_GameMenuTabBarButton_Base
struct UGameMenuTabBarButton_Base_C_ExecuteUbergraph_GameMenuTabBarButton_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
