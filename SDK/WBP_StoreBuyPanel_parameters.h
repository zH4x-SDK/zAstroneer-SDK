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

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.DisplayStoreItemData
struct UWBP_StoreBuyPanel_C_DisplayStoreItemData_Params
{
	struct FAstroMicroTxnCombinedItem                  InCombinedItem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.PreConstruct
struct UWBP_StoreBuyPanel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.Construct
struct UWBP_StoreBuyPanel_C_Construct_Params
{
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnAddedToFocusPath
struct UWBP_StoreBuyPanel_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnRemovedFromFocusPath
struct UWBP_StoreBuyPanel_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnInputDeviceChanged_Event_1
struct UWBP_StoreBuyPanel_C_OnInputDeviceChanged_Event_1_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnHoldBegin
struct UWBP_StoreBuyPanel_C_OnHoldBegin_Params
{
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnHoldEnd
struct UWBP_StoreBuyPanel_C_OnHoldEnd_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UWBP_StoreBuyPanel_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
struct UWBP_StoreBuyPanel_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreBuyPanel_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreBuyPanel_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.ExecuteUbergraph_WBP_StoreBuyPanel
struct UWBP_StoreBuyPanel_C_ExecuteUbergraph_WBP_StoreBuyPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnReleased__DelegateSignature
struct UWBP_StoreBuyPanel_C_OnReleased__DelegateSignature_Params
{
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnPressed__DelegateSignature
struct UWBP_StoreBuyPanel_C_OnPressed__DelegateSignature_Params
{
};

// Function WBP_StoreBuyPanel.WBP_StoreBuyPanel_C.OnGamepadInputWhileFocused__DelegateSignature
struct UWBP_StoreBuyPanel_C_OnGamepadInputWhileFocused__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
