
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

// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstropediaTutorialCardCarousel_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.LayoutWidget");

	UAstropediaTutorialCardCarousel_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAstropediaTutorialCardCarousel_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.OnMouseMove");

	UAstropediaTutorialCardCarousel_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.UpdateCarouselTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAstropediaTutorialCardCarousel_C::UpdateCarouselTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.UpdateCarouselTitle");

	UAstropediaTutorialCardCarousel_C_UpdateCarouselTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.UpdateTutorialPageWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstropediaTutorialCardCarousel_C::UpdateTutorialPageWidgets(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.UpdateTutorialPageWidgets");

	UAstropediaTutorialCardCarousel_C_UpdateTutorialPageWidgets_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.NavigateTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScreenIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstropediaTutorialCardCarousel_C::NavigateTo(int ScreenIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.NavigateTo");

	UAstropediaTutorialCardCarousel_C_NavigateTo_Params params;
	params.ScreenIndex = ScreenIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.DismissHelpMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UAstropediaTutorialCardCarousel_C::DismissHelpMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.DismissHelpMenu");

	UAstropediaTutorialCardCarousel_C_DismissHelpMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.UpdateNavButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UAstropediaTutorialCardCarousel_C::UpdateNavButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.UpdateNavButtons");

	UAstropediaTutorialCardCarousel_C_UpdateNavButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.NavigateNext
// (Public, BlueprintCallable, BlueprintEvent)

void UAstropediaTutorialCardCarousel_C::NavigateNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.NavigateNext");

	UAstropediaTutorialCardCarousel_C_NavigateNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.NavigatePrevious
// (Public, BlueprintCallable, BlueprintEvent)

void UAstropediaTutorialCardCarousel_C::NavigatePrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.NavigatePrevious");

	UAstropediaTutorialCardCarousel_C_NavigatePrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAstropediaTutorialCardCarousel_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.OnKeyDown");

	UAstropediaTutorialCardCarousel_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAstropediaTutorialCardCarousel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.Construct");

	UAstropediaTutorialCardCarousel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAstropediaTutorialCardCarousel_C::BndEvt__Button_101_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");

	UAstropediaTutorialCardCarousel_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.BndEvt__ButtonLeftNav_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAstropediaTutorialCardCarousel_C::BndEvt__ButtonLeftNav_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.BndEvt__ButtonLeftNav_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature");

	UAstropediaTutorialCardCarousel_C_BndEvt__ButtonLeftNav_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.BndEvt__ButtonRightNav_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAstropediaTutorialCardCarousel_C::BndEvt__ButtonRightNav_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.BndEvt__ButtonRightNav_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature");

	UAstropediaTutorialCardCarousel_C_BndEvt__ButtonRightNav_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.HandleInputDeviceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstropediaTutorialCardCarousel_C::HandleInputDeviceChanged(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.HandleInputDeviceChanged");

	UAstropediaTutorialCardCarousel_C_HandleInputDeviceChanged_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedPipIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstropediaTutorialCardCarousel_C::CustomEvent_1(int SelectedPipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.CustomEvent_1");

	UAstropediaTutorialCardCarousel_C_CustomEvent_1_Params params;
	params.SelectedPipIndex = SelectedPipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.ExecuteUbergraph_AstropediaTutorialCardCarousel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstropediaTutorialCardCarousel_C::ExecuteUbergraph_AstropediaTutorialCardCarousel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.ExecuteUbergraph_AstropediaTutorialCardCarousel");

	UAstropediaTutorialCardCarousel_C_ExecuteUbergraph_AstropediaTutorialCardCarousel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.OnHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAstropediaTutorialCardCarousel_C::OnHide__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstropediaTutorialCardCarousel.AstropediaTutorialCardCarousel_C.OnHide__DelegateSignature");

	UAstropediaTutorialCardCarousel_C_OnHide__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
