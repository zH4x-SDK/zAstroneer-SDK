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

// Function SupplyControlPanel.SupplyControlPanel_C.OnCancelBP
struct ASupplyControlPanel_C_OnCancelBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SupplyControlPanel.SupplyControlPanel_C.OnConfirmBP
struct ASupplyControlPanel_C_OnConfirmBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SupplyControlPanel.SupplyControlPanel_C.DoCancel
struct ASupplyControlPanel_C_DoCancel_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyControlPanel.SupplyControlPanel_C.DoConfirm
struct ASupplyControlPanel_C_DoConfirm_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyControlPanel.SupplyControlPanel_C.OnRep_HasPerformedFirstDrop
struct ASupplyControlPanel_C_OnRep_HasPerformedFirstDrop_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.OnRep_SupplyDropInProgress
struct ASupplyControlPanel_C_OnRep_SupplyDropInProgress_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.PerformSupplyDrop
struct ASupplyControlPanel_C_PerformSupplyDrop_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.UpdateLightAndButton
struct ASupplyControlPanel_C_UpdateLightAndButton_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.UserConstructionScript
struct ASupplyControlPanel_C_UserConstructionScript_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__FinishedFunc
struct ASupplyControlPanel_C_SupplyDropTimeline__FinishedFunc_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__UpdateFunc
struct ASupplyControlPanel_C_SupplyDropTimeline__UpdateFunc_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__Crate3LandEvt__EventFunc
struct ASupplyControlPanel_C_SupplyDropTimeline__Crate3LandEvt__EventFunc_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__Crate2LandEvt__EventFunc
struct ASupplyControlPanel_C_SupplyDropTimeline__Crate2LandEvt__EventFunc_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__Crate1LandEvt__EventFunc
struct ASupplyControlPanel_C_SupplyDropTimeline__Crate1LandEvt__EventFunc_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.ReceiveBeginPlay
struct ASupplyControlPanel_C_ReceiveBeginPlay_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct ASupplyControlPanel_C_BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SupplyControlPanel.SupplyControlPanel_C.BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature
struct ASupplyControlPanel_C_BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyControlPanel.SupplyControlPanel_C.BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature
struct ASupplyControlPanel_C_BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyControlPanel.SupplyControlPanel_C.OnPanelMontageEnded
struct ASupplyControlPanel_C_OnPanelMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyControlPanel.SupplyControlPanel_C.DoSupplyDrop
struct ASupplyControlPanel_C_DoSupplyDrop_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.DoSupplyDropAnimation
struct ASupplyControlPanel_C_DoSupplyDropAnimation_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature
struct ASupplyControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCracked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SupplyControlPanel.SupplyControlPanel_C.Panel Clicked
struct ASupplyControlPanel_C_Panel_Clicked_Params
{
	class AActor*                                      TouchedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SupplyControlPanel.SupplyControlPanel_C.DoSupplyDropLandingAudioRPC
struct ASupplyControlPanel_C_DoSupplyDropLandingAudioRPC_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.OnControlledActorSet
struct ASupplyControlPanel_C_OnControlledActorSet_Params
{
};

// Function SupplyControlPanel.SupplyControlPanel_C.ExecuteUbergraph_SupplyControlPanel
struct ASupplyControlPanel_C_ExecuteUbergraph_SupplyControlPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
