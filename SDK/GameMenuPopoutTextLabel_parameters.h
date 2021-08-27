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

// Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.GetMenuFocusWidgetSize
struct UGameMenuPopoutTextLabel_C_GetMenuFocusWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.UpdateText
struct UGameMenuPopoutTextLabel_C_UpdateText_Params
{
};

// Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.UpdateColors
struct UGameMenuPopoutTextLabel_C_UpdateColors_Params
{
};

// Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.LayoutWidget
struct UGameMenuPopoutTextLabel_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.SetupStylingData
struct UGameMenuPopoutTextLabel_C_SetupStylingData_Params
{
};

// Function GameMenuPopoutTextLabel.GameMenuPopoutTextLabel_C.ExecuteUbergraph_GameMenuPopoutTextLabel
struct UGameMenuPopoutTextLabel_C_ExecuteUbergraph_GameMenuPopoutTextLabel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
