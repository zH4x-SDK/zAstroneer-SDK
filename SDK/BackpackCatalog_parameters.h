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

// Function BackpackCatalog.BackpackCatalog_C.ManipulateBackpackLightOnCrackedChanged
struct ABackpackCatalog_C_ManipulateBackpackLightOnCrackedChanged_Params
{
	bool                                               IsCracked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.ResetDisplayLights
struct ABackpackCatalog_C_ResetDisplayLights_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.UpdateConfirmationButtonAndCatalogLights
struct ABackpackCatalog_C_UpdateConfirmationButtonAndCatalogLights_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.UpdateCategoryButtonLights
struct ABackpackCatalog_C_UpdateCategoryButtonLights_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.UpdateSelectedItemIconMaterial
struct ABackpackCatalog_C_UpdateSelectedItemIconMaterial_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.OnCancelBP
struct ABackpackCatalog_C_OnCancelBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.HandleCancel
struct ABackpackCatalog_C_HandleCancel_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.HandleConfirm
struct ABackpackCatalog_C_HandleConfirm_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.OnConfirmBP
struct ABackpackCatalog_C_OnConfirmBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow5
struct ABackpackCatalog_C_OnIconClickedRow5_Params
{
	int                                                IconItemVariantIndex;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemVariantType                                   ItemIconVariantType;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow4
struct ABackpackCatalog_C_OnIconClickedRow4_Params
{
	int                                                IconItemVariantIndex;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemVariantType                                   ItemIconVariantType;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow3
struct ABackpackCatalog_C_OnIconClickedRow3_Params
{
	int                                                IconItemVariantIndex;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemVariantType                                   ItemIconVariantType;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow2
struct ABackpackCatalog_C_OnIconClickedRow2_Params
{
	int                                                IconItemVariantIndex;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemVariantType                                   ItemIconVariantType;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.OnIconClickedRow1
struct ABackpackCatalog_C_OnIconClickedRow1_Params
{
	int                                                IconItemVariantIndex;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemVariantType                                   ItemIconVariantType;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.UpdateItemInfoWidget
struct ABackpackCatalog_C_UpdateItemInfoWidget_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.InitItemIconArrays
struct ABackpackCatalog_C_InitItemIconArrays_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.UserConstructionScript
struct ABackpackCatalog_C_UserConstructionScript_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.BigHologramItemChangedAnim__FinishedFunc
struct ABackpackCatalog_C_BigHologramItemChangedAnim__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.BigHologramItemChangedAnim__UpdateFunc
struct ABackpackCatalog_C_BigHologramItemChangedAnim__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.BigHologramItemChangedAnim__SwapMesh__EventFunc
struct ABackpackCatalog_C_BigHologramItemChangedAnim__SwapMesh__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.BigHologramUnlockedAnim__FinishedFunc
struct ABackpackCatalog_C_BigHologramUnlockedAnim__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.BigHologramUnlockedAnim__UpdateFunc
struct ABackpackCatalog_C_BigHologramUnlockedAnim__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SmallHologramMouseOverPulse__FinishedFunc
struct ABackpackCatalog_C_SmallHologramMouseOverPulse__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SmallHologramMouseOverPulse__UpdateFunc
struct ABackpackCatalog_C_SmallHologramMouseOverPulse__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SmallHologramItemChangedAnim__FinishedFunc
struct ABackpackCatalog_C_SmallHologramItemChangedAnim__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SmallHologramItemChangedAnim__UpdateFunc
struct ABackpackCatalog_C_SmallHologramItemChangedAnim__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SmallHologramItemChangedAnim__MeshSwap__EventFunc
struct ABackpackCatalog_C_SmallHologramItemChangedAnim__MeshSwap__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.CatalogHoverSlide__FinishedFunc
struct ABackpackCatalog_C_CatalogHoverSlide__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.CatalogHoverSlide__UpdateFunc
struct ABackpackCatalog_C_CatalogHoverSlide__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.DisplayLightsUnlockFlash__FinishedFunc
struct ABackpackCatalog_C_DisplayLightsUnlockFlash__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.DisplayLightsUnlockFlash__UpdateFunc
struct ABackpackCatalog_C_DisplayLightsUnlockFlash__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.DisplayLightsUnlockFlash__LightsOn2__EventFunc
struct ABackpackCatalog_C_DisplayLightsUnlockFlash__LightsOn2__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.DisplayLightsUnlockFlash__LightsOn1__EventFunc
struct ABackpackCatalog_C_DisplayLightsUnlockFlash__LightsOn1__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__FinishedFunc
struct ABackpackCatalog_C_SpindleTransition__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__UpdateFunc
struct ABackpackCatalog_C_SpindleTransition__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__PopOutBottom__EventFunc
struct ABackpackCatalog_C_SpindleTransition__PopOutBottom__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__CloseTop__EventFunc
struct ABackpackCatalog_C_SpindleTransition__CloseTop__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__SelectedItemDisplay__EventFunc
struct ABackpackCatalog_C_SpindleTransition__SelectedItemDisplay__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__SelectedItemIcon__EventFunc
struct ABackpackCatalog_C_SpindleTransition__SelectedItemIcon__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__CatalogEntryDisplays__EventFunc
struct ABackpackCatalog_C_SpindleTransition__CatalogEntryDisplays__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleTransition__PointAndRateDisplay__EventFunc
struct ABackpackCatalog_C_SpindleTransition__PointAndRateDisplay__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__FinishedFunc
struct ABackpackCatalog_C_CatalogEntryDisplayTimeline__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__UpdateFunc
struct ABackpackCatalog_C_CatalogEntryDisplayTimeline__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__BottomRow__EventFunc
struct ABackpackCatalog_C_CatalogEntryDisplayTimeline__BottomRow__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__LowerRow__EventFunc
struct ABackpackCatalog_C_CatalogEntryDisplayTimeline__LowerRow__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__MiddleRow__EventFunc
struct ABackpackCatalog_C_CatalogEntryDisplayTimeline__MiddleRow__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__UpperRow__EventFunc
struct ABackpackCatalog_C_CatalogEntryDisplayTimeline__UpperRow__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.CatalogEntryDisplayTimeline__TopRow__EventFunc
struct ABackpackCatalog_C_CatalogEntryDisplayTimeline__TopRow__EventFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleTopRowScaling__FinishedFunc
struct ABackpackCatalog_C_SpindleTopRowScaling__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleTopRowScaling__UpdateFunc
struct ABackpackCatalog_C_SpindleTopRowScaling__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleBottomRowScaling__FinishedFunc
struct ABackpackCatalog_C_SpindleBottomRowScaling__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleBottomRowScaling__UpdateFunc
struct ABackpackCatalog_C_SpindleBottomRowScaling__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleLowerRowScaling__FinishedFunc
struct ABackpackCatalog_C_SpindleLowerRowScaling__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleLowerRowScaling__UpdateFunc
struct ABackpackCatalog_C_SpindleLowerRowScaling__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleCenterRowScaling__FinishedFunc
struct ABackpackCatalog_C_SpindleCenterRowScaling__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleCenterRowScaling__UpdateFunc
struct ABackpackCatalog_C_SpindleCenterRowScaling__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleUpperRowScaling__FinishedFunc
struct ABackpackCatalog_C_SpindleUpperRowScaling__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SpindleUpperRowScaling__UpdateFunc
struct ABackpackCatalog_C_SpindleUpperRowScaling__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SelectedIconScaling__FinishedFunc
struct ABackpackCatalog_C_SelectedIconScaling__FinishedFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.SelectedIconScaling__UpdateFunc
struct ABackpackCatalog_C_SelectedIconScaling__UpdateFunc_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.BndEvt__ConstructionButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct ABackpackCatalog_C_BndEvt__ConstructionButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackpackCatalog.BackpackCatalog_C.BndEvt__ExplorationButtonCollision_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature
struct ABackpackCatalog_C_BndEvt__ExplorationButtonCollision_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackpackCatalog.BackpackCatalog_C.BndEvt__SurvivalButtonCollision_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature
struct ABackpackCatalog_C_BndEvt__SurvivalButtonCollision_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackpackCatalog.BackpackCatalog_C.BndEvt__LabButtonCollision_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature
struct ABackpackCatalog_C_BndEvt__LabButtonCollision_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackpackCatalog.BackpackCatalog_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct ABackpackCatalog_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackpackCatalog.BackpackCatalog_C.ReceiveBeginPlay
struct ABackpackCatalog_C_ReceiveBeginPlay_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.OnMontageEnded
struct ABackpackCatalog_C_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.OnCatalogClicked
struct ABackpackCatalog_C_OnCatalogClicked_Params
{
	class AActor*                                      TouchedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackpackCatalog.BackpackCatalog_C.OnSelectedItemTypeChanged
struct ABackpackCatalog_C_OnSelectedItemTypeChanged_Params
{
	class UItemType*                                   selectedItemType;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.OnUnlockedItemsChanged
struct ABackpackCatalog_C_OnUnlockedItemsChanged_Params
{
	TArray<class UClass*>                              NewUnlockedItems;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BackpackCatalog.BackpackCatalog_C.OnResearchPointBalanceChanged
struct ABackpackCatalog_C_OnResearchPointBalanceChanged_Params
{
	float                                              NewResearchPointBalance;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature
struct ABackpackCatalog_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCracked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature
struct ABackpackCatalog_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCracked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.DPadUp Release
struct ABackpackCatalog_C_DPadUp_Release_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.OnNavigateUpBP
struct ABackpackCatalog_C_OnNavigateUpBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.OnNavigateDownBP
struct ABackpackCatalog_C_OnNavigateDownBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.OnNavigateRightBP
struct ABackpackCatalog_C_OnNavigateRightBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.OnNavigateLeftBP
struct ABackpackCatalog_C_OnNavigateLeftBP_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.DPadDown Release
struct ABackpackCatalog_C_DPadDown_Release_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.DPadLeft Release
struct ABackpackCatalog_C_DPadLeft_Release_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.DPadRight Release
struct ABackpackCatalog_C_DPadRight_Release_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct ABackpackCatalog_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackpackCatalog.BackpackCatalog_C.OnSpindleIconBeginCursorOver
struct ABackpackCatalog_C_OnSpindleIconBeginCursorOver_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.OnSpindleIconEndCursorOver
struct ABackpackCatalog_C_OnSpindleIconEndCursorOver_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.ActiveCatalogEntryChanged
struct ABackpackCatalog_C_ActiveCatalogEntryChanged_Params
{
	bool                                               bImmediate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackCatalog.BackpackCatalog_C.ReceiveActorBeginCursorOver
struct ABackpackCatalog_C_ReceiveActorBeginCursorOver_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.ReceiveActorEndCursorOver
struct ABackpackCatalog_C_ReceiveActorEndCursorOver_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.HandleCreativeModeCatalogUnlockedChanged
struct ABackpackCatalog_C_HandleCreativeModeCatalogUnlockedChanged_Params
{
};

// Function BackpackCatalog.BackpackCatalog_C.ExecuteUbergraph_BackpackCatalog
struct ABackpackCatalog_C_ExecuteUbergraph_BackpackCatalog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
