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

// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.UpdateInteractionDataWithoutChangingLayout
struct UTooltipInteractionPromptWidget_C_UpdateInteractionDataWithoutChangingLayout_Params
{
	struct FInteractionPromptEntryData                 InteractionData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.GetShowInputModifier
struct UTooltipInteractionPromptWidget_C_GetShowInputModifier_Params
{
	bool                                               ShowModifier;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.UpdateHoldAnimation
struct UTooltipInteractionPromptWidget_C_UpdateHoldAnimation_Params
{
	float                                              HoldProgress;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.LayoutWidget
struct UTooltipInteractionPromptWidget_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.GetContentBounds
struct UTooltipInteractionPromptWidget_C_GetContentBounds_Params
{
	struct FVector2D                                   ContentBounds;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.Construct
struct UTooltipInteractionPromptWidget_C_Construct_Params
{
};

// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.OnSynchronizeProperties
struct UTooltipInteractionPromptWidget_C_OnSynchronizeProperties_Params
{
};

// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.HandleInputDeviceChanged
struct UTooltipInteractionPromptWidget_C_HandleInputDeviceChanged_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.Destruct
struct UTooltipInteractionPromptWidget_C_Destruct_Params
{
};

// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.InputStarted
struct UTooltipInteractionPromptWidget_C_InputStarted_Params
{
	struct FName                                       ActionOrAxisName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.InputComplete
struct UTooltipInteractionPromptWidget_C_InputComplete_Params
{
	struct FName                                       ActionOrAxisName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InputSucceeded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TooltipInteractionPromptWidget.TooltipInteractionPromptWidget_C.ExecuteUbergraph_TooltipInteractionPromptWidget
struct UTooltipInteractionPromptWidget_C_ExecuteUbergraph_TooltipInteractionPromptWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
