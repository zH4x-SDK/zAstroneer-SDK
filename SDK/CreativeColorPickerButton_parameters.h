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

// Function CreativeColorPickerButton.CreativeColorPickerButton_C.SetButtonColor
struct UCreativeColorPickerButton_C_SetButtonColor_Params
{
	struct FLinearColor                                BGColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UMaterialInterface*                          ButtonMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeColorPickerButton.CreativeColorPickerButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UCreativeColorPickerButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CreativeColorPickerButton.CreativeColorPickerButton_C.GrantFocus
struct UCreativeColorPickerButton_C_GrantFocus_Params
{
};

// Function CreativeColorPickerButton.CreativeColorPickerButton_C.OnAddedToFocusPath
struct UCreativeColorPickerButton_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CreativeColorPickerButton.CreativeColorPickerButton_C.OnRemovedFromFocusPath
struct UCreativeColorPickerButton_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CreativeColorPickerButton.CreativeColorPickerButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UCreativeColorPickerButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CreativeColorPickerButton.CreativeColorPickerButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
struct UCreativeColorPickerButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CreativeColorPickerButton.CreativeColorPickerButton_C.DisableChildWidgetFocusHighlight
struct UCreativeColorPickerButton_C_DisableChildWidgetFocusHighlight_Params
{
};

// Function CreativeColorPickerButton.CreativeColorPickerButton_C.SetupStylingData
struct UCreativeColorPickerButton_C_SetupStylingData_Params
{
};

// Function CreativeColorPickerButton.CreativeColorPickerButton_C.ExecuteUbergraph_CreativeColorPickerButton
struct UCreativeColorPickerButton_C_ExecuteUbergraph_CreativeColorPickerButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeColorPickerButton.CreativeColorPickerButton_C.OnClicked__DelegateSignature
struct UCreativeColorPickerButton_C_OnClicked__DelegateSignature_Params
{
	int                                                ClickedColorIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
