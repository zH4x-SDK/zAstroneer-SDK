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

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.SetIsChecked
struct UCreativeCheckboxWidget_C_SetIsChecked_Params
{
	bool                                               NewIsChecked;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               checked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.SetupColors
struct UCreativeCheckboxWidget_C_SetupColors_Params
{
	bool                                               HasFocus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.LayoutWidget
struct UCreativeCheckboxWidget_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.SetLabelText
struct UCreativeCheckboxWidget_C_SetLabelText_Params
{
	struct FText                                       LabelText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.SetupStylingData
struct UCreativeCheckboxWidget_C_SetupStylingData_Params
{
};

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.OnAddedToFocusPath
struct UCreativeCheckboxWidget_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.OnRemovedFromFocusPath
struct UCreativeCheckboxWidget_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UCreativeCheckboxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.GrantFocus
struct UCreativeCheckboxWidget_C_GrantFocus_Params
{
};

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UCreativeCheckboxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UCreativeCheckboxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.DisableChildWidgetFocusHighlight
struct UCreativeCheckboxWidget_C_DisableChildWidgetFocusHighlight_Params
{
};

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.ExecuteUbergraph_CreativeCheckboxWidget
struct UCreativeCheckboxWidget_C_ExecuteUbergraph_CreativeCheckboxWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeCheckboxWidget.CreativeCheckboxWidget_C.OnCheckedChanged__DelegateSignature
struct UCreativeCheckboxWidget_C_OnCheckedChanged__DelegateSignature_Params
{
	bool                                               IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
