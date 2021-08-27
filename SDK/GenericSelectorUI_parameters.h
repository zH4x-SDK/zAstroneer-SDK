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

// Function GenericSelectorUI.GenericSelectorUI_C.UpdateStatusText
struct AGenericSelectorUI_C_UpdateStatusText_Params
{
	struct FText                                       NewDisplayText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GenericSelectorUI.GenericSelectorUI_C.ShowButtons
struct AGenericSelectorUI_C_ShowButtons_Params
{
	bool                                               ActivationButtonVisible;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SelectorButtonsVisible;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorUI.GenericSelectorUI_C.Set UI View
struct AGenericSelectorUI_C_Set_UI_View_Params
{
};

// Function GenericSelectorUI.GenericSelectorUI_C.UserConstructionScript
struct AGenericSelectorUI_C_UserConstructionScript_Params
{
};

// Function GenericSelectorUI.GenericSelectorUI_C.BndEvt__Left Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature
struct AGenericSelectorUI_C_BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature_Params
{
};

// Function GenericSelectorUI.GenericSelectorUI_C.BndEvt__Right Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature
struct AGenericSelectorUI_C_BndEvt__Right_Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature_Params
{
};

// Function GenericSelectorUI.GenericSelectorUI_C.BndEvt__New Print Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature
struct AGenericSelectorUI_C_BndEvt__New_Print_Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature_Params
{
};

// Function GenericSelectorUI.GenericSelectorUI_C.OnShowButtons
struct AGenericSelectorUI_C_OnShowButtons_Params
{
	bool                                               ShowActivationButton;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowSelectorButtons;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorUI.GenericSelectorUI_C.ReceiveBeginPlay
struct AGenericSelectorUI_C_ReceiveBeginPlay_Params
{
};

// Function GenericSelectorUI.GenericSelectorUI_C.ExecuteUbergraph_GenericSelectorUI
struct AGenericSelectorUI_C_ExecuteUbergraph_GenericSelectorUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorUI.GenericSelectorUI_C.OnDecrementSelection__DelegateSignature
struct AGenericSelectorUI_C_OnDecrementSelection__DelegateSignature_Params
{
};

// Function GenericSelectorUI.GenericSelectorUI_C.OnActivated__DelegateSignature
struct AGenericSelectorUI_C_OnActivated__DelegateSignature_Params
{
};

// Function GenericSelectorUI.GenericSelectorUI_C.OnIncrementSelection__DelegateSignature
struct AGenericSelectorUI_C_OnIncrementSelection__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
