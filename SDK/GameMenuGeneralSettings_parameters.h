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

// Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.CreateLanguageOptionPopout
struct UGameMenuGeneralSettings_C_CreateLanguageOptionPopout_Params
{
	class UAstroGameMenuFocusItemWidget*               OwningFocusItem;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.LayoutWidget
struct UGameMenuGeneralSettings_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.BndEvt__InvertCameraYEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature
struct UGameMenuGeneralSettings_C_BndEvt__InvertCameraYEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.HandleLanguageComboSelectionMade
struct UGameMenuGeneralSettings_C_HandleLanguageComboSelectionMade_Params
{
	int                                                SelectionIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.Construct
struct UGameMenuGeneralSettings_C_Construct_Params
{
};

// Function GameMenuGeneralSettings.GameMenuGeneralSettings_C.ExecuteUbergraph_GameMenuGeneralSettings
struct UGameMenuGeneralSettings_C_ExecuteUbergraph_GameMenuGeneralSettings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
