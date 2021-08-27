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

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.LayoutWidget
struct UComboSelectionPopoutContents_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.SetupComboOptions
struct UComboSelectionPopoutContents_C_SetupComboOptions_Params
{
};

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.Construct
struct UComboSelectionPopoutContents_C_Construct_Params
{
};

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleComboSelectionMade
struct UComboSelectionPopoutContents_C_HandleComboSelectionMade_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleComboSelectionFocusChanged
struct UComboSelectionPopoutContents_C_HandleComboSelectionFocusChanged_Params
{
	bool                                               IsFocused;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFocusItemFocusChangeCause                         FocusChangeCause;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleNavigationBackRequest
struct UComboSelectionPopoutContents_C_HandleNavigationBackRequest_Params
{
};

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleWrapperFocusIndexChanged
struct UComboSelectionPopoutContents_C_HandleWrapperFocusIndexChanged_Params
{
	int                                                NewFocusIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.HandleLockedComboSelectionAttempted
struct UComboSelectionPopoutContents_C_HandleLockedComboSelectionAttempted_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.ExecuteUbergraph_ComboSelectionPopoutContents
struct UComboSelectionPopoutContents_C_ExecuteUbergraph_ComboSelectionPopoutContents_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.LockedComboSelectionAttempted__DelegateSignature
struct UComboSelectionPopoutContents_C_LockedComboSelectionAttempted__DelegateSignature_Params
{
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.NavigatedAwayFrom__DelegateSignature
struct UComboSelectionPopoutContents_C_NavigatedAwayFrom__DelegateSignature_Params
{
};

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.ComboSelectionFocusChanged__DelegateSignature
struct UComboSelectionPopoutContents_C_ComboSelectionFocusChanged__DelegateSignature_Params
{
	bool                                               IsFocused;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComboSelectionPopoutContents.ComboSelectionPopoutContents_C.ComboSelectionMade__DelegateSignature
struct UComboSelectionPopoutContents_C_ComboSelectionMade__DelegateSignature_Params
{
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
