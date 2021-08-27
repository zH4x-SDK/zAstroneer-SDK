
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Trade_Large.Trade_Large_C.Set Trade In Progress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In_Progress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrade_Large_C::Set_Trade_In_Progress(bool In_Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.Set Trade In Progress");

	ATrade_Large_C_Set_Trade_In_Progress_Params params;
	params.In_Progress = In_Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.OnRep_TradeShipComponent
// (BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::OnRep_TradeShipComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.OnRep_TradeShipComponent");

	ATrade_Large_C_OnRep_TradeShipComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.AwardAchievement
// (Public, BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::AwardAchievement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.AwardAchievement");

	ATrade_Large_C_AwardAchievement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.GetScoreMaxedOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATrade_Large_C::GetScoreMaxedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.GetScoreMaxedOut");

	ATrade_Large_C_GetScoreMaxedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trade_Large.Trade_Large_C.AuthorityEjectSurplusResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::AuthorityEjectSurplusResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.AuthorityEjectSurplusResources");

	ATrade_Large_C_AuthorityEjectSurplusResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.GetItemsSlottedToShip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class APhysicalItem*>   SlottedItems                   (Parm, OutParm, ZeroConstructor)

void ATrade_Large_C::GetItemsSlottedToShip(TArray<class APhysicalItem*>* SlottedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.GetItemsSlottedToShip");

	ATrade_Large_C_GetItemsSlottedToShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlottedItems != nullptr)
		*SlottedItems = params.SlottedItems;
}


// Function Trade_Large.Trade_Large_C.OnRep_REP Selected Output Index
// (BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::OnRep_REP_Selected_Output_Index()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.OnRep_REP Selected Output Index");

	ATrade_Large_C_OnRep_REP_Selected_Output_Index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.OnRep_REP Resource Slots Enabled
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::OnRep_REP_Resource_Slots_Enabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.OnRep_REP Resource Slots Enabled");

	ATrade_Large_C_OnRep_REP_Resource_Slots_Enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.Update Resource Slots Enabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Score_Maxed_Out                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrade_Large_C::Update_Resource_Slots_Enabled(bool Score_Maxed_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.Update Resource Slots Enabled");

	ATrade_Large_C_Update_Resource_Slots_Enabled_Params params;
	params.Score_Maxed_Out = Score_Maxed_Out;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.Enable Exhaust
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewEnableState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrade_Large_C::Enable_Exhaust(bool bNewEnableState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.Enable Exhaust");

	ATrade_Large_C_Enable_Exhaust_Params params;
	params.bNewEnableState = bNewEnableState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.Modify Output Amount for Fit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Output_Amount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            New_Output_Amount              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATrade_Large_C::Modify_Output_Amount_for_Fit(int Output_Amount, int* New_Output_Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.Modify Output Amount for Fit");

	ATrade_Large_C_Modify_Output_Amount_for_Fit_Params params;
	params.Output_Amount = Output_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (New_Output_Amount != nullptr)
		*New_Output_Amount = params.New_Output_Amount;
}


// Function Trade_Large.Trade_Large_C.Update State
// (Public, BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::Update_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.Update State");

	ATrade_Large_C_Update_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.Authority Swap Resources
// (Public, BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::Authority_Swap_Resources()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.Authority Swap Resources");

	ATrade_Large_C_Authority_Swap_Resources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.Update Score
// (Public, BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::Update_Score()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.Update Score");

	ATrade_Large_C_Update_Score_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.UpdateControlPanelDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTradeModuleControlPanelPrimary_C* ControlPanelDisplay            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrade_Large_C::UpdateControlPanelDisplay(class UTradeModuleControlPanelPrimary_C* ControlPanelDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.UpdateControlPanelDisplay");

	ATrade_Large_C_UpdateControlPanelDisplay_Params params;
	params.ControlPanelDisplay = ControlPanelDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ATrade_Large_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.GetBodySlotLegacy");

	ATrade_Large_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trade_Large.Trade_Large_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.UserConstructionScript");

	ATrade_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATrade_Large_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.ReceiveBeginPlay");

	ATrade_Large_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.OnUpdateDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             ScreenWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrade_Large_C::OnUpdateDisplay(class UUserWidget* ScreenWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.OnUpdateDisplay");

	ATrade_Large_C_OnUpdateDisplay_Params params;
	params.ScreenWidget = ScreenWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.OnControlPanelReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AControlPanel*           ControlPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrade_Large_C::OnControlPanelReady(class AControlPanel* ControlPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.OnControlPanelReady");

	ATrade_Large_C_OnControlPanelReady_Params params;
	params.ControlPanel = ControlPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.OnCycleLeft
// (BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::OnCycleLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.OnCycleLeft");

	ATrade_Large_C_OnCycleLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.OnCycleRight
// (BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::OnCycleRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.OnCycleRight");

	ATrade_Large_C_OnCycleRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.ActivatedThroughControlPanel
// (BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::ActivatedThroughControlPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.ActivatedThroughControlPanel");

	ATrade_Large_C_ActivatedThroughControlPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.HandleCycleLeft
// (BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::HandleCycleLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.HandleCycleLeft");

	ATrade_Large_C_HandleCycleLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.HandleCycleRight
// (BlueprintCallable, BlueprintEvent)

void ATrade_Large_C::HandleCycleRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.HandleCycleRight");

	ATrade_Large_C_HandleCycleRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrade_Large_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.ReceiveEndPlay");

	ATrade_Large_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATrade_Large_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.DroppedInWorld");

	ATrade_Large_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ATrade_Large_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.PickedUpFromWorld");

	ATrade_Large_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATrade_Large_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.ReceiveHit");

	ATrade_Large_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          LaunchLength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrade_Large_C::BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature(float LaunchLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature");

	ATrade_Large_C_BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature_Params params;
	params.LaunchLength = LaunchLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          LaunchLength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrade_Large_C::BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature(float LaunchLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature");

	ATrade_Large_C_BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature_Params params;
	params.LaunchLength = LaunchLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
// (BlueprintEvent)

void ATrade_Large_C::BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature");

	ATrade_Large_C_BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature
// (BlueprintEvent)

void ATrade_Large_C::BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature");

	ATrade_Large_C_BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Large.Trade_Large_C.ExecuteUbergraph_Trade_Large
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrade_Large_C::ExecuteUbergraph_Trade_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Large.Trade_Large_C.ExecuteUbergraph_Trade_Large");

	ATrade_Large_C_ExecuteUbergraph_Trade_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
