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

// Function Trade_Large.Trade_Large_C.Set Trade In Progress
struct ATrade_Large_C_Set_Trade_In_Progress_Params
{
	bool                                               In_Progress;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trade_Large.Trade_Large_C.OnRep_TradeShipComponent
struct ATrade_Large_C_OnRep_TradeShipComponent_Params
{
};

// Function Trade_Large.Trade_Large_C.AwardAchievement
struct ATrade_Large_C_AwardAchievement_Params
{
};

// Function Trade_Large.Trade_Large_C.GetScoreMaxedOut
struct ATrade_Large_C_GetScoreMaxedOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trade_Large.Trade_Large_C.AuthorityEjectSurplusResources
struct ATrade_Large_C_AuthorityEjectSurplusResources_Params
{
};

// Function Trade_Large.Trade_Large_C.GetItemsSlottedToShip
struct ATrade_Large_C_GetItemsSlottedToShip_Params
{
	TArray<class APhysicalItem*>                       SlottedItems;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Trade_Large.Trade_Large_C.OnRep_REP Selected Output Index
struct ATrade_Large_C_OnRep_REP_Selected_Output_Index_Params
{
};

// Function Trade_Large.Trade_Large_C.OnRep_REP Resource Slots Enabled
struct ATrade_Large_C_OnRep_REP_Resource_Slots_Enabled_Params
{
};

// Function Trade_Large.Trade_Large_C.Update Resource Slots Enabled
struct ATrade_Large_C_Update_Resource_Slots_Enabled_Params
{
	bool                                               Score_Maxed_Out;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trade_Large.Trade_Large_C.Enable Exhaust
struct ATrade_Large_C_Enable_Exhaust_Params
{
	bool                                               bNewEnableState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trade_Large.Trade_Large_C.Modify Output Amount for Fit
struct ATrade_Large_C_Modify_Output_Amount_for_Fit_Params
{
	int                                                Output_Amount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                New_Output_Amount;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trade_Large.Trade_Large_C.Update State
struct ATrade_Large_C_Update_State_Params
{
};

// Function Trade_Large.Trade_Large_C.Authority Swap Resources
struct ATrade_Large_C_Authority_Swap_Resources_Params
{
};

// Function Trade_Large.Trade_Large_C.Update Score
struct ATrade_Large_C_Update_Score_Params
{
};

// Function Trade_Large.Trade_Large_C.UpdateControlPanelDisplay
struct ATrade_Large_C_UpdateControlPanelDisplay_Params
{
	class UTradeModuleControlPanelPrimary_C*           ControlPanelDisplay;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trade_Large.Trade_Large_C.GetBodySlotLegacy
struct ATrade_Large_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trade_Large.Trade_Large_C.UserConstructionScript
struct ATrade_Large_C_UserConstructionScript_Params
{
};

// Function Trade_Large.Trade_Large_C.ReceiveBeginPlay
struct ATrade_Large_C_ReceiveBeginPlay_Params
{
};

// Function Trade_Large.Trade_Large_C.OnUpdateDisplay
struct ATrade_Large_C_OnUpdateDisplay_Params
{
	class UUserWidget*                                 ScreenWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trade_Large.Trade_Large_C.OnControlPanelReady
struct ATrade_Large_C_OnControlPanelReady_Params
{
	class AControlPanel*                               ControlPanel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trade_Large.Trade_Large_C.OnCycleLeft
struct ATrade_Large_C_OnCycleLeft_Params
{
};

// Function Trade_Large.Trade_Large_C.OnCycleRight
struct ATrade_Large_C_OnCycleRight_Params
{
};

// Function Trade_Large.Trade_Large_C.ActivatedThroughControlPanel
struct ATrade_Large_C_ActivatedThroughControlPanel_Params
{
};

// Function Trade_Large.Trade_Large_C.HandleCycleLeft
struct ATrade_Large_C_HandleCycleLeft_Params
{
};

// Function Trade_Large.Trade_Large_C.HandleCycleRight
struct ATrade_Large_C_HandleCycleRight_Params
{
};

// Function Trade_Large.Trade_Large_C.ReceiveEndPlay
struct ATrade_Large_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trade_Large.Trade_Large_C.DroppedInWorld
struct ATrade_Large_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Trade_Large.Trade_Large_C.PickedUpFromWorld
struct ATrade_Large_C_PickedUpFromWorld_Params
{
};

// Function Trade_Large.Trade_Large_C.ReceiveHit
struct ATrade_Large_C_ReceiveHit_Params
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

// Function Trade_Large.Trade_Large_C.BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature
struct ATrade_Large_C_BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature_Params
{
	float                                              LaunchLength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trade_Large.Trade_Large_C.BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature
struct ATrade_Large_C_BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature_Params
{
	float                                              LaunchLength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trade_Large.Trade_Large_C.BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
struct ATrade_Large_C_BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params
{
};

// Function Trade_Large.Trade_Large_C.BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature
struct ATrade_Large_C_BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature_Params
{
};

// Function Trade_Large.Trade_Large_C.ExecuteUbergraph_Trade_Large
struct ATrade_Large_C_ExecuteUbergraph_Trade_Large_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
