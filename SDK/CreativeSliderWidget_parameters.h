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

// Function CreativeSliderWidget.CreativeSliderWidget_C.On_bg_image_MouseButtonDown_1
struct UCreativeSliderWidget_C_On_bg_image_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.OnMouseButtonDown
struct UCreativeSliderWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.OnMouseMove
struct UCreativeSliderWidget_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.SetSpinnerValue
struct UCreativeSliderWidget_C_SetSpinnerValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.SetupColors
struct UCreativeSliderWidget_C_SetupColors_Params
{
	bool                                               HasFocus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.SetSliderValue
struct UCreativeSliderWidget_C_SetSliderValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.LayoutWidget
struct UCreativeSliderWidget_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.SetLeftLabelText
struct UCreativeSliderWidget_C_SetLeftLabelText_Params
{
	struct FText                                       LeftLabelText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.SetupStylingData
struct UCreativeSliderWidget_C_SetupStylingData_Params
{
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
struct UCreativeSliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_78_OnControllerCaptureBeginEvent__DelegateSignature
struct UCreativeSliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_78_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnControllerCaptureEndEvent__DelegateSignature
struct UCreativeSliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature
struct UCreativeSliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
struct UCreativeSliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.OnAddedToFocusPath
struct UCreativeSliderWidget_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.OnRemovedFromFocusPath
struct UCreativeSliderWidget_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.GrantFocus
struct UCreativeSliderWidget_C_GrantFocus_Params
{
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.OnMouseEnter
struct UCreativeSliderWidget_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.OnMouseLeave
struct UCreativeSliderWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.DisableChildWidgetFocusHighlight
struct UCreativeSliderWidget_C_DisableChildWidgetFocusHighlight_Params
{
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.ExecuteUbergraph_CreativeSliderWidget
struct UCreativeSliderWidget_C_ExecuteUbergraph_CreativeSliderWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.OnSpinnerValueCommitted__DelegateSignature
struct UCreativeSliderWidget_C_OnSpinnerValueCommitted__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeSliderWidget.CreativeSliderWidget_C.OnSliderValueChanged__DelegateSignature
struct UCreativeSliderWidget_C_OnSliderValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
