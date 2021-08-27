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

// Function ResourceCombiner.ResourceCombiner_C.HandleConverterStateChanged
struct AResourceCombiner_C_HandleConverterStateChanged_Params
{
	EItemConverterState                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemConverterState                                prevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceCombiner.ResourceCombiner_C.RemoveInvalidOutputItem
struct AResourceCombiner_C_RemoveInvalidOutputItem_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.SetDrawerOpen
struct AResourceCombiner_C_SetDrawerOpen_Params
{
	bool                                               DrawerOpen;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceCombiner.ResourceCombiner_C.SetPumpActive
struct AResourceCombiner_C_SetPumpActive_Params
{
	bool                                               PumpActive;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceCombiner.ResourceCombiner_C.UpdateHeatingAnimationSpeed
struct AResourceCombiner_C_UpdateHeatingAnimationSpeed_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.UpdateControlPanelDisplay
struct AResourceCombiner_C_UpdateControlPanelDisplay_Params
{
	class UCombinerControlPanelPrimary_C*              DisplayPanel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceCombiner.ResourceCombiner_C.GetBodySlotLegacy
struct AResourceCombiner_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ResourceCombiner.ResourceCombiner_C.UserConstructionScript
struct AResourceCombiner_C_UserConstructionScript_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.RefiningStartAnim__FinishedFunc
struct AResourceCombiner_C_RefiningStartAnim__FinishedFunc_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.RefiningStartAnim__UpdateFunc
struct AResourceCombiner_C_RefiningStartAnim__UpdateFunc_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.DrawerCloseAnim__FinishedFunc
struct AResourceCombiner_C_DrawerCloseAnim__FinishedFunc_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.DrawerCloseAnim__UpdateFunc
struct AResourceCombiner_C_DrawerCloseAnim__UpdateFunc_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.RefiningEndAnim__FinishedFunc
struct AResourceCombiner_C_RefiningEndAnim__FinishedFunc_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.RefiningEndAnim__UpdateFunc
struct AResourceCombiner_C_RefiningEndAnim__UpdateFunc_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.ReceiveBeginPlay
struct AResourceCombiner_C_ReceiveBeginPlay_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.StartProductionAnimation
struct AResourceCombiner_C_StartProductionAnimation_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.PlayHeatUpAnim
struct AResourceCombiner_C_PlayHeatUpAnim_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.ReceiveDestroyed
struct AResourceCombiner_C_ReceiveDestroyed_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.OnActivatedThroughControlPanel
struct AResourceCombiner_C_OnActivatedThroughControlPanel_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.CycleLeft
struct AResourceCombiner_C_CycleLeft_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.CycleRight
struct AResourceCombiner_C_CycleRight_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.SetDisplayInfo
struct AResourceCombiner_C_SetDisplayInfo_Params
{
	class UUserWidget*                                 ScreenWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceCombiner.ResourceCombiner_C.OnControlPanelReady
struct AResourceCombiner_C_OnControlPanelReady_Params
{
	class AControlPanel*                               ControlPanel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceCombiner.ResourceCombiner_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature
struct AResourceCombiner_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature_Params
{
	EItemConverterState                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemConverterState                                prevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceCombiner.ResourceCombiner_C.StopProductionAnimation
struct AResourceCombiner_C_StopProductionAnimation_Params
{
	bool                                               OpenDrawerAtEnd;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceCombiner.ResourceCombiner_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AResourceCombiner_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.OnControlPanelCrackedStateChanged
struct AResourceCombiner_C_OnControlPanelCrackedStateChanged_Params
{
	class AControlPanel*                               ControlPanel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCracked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceCombiner.ResourceCombiner_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConversionStateChanged__DelegateSignature
struct AResourceCombiner_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConversionStateChanged__DelegateSignature_Params
{
	TArray<class UClass*>                              outputItemTypes;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ResourceCombiner.ResourceCombiner_C.DroppedInWorld
struct AResourceCombiner_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ResourceCombiner.ResourceCombiner_C.PickedUpFromWorld
struct AResourceCombiner_C_PickedUpFromWorld_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.ReceiveHit
struct AResourceCombiner_C_ReceiveHit_Params
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

// Function ResourceCombiner.ResourceCombiner_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct AResourceCombiner_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function ResourceCombiner.ResourceCombiner_C.ExecuteUbergraph_ResourceCombiner
struct AResourceCombiner_C_ExecuteUbergraph_ResourceCombiner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
