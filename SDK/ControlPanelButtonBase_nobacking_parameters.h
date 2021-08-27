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

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.UpdateButtonVisuals
struct AControlPanelButtonBase_nobacking_C_UpdateButtonVisuals_Params
{
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.UserConstructionScript
struct AControlPanelButtonBase_nobacking_C_UserConstructionScript_Params
{
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.ButtonPressAnim__FinishedFunc
struct AControlPanelButtonBase_nobacking_C_ButtonPressAnim__FinishedFunc_Params
{
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.ButtonPressAnim__UpdateFunc
struct AControlPanelButtonBase_nobacking_C_ButtonPressAnim__UpdateFunc_Params
{
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.ButtonHoverJiggleAnim__FinishedFunc
struct AControlPanelButtonBase_nobacking_C_ButtonHoverJiggleAnim__FinishedFunc_Params
{
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.ButtonHoverJiggleAnim__UpdateFunc
struct AControlPanelButtonBase_nobacking_C_ButtonHoverJiggleAnim__UpdateFunc_Params
{
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.ReceiveBeginPlay
struct AControlPanelButtonBase_nobacking_C_ReceiveBeginPlay_Params
{
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct AControlPanelButtonBase_nobacking_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.HandleButtonPressed
struct AControlPanelButtonBase_nobacking_C_HandleButtonPressed_Params
{
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature
struct AControlPanelButtonBase_nobacking_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature
struct AControlPanelButtonBase_nobacking_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.HandleEnabledChanged
struct AControlPanelButtonBase_nobacking_C_HandleEnabledChanged_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.HandleHoveredChanged
struct AControlPanelButtonBase_nobacking_C_HandleHoveredChanged_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.CancelAnimations
struct AControlPanelButtonBase_nobacking_C_CancelAnimations_Params
{
};

// Function ControlPanelButtonBase_nobacking.ControlPanelButtonBase_nobacking_C.ExecuteUbergraph_ControlPanelButtonBase_nobacking
struct AControlPanelButtonBase_nobacking_C_ExecuteUbergraph_ControlPanelButtonBase_nobacking_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
