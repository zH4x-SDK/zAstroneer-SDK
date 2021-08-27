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

// Function DebugMenu.DebugMenu_C.WindIntensity
struct UDebugMenu_C_WindIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.ToggleCamera_DebugDefaultCam
struct UDebugMenu_C_ToggleCamera_DebugDefaultCam_Params
{
};

// Function DebugMenu.DebugMenu_C.ToggleCamera_Debug4
struct UDebugMenu_C_ToggleCamera_Debug4_Params
{
};

// Function DebugMenu.DebugMenu_C.ToggleCamera_Debug3
struct UDebugMenu_C_ToggleCamera_Debug3_Params
{
};

// Function DebugMenu.DebugMenu_C.ToggleCamera_Debug2
struct UDebugMenu_C_ToggleCamera_Debug2_Params
{
};

// Function DebugMenu.DebugMenu_C.ToggleCamera_Debug1
struct UDebugMenu_C_ToggleCamera_Debug1_Params
{
};

// Function DebugMenu.DebugMenu_C.ToggleCamera_DebugFreeCam
struct UDebugMenu_C_ToggleCamera_DebugFreeCam_Params
{
};

// Function DebugMenu.DebugMenu_C.Get_VolumeViewDistanceSpinner_Value_1
struct UDebugMenu_C_Get_VolumeViewDistanceSpinner_Value_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.Get_ShadowStepSizeSpinner_Value_1
struct UDebugMenu_C_Get_ShadowStepSizeSpinner_Value_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.Get_ShadowDensitySpinner_Value_1
struct UDebugMenu_C_Get_ShadowDensitySpinner_Value_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.Get Cloud Coverage
struct UDebugMenu_C_Get_Cloud_Coverage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.Get Cloud Height 
struct UDebugMenu_C_Get_Cloud_Height__Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetAllPlayers
struct UDebugMenu_C_GetAllPlayers_Params
{
	TArray<class ADesignAstro_C*>                      Players;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function DebugMenu.DebugMenu_C.GetBuildVersion
struct UDebugMenu_C_GetBuildVersion_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DebugMenu.DebugMenu_C.GetCurrentOrbitPlaneRotation
struct UDebugMenu_C_GetCurrentOrbitPlaneRotation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetSolarTimeMultiplierNormalized
struct UDebugMenu_C_GetSolarTimeMultiplierNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetSolarSystemTimeMultiplier
struct UDebugMenu_C_GetSolarSystemTimeMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.Get_InvertYGamePadCheck_CheckedState_1
struct UDebugMenu_C_Get_InvertYGamePadCheck_CheckedState_1_Params
{
	ECheckBoxState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetMouseYInvertState
struct UDebugMenu_C_GetMouseYInvertState_Params
{
	ECheckBoxState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetController
struct UDebugMenu_C_GetController_Params
{
	class APlayControllerInstance_C*                   Controller;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetPlayer
struct UDebugMenu_C_GetPlayer_Params
{
	class ADesignAstro_C*                              Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetTerrainColor
struct UDebugMenu_C_GetTerrainColor_Params
{
	struct FLinearColor                                LinearColor;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.Get_ColorPreview_BrushColor_1
struct UDebugMenu_C_Get_ColorPreview_BrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetBrushColor_1
struct UDebugMenu_C_GetBrushColor_1_Params
{
};

// Function DebugMenu.DebugMenu_C.GetSubtractButtonColor
struct UDebugMenu_C_GetSubtractButtonColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DebugMenu.DebugMenu_C.GetAddButtonColor
struct UDebugMenu_C_GetAddButtonColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DebugMenu.DebugMenu_C.ToggleCamera
struct UDebugMenu_C_ToggleCamera_Params
{
};

// Function DebugMenu.DebugMenu_C.SetFreePowerState
struct UDebugMenu_C_SetFreePowerState_Params
{
	bool                                               PowerState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetFreePowerState
struct UDebugMenu_C_GetFreePowerState_Params
{
	ECheckBoxState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.FloorDecimal
struct UDebugMenu_C_FloorDecimal_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Decimal_precision;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.SetNormalizedToolSize
struct UDebugMenu_C_SetNormalizedToolSize_Params
{
	float                                              Normalized_Size;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetNormalizedToolSize
struct UDebugMenu_C_GetNormalizedToolSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.SetNormalizedToolStrength
struct UDebugMenu_C_SetNormalizedToolStrength_Params
{
	float                                              NormalizedStrength;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetNormalizedToolStrength
struct UDebugMenu_C_GetNormalizedToolStrength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetMaxToolSize
struct UDebugMenu_C_GetMaxToolSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetMaxToolStrength
struct UDebugMenu_C_GetMaxToolStrength_Params
{
	float                                              Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetDeformToolStrength
struct UDebugMenu_C_GetDeformToolStrength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetDeformToolSize
struct UDebugMenu_C_GetDeformToolSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetDeformTool
struct UDebugMenu_C_GetDeformTool_Params
{
	class ADeformTool*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetDayLength
struct UDebugMenu_C_GetDayLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetPlanetGravity
struct UDebugMenu_C_GetPlanetGravity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.SetNormalizedPlanetGravity
struct UDebugMenu_C_SetNormalizedPlanetGravity_Params
{
	float                                              NormalizedGravity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.SetNormalizedPlanetDayLength
struct UDebugMenu_C_SetNormalizedPlanetDayLength_Params
{
	float                                              NormalizedLength;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.SetNormalizedPlanetTime
struct UDebugMenu_C_SetNormalizedPlanetTime_Params
{
	float                                              NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetMaxGravity
struct UDebugMenu_C_GetMaxGravity_Params
{
	float                                              MaxGravity;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetLocalPlanet
struct UDebugMenu_C_GetLocalPlanet_Params
{
	class AAstroPlanet*                                Planet;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetNormalizedPlanetGravity
struct UDebugMenu_C_GetNormalizedPlanetGravity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetMaxDayLength
struct UDebugMenu_C_GetMaxDayLength_Params
{
	float                                              MaxLength;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetNormalizedDayLength
struct UDebugMenu_C_GetNormalizedDayLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.GetDayTime
struct UDebugMenu_C_GetDayTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.OnFocusReceived
struct UDebugMenu_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DebugMenu.DebugMenu_C.ToggleSubmenu
struct UDebugMenu_C_ToggleSubmenu_Params
{
	class UWidget*                                     Submenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     AlignTo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.Construct
struct UDebugMenu_C_Construct_Params
{
};

// Function DebugMenu.DebugMenu_C.Tick
struct UDebugMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__PresetButton_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__PresetButton_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__SpawnButton_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Slider_29_K2Node_ComponentBoundEvent_18_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Slider_29_K2Node_ComponentBoundEvent_18_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_1193_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_1193_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Slider_82_K2Node_ComponentBoundEvent_52_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Slider_82_K2Node_ComponentBoundEvent_52_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__Slider_24_K2Node_ComponentBoundEvent_23_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Slider_24_K2Node_ComponentBoundEvent_23_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__Gravity Spinner_K2Node_ComponentBoundEvent_166_OnSpinBoxValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Gravity_Spinner_K2Node_ComponentBoundEvent_166_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__SpinBox_36_K2Node_ComponentBoundEvent_418_OnSpinBoxValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__SpinBox_36_K2Node_ComponentBoundEvent_418_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__Day Length Spinner_K2Node_ComponentBoundEvent_566_OnSpinBoxValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Day_Length_Spinner_K2Node_ComponentBoundEvent_566_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__ToolSize Spinner_K2Node_ComponentBoundEvent_1154_OnSpinBoxValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__ToolSize_Spinner_K2Node_ComponentBoundEvent_1154_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__Tool Strength Spinner_K2Node_ComponentBoundEvent_269_OnSpinBoxValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Tool_Strength_Spinner_K2Node_ComponentBoundEvent_269_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__Slider_95_K2Node_ComponentBoundEvent_561_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Slider_95_K2Node_ComponentBoundEvent_561_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__ToolSize Slider_K2Node_ComponentBoundEvent_674_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__ToolSize_Slider_K2Node_ComponentBoundEvent_674_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__PowerCheck_K2Node_ComponentBoundEvent_191_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__PowerCheck_K2Node_ComponentBoundEvent_191_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__ResourceButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__ResourceButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__LoadGame Button_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__LoadGame_Button_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__SaveGame Button_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__SaveGame_Button_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__CameraToggle Button_K2Node_ComponentBoundEvent_222_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__CameraToggle_Button_K2Node_ComponentBoundEvent_222_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__AddMode Button_K2Node_ComponentBoundEvent_288_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__AddMode_Button_K2Node_ComponentBoundEvent_288_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__SubtractMode Button_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__SubtractMode_Button_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Lights Check_K2Node_ComponentBoundEvent_1788_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__Lights_Check_K2Node_ComponentBoundEvent_1788_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__Cursor Check_K2Node_ComponentBoundEvent_1814_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__Cursor_Check_K2Node_ComponentBoundEvent_1814_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_713_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_713_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__InvertYGamePadCheck_K2Node_ComponentBoundEvent_952_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__InvertYGamePadCheck_K2Node_ComponentBoundEvent_952_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__InvincibleCheck_K2Node_ComponentBoundEvent_432_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__InvincibleCheck_K2Node_ComponentBoundEvent_432_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__SolarTimeScaleSpinner_K2Node_ComponentBoundEvent_782_OnSpinBoxValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__SolarTimeScaleSpinner_K2Node_ComponentBoundEvent_782_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_883_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_883_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__OrbitPlaneSlider_K2Node_ComponentBoundEvent_685_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__OrbitPlaneSlider_K2Node_ComponentBoundEvent_685_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__OrbitPlaneSpinner_K2Node_ComponentBoundEvent_787_OnSpinBoxValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__OrbitPlaneSpinner_K2Node_ComponentBoundEvent_787_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__MusicSlider_K2Node_ComponentBoundEvent_466_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__MusicSlider_K2Node_ComponentBoundEvent_466_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__DebugAmbCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__DebugAmbCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__UnlockResearchButton_K2Node_ComponentBoundEvent_1078_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__UnlockResearchButton_K2Node_ComponentBoundEvent_1078_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__JoinGame_K2Node_ComponentBoundEvent_326_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__JoinGame_K2Node_ComponentBoundEvent_326_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.Save Complete
struct UDebugMenu_C_Save_Complete_Params
{
	ESaveGameOperationResult                           saveOperationResult;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__CloudCoverageSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__CloudCoverageSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__CloudHeightSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__CloudHeightSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__CloudCoverageSpinner_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__CloudCoverageSpinner_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__CloudHeightSpinner_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__CloudHeightSpinner_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__ShadowDensitySlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__ShadowDensitySlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__ShadowStepSizeSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__ShadowStepSizeSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__ShadowDensitySpinner_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__ShadowDensitySpinner_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__VolumeViewDistanceSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__VolumeViewDistanceSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__CameraDebugButton_K2Node_ComponentBoundEvent_2460_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__CameraDebugButton_K2Node_ComponentBoundEvent_2460_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Camera2debug_K2Node_ComponentBoundEvent_2523_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Camera2debug_K2Node_ComponentBoundEvent_2523_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Camera3Debug_K2Node_ComponentBoundEvent_2587_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Camera3Debug_K2Node_ComponentBoundEvent_2587_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Camera4debug_K2Node_ComponentBoundEvent_2652_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Camera4debug_K2Node_ComponentBoundEvent_2652_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Camera5debug_K2Node_ComponentBoundEvent_2718_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Camera5debug_K2Node_ComponentBoundEvent_2718_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__ReturnToDefault_K2Node_ComponentBoundEvent_673_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__ReturnToDefault_K2Node_ComponentBoundEvent_673_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__CheckBox_3_K2Node_ComponentBoundEvent_2214_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__CheckBox_3_K2Node_ComponentBoundEvent_2214_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_2267_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_2267_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_2321_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_2321_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__CheckBox_4_K2Node_ComponentBoundEvent_2376_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__CheckBox_4_K2Node_ComponentBoundEvent_2376_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__CheckBox_5_K2Node_ComponentBoundEvent_2432_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__CheckBox_5_K2Node_ComponentBoundEvent_2432_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__grantresearch_K2Node_ComponentBoundEvent_3136_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__grantresearch_K2Node_ComponentBoundEvent_3136_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Slider_1_K2Node_ComponentBoundEvent_4179_OnFloatValueChangedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Slider_1_K2Node_ComponentBoundEvent_4179_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__CheckBox_7_K2Node_ComponentBoundEvent_5440_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__CheckBox_7_K2Node_ComponentBoundEvent_5440_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_4648_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_4648_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_4665_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_4665_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_4745_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_4745_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_4826_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_4826_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_4908_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_7_K2Node_ComponentBoundEvent_4908_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_4991_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_8_K2Node_ComponentBoundEvent_4991_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_1403_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_9_K2Node_ComponentBoundEvent_1403_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_1489_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_1489_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_1575_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_1575_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_1662_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_12_K2Node_ComponentBoundEvent_1662_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_13_K2Node_ComponentBoundEvent_1750_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_13_K2Node_ComponentBoundEvent_1750_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_1841_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_14_K2Node_ComponentBoundEvent_1841_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_1931_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_15_K2Node_ComponentBoundEvent_1931_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_16_K2Node_ComponentBoundEvent_2022_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_16_K2Node_ComponentBoundEvent_2022_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_17_K2Node_ComponentBoundEvent_4159_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_17_K2Node_ComponentBoundEvent_4159_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_18_K2Node_ComponentBoundEvent_4253_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_18_K2Node_ComponentBoundEvent_4253_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_19_K2Node_ComponentBoundEvent_4347_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_19_K2Node_ComponentBoundEvent_4347_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_20_K2Node_ComponentBoundEvent_4442_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_20_K2Node_ComponentBoundEvent_4442_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_21_K2Node_ComponentBoundEvent_4538_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_21_K2Node_ComponentBoundEvent_4538_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_22_K2Node_ComponentBoundEvent_4636_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_22_K2Node_ComponentBoundEvent_4636_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_23_K2Node_ComponentBoundEvent_4736_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_23_K2Node_ComponentBoundEvent_4736_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_24_K2Node_ComponentBoundEvent_4836_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_24_K2Node_ComponentBoundEvent_4836_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_25_K2Node_ComponentBoundEvent_4937_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_25_K2Node_ComponentBoundEvent_4937_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_5039_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_26_K2Node_ComponentBoundEvent_5039_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_27_K2Node_ComponentBoundEvent_5141_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_27_K2Node_ComponentBoundEvent_5141_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_5244_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_5244_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_29_K2Node_ComponentBoundEvent_5348_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_29_K2Node_ComponentBoundEvent_5348_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_5454_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_30_K2Node_ComponentBoundEvent_5454_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_5560_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_31_K2Node_ComponentBoundEvent_5560_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_5667_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_32_K2Node_ComponentBoundEvent_5667_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_33_K2Node_ComponentBoundEvent_5775_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_33_K2Node_ComponentBoundEvent_5775_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_34_K2Node_ComponentBoundEvent_5884_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_34_K2Node_ComponentBoundEvent_5884_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_35_K2Node_ComponentBoundEvent_5994_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_35_K2Node_ComponentBoundEvent_5994_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_6105_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_6105_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_37_K2Node_ComponentBoundEvent_6217_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_37_K2Node_ComponentBoundEvent_6217_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_38_K2Node_ComponentBoundEvent_6330_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_38_K2Node_ComponentBoundEvent_6330_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_39_K2Node_ComponentBoundEvent_6444_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_39_K2Node_ComponentBoundEvent_6444_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_40_K2Node_ComponentBoundEvent_6559_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_40_K2Node_ComponentBoundEvent_6559_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__IsCreativeModePainting_K2Node_ComponentBoundEvent_3851_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugMenu_C_BndEvt__IsCreativeModePainting_K2Node_ComponentBoundEvent_3851_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_2395_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_2395_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__SpawnFilterButton_K2Node_ComponentBoundEvent_1373_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__SpawnFilterButton_K2Node_ComponentBoundEvent_1373_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.BndEvt__SpawnFilterText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__SpawnFilterText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugMenu.DebugMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4569_OnButtonClickedEvent__DelegateSignature
struct UDebugMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_4569_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu
struct UDebugMenu_C_ExecuteUbergraph_DebugMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
