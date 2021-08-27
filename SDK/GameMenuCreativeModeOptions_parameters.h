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

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.IsOnPlanet
struct UGameMenuCreativeModeOptions_C_IsOnPlanet_Params
{
	bool                                               IsOnPlanet;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.GetNormalizedSolarTimeMultiplier
struct UGameMenuCreativeModeOptions_C_GetNormalizedSolarTimeMultiplier_Params
{
	float                                              NormalizedDayLength;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.SetNormalizedSolarTimeMultiplier
struct UGameMenuCreativeModeOptions_C_SetNormalizedSolarTimeMultiplier_Params
{
	float                                              NormalizedDayLength;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.GetNormalizedSunOrbit
struct UGameMenuCreativeModeOptions_C_GetNormalizedSunOrbit_Params
{
	float                                              normalizedSunOrbit;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.SetNormalizedSunOrbit
struct UGameMenuCreativeModeOptions_C_SetNormalizedSunOrbit_Params
{
	float                                              normalizedSunOrbit;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.GetNormalizedTimeOfDay
struct UGameMenuCreativeModeOptions_C_GetNormalizedTimeOfDay_Params
{
	float                                              NormalizedTimeOfDay;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.SetNormalizedTimeOfDay
struct UGameMenuCreativeModeOptions_C_SetNormalizedTimeOfDay_Params
{
	float                                              dayTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.LayoutWidget
struct UGameMenuCreativeModeOptions_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__GameMenuEntryCheckbox_K2Node_ComponentBoundEvent_93_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__GameMenuEntryCheckbox_K2Node_ComponentBoundEvent_93_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__FreeFuelCreative_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__FreeFuelCreative_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__InvincibleCheckbox_K2Node_ComponentBoundEvent_2_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__InvincibleCheckbox_K2Node_ComponentBoundEvent_2_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__InvisibleToHazardsCheckbox_K2Node_ComponentBoundEvent_3_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__InvisibleToHazardsCheckbox_K2Node_ComponentBoundEvent_3_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__UnlimitedBackpackPowerCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__UnlimitedBackpackPowerCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__RemoveDecoratorsWhilePaintingCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__RemoveDecoratorsWhilePaintingCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__DoNotCollectResourcesCheckbox_K2Node_ComponentBoundEvent_1_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__DoNotCollectResourcesCheckbox_K2Node_ComponentBoundEvent_1_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__HideLODAnchorRangeCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__HideLODAnchorRangeCheckbox_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_0_SliderEditValueUpdated__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_0_SliderEditValueUpdated__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_1_SliderEditCompletedWithCommit__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_1_SliderEditCompletedWithCommit__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_2_SliderEditCanceled__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__TimeOfDaySlider_K2Node_ComponentBoundEvent_2_SliderEditCanceled__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OriginalSliderValue;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_3_SliderEditCompletedWithCommit__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_3_SliderEditCompletedWithCommit__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_4_SliderEditValueUpdated__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_4_SliderEditValueUpdated__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_5_SliderEditCanceled__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__SolarTimeScaleSlider_K2Node_ComponentBoundEvent_5_SliderEditCanceled__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OriginalSliderValue;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_6_SliderEditCompletedWithCommit__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_6_SliderEditCompletedWithCommit__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_7_SliderEditValueUpdated__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_7_SliderEditValueUpdated__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_8_SliderEditCanceled__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__SunOrbitSlider_K2Node_ComponentBoundEvent_8_SliderEditCanceled__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OriginalSliderValue;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__FlightSpeedSlider_K2Node_ComponentBoundEvent_0_SliderEditCompletedWithCommit__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__FlightSpeedSlider_K2Node_ComponentBoundEvent_0_SliderEditCompletedWithCommit__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__ShowTerrainToolLight_K2Node_ComponentBoundEvent_211_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__ShowTerrainToolLight_K2Node_ComponentBoundEvent_211_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__DroneFlightSpeedSlider_K2Node_ComponentBoundEvent_0_SliderEditCompletedWithCommit__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__DroneFlightSpeedSlider_K2Node_ComponentBoundEvent_0_SliderEditCompletedWithCommit__DelegateSignature_Params
{
	class UGameMenuEntrySlider_C*                      SliderEntry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.BndEvt__ShowDroneUI_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
struct UGameMenuCreativeModeOptions_C_BndEvt__ShowDroneUI_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params
{
	class UAstroGameMenuFocusItemWidget*               FocusItemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuCreativeModeOptions.GameMenuCreativeModeOptions_C.ExecuteUbergraph_GameMenuCreativeModeOptions
struct UGameMenuCreativeModeOptions_C_ExecuteUbergraph_GameMenuCreativeModeOptions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
