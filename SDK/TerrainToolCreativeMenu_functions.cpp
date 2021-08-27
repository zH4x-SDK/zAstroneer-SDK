
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

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTerrainToolCreativeMenu_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnMouseMove");

	UTerrainToolCreativeMenu_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.PrepareForRemoval
// (Public, BlueprintCallable, BlueprintEvent)

void UTerrainToolCreativeMenu_C::PrepareForRemoval()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.PrepareForRemoval");

	UTerrainToolCreativeMenu_C_PrepareForRemoval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTerrainToolCreativeMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnKeyDown");

	UTerrainToolCreativeMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.On_MenuWrapper_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTerrainToolCreativeMenu_C::On_MenuWrapper_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.On_MenuWrapper_MouseButtonDown_1");

	UTerrainToolCreativeMenu_C_On_MenuWrapper_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetNormalizedToolRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NormalizedToolRange            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::GetNormalizedToolRange(float* NormalizedToolRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetNormalizedToolRange");

	UTerrainToolCreativeMenu_C_GetNormalizedToolRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalizedToolRange != nullptr)
		*NormalizedToolRange = params.NormalizedToolRange;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDeformToolRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ToolRange                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::GetDeformToolRange(float* ToolRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDeformToolRange");

	UTerrainToolCreativeMenu_C_GetDeformToolRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ToolRange != nullptr)
		*ToolRange = params.ToolRange;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetMenuSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               DisplaySize                    (Parm, OutParm, IsPlainOldData)

void UTerrainToolCreativeMenu_C::GetMenuSize(struct FVector2D* DisplaySize)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetMenuSize");

	UTerrainToolCreativeMenu_C_GetMenuSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplaySize != nullptr)
		*DisplaySize = params.DisplaySize;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.UpdateActiveColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTerrainToolCreativeMenu_C::UpdateActiveColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.UpdateActiveColor");

	UTerrainToolCreativeMenu_C_UpdateActiveColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDefaultFocusWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAstroSlateFocusWidget*  DefaultFocusWidget             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::GetDefaultFocusWidget(class UAstroSlateFocusWidget** DefaultFocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDefaultFocusWidget");

	UTerrainToolCreativeMenu_C_GetDefaultFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultFocusWidget != nullptr)
		*DefaultFocusWidget = params.DefaultFocusWidget;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTerrainToolCreativeMenu_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.LayoutWidget");

	UTerrainToolCreativeMenu_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetNormalizedToolSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NormalizedSize                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::GetNormalizedToolSize(float* NormalizedSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetNormalizedToolSize");

	UTerrainToolCreativeMenu_C_GetNormalizedToolSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalizedSize != nullptr)
		*NormalizedSize = params.NormalizedSize;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetNormalizedToolStrength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NormalizedStrength             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::GetNormalizedToolStrength(float* NormalizedStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetNormalizedToolStrength");

	UTerrainToolCreativeMenu_C_GetNormalizedToolStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalizedStrength != nullptr)
		*NormalizedStrength = params.NormalizedStrength;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDeformToolStrength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeformToolStrength             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::GetDeformToolStrength(float* DeformToolStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDeformToolStrength");

	UTerrainToolCreativeMenu_C_GetDeformToolStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeformToolStrength != nullptr)
		*DeformToolStrength = params.DeformToolStrength;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDeformToolSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTerrainToolCreativeMenu_C::GetDeformToolSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDeformToolSize");

	UTerrainToolCreativeMenu_C_GetDeformToolSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDeformTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ADeformTool*             DeformTool                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::GetDeformTool(class ADeformTool** DeformTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDeformTool");

	UTerrainToolCreativeMenu_C_GetDeformTool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeformTool != nullptr)
		*DeformTool = params.DeformTool;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__ToolStrengthSlider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::BndEvt__ToolStrengthSlider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__ToolStrengthSlider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature");

	UTerrainToolCreativeMenu_C_BndEvt__ToolStrengthSlider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__ToolSizeSlider_K2Node_ComponentBoundEvent_1_OnSliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::BndEvt__ToolSizeSlider_K2Node_ComponentBoundEvent_1_OnSliderValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__ToolSizeSlider_K2Node_ComponentBoundEvent_1_OnSliderValueChanged__DelegateSignature");

	UTerrainToolCreativeMenu_C_BndEvt__ToolSizeSlider_K2Node_ComponentBoundEvent_1_OnSliderValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__IgnoreHardnessCheckbox_K2Node_ComponentBoundEvent_2_OnCheckedChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::BndEvt__IgnoreHardnessCheckbox_K2Node_ComponentBoundEvent_2_OnCheckedChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__IgnoreHardnessCheckbox_K2Node_ComponentBoundEvent_2_OnCheckedChanged__DelegateSignature");

	UTerrainToolCreativeMenu_C_BndEvt__IgnoreHardnessCheckbox_K2Node_ComponentBoundEvent_2_OnCheckedChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTerrainToolCreativeMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.Construct");

	UTerrainToolCreativeMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTerrainToolCreativeMenu_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.SetupStylingData");

	UTerrainToolCreativeMenu_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__ToolRangeSlider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::BndEvt__ToolRangeSlider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__ToolRangeSlider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature");

	UTerrainToolCreativeMenu_C_BndEvt__ToolRangeSlider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.HandleActiveTerrainColorChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PickedWithEyedropperTool       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::HandleActiveTerrainColorChanged(bool PickedWithEyedropperTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.HandleActiveTerrainColorChanged");

	UTerrainToolCreativeMenu_C_HandleActiveTerrainColorChanged_Params params;
	params.PickedWithEyedropperTool = PickedWithEyedropperTool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UTerrainToolCreativeMenu_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnRemovedFromFocusPath");

	UTerrainToolCreativeMenu_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnColorAndTypePicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            SelectedColor                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            SelectedColorIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPaintIndexType                PaintType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::OnColorAndTypePicked(const struct FLinearColor& SelectedColor, int SelectedColorIndex, EPaintIndexType PaintType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnColorAndTypePicked");

	UTerrainToolCreativeMenu_C_OnColorAndTypePicked_Params params;
	params.SelectedColor = SelectedColor;
	params.SelectedColorIndex = SelectedColorIndex;
	params.PaintType = PaintType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__MenuBackingButton_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTerrainToolCreativeMenu_C::BndEvt__MenuBackingButton_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__MenuBackingButton_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature");

	UTerrainToolCreativeMenu_C_BndEvt__MenuBackingButton_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__ClickOutOfMenuButton_K2Node_ComponentBoundEvent_122_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UTerrainToolCreativeMenu_C::BndEvt__ClickOutOfMenuButton_K2Node_ComponentBoundEvent_122_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__ClickOutOfMenuButton_K2Node_ComponentBoundEvent_122_OnButtonPressedEvent__DelegateSignature");

	UTerrainToolCreativeMenu_C_BndEvt__ClickOutOfMenuButton_K2Node_ComponentBoundEvent_122_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.ExecuteUbergraph_TerrainToolCreativeMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTerrainToolCreativeMenu_C::ExecuteUbergraph_TerrainToolCreativeMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.ExecuteUbergraph_TerrainToolCreativeMenu");

	UTerrainToolCreativeMenu_C_ExecuteUbergraph_TerrainToolCreativeMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnCreativeMenuCloseShortcutPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTerrainToolCreativeMenu_C::OnCreativeMenuCloseShortcutPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnCreativeMenuCloseShortcutPressed__DelegateSignature");

	UTerrainToolCreativeMenu_C_OnCreativeMenuCloseShortcutPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
