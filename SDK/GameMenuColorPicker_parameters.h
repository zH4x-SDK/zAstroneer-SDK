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

// Function GameMenuColorPicker.GameMenuColorPicker_C.SetIsObfuscated
struct UGameMenuColorPicker_C_SetIsObfuscated_Params
{
	bool                                               IsObfuscated;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuColorPicker.GameMenuColorPicker_C.GetMenuFocusWidgetSize
struct UGameMenuColorPicker_C_GetMenuFocusWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameMenuColorPicker.GameMenuColorPicker_C.LayoutWidget
struct UGameMenuColorPicker_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuColorPicker.GameMenuColorPicker_C.Construct
struct UGameMenuColorPicker_C_Construct_Params
{
};

// Function GameMenuColorPicker.GameMenuColorPicker_C.UpdateColors
struct UGameMenuColorPicker_C_UpdateColors_Params
{
};

// Function GameMenuColorPicker.GameMenuColorPicker_C.SetBadgeVisibility
struct UGameMenuColorPicker_C_SetBadgeVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuColorPicker.GameMenuColorPicker_C.SetupStylingData
struct UGameMenuColorPicker_C_SetupStylingData_Params
{
};

// Function GameMenuColorPicker.GameMenuColorPicker_C.ExecuteUbergraph_GameMenuColorPicker
struct UGameMenuColorPicker_C_ExecuteUbergraph_GameMenuColorPicker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
