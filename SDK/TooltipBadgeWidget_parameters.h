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

// Function TooltipBadgeWidget.TooltipBadgeWidget_C.GetBadgeSizeRatioComparedToDefaultSize
struct UTooltipBadgeWidget_C_GetBadgeSizeRatioComparedToDefaultSize_Params
{
	float                                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipBadgeWidget.TooltipBadgeWidget_C.GetWidgetSize
struct UTooltipBadgeWidget_C_GetWidgetSize_Params
{
	struct FVector2D                                   OutSize;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function TooltipBadgeWidget.TooltipBadgeWidget_C.LayoutWidget
struct UTooltipBadgeWidget_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
