
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

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.SetIsChecked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewIsChecked                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           checked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreativeCheckboxWidget_C::SetIsChecked(bool NewIsChecked, bool* checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.SetIsChecked");

	UCreativeCheckboxWidget_C_SetIsChecked_Params params;
	params.NewIsChecked = NewIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (checked != nullptr)
		*checked = params.checked;
}


// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.SetupColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasFocus                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeCheckboxWidget_C::SetupColors(bool HasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.SetupColors");

	UCreativeCheckboxWidget_C_SetupColors_Params params;
	params.HasFocus = HasFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeCheckboxWidget_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.LayoutWidget");

	UCreativeCheckboxWidget_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.SetLabelText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   LabelText                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCreativeCheckboxWidget_C::SetLabelText(const struct FText& LabelText)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.SetLabelText");

	UCreativeCheckboxWidget_C_SetLabelText_Params params;
	params.LabelText = LabelText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UCreativeCheckboxWidget_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.SetupStylingData");

	UCreativeCheckboxWidget_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UCreativeCheckboxWidget_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.OnAddedToFocusPath");

	UCreativeCheckboxWidget_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UCreativeCheckboxWidget_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.OnRemovedFromFocusPath");

	UCreativeCheckboxWidget_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCreativeCheckboxWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UCreativeCheckboxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.GrantFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCreativeCheckboxWidget_C::GrantFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.GrantFocus");

	UCreativeCheckboxWidget_C_GrantFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCreativeCheckboxWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UCreativeCheckboxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCreativeCheckboxWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UCreativeCheckboxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.DisableChildWidgetFocusHighlight
// (Event, Public, BlueprintEvent)

void UCreativeCheckboxWidget_C::DisableChildWidgetFocusHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.DisableChildWidgetFocusHighlight");

	UCreativeCheckboxWidget_C_DisableChildWidgetFocusHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.ExecuteUbergraph_CreativeCheckboxWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeCheckboxWidget_C::ExecuteUbergraph_CreativeCheckboxWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.ExecuteUbergraph_CreativeCheckboxWidget");

	UCreativeCheckboxWidget_C_ExecuteUbergraph_CreativeCheckboxWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.OnCheckedChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeCheckboxWidget_C::OnCheckedChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.OnCheckedChanged__DelegateSignature");

	UCreativeCheckboxWidget_C_OnCheckedChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
