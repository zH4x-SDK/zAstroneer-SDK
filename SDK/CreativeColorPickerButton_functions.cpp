
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

// Function CreativeColorPickerButton.CreativeColorPickerButton_C.SetButtonColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            BGColor                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UMaterialInterface*      ButtonMaterial                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeColorPickerButton_C::SetButtonColor(const struct FLinearColor& BGColor, class UMaterialInterface* ButtonMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeColorPickerButton.CreativeColorPickerButton_C.SetButtonColor");

	UCreativeColorPickerButton_C_SetButtonColor_Params params;
	params.BGColor = BGColor;
	params.ButtonMaterial = ButtonMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeColorPickerButton.CreativeColorPickerButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCreativeColorPickerButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeColorPickerButton.CreativeColorPickerButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UCreativeColorPickerButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeColorPickerButton.CreativeColorPickerButton_C.GrantFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCreativeColorPickerButton_C::GrantFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeColorPickerButton.CreativeColorPickerButton_C.GrantFocus");

	UCreativeColorPickerButton_C_GrantFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeColorPickerButton.CreativeColorPickerButton_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UCreativeColorPickerButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeColorPickerButton.CreativeColorPickerButton_C.OnAddedToFocusPath");

	UCreativeColorPickerButton_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeColorPickerButton.CreativeColorPickerButton_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UCreativeColorPickerButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeColorPickerButton.CreativeColorPickerButton_C.OnRemovedFromFocusPath");

	UCreativeColorPickerButton_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeColorPickerButton.CreativeColorPickerButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCreativeColorPickerButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeColorPickerButton.CreativeColorPickerButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UCreativeColorPickerButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeColorPickerButton.CreativeColorPickerButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCreativeColorPickerButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeColorPickerButton.CreativeColorPickerButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");

	UCreativeColorPickerButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeColorPickerButton.CreativeColorPickerButton_C.DisableChildWidgetFocusHighlight
// (Event, Public, BlueprintEvent)

void UCreativeColorPickerButton_C::DisableChildWidgetFocusHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeColorPickerButton.CreativeColorPickerButton_C.DisableChildWidgetFocusHighlight");

	UCreativeColorPickerButton_C_DisableChildWidgetFocusHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeColorPickerButton.CreativeColorPickerButton_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UCreativeColorPickerButton_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeColorPickerButton.CreativeColorPickerButton_C.SetupStylingData");

	UCreativeColorPickerButton_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeColorPickerButton.CreativeColorPickerButton_C.ExecuteUbergraph_CreativeColorPickerButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeColorPickerButton_C::ExecuteUbergraph_CreativeColorPickerButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeColorPickerButton.CreativeColorPickerButton_C.ExecuteUbergraph_CreativeColorPickerButton");

	UCreativeColorPickerButton_C_ExecuteUbergraph_CreativeColorPickerButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeColorPickerButton.CreativeColorPickerButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ClickedColorIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeColorPickerButton_C::OnClicked__DelegateSignature(int ClickedColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeColorPickerButton.CreativeColorPickerButton_C.OnClicked__DelegateSignature");

	UCreativeColorPickerButton_C_OnClicked__DelegateSignature_Params params;
	params.ClickedColorIndex = ClickedColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
