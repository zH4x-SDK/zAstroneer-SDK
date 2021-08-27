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

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetLockedIconActive
struct UGameMenuDedicatedServerEntry_C_SetLockedIconActive_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.OverrideRightTextColor
struct UGameMenuDedicatedServerEntry_C_OverrideRightTextColor_Params
{
	struct FSlateColor                                 OverrideColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetPreferredIconActive
struct UGameMenuDedicatedServerEntry_C_SetPreferredIconActive_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetIsRightTextBold
struct UGameMenuDedicatedServerEntry_C_SetIsRightTextBold_Params
{
	bool                                               IsBold;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetRightText
struct UGameMenuDedicatedServerEntry_C_SetRightText_Params
{
	struct FText                                       RightText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetLeftText
struct UGameMenuDedicatedServerEntry_C_SetLeftText_Params
{
	struct FText                                       LeftText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.UpdateTextWidgets
struct UGameMenuDedicatedServerEntry_C_UpdateTextWidgets_Params
{
};

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.GetMenuFocusWidgetSize
struct UGameMenuDedicatedServerEntry_C_GetMenuFocusWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.LayoutWidget
struct UGameMenuDedicatedServerEntry_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.UpdateColors
struct UGameMenuDedicatedServerEntry_C_UpdateColors_Params
{
};

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.Construct
struct UGameMenuDedicatedServerEntry_C_Construct_Params
{
};

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.SetupStylingData
struct UGameMenuDedicatedServerEntry_C_SetupStylingData_Params
{
};

// Function GameMenuDedicatedServerEntry.GameMenuDedicatedServerEntry_C.ExecuteUbergraph_GameMenuDedicatedServerEntry
struct UGameMenuDedicatedServerEntry_C_ExecuteUbergraph_GameMenuDedicatedServerEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
