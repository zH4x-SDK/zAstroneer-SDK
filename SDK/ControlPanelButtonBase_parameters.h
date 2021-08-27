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

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.UpdateButtonVisuals
struct AControlPanelButtonBase_C_UpdateButtonVisuals_Params
{
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.UserConstructionScript
struct AControlPanelButtonBase_C_UserConstructionScript_Params
{
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.ButtonPressAnim__FinishedFunc
struct AControlPanelButtonBase_C_ButtonPressAnim__FinishedFunc_Params
{
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.ButtonPressAnim__UpdateFunc
struct AControlPanelButtonBase_C_ButtonPressAnim__UpdateFunc_Params
{
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.ButtonHoverJiggleAnim__FinishedFunc
struct AControlPanelButtonBase_C_ButtonHoverJiggleAnim__FinishedFunc_Params
{
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.ButtonHoverJiggleAnim__UpdateFunc
struct AControlPanelButtonBase_C_ButtonHoverJiggleAnim__UpdateFunc_Params
{
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.ReceiveBeginPlay
struct AControlPanelButtonBase_C_ReceiveBeginPlay_Params
{
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct AControlPanelButtonBase_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.HandleButtonPressed
struct AControlPanelButtonBase_C_HandleButtonPressed_Params
{
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature
struct AControlPanelButtonBase_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature
struct AControlPanelButtonBase_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.HandleEnabledChanged
struct AControlPanelButtonBase_C_HandleEnabledChanged_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.HandleHoveredChanged
struct AControlPanelButtonBase_C_HandleHoveredChanged_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.CancelAnimations
struct AControlPanelButtonBase_C_CancelAnimations_Params
{
};

// Function ControlPanelButtonBase.ControlPanelButtonBase_C.ExecuteUbergraph_ControlPanelButtonBase
struct AControlPanelButtonBase_C_ExecuteUbergraph_ControlPanelButtonBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
