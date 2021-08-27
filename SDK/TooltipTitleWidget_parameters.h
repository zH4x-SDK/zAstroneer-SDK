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

// Function TooltipTitleWidget.TooltipTitleWidget_C.LayoutWidget
struct UTooltipTitleWidget_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TooltipTitleWidget.TooltipTitleWidget_C.GetContentSize
struct UTooltipTitleWidget_C_GetContentSize_Params
{
	struct FVector2D                                   ContentBounds;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function TooltipTitleWidget.TooltipTitleWidget_C.SetTitleWidgetDrawData
struct UTooltipTitleWidget_C_SetTitleWidgetDrawData_Params
{
	struct FText                                       NewTitleText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       NewSubtitleText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
