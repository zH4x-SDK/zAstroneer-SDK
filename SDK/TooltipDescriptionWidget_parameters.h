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

// Function TooltipDescriptionWidget.TooltipDescriptionWidget_C.GetContentBounds
struct UTooltipDescriptionWidget_C_GetContentBounds_Params
{
	struct FVector2D                                   ContentBounds;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function TooltipDescriptionWidget.TooltipDescriptionWidget_C.LayoutWidget
struct UTooltipDescriptionWidget_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TooltipDescriptionWidget.TooltipDescriptionWidget_C.SetDescriptionText
struct UTooltipDescriptionWidget_C_SetDescriptionText_Params
{
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
