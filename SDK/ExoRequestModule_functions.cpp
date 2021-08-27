
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

// Function ExoRequestModule.ExoRequestModule_C.HandleScreenIndexChanged
// (Public, BlueprintCallable, BlueprintEvent)

void AExoRequestModule_C::HandleScreenIndexChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.HandleScreenIndexChanged");

	AExoRequestModule_C_HandleScreenIndexChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.OnRep_CurrScreenIndex
// (BlueprintCallable, BlueprintEvent)

void AExoRequestModule_C::OnRep_CurrScreenIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.OnRep_CurrScreenIndex");

	AExoRequestModule_C_OnRep_CurrScreenIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.GetItemDrive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItemDriveComponent*     ItemDrive                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExoRequestModule_C::GetItemDrive(class UItemDriveComponent** ItemDrive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.GetItemDrive");

	AExoRequestModule_C_GetItemDrive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDrive != nullptr)
		*ItemDrive = params.ItemDrive;
}


// Function ExoRequestModule.ExoRequestModule_C.SetArmsOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoRequestModule_C::SetArmsOpen(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.SetArmsOpen");

	AExoRequestModule_C_SetArmsOpen_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.Enable Exhaust
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewEnableState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoRequestModule_C::Enable_Exhaust(bool bNewEnableState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.Enable Exhaust");

	AExoRequestModule_C_Enable_Exhaust_Params params;
	params.bNewEnableState = bNewEnableState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.UpdateControlPanelDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UExoRequestControlPanelPrimary_C* ControlPanelDisplay            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoRequestModule_C::UpdateControlPanelDisplay(class UExoRequestControlPanelPrimary_C* ControlPanelDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.UpdateControlPanelDisplay");

	AExoRequestModule_C_UpdateControlPanelDisplay_Params params;
	params.ControlPanelDisplay = ControlPanelDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AExoRequestModule_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.GetBodySlotLegacy");

	AExoRequestModule_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ExoRequestModule.ExoRequestModule_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AExoRequestModule_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.UserConstructionScript");

	AExoRequestModule_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AExoRequestModule_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.ReceiveBeginPlay");

	AExoRequestModule_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.OnUpdateDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             ScreenWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoRequestModule_C::OnUpdateDisplay(class UUserWidget* ScreenWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.OnUpdateDisplay");

	AExoRequestModule_C_OnUpdateDisplay_Params params;
	params.ScreenWidget = ScreenWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.OnControlPanelReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AControlPanel*           ControlPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoRequestModule_C::OnControlPanelReady(class AControlPanel* ControlPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.OnControlPanelReady");

	AExoRequestModule_C_OnControlPanelReady_Params params;
	params.ControlPanel = ControlPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoRequestModule_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.ReceiveEndPlay");

	AExoRequestModule_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AExoRequestModule_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.DroppedInWorld");

	AExoRequestModule_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AExoRequestModule_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.PickedUpFromWorld");

	AExoRequestModule_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.ReceiveHit
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

void AExoRequestModule_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.ReceiveHit");

	AExoRequestModule_C_ReceiveHit_Params params;
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


// Function ExoRequestModule.ExoRequestModule_C.OnResearchPointsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewPointBalance                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoRequestModule_C::OnResearchPointsChanged(float NewPointBalance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.OnResearchPointsChanged");

	AExoRequestModule_C_OnResearchPointsChanged_Params params;
	params.NewPointBalance = NewPointBalance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.CycleLeft
// (BlueprintCallable, BlueprintEvent)

void AExoRequestModule_C::CycleLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.CycleLeft");

	AExoRequestModule_C_CycleLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.CycleRight
// (BlueprintCallable, BlueprintEvent)

void AExoRequestModule_C::CycleRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.CycleRight");

	AExoRequestModule_C_CycleRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.OnStatisticRefreshed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoRequestModule_C::OnStatisticRefreshed(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.OnStatisticRefreshed");

	AExoRequestModule_C_OnStatisticRefreshed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          LaunchLength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoRequestModule_C::BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature(float LaunchLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature");

	AExoRequestModule_C_BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature_Params params;
	params.LaunchLength = LaunchLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          LaunchLength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoRequestModule_C::BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature(float LaunchLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature");

	AExoRequestModule_C_BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature_Params params;
	params.LaunchLength = LaunchLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
// (BlueprintEvent)

void AExoRequestModule_C::BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature");

	AExoRequestModule_C_BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature
// (BlueprintEvent)

void AExoRequestModule_C::BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature");

	AExoRequestModule_C_BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.OnCreativeModeEntered
// (BlueprintCallable, BlueprintEvent)

void AExoRequestModule_C::OnCreativeModeEntered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.OnCreativeModeEntered");

	AExoRequestModule_C_OnCreativeModeEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.UpdateModuleState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AExoRequestModule_C::UpdateModuleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.UpdateModuleState");

	AExoRequestModule_C_UpdateModuleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.UpdateEventIcon
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AExoRequestModule_C::UpdateEventIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.UpdateEventIcon");

	AExoRequestModule_C_UpdateEventIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.UpdateProgressBar
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AExoRequestModule_C::UpdateProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.UpdateProgressBar");

	AExoRequestModule_C_UpdateProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.TryToSwitchToClaimRewardTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AControlPanel*           ControlPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCracked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoRequestModule_C::TryToSwitchToClaimRewardTab(class AControlPanel* ControlPanel, bool IsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.TryToSwitchToClaimRewardTab");

	AExoRequestModule_C_TryToSwitchToClaimRewardTab_Params params;
	params.ControlPanel = ControlPanel;
	params.IsCracked = IsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.HandleUnclaimedPhysicalItemRewardsChanged
// (BlueprintCallable, BlueprintEvent)

void AExoRequestModule_C::HandleUnclaimedPhysicalItemRewardsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.HandleUnclaimedPhysicalItemRewardsChanged");

	AExoRequestModule_C_HandleUnclaimedPhysicalItemRewardsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AExoRequestModule_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.CustomEvent_1");

	AExoRequestModule_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoRequestModule.ExoRequestModule_C.ExecuteUbergraph_ExoRequestModule
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExoRequestModule_C::ExecuteUbergraph_ExoRequestModule(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestModule.ExoRequestModule_C.ExecuteUbergraph_ExoRequestModule");

	AExoRequestModule_C_ExecuteUbergraph_ExoRequestModule_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
