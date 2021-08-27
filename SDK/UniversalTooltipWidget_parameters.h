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

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.CalculateContentAreaSize
struct UUniversalTooltipWidget_C_CalculateContentAreaSize_Params
{
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.LayoutTitleWidget
struct UUniversalTooltipWidget_C_LayoutTitleWidget_Params
{
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.GetUICardRenderSize
struct UUniversalTooltipWidget_C_GetUICardRenderSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.GetUICardScreenPosOffset
struct UUniversalTooltipWidget_C_GetUICardScreenPosOffset_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.AnimateDetails
struct UUniversalTooltipWidget_C_AnimateDetails_Params
{
	bool                                               Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.AnimateBadge
struct UUniversalTooltipWidget_C_AnimateBadge_Params
{
	bool                                               Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.CalculateTooltipRenderSize
struct UUniversalTooltipWidget_C_CalculateTooltipRenderSize_Params
{
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.LayoutWidget
struct UUniversalTooltipWidget_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.Construct
struct UUniversalTooltipWidget_C_Construct_Params
{
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.UpdateTooltipAnimation
struct UUniversalTooltipWidget_C_UpdateTooltipAnimation_Params
{
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.OnStateChanged
struct UUniversalTooltipWidget_C_OnStateChanged_Params
{
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.OnAnimationChanged
struct UUniversalTooltipWidget_C_OnAnimationChanged_Params
{
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.UpdateTooltipDataForInteractionPromptsWithoutChangingLayout
struct UUniversalTooltipWidget_C_UpdateTooltipDataForInteractionPromptsWithoutChangingLayout_Params
{
	struct FTooltipWidgetDisplayData                   NewTooltipWidgetDisplayData;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.InputStarted
struct UUniversalTooltipWidget_C_InputStarted_Params
{
	struct FName                                       ActionOrAxisName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.InputComplete
struct UUniversalTooltipWidget_C_InputComplete_Params
{
	struct FName                                       ActionOrAxisName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InputSucceeded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.OnTextContentChanged
struct UUniversalTooltipWidget_C_OnTextContentChanged_Params
{
};

// Function UniversalTooltipWidget.UniversalTooltipWidget_C.ExecuteUbergraph_UniversalTooltipWidget
struct UUniversalTooltipWidget_C_ExecuteUbergraph_UniversalTooltipWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
