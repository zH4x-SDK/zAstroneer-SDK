
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

// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.Load Filters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCameraPhotoWidget_Default_C::Load_Filters()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.Load Filters");

	UCameraPhotoWidget_Default_C_Load_Filters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.Dismiss
// (Public, BlueprintCallable, BlueprintEvent)

void UCameraPhotoWidget_Default_C::Dismiss()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.Dismiss");

	UCameraPhotoWidget_Default_C_Dismiss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCameraPhotoWidget_Default_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.OnKeyDown");

	UCameraPhotoWidget_Default_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.NavigateTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Screen_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraPhotoWidget_Default_C::NavigateTo(int Screen_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.NavigateTo");

	UCameraPhotoWidget_Default_C_NavigateTo_Params params;
	params.Screen_Index = Screen_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.NavigatePrevious
// (Public, BlueprintCallable, BlueprintEvent)

void UCameraPhotoWidget_Default_C::NavigatePrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.NavigatePrevious");

	UCameraPhotoWidget_Default_C_NavigatePrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.NavigateNext
// (Public, BlueprintCallable, BlueprintEvent)

void UCameraPhotoWidget_Default_C::NavigateNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.NavigateNext");

	UCameraPhotoWidget_Default_C_NavigateNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.UpdateNavButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UCameraPhotoWidget_Default_C::UpdateNavButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.UpdateNavButtons");

	UCameraPhotoWidget_Default_C_UpdateNavButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCameraPhotoWidget_Default_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.Construct");

	UCameraPhotoWidget_Default_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCameraPhotoWidget_Default_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UCameraPhotoWidget_Default_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.HandlePipSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedPipIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraPhotoWidget_Default_C::HandlePipSelectionChanged(int SelectedPipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.HandlePipSelectionChanged");

	UCameraPhotoWidget_Default_C_HandlePipSelectionChanged_Params params;
	params.SelectedPipIndex = SelectedPipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.BndEvt__CycleRightButton_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCameraPhotoWidget_Default_C::BndEvt__CycleRightButton_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.BndEvt__CycleRightButton_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature");

	UCameraPhotoWidget_Default_C_BndEvt__CycleRightButton_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.BndEvt__CycleLeftButton_K2Node_ComponentBoundEvent_197_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCameraPhotoWidget_Default_C::BndEvt__CycleLeftButton_K2Node_ComponentBoundEvent_197_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.BndEvt__CycleLeftButton_K2Node_ComponentBoundEvent_197_OnButtonClickedEvent__DelegateSignature");

	UCameraPhotoWidget_Default_C_BndEvt__CycleLeftButton_K2Node_ComponentBoundEvent_197_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.HandleInputDeviceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraPhotoWidget_Default_C::HandleInputDeviceChanged(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.HandleInputDeviceChanged");

	UCameraPhotoWidget_Default_C_HandleInputDeviceChanged_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.ExecuteUbergraph_CameraPhotoWidget_Default
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCameraPhotoWidget_Default_C::ExecuteUbergraph_CameraPhotoWidget_Default(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.ExecuteUbergraph_CameraPhotoWidget_Default");

	UCameraPhotoWidget_Default_C_ExecuteUbergraph_CameraPhotoWidget_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.OnHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCameraPhotoWidget_Default_C::OnHide__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraPhotoWidget_Default.CameraPhotoWidget_Default_C.OnHide__DelegateSignature");

	UCameraPhotoWidget_Default_C_OnHide__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
