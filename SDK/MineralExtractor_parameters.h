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

// Function MineralExtractor.MineralExtractor_C.GetConversionProgress
struct AMineralExtractor_C_GetConversionProgress_Params
{
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.GetEffectiveOutputCountForCurrentConversion
struct AMineralExtractor_C_GetEffectiveOutputCountForCurrentConversion_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.GetMaxOutputCountForCurrentConversion
struct AMineralExtractor_C_GetMaxOutputCountForCurrentConversion_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.SERVER Try Pull Cannister To Input
struct AMineralExtractor_C_SERVER_Try_Pull_Cannister_To_Input_Params
{
};

// Function MineralExtractor.MineralExtractor_C.CLIENT Enable Input Indicator
struct AMineralExtractor_C_CLIENT_Enable_Input_Indicator_Params
{
};

// Function MineralExtractor.MineralExtractor_C.CheckIfNeedsTick
struct AMineralExtractor_C_CheckIfNeedsTick_Params
{
};

// Function MineralExtractor.MineralExtractor_C.UpdateModuleActiveAnimState
struct AMineralExtractor_C_UpdateModuleActiveAnimState_Params
{
};

// Function MineralExtractor.MineralExtractor_C.TryFillNextCan
struct AMineralExtractor_C_TryFillNextCan_Params
{
};

// Function MineralExtractor.MineralExtractor_C.UpdateSpinAnimationSpeed
struct AMineralExtractor_C_UpdateSpinAnimationSpeed_Params
{
	float                                              SpinRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.DestroyPartialOutputs
struct AMineralExtractor_C_DestroyPartialOutputs_Params
{
};

// Function MineralExtractor.MineralExtractor_C.UpdateControlPanelDisplay
struct AMineralExtractor_C_UpdateControlPanelDisplay_Params
{
	class UMineralExtractorControlPanelPrimary_C*      DisplayWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.TryTakeOutputResourceToStorage
struct AMineralExtractor_C_TryTakeOutputResourceToStorage_Params
{
	struct FSlotReference                              outputSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MineralExtractor.MineralExtractor_C.UpdateSpeedBasedSpinnerRotation
struct AMineralExtractor_C_UpdateSpeedBasedSpinnerRotation_Params
{
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.InitializeGaugeMaterials
struct AMineralExtractor_C_InitializeGaugeMaterials_Params
{
};

// Function MineralExtractor.MineralExtractor_C.HandleRemovedOutputResource
struct AMineralExtractor_C_HandleRemovedOutputResource_Params
{
};

// Function MineralExtractor.MineralExtractor_C.UpdateTankView
struct AMineralExtractor_C_UpdateTankView_Params
{
};

// Function MineralExtractor.MineralExtractor_C.SERVER TakeSediment
struct AMineralExtractor_C_SERVER_TakeSediment_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.GetBodySlotLegacy
struct AMineralExtractor_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.UserConstructionScript
struct AMineralExtractor_C_UserConstructionScript_Params
{
};

// Function MineralExtractor.MineralExtractor_C.RotateSpinnerAnim__FinishedFunc
struct AMineralExtractor_C_RotateSpinnerAnim__FinishedFunc_Params
{
};

// Function MineralExtractor.MineralExtractor_C.RotateSpinnerAnim__UpdateFunc
struct AMineralExtractor_C_RotateSpinnerAnim__UpdateFunc_Params
{
};

// Function MineralExtractor.MineralExtractor_C.FIllCanAnim__FinishedFunc
struct AMineralExtractor_C_FIllCanAnim__FinishedFunc_Params
{
};

// Function MineralExtractor.MineralExtractor_C.FIllCanAnim__UpdateFunc
struct AMineralExtractor_C_FIllCanAnim__UpdateFunc_Params
{
};

// Function MineralExtractor.MineralExtractor_C.ProduceResourcesAnim__FinishedFunc
struct AMineralExtractor_C_ProduceResourcesAnim__FinishedFunc_Params
{
};

// Function MineralExtractor.MineralExtractor_C.ProduceResourcesAnim__UpdateFunc
struct AMineralExtractor_C_ProduceResourcesAnim__UpdateFunc_Params
{
};

// Function MineralExtractor.MineralExtractor_C.SpinnerStartAnim__FinishedFunc
struct AMineralExtractor_C_SpinnerStartAnim__FinishedFunc_Params
{
};

// Function MineralExtractor.MineralExtractor_C.SpinnerStartAnim__UpdateFunc
struct AMineralExtractor_C_SpinnerStartAnim__UpdateFunc_Params
{
};

// Function MineralExtractor.MineralExtractor_C.SpinnerStopAnim__FinishedFunc
struct AMineralExtractor_C_SpinnerStopAnim__FinishedFunc_Params
{
};

// Function MineralExtractor.MineralExtractor_C.SpinnerStopAnim__UpdateFunc
struct AMineralExtractor_C_SpinnerStopAnim__UpdateFunc_Params
{
};

// Function MineralExtractor.MineralExtractor_C.ReceiveTick
struct AMineralExtractor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.ReceiveBeginPlay
struct AMineralExtractor_C_ReceiveBeginPlay_Params
{
};

// Function MineralExtractor.MineralExtractor_C.OnReleaseItem
struct AMineralExtractor_C_OnReleaseItem_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.IncrementSelection
struct AMineralExtractor_C_IncrementSelection_Params
{
};

// Function MineralExtractor.MineralExtractor_C.DecrementSelection
struct AMineralExtractor_C_DecrementSelection_Params
{
};

// Function MineralExtractor.MineralExtractor_C.ActivateSelection
struct AMineralExtractor_C_ActivateSelection_Params
{
};

// Function MineralExtractor.MineralExtractor_C.RotateSpinnerToAngle
struct AMineralExtractor_C_RotateSpinnerToAngle_Params
{
};

// Function MineralExtractor.MineralExtractor_C.FillCan
struct AMineralExtractor_C_FillCan_Params
{
};

// Function MineralExtractor.MineralExtractor_C.ReceiveDestroyed
struct AMineralExtractor_C_ReceiveDestroyed_Params
{
};

// Function MineralExtractor.MineralExtractor_C.ReceiveEndPlay
struct AMineralExtractor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.OnControlPanelReady
struct AMineralExtractor_C_OnControlPanelReady_Params
{
	class AControlPanel*                               ControlPanel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.OnUpdateControlPanelScreenInfo
struct AMineralExtractor_C_OnUpdateControlPanelScreenInfo_Params
{
	class UUserWidget*                                 ScreenWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.StartSpinner
struct AMineralExtractor_C_StartSpinner_Params
{
};

// Function MineralExtractor.MineralExtractor_C.StopSpinner
struct AMineralExtractor_C_StopSpinner_Params
{
};

// Function MineralExtractor.MineralExtractor_C.LoopSpinner
struct AMineralExtractor_C_LoopSpinner_Params
{
};

// Function MineralExtractor.MineralExtractor_C.DroppedInWorld
struct AMineralExtractor_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.PickedUpFromWorld
struct AMineralExtractor_C_PickedUpFromWorld_Params
{
};

// Function MineralExtractor.MineralExtractor_C.ReceiveHit
struct AMineralExtractor_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature
struct AMineralExtractor_C_BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature_Params
{
	EItemConverterState                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemConverterState                                prevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct AMineralExtractor_C_BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_2_OnItemConverterActiveConversionsListChanged__DelegateSignature
struct AMineralExtractor_C_BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_2_OnItemConverterActiveConversionsListChanged__DelegateSignature_Params
{
	TArray<struct FActiveItemConversionProgress>       newActiveConversions;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_3_OnItemConverterActiveConversionsListChanged__DelegateSignature
struct AMineralExtractor_C_BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_3_OnItemConverterActiveConversionsListChanged__DelegateSignature_Params
{
	TArray<struct FActiveItemConversionProgress>       newActiveConversions;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MineralExtractor.MineralExtractor_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AMineralExtractor_C_BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function MineralExtractor.MineralExtractor_C.OnInputSetItem
struct AMineralExtractor_C_OnInputSetItem_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.ControlPanelCrackedChanged
struct AMineralExtractor_C_ControlPanelCrackedChanged_Params
{
	class AControlPanel*                               ControlPanel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCracked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.OnSetItem
struct AMineralExtractor_C_OnSetItem_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.InitializeConversion
struct AMineralExtractor_C_InitializeConversion_Params
{
};

// Function MineralExtractor.MineralExtractor_C.BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AMineralExtractor_C_BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function MineralExtractor.MineralExtractor_C.HandleStateChanged
struct AMineralExtractor_C_HandleStateChanged_Params
{
	EItemConverterState                                New_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.OnInputReleaseItem
struct AMineralExtractor_C_OnInputReleaseItem_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MineralExtractor.MineralExtractor_C.ExecuteUbergraph_MineralExtractor
struct AMineralExtractor_C_ExecuteUbergraph_MineralExtractor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
