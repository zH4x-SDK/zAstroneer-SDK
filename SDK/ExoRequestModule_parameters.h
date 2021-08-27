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

// Function ExoRequestModule.ExoRequestModule_C.HandleScreenIndexChanged
struct AExoRequestModule_C_HandleScreenIndexChanged_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.OnRep_CurrScreenIndex
struct AExoRequestModule_C_OnRep_CurrScreenIndex_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.GetItemDrive
struct AExoRequestModule_C_GetItemDrive_Params
{
	class UItemDriveComponent*                         ItemDrive;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.SetArmsOpen
struct AExoRequestModule_C_SetArmsOpen_Params
{
	bool                                               Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.Enable Exhaust
struct AExoRequestModule_C_Enable_Exhaust_Params
{
	bool                                               bNewEnableState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.UpdateControlPanelDisplay
struct AExoRequestModule_C_UpdateControlPanelDisplay_Params
{
	class UExoRequestControlPanelPrimary_C*            ControlPanelDisplay;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.GetBodySlotLegacy
struct AExoRequestModule_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.UserConstructionScript
struct AExoRequestModule_C_UserConstructionScript_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.ReceiveBeginPlay
struct AExoRequestModule_C_ReceiveBeginPlay_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.OnUpdateDisplay
struct AExoRequestModule_C_OnUpdateDisplay_Params
{
	class UUserWidget*                                 ScreenWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.OnControlPanelReady
struct AExoRequestModule_C_OnControlPanelReady_Params
{
	class AControlPanel*                               ControlPanel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.ReceiveEndPlay
struct AExoRequestModule_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.DroppedInWorld
struct AExoRequestModule_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.PickedUpFromWorld
struct AExoRequestModule_C_PickedUpFromWorld_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.ReceiveHit
struct AExoRequestModule_C_ReceiveHit_Params
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

// Function ExoRequestModule.ExoRequestModule_C.OnResearchPointsChanged
struct AExoRequestModule_C_OnResearchPointsChanged_Params
{
	float                                              NewPointBalance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.CycleLeft
struct AExoRequestModule_C_CycleLeft_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.CycleRight
struct AExoRequestModule_C_CycleRight_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.OnStatisticRefreshed
struct AExoRequestModule_C_OnStatisticRefreshed_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature
struct AExoRequestModule_C_BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature_Params
{
	float                                              LaunchLength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature
struct AExoRequestModule_C_BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature_Params
{
	float                                              LaunchLength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
struct AExoRequestModule_C_BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature
struct AExoRequestModule_C_BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.OnCreativeModeEntered
struct AExoRequestModule_C_OnCreativeModeEntered_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.UpdateModuleState
struct AExoRequestModule_C_UpdateModuleState_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.UpdateEventIcon
struct AExoRequestModule_C_UpdateEventIcon_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.UpdateProgressBar
struct AExoRequestModule_C_UpdateProgressBar_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.TryToSwitchToClaimRewardTab
struct AExoRequestModule_C_TryToSwitchToClaimRewardTab_Params
{
	class AControlPanel*                               ControlPanel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCracked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoRequestModule.ExoRequestModule_C.HandleUnclaimedPhysicalItemRewardsChanged
struct AExoRequestModule_C_HandleUnclaimedPhysicalItemRewardsChanged_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.CustomEvent_1
struct AExoRequestModule_C_CustomEvent_1_Params
{
};

// Function ExoRequestModule.ExoRequestModule_C.ExecuteUbergraph_ExoRequestModule
struct AExoRequestModule_C_ExecuteUbergraph_ExoRequestModule_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
