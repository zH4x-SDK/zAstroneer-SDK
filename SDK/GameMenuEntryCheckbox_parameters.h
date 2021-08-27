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

// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetIsChecked
struct UGameMenuEntryCheckbox_C_SetIsChecked_Params
{
	bool                                               IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.ToggleChecked
struct UGameMenuEntryCheckbox_C_ToggleChecked_Params
{
	bool                                               IsChecked;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetBadgeImage
struct UGameMenuEntryCheckbox_C_SetBadgeImage_Params
{
	class UTexture*                                    BadgeImage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetBadgeActive
struct UGameMenuEntryCheckbox_C_SetBadgeActive_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetLeftText
struct UGameMenuEntryCheckbox_C_SetLeftText_Params
{
	struct FText                                       LeftText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.UpdateTextWidgets
struct UGameMenuEntryCheckbox_C_UpdateTextWidgets_Params
{
};

// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.GetMenuFocusWidgetSize
struct UGameMenuEntryCheckbox_C_GetMenuFocusWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.LayoutWidget
struct UGameMenuEntryCheckbox_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.SetupStylingData
struct UGameMenuEntryCheckbox_C_SetupStylingData_Params
{
};

// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.UpdateColors
struct UGameMenuEntryCheckbox_C_UpdateColors_Params
{
};

// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.Construct
struct UGameMenuEntryCheckbox_C_Construct_Params
{
};

// Function GameMenuEntryCheckbox.GameMenuEntryCheckbox_C.ExecuteUbergraph_GameMenuEntryCheckbox
struct UGameMenuEntryCheckbox_C_ExecuteUbergraph_GameMenuEntryCheckbox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
