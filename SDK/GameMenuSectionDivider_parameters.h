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

// Function GameMenuSectionDivider.GameMenuSectionDivider_C.GetMenuFocusWidgetSize
struct UGameMenuSectionDivider_C_GetMenuFocusWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameMenuSectionDivider.GameMenuSectionDivider_C.LayoutWidget
struct UGameMenuSectionDivider_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuSectionDivider.GameMenuSectionDivider_C.SetupStylingData
struct UGameMenuSectionDivider_C_SetupStylingData_Params
{
};

// Function GameMenuSectionDivider.GameMenuSectionDivider_C.ExecuteUbergraph_GameMenuSectionDivider
struct UGameMenuSectionDivider_C_ExecuteUbergraph_GameMenuSectionDivider_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
