
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

// Function Probe_Base.Probe_Base_C.SlotHasScanner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasScanner                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProbe_Base_C::SlotHasScanner(bool* HasScanner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.SlotHasScanner");

	AProbe_Base_C_SlotHasScanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasScanner != nullptr)
		*HasScanner = params.HasScanner;
}


// Function Probe_Base.Probe_Base_C.PositionTearSpawnPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProbe_Base_C::PositionTearSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.PositionTearSpawnPoint");

	AProbe_Base_C_PositionTearSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.UpdateUnlockedIndicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ItemInInputSlot                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProbe_Base_C::UpdateUnlockedIndicator(bool ItemInInputSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.UpdateUnlockedIndicator");

	AProbe_Base_C_UpdateUnlockedIndicator_Params params;
	params.ItemInInputSlot = ItemInInputSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProbe_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.UserConstructionScript");

	AProbe_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProbe_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.ReceiveBeginPlay");

	AProbe_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.OnUnlockedProbesChanged
// (BlueprintCallable, BlueprintEvent)

void AProbe_Base_C::OnUnlockedProbesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.OnUnlockedProbesChanged");

	AProbe_Base_C_OnUnlockedProbesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.OnBeginFinalResourceConsumption
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULockingMechanism*       SignallingLockingMechanism     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLockChangedEventMetadata EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AProbe_Base_C::OnBeginFinalResourceConsumption(class ULockingMechanism* SignallingLockingMechanism, const struct FLockChangedEventMetadata& EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.OnBeginFinalResourceConsumption");

	AProbe_Base_C_OnBeginFinalResourceConsumption_Params params;
	params.SignallingLockingMechanism = SignallingLockingMechanism;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.OnRealityTearOpenChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EWandererRealityTearOpenState  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProbe_Base_C::OnRealityTearOpenChanged(EWandererRealityTearOpenState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.OnRealityTearOpenChanged");

	AProbe_Base_C_OnRealityTearOpenChanged_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.BndEvt__ActorLock_K2Node_ComponentBoundEvent_0_LockingMechanismSignal__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class ULockingMechanism*       SignallingLockingMechanism     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLockChangedEventMetadata EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AProbe_Base_C::BndEvt__ActorLock_K2Node_ComponentBoundEvent_0_LockingMechanismSignal__DelegateSignature(class ULockingMechanism* SignallingLockingMechanism, const struct FLockChangedEventMetadata& EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.BndEvt__ActorLock_K2Node_ComponentBoundEvent_0_LockingMechanismSignal__DelegateSignature");

	AProbe_Base_C_BndEvt__ActorLock_K2Node_ComponentBoundEvent_0_LockingMechanismSignal__DelegateSignature_Params params;
	params.SignallingLockingMechanism = SignallingLockingMechanism;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.ReceiveHit
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

void AProbe_Base_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.ReceiveHit");

	AProbe_Base_C_ReceiveHit_Params params;
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


// Function Probe_Base.Probe_Base_C.BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProbe_Base_C::BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AProbe_Base_C_BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProbe_Base_C::BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AProbe_Base_C_BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProbe_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.ReceiveEndPlay");

	AProbe_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.MULTI_PlayScannerConsumptionSFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AProbe_Base_C::MULTI_PlayScannerConsumptionSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.MULTI_PlayScannerConsumptionSFX");

	AProbe_Base_C_MULTI_PlayScannerConsumptionSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.OnInputItemEmplaced
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProbe_Base_C::OnInputItemEmplaced(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.OnInputItemEmplaced");

	AProbe_Base_C_OnInputItemEmplaced_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.OnInputItemUnemplaced
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProbe_Base_C::OnInputItemUnemplaced(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.OnInputItemUnemplaced");

	AProbe_Base_C_OnInputItemUnemplaced_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Probe_Base.Probe_Base_C.ExecuteUbergraph_Probe_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProbe_Base_C::ExecuteUbergraph_Probe_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Probe_Base.Probe_Base_C.ExecuteUbergraph_Probe_Base");

	AProbe_Base_C_ExecuteUbergraph_Probe_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
