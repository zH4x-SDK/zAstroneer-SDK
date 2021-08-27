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

// Function GameMenuSectionTitle.GameMenuSectionTitle_C.GetMenuFocusWidgetSize
struct UGameMenuSectionTitle_C_GetMenuFocusWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameMenuSectionTitle.GameMenuSectionTitle_C.LayoutWidget
struct UGameMenuSectionTitle_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuSectionTitle.GameMenuSectionTitle_C.SetupStylingData
struct UGameMenuSectionTitle_C_SetupStylingData_Params
{
};

// Function GameMenuSectionTitle.GameMenuSectionTitle_C.ExecuteUbergraph_GameMenuSectionTitle
struct UGameMenuSectionTitle_C_ExecuteUbergraph_GameMenuSectionTitle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
