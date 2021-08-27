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

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.GetPercent_1
struct UInterMapLoadingSpinner_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Get_LoadingMessage_ColorAndOpacity_1
struct UInterMapLoadingSpinner_C_Get_LoadingMessage_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.GetFadeTargetOpacity
struct UInterMapLoadingSpinner_C_GetFadeTargetOpacity_Params
{
	float                                              Opacity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.GetContentColorAndOpacity_2
struct UInterMapLoadingSpinner_C_GetContentColorAndOpacity_2_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Dismiss
struct UInterMapLoadingSpinner_C_Dismiss_Params
{
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.OnMouseButtonDown_1
struct UInterMapLoadingSpinner_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.GetContentColorAndOpacity_1
struct UInterMapLoadingSpinner_C_GetContentColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.ResetTimer
struct UInterMapLoadingSpinner_C_ResetTimer_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.DoFade
struct UInterMapLoadingSpinner_C_DoFade_Params
{
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Fade
struct UInterMapLoadingSpinner_C_Fade_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InitialDelay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.SetOpacity
struct UInterMapLoadingSpinner_C_SetOpacity_Params
{
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Construct
struct UInterMapLoadingSpinner_C_Construct_Params
{
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.Tick
struct UInterMapLoadingSpinner_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.OnFadeCompleted
struct UInterMapLoadingSpinner_C_OnFadeCompleted_Params
{
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.OnMapLoadStarted
struct UInterMapLoadingSpinner_C_OnMapLoadStarted_Params
{
	struct FString                                     Map;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.ExecuteUbergraph_InterMapLoadingSpinner
struct UInterMapLoadingSpinner_C_ExecuteUbergraph_InterMapLoadingSpinner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterMapLoadingSpinner.InterMapLoadingSpinner_C.DismissClicked__DelegateSignature
struct UInterMapLoadingSpinner_C_DismissClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
