
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

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.IsOnPlanet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOnPlanet                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::IsOnPlanet(bool* IsOnPlanet)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.IsOnPlanet");

	UGameMenuCreativeModeOptions_C_IsOnPlanet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOnPlanet != nullptr)
		*IsOnPlanet = params.IsOnPlanet;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.GetNormalizedSolarTimeMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NormalizedDayLength            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::GetNormalizedSolarTimeMultiplier(float* NormalizedDayLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.GetNormalizedSolarTimeMultiplier");

	UGameMenuCreativeModeOptions_C_GetNormalizedSolarTimeMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalizedDayLength != nullptr)
		*NormalizedDayLength = params.NormalizedDayLength;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.SetNormalizedSolarTimeMultiplier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NormalizedDayLength            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::SetNormalizedSolarTimeMultiplier(float NormalizedDayLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.SetNormalizedSolarTimeMultiplier");

	UGameMenuCreativeModeOptions_C_SetNormalizedSolarTimeMultiplier_Params params;
	params.NormalizedDayLength = NormalizedDayLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.GetNormalizedSunOrbit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          normalizedSunOrbit             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::GetNormalizedSunOrbit(float* normalizedSunOrbit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.GetNormalizedSunOrbit");

	UGameMenuCreativeModeOptions_C_GetNormalizedSunOrbit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (normalizedSunOrbit != nullptr)
		*normalizedSunOrbit = params.normalizedSunOrbit;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.SetNormalizedSunOrbit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          normalizedSunOrbit             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::SetNormalizedSunOrbit(float normalizedSunOrbit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.SetNormalizedSunOrbit");

	UGameMenuCreativeModeOptions_C_SetNormalizedSunOrbit_Params params;
	params.normalizedSunOrbit = normalizedSunOrbit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.GetNormalizedTimeOfDay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NormalizedTimeOfDay            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::GetNormalizedTimeOfDay(float* NormalizedTimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.GetNormalizedTimeOfDay");

	UGameMenuCreativeModeOptions_C_GetNormalizedTimeOfDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalizedTimeOfDay != nullptr)
		*NormalizedTimeOfDay = params.NormalizedTimeOfDay;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.SetNormalizedTimeOfDay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          dayTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::SetNormalizedTimeOfDay(float dayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.SetNormalizedTimeOfDay");

	UGameMenuCreativeModeOptions_C_SetNormalizedTimeOfDay_Params params;
	params.dayTime = dayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuCreativeModeOptions_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.LayoutWidget");

	UGameMenuCreativeModeOptions_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__GameMenuEntryCheckbox_K2Node_ComponentBoundEvent_93_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__GameMenuEntryCheckbox_K2Node_ComponentBoundEvent_93_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__GameMenuEntryCheckbox_K2Node_ComponentBoundEvent_93_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__GameMenuEntryCheckbox_K2Node_ComponentBoundEvent_93_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__FreeFuelCreative_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__FreeFuelCreative_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__FreeFuelCreative_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__FreeFuelCreative_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__InvincibleCheckbox_K2Node_ComponentBoundEvent_2_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__InvincibleCheckbox_K2Node_ComponentBoundEvent_2_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__InvincibleCheckbox_K2Node_ComponentBoundEvent_2_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__InvincibleCheckbox_K2Node_ComponentBoundEvent_2_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__InvisibleToHazardsCheckbox_K2Node_ComponentBoundEvent_3_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__InvisibleToHazardsCheckbox_K2Node_ComponentBoundEvent_3_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__InvisibleToHazardsCheckbox_K2Node_ComponentBoundEvent_3_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__InvisibleToHazardsCheckbox_K2Node_ComponentBoundEvent_3_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__UnlimitedBackpackPowerCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__UnlimitedBackpackPowerCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__UnlimitedBackpackPowerCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__UnlimitedBackpackPowerCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__RemoveDecoratorsWhilePaintingCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__RemoveDecoratorsWhilePaintingCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__RemoveDecoratorsWhilePaintingCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__RemoveDecoratorsWhilePaintingCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__DoNotCollectResourcesCheckbox_K2Node_ComponentBoundEvent_1_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__DoNotCollectResourcesCheckbox_K2Node_ComponentBoundEvent_1_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__DoNotCollectResourcesCheckbox_K2Node_ComponentBoundEvent_1_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__DoNotCollectResourcesCheckbox_K2Node_ComponentBoundEvent_1_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__HideLODAnchorRangeCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__HideLODAnchorRangeCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__HideLODAnchorRangeCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__HideLODAnchorRangeCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_0_SliderEditValueUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_0_SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_0_SliderEditValueUpdated__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_0_SliderEditValueUpdated__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_1_SliderEditCompletedWithCommit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_1_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_1_SliderEditCompletedWithCommit__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_1_SliderEditCompletedWithCommit__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_2_SliderEditCanceled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginalSliderValue            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_2_SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_2_SliderEditCanceled__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_2_SliderEditCanceled__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;
	params.OriginalSliderValue = OriginalSliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_3_SliderEditCompletedWithCommit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_3_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_3_SliderEditCompletedWithCommit__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_3_SliderEditCompletedWithCommit__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_4_SliderEditValueUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_4_SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_4_SliderEditValueUpdated__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_4_SliderEditValueUpdated__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_5_SliderEditCanceled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginalSliderValue            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_5_SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_5_SliderEditCanceled__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_5_SliderEditCanceled__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;
	params.OriginalSliderValue = OriginalSliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_6_SliderEditCompletedWithCommit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_6_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_6_SliderEditCompletedWithCommit__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_6_SliderEditCompletedWithCommit__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_7_SliderEditValueUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_7_SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_7_SliderEditValueUpdated__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_7_SliderEditValueUpdated__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_8_SliderEditCanceled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginalSliderValue            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_8_SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_8_SliderEditCanceled__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_8_SliderEditCanceled__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;
	params.OriginalSliderValue = OriginalSliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__FlightSpeedSlider_K2Node_ComponentBoundEvent_0_SliderEditCompletedWithCommit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__FlightSpeedSlider_K2Node_ComponentBoundEvent_0_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__FlightSpeedSlider_K2Node_ComponentBoundEvent_0_SliderEditCompletedWithCommit__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__FlightSpeedSlider_K2Node_ComponentBoundEvent_0_SliderEditCompletedWithCommit__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__ShowTerrainToolLight_K2Node_ComponentBoundEvent_211_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__ShowTerrainToolLight_K2Node_ComponentBoundEvent_211_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__ShowTerrainToolLight_K2Node_ComponentBoundEvent_211_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__ShowTerrainToolLight_K2Node_ComponentBoundEvent_211_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__DroneFlightSpeedSlider_K2Node_ComponentBoundEvent_0_SliderEditCompletedWithCommit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__DroneFlightSpeedSlider_K2Node_ComponentBoundEvent_0_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__DroneFlightSpeedSlider_K2Node_ComponentBoundEvent_0_SliderEditCompletedWithCommit__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__DroneFlightSpeedSlider_K2Node_ComponentBoundEvent_0_SliderEditCompletedWithCommit__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__ShowDroneUI_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::BndEvt__ShowDroneUI_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__ShowDroneUI_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCreativeModeOptions_C_BndEvt__ShowDroneUI_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.ExecuteUbergraph_GameMenuCreativeModeOptions
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCreativeModeOptions_C::ExecuteUbergraph_GameMenuCreativeModeOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.ExecuteUbergraph_GameMenuCreativeModeOptions");

	UGameMenuCreativeModeOptions_C_ExecuteUbergraph_GameMenuCreativeModeOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
