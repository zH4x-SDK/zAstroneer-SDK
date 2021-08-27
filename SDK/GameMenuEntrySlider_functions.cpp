
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

// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SetSliderValueAsNormalizedFloat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NormalizedSliderVal            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DidChange                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::SetSliderValueAsNormalizedFloat(float NormalizedSliderVal, bool* DidChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.SetSliderValueAsNormalizedFloat");

	UGameMenuEntrySlider_C_SetSliderValueAsNormalizedFloat_Params params;
	params.NormalizedSliderVal = NormalizedSliderVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DidChange != nullptr)
		*DidChange = params.DidChange;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SetSliderPositionFromMousePosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MousePos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           SliderValueChanged             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::SetSliderPositionFromMousePosition(const struct FVector2D& MousePos, bool* SliderValueChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.SetSliderPositionFromMousePosition");

	UGameMenuEntrySlider_C_SetSliderPositionFromMousePosition_Params params;
	params.MousePos = MousePos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SliderValueChanged != nullptr)
		*SliderValueChanged = params.SliderValueChanged;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.UpdateSliderBubblePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuEntrySlider_C::UpdateSliderBubblePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.UpdateSliderBubblePosition");

	UGameMenuEntrySlider_C_UpdateSliderBubblePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.GetSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SliderValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::GetSliderValue(float* SliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.GetSliderValue");

	UGameMenuEntrySlider_C_GetSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SliderValue != nullptr)
		*SliderValue = params.SliderValue;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.ConvertValToNormalizedSliderRangeFloat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ValueToConvert                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NormalizedVal                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::ConvertValToNormalizedSliderRangeFloat(float ValueToConvert, float* NormalizedVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.ConvertValToNormalizedSliderRangeFloat");

	UGameMenuEntrySlider_C_ConvertValToNormalizedSliderRangeFloat_Params params;
	params.ValueToConvert = ValueToConvert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalizedVal != nullptr)
		*NormalizedVal = params.NormalizedVal;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.GetSliderValueAsNormalizedFloat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NormalizedSliderVal            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::GetSliderValueAsNormalizedFloat(float* NormalizedSliderVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.GetSliderValueAsNormalizedFloat");

	UGameMenuEntrySlider_C_GetSliderValueAsNormalizedFloat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalizedSliderVal != nullptr)
		*NormalizedSliderVal = params.NormalizedSliderVal;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SetSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SliderValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DidChange                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::SetSliderValue(float SliderValue, bool* DidChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.SetSliderValue");

	UGameMenuEntrySlider_C_SetSliderValue_Params params;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DidChange != nullptr)
		*DidChange = params.DidChange;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuEntrySlider_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.GetMenuFocusWidgetSize");

	UGameMenuEntrySlider_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuEntrySlider_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.LayoutWidget");

	UGameMenuEntrySlider_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditingItemValueIncremeneted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::OnEditingItemValueIncremeneted(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditingItemValueIncremeneted");

	UGameMenuEntrySlider_C_OnEditingItemValueIncremeneted_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditiingItemValueDecremeneted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::OnEditiingItemValueDecremeneted(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditiingItemValueDecremeneted");

	UGameMenuEntrySlider_C_OnEditiingItemValueDecremeneted_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnDragMoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MousePosition                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               MousePosDelta                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusableWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::OnDragMoved(const struct FVector2D& MousePosition, const struct FVector2D& MousePosDelta, class UAstroGameMenuFocusItemWidget* FocusableWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnDragMoved");

	UGameMenuEntrySlider_C_OnDragMoved_Params params;
	params.MousePosition = MousePosition;
	params.MousePosDelta = MousePosDelta;
	params.FocusableWidget = FocusableWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditOrDragCommited
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::OnEditOrDragCommited(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditOrDragCommited");

	UGameMenuEntrySlider_C_OnEditOrDragCommited_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditOrDragStarted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MousePosition                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::OnEditOrDragStarted(const struct FVector2D& MousePosition, class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditOrDragStarted");

	UGameMenuEntrySlider_C_OnEditOrDragStarted_Params params;
	params.MousePosition = MousePosition;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditOrDragCancelled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::OnEditOrDragCancelled(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnEditOrDragCancelled");

	UGameMenuEntrySlider_C_OnEditOrDragCancelled_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuEntrySlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.Construct");

	UGameMenuEntrySlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.UpdateColors
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuEntrySlider_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.UpdateColors");

	UGameMenuEntrySlider_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuEntrySlider_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.SetupStylingData");

	UGameMenuEntrySlider_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.HandleGameMenuResized
// (BlueprintCallable, BlueprintEvent)

void UGameMenuEntrySlider_C::HandleGameMenuResized()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.HandleGameMenuResized");

	UGameMenuEntrySlider_C_HandleGameMenuResized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnDiscreteEditStarted
// (BlueprintCallable, BlueprintEvent)

void UGameMenuEntrySlider_C::OnDiscreteEditStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnDiscreteEditStarted");

	UGameMenuEntrySlider_C_OnDiscreteEditStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnDragEditStarted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MousePosition                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::OnDragEditStarted(const struct FVector2D& MousePosition, class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.OnDragEditStarted");

	UGameMenuEntrySlider_C_OnDragEditStarted_Params params;
	params.MousePosition = MousePosition;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.ExecuteUbergraph_GameMenuEntrySlider
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::ExecuteUbergraph_GameMenuEntrySlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.ExecuteUbergraph_GameMenuEntrySlider");

	UGameMenuEntrySlider_C_ExecuteUbergraph_GameMenuEntrySlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SliderEditValueUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.SliderEditValueUpdated__DelegateSignature");

	UGameMenuEntrySlider_C_SliderEditValueUpdated__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SliderEditCanceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginalSliderValue            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.SliderEditCanceled__DelegateSignature");

	UGameMenuEntrySlider_C_SliderEditCanceled__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;
	params.OriginalSliderValue = OriginalSliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntrySlider.GameMenuEntrySlider_C.SliderEditCompletedWithCommit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntrySlider_C::SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntrySlider.GameMenuEntrySlider_C.SliderEditCompletedWithCommit__DelegateSignature");

	UGameMenuEntrySlider_C_SliderEditCompletedWithCommit__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
