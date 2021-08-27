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

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.OverrideRightTextColor
struct UGameMenuEntryDoubleText_C_OverrideRightTextColor_Params
{
	struct FSlateColor                                 OverrideColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetBadgeActive
struct UGameMenuEntryDoubleText_C_SetBadgeActive_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetIsRightTextBold
struct UGameMenuEntryDoubleText_C_SetIsRightTextBold_Params
{
	bool                                               IsBold;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetRightText
struct UGameMenuEntryDoubleText_C_SetRightText_Params
{
	struct FText                                       RightText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetLeftText
struct UGameMenuEntryDoubleText_C_SetLeftText_Params
{
	struct FText                                       LeftText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.UpdateTextWidgets
struct UGameMenuEntryDoubleText_C_UpdateTextWidgets_Params
{
};

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.GetMenuFocusWidgetSize
struct UGameMenuEntryDoubleText_C_GetMenuFocusWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.LayoutWidget
struct UGameMenuEntryDoubleText_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.UpdateColors
struct UGameMenuEntryDoubleText_C_UpdateColors_Params
{
};

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetBadgeVisibility
struct UGameMenuEntryDoubleText_C_SetBadgeVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.Construct
struct UGameMenuEntryDoubleText_C_Construct_Params
{
};

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.SetupStylingData
struct UGameMenuEntryDoubleText_C_SetupStylingData_Params
{
};

// Function GameMenuEntryDoubleText.GameMenuEntryDoubleText_C.ExecuteUbergraph_GameMenuEntryDoubleText
struct UGameMenuEntryDoubleText_C_ExecuteUbergraph_GameMenuEntryDoubleText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
