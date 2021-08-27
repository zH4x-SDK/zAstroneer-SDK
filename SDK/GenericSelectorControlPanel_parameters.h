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

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.GetIsUnpowered
struct AGenericSelectorControlPanel_C_GetIsUnpowered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetCanUseArrowButtons
struct AGenericSelectorControlPanel_C_SetCanUseArrowButtons_Params
{
	bool                                               NewCanUseArrowButtons;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetupDisplayPanel
struct AGenericSelectorControlPanel_C_SetupDisplayPanel_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UpdateAnimBP
struct AGenericSelectorControlPanel_C_UpdateAnimBP_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetOperationActive
struct AGenericSelectorControlPanel_C_SetOperationActive_Params
{
	bool                                               NewOperationActive;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetCanUseBigButton
struct AGenericSelectorControlPanel_C_SetCanUseBigButton_Params
{
	bool                                               NewCanActivate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.RefreshControlPanel
struct AGenericSelectorControlPanel_C_RefreshControlPanel_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetupControlledReferences
struct AGenericSelectorControlPanel_C_SetupControlledReferences_Params
{
	class UPowerComponent*                             ControlledPowerComponent;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnStateChangedInternal
struct AGenericSelectorControlPanel_C_OnStateChangedInternal_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.GetButtonIconIndex
struct AGenericSelectorControlPanel_C_GetButtonIconIndex_Params
{
	int                                                IconIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UpdateScreenInfo
struct AGenericSelectorControlPanel_C_UpdateScreenInfo_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetScreenVisibility
struct AGenericSelectorControlPanel_C_SetScreenVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.PressBigButton
struct AGenericSelectorControlPanel_C_PressBigButton_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnCancelBP
struct AGenericSelectorControlPanel_C_OnCancelBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnConfirmBP
struct AGenericSelectorControlPanel_C_OnConfirmBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UpdateLights
struct AGenericSelectorControlPanel_C_UpdateLights_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UserConstructionScript
struct AGenericSelectorControlPanel_C_UserConstructionScript_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnNavigateLeftBP
struct AGenericSelectorControlPanel_C_OnNavigateLeftBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnControlledActorSet
struct AGenericSelectorControlPanel_C_OnControlledActorSet_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnNavigateRightBP
struct AGenericSelectorControlPanel_C_OnNavigateRightBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ReleaseRightButton
struct AGenericSelectorControlPanel_C_ReleaseRightButton_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ReleaseLeftButton
struct AGenericSelectorControlPanel_C_ReleaseLeftButton_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature
struct AGenericSelectorControlPanel_C_BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature
struct AGenericSelectorControlPanel_C_BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature
struct AGenericSelectorControlPanel_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_7_ComponentOnClickedSignature__DelegateSignature
struct AGenericSelectorControlPanel_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_7_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_8_OnCrackedStateChanged__DelegateSignature
struct AGenericSelectorControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_8_OnCrackedStateChanged__DelegateSignature_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCracked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature
struct AGenericSelectorControlPanel_C_BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature
struct AGenericSelectorControlPanel_C_BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature
struct AGenericSelectorControlPanel_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature
struct AGenericSelectorControlPanel_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature
struct AGenericSelectorControlPanel_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_6_ComponentOnClickedSignature__DelegateSignature
struct AGenericSelectorControlPanel_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_6_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ReceiveBeginPlay
struct AGenericSelectorControlPanel_C_ReceiveBeginPlay_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnPanelMontageEnded
struct AGenericSelectorControlPanel_C_OnPanelMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnControlledActorUseStateChanged
struct AGenericSelectorControlPanel_C_OnControlledActorUseStateChanged_Params
{
	bool                                               IsUsable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct AGenericSelectorControlPanel_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnPowerAvailableChanged
struct AGenericSelectorControlPanel_C_OnPowerAvailableChanged_Params
{
	bool                                               PowerAvailable;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ServerNavigateRight
struct AGenericSelectorControlPanel_C_ServerNavigateRight_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ServerNavigateLeft
struct AGenericSelectorControlPanel_C_ServerNavigateLeft_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ServerBigButtonClicked
struct AGenericSelectorControlPanel_C_ServerBigButtonClicked_Params
{
	class APlayController*                             ClickingPlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ExecuteUbergraph_GenericSelectorControlPanel
struct AGenericSelectorControlPanel_C_ExecuteUbergraph_GenericSelectorControlPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ActivateOrCancelOperationByPlayer__DelegateSignature
struct AGenericSelectorControlPanel_C_ActivateOrCancelOperationByPlayer__DelegateSignature_Params
{
	class APlayController*                             ClickingPlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.CrackedStateChanged__DelegateSignature
struct AGenericSelectorControlPanel_C_CrackedStateChanged__DelegateSignature_Params
{
	class AControlPanel*                               ControlPanel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCracked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ActivateOrCancelOperation__DelegateSignature
struct AGenericSelectorControlPanel_C_ActivateOrCancelOperation__DelegateSignature_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UpdateControlPanelScreenInfo__DelegateSignature
struct AGenericSelectorControlPanel_C_UpdateControlPanelScreenInfo__DelegateSignature_Params
{
	class UUserWidget*                                 ScreenWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.CycleSelectionRight__DelegateSignature
struct AGenericSelectorControlPanel_C_CycleSelectionRight__DelegateSignature_Params
{
};

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.CycleSelectionLeft__DelegateSignature
struct AGenericSelectorControlPanel_C_CycleSelectionLeft__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
