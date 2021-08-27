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

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.Load Filters
struct UCameraPhotoWidget_Default_C_Load_Filters_Params
{
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.Dismiss
struct UCameraPhotoWidget_Default_C_Dismiss_Params
{
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.OnKeyDown
struct UCameraPhotoWidget_Default_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.NavigateTo
struct UCameraPhotoWidget_Default_C_NavigateTo_Params
{
	int                                                Screen_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.NavigatePrevious
struct UCameraPhotoWidget_Default_C_NavigatePrevious_Params
{
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.NavigateNext
struct UCameraPhotoWidget_Default_C_NavigateNext_Params
{
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.UpdateNavButtons
struct UCameraPhotoWidget_Default_C_UpdateNavButtons_Params
{
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.Construct
struct UCameraPhotoWidget_Default_C_Construct_Params
{
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UCameraPhotoWidget_Default_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.HandlePipSelectionChanged
struct UCameraPhotoWidget_Default_C_HandlePipSelectionChanged_Params
{
	int                                                SelectedPipIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.BndEvt__CycleRightButton_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature
struct UCameraPhotoWidget_Default_C_BndEvt__CycleRightButton_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.BndEvt__CycleLeftButton_K2Node_ComponentBoundEvent_197_OnButtonClickedEvent__DelegateSignature
struct UCameraPhotoWidget_Default_C_BndEvt__CycleLeftButton_K2Node_ComponentBoundEvent_197_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.HandleInputDeviceChanged
struct UCameraPhotoWidget_Default_C_HandleInputDeviceChanged_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.ExecuteUbergraph_CameraPhotoWidget_Default
struct UCameraPhotoWidget_Default_C_ExecuteUbergraph_CameraPhotoWidget_Default_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.OnHide__DelegateSignature
struct UCameraPhotoWidget_Default_C_OnHide__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
