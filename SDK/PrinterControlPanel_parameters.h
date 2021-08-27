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

// Function PrinterControlPanel.PrinterControlPanel_C.SetupControlledReferences
struct APrinterControlPanel_C_SetupControlledReferences_Params
{
	class UPrinterComponent*                           ControlledPrinterComponent;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBreadboardPrinterComponent*                 ControlledBreadboardPrinterComponent;                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             ControlledPowerComponent;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.OnPrinterStateChangedInternal
struct APrinterControlPanel_C_OnPrinterStateChangedInternal_Params
{
};

// Function PrinterControlPanel.PrinterControlPanel_C.GetButtonIconIndex
struct APrinterControlPanel_C_GetButtonIconIndex_Params
{
	int                                                IconIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.UpdateScreenInfo
struct APrinterControlPanel_C_UpdateScreenInfo_Params
{
};

// Function PrinterControlPanel.PrinterControlPanel_C.SetScreenVisibility
struct APrinterControlPanel_C_SetScreenVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.CanPrinterPrint
struct APrinterControlPanel_C_CanPrinterPrint_Params
{
	bool                                               CanPrint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.IsPrinterPrinting
struct APrinterControlPanel_C_IsPrinterPrinting_Params
{
	bool                                               IsPrinting;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.PressBigButton
struct APrinterControlPanel_C_PressBigButton_Params
{
};

// Function PrinterControlPanel.PrinterControlPanel_C.OnCancelBP
struct APrinterControlPanel_C_OnCancelBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.OnConfirmBP
struct APrinterControlPanel_C_OnConfirmBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.UpdateLights
struct APrinterControlPanel_C_UpdateLights_Params
{
};

// Function PrinterControlPanel.PrinterControlPanel_C.UserConstructionScript
struct APrinterControlPanel_C_UserConstructionScript_Params
{
};

// Function PrinterControlPanel.PrinterControlPanel_C.OnNavigateLeftBP
struct APrinterControlPanel_C_OnNavigateLeftBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.OnControlledActorSet
struct APrinterControlPanel_C_OnControlledActorSet_Params
{
};

// Function PrinterControlPanel.PrinterControlPanel_C.OnNavigateRightBP
struct APrinterControlPanel_C_OnNavigateRightBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.ReleaseRightButton
struct APrinterControlPanel_C_ReleaseRightButton_Params
{
};

// Function PrinterControlPanel.PrinterControlPanel_C.ReleaseLeftButton
struct APrinterControlPanel_C_ReleaseLeftButton_Params
{
};

// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature
struct APrinterControlPanel_C_BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature
struct APrinterControlPanel_C_BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature
struct APrinterControlPanel_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_7_ComponentOnClickedSignature__DelegateSignature
struct APrinterControlPanel_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_7_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_8_OnCrackedStateChanged__DelegateSignature
struct APrinterControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_8_OnCrackedStateChanged__DelegateSignature_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCracked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature
struct APrinterControlPanel_C_BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature
struct APrinterControlPanel_C_BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature
struct APrinterControlPanel_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature
struct APrinterControlPanel_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature
struct APrinterControlPanel_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_6_ComponentOnClickedSignature__DelegateSignature
struct APrinterControlPanel_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_6_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PrinterControlPanel.PrinterControlPanel_C.ReceiveBeginPlay
struct APrinterControlPanel_C_ReceiveBeginPlay_Params
{
};

// Function PrinterControlPanel.PrinterControlPanel_C.OnPanelMontageEnded
struct APrinterControlPanel_C_OnPanelMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.OnPrinterStateChanged
struct APrinterControlPanel_C_OnPrinterStateChanged_Params
{
};

// Function PrinterControlPanel.PrinterControlPanel_C.ServerStartOrCancelPrint
struct APrinterControlPanel_C_ServerStartOrCancelPrint_Params
{
};

// Function PrinterControlPanel.PrinterControlPanel_C.OnPrinterPowerAvailableChanged
struct APrinterControlPanel_C_OnPrinterPowerAvailableChanged_Params
{
	bool                                               HasAvailablePower;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.OnControlledActorUseStateChanged
struct APrinterControlPanel_C_OnControlledActorUseStateChanged_Params
{
	bool                                               IsUsable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct APrinterControlPanel_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PrinterControlPanel.PrinterControlPanel_C.ExecuteUbergraph_PrinterControlPanel
struct APrinterControlPanel_C_ExecuteUbergraph_PrinterControlPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
