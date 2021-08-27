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

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnMouseMove
struct UTerrainToolCreativeMenu_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.PrepareForRemoval
struct UTerrainToolCreativeMenu_C_PrepareForRemoval_Params
{
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnKeyDown
struct UTerrainToolCreativeMenu_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.On_MenuWrapper_MouseButtonDown_1
struct UTerrainToolCreativeMenu_C_On_MenuWrapper_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetNormalizedToolRange
struct UTerrainToolCreativeMenu_C_GetNormalizedToolRange_Params
{
	float                                              NormalizedToolRange;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDeformToolRange
struct UTerrainToolCreativeMenu_C_GetDeformToolRange_Params
{
	float                                              ToolRange;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetMenuSize
struct UTerrainToolCreativeMenu_C_GetMenuSize_Params
{
	struct FVector2D                                   DisplaySize;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.UpdateActiveColor
struct UTerrainToolCreativeMenu_C_UpdateActiveColor_Params
{
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDefaultFocusWidget
struct UTerrainToolCreativeMenu_C_GetDefaultFocusWidget_Params
{
	class UAstroSlateFocusWidget*                      DefaultFocusWidget;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.LayoutWidget
struct UTerrainToolCreativeMenu_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetNormalizedToolSize
struct UTerrainToolCreativeMenu_C_GetNormalizedToolSize_Params
{
	float                                              NormalizedSize;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetNormalizedToolStrength
struct UTerrainToolCreativeMenu_C_GetNormalizedToolStrength_Params
{
	float                                              NormalizedStrength;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDeformToolStrength
struct UTerrainToolCreativeMenu_C_GetDeformToolStrength_Params
{
	float                                              DeformToolStrength;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDeformToolSize
struct UTerrainToolCreativeMenu_C_GetDeformToolSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.GetDeformTool
struct UTerrainToolCreativeMenu_C_GetDeformTool_Params
{
	class ADeformTool*                                 DeformTool;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__ToolStrengthSlider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature
struct UTerrainToolCreativeMenu_C_BndEvt__ToolStrengthSlider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__ToolSizeSlider_K2Node_ComponentBoundEvent_1_OnSliderValueChanged__DelegateSignature
struct UTerrainToolCreativeMenu_C_BndEvt__ToolSizeSlider_K2Node_ComponentBoundEvent_1_OnSliderValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__IgnoreHardnessCheckbox_K2Node_ComponentBoundEvent_2_OnCheckedChanged__DelegateSignature
struct UTerrainToolCreativeMenu_C_BndEvt__IgnoreHardnessCheckbox_K2Node_ComponentBoundEvent_2_OnCheckedChanged__DelegateSignature_Params
{
	bool                                               IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.Construct
struct UTerrainToolCreativeMenu_C_Construct_Params
{
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.SetupStylingData
struct UTerrainToolCreativeMenu_C_SetupStylingData_Params
{
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__ToolRangeSlider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature
struct UTerrainToolCreativeMenu_C_BndEvt__ToolRangeSlider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.HandleActiveTerrainColorChanged
struct UTerrainToolCreativeMenu_C_HandleActiveTerrainColorChanged_Params
{
	bool                                               PickedWithEyedropperTool;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnRemovedFromFocusPath
struct UTerrainToolCreativeMenu_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnColorAndTypePicked
struct UTerrainToolCreativeMenu_C_OnColorAndTypePicked_Params
{
	struct FLinearColor                                SelectedColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                SelectedColorIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPaintIndexType                                    PaintType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__MenuBackingButton_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature
struct UTerrainToolCreativeMenu_C_BndEvt__MenuBackingButton_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.BndEvt__ClickOutOfMenuButton_K2Node_ComponentBoundEvent_122_OnButtonPressedEvent__DelegateSignature
struct UTerrainToolCreativeMenu_C_BndEvt__ClickOutOfMenuButton_K2Node_ComponentBoundEvent_122_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.ExecuteUbergraph_TerrainToolCreativeMenu
struct UTerrainToolCreativeMenu_C_ExecuteUbergraph_TerrainToolCreativeMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainToolCreativeMenu.TerrainToolCreativeMenu_C.OnCreativeMenuCloseShortcutPressed__DelegateSignature
struct UTerrainToolCreativeMenu_C_OnCreativeMenuCloseShortcutPressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
