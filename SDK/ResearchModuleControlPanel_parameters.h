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

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.SERVER_CheckAwardClientAchievement
struct AResearchModuleControlPanel_C_SERVER_CheckAwardClientAchievement_Params
{
	bool                                               OperationRequestSuceeded;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OperationInstigator;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.GetResearchComponent
struct AResearchModuleControlPanel_C_GetResearchComponent_Params
{
	bool                                               ResearchComponentFound;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FResearchComponent                          ResearchComponent;                                        // (Parm, OutParm)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.SetResearchSubjectData
struct AResearchModuleControlPanel_C_SetResearchSubjectData_Params
{
	struct FResearchSubjectReplicationData             ResearchSubjectData;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.UpdateLightAndButton
struct AResearchModuleControlPanel_C_UpdateLightAndButton_Params
{
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.TogglePowerGraphDisplay
struct AResearchModuleControlPanel_C_TogglePowerGraphDisplay_Params
{
	bool                                               cracked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.DoCancel
struct AResearchModuleControlPanel_C_DoCancel_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnCancelBP
struct AResearchModuleControlPanel_C_OnCancelBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.DoConfirm
struct AResearchModuleControlPanel_C_DoConfirm_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnConfirmBP
struct AResearchModuleControlPanel_C_OnConfirmBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ResearchOperationAvailable
struct AResearchModuleControlPanel_C_ResearchOperationAvailable_Params
{
	bool                                               CanPerformOperation;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.CloseButtonCover
struct AResearchModuleControlPanel_C_CloseButtonCover_Params
{
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.UserConstructionScript
struct AResearchModuleControlPanel_C_UserConstructionScript_Params
{
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.LightFlashing__FinishedFunc
struct AResearchModuleControlPanel_C_LightFlashing__FinishedFunc_Params
{
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.LightFlashing__UpdateFunc
struct AResearchModuleControlPanel_C_LightFlashing__UpdateFunc_Params
{
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.LightFlashing__ToggleLight__EventFunc
struct AResearchModuleControlPanel_C_LightFlashing__ToggleLight__EventFunc_Params
{
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.InpActEvt_Confirm_K2Node_InputActionEvent_1
struct AResearchModuleControlPanel_C_InpActEvt_Confirm_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature
struct AResearchModuleControlPanel_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature
struct AResearchModuleControlPanel_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct AResearchModuleControlPanel_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.CoverOpenClickUnhandled
struct AResearchModuleControlPanel_C_CoverOpenClickUnhandled_Params
{
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ReceiveActorOnClicked
struct AResearchModuleControlPanel_C_ReceiveActorOnClicked_Params
{
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature
struct AResearchModuleControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCracked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ReceiveBeginPlay
struct AResearchModuleControlPanel_C_ReceiveBeginPlay_Params
{
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ServerRequestStartOrInterruptResearch
struct AResearchModuleControlPanel_C_ServerRequestStartOrInterruptResearch_Params
{
	class APlayController*                             Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnMontageEnded
struct AResearchModuleControlPanel_C_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnResearchReplicationDataChanged
struct AResearchModuleControlPanel_C_OnResearchReplicationDataChanged_Params
{
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnControlledActorSet
struct AResearchModuleControlPanel_C_OnControlledActorSet_Params
{
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.Panel Clicked
struct AResearchModuleControlPanel_C_Panel_Clicked_Params
{
	class AActor*                                      TouchedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ExecuteUbergraph_ResearchModuleControlPanel
struct AResearchModuleControlPanel_C_ExecuteUbergraph_ResearchModuleControlPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
