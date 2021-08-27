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

// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.CreateDescriptionWidget
struct UTooltipContentAreaWidget_C_CreateDescriptionWidget_Params
{
};

// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.OnTextContentChanged
struct UTooltipContentAreaWidget_C_OnTextContentChanged_Params
{
	struct FTooltipWidgetDisplayData                   NewDisplayData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.UpdateTooltipDataForInteractionPromptsWithoutChangingLayout
struct UTooltipContentAreaWidget_C_UpdateTooltipDataForInteractionPromptsWithoutChangingLayout_Params
{
	struct FTooltipWidgetDisplayData                   DisplayData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.InteractionPromptInputComplete
struct UTooltipContentAreaWidget_C_InteractionPromptInputComplete_Params
{
	class UTooltipInteractionPromptWidget_C*           InteractionPrompt;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InputSucceeded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InputHandled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.InteractionPromptInputStarted
struct UTooltipContentAreaWidget_C_InteractionPromptInputStarted_Params
{
	class UTooltipInteractionPromptWidget_C*           InteractionPrompt;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InputHandled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.LayoutWidget
struct UTooltipContentAreaWidget_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.GetContentSize
struct UTooltipContentAreaWidget_C_GetContentSize_Params
{
	struct FVector2D                                   Size;                                                     // (Parm, OutParm, IsPlainOldData)
};

// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.InputStarted
struct UTooltipContentAreaWidget_C_InputStarted_Params
{
	struct FName                                       ActionOrAxisName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.InputComplete
struct UTooltipContentAreaWidget_C_InputComplete_Params
{
	struct FName                                       ActionOrAxisName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InputSucceeded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipContentAreaWidget.TooltipContentAreaWidget_C.ExecuteUbergraph_TooltipContentAreaWidget
struct UTooltipContentAreaWidget_C_ExecuteUbergraph_TooltipContentAreaWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
