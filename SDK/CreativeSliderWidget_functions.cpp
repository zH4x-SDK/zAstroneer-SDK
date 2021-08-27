
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CreativeSliderWidget.CreativeSliderWidget_C.On_bg_image_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCreativeSliderWidget_C::On_bg_image_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.On_bg_image_MouseButtonDown_1");

	UCreativeSliderWidget_C_On_bg_image_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCreativeSliderWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.OnMouseButtonDown");

	UCreativeSliderWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCreativeSliderWidget_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.OnMouseMove");

	UCreativeSliderWidget_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.SetSpinnerValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSliderWidget_C::SetSpinnerValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.SetSpinnerValue");

	UCreativeSliderWidget_C_SetSpinnerValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.SetupColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasFocus                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSliderWidget_C::SetupColors(bool HasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.SetupColors");

	UCreativeSliderWidget_C_SetupColors_Params params;
	params.HasFocus = HasFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.SetSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSliderWidget_C::SetSliderValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.SetSliderValue");

	UCreativeSliderWidget_C_SetSliderValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeSliderWidget_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.LayoutWidget");

	UCreativeSliderWidget_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.SetLeftLabelText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   LeftLabelText                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UCreativeSliderWidget_C::SetLeftLabelText(const struct FText& LeftLabelText)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.SetLeftLabelText");

	UCreativeSliderWidget_C_SetLeftLabelText_Params params;
	params.LeftLabelText = LeftLabelText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UCreativeSliderWidget_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.SetupStylingData");

	UCreativeSliderWidget_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSliderWidget_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature");

	UCreativeSliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_78_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UCreativeSliderWidget_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_78_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_78_OnControllerCaptureBeginEvent__DelegateSignature");

	UCreativeSliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_78_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UCreativeSliderWidget_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnControllerCaptureEndEvent__DelegateSignature");

	UCreativeSliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UCreativeSliderWidget_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature");

	UCreativeSliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UCreativeSliderWidget_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature");

	UCreativeSliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UCreativeSliderWidget_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.OnAddedToFocusPath");

	UCreativeSliderWidget_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UCreativeSliderWidget_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.OnRemovedFromFocusPath");

	UCreativeSliderWidget_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.GrantFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCreativeSliderWidget_C::GrantFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.GrantFocus");

	UCreativeSliderWidget_C_GrantFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCreativeSliderWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.OnMouseEnter");

	UCreativeSliderWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCreativeSliderWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.OnMouseLeave");

	UCreativeSliderWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.DisableChildWidgetFocusHighlight
// (Event, Public, BlueprintEvent)

void UCreativeSliderWidget_C::DisableChildWidgetFocusHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.DisableChildWidgetFocusHighlight");

	UCreativeSliderWidget_C_DisableChildWidgetFocusHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.ExecuteUbergraph_CreativeSliderWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSliderWidget_C::ExecuteUbergraph_CreativeSliderWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.ExecuteUbergraph_CreativeSliderWidget");

	UCreativeSliderWidget_C_ExecuteUbergraph_CreativeSliderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.OnSpinnerValueCommitted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSliderWidget_C::OnSpinnerValueCommitted__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.OnSpinnerValueCommitted__DelegateSignature");

	UCreativeSliderWidget_C_OnSpinnerValueCommitted__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeSliderWidget.CreativeSliderWidget_C.OnSliderValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSliderWidget_C::OnSliderValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeSliderWidget.CreativeSliderWidget_C.OnSliderValueChanged__DelegateSignature");

	UCreativeSliderWidget_C_OnSliderValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
