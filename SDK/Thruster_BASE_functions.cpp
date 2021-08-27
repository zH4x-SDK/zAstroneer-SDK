
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

// Function Thruster_BASE.Thruster_BASE_C.Set Use Context
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::Set_Use_Context(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.Set Use Context");

	AThruster_BASE_C_Set_Use_Context_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.Set Initial Use Context
// (Public, BlueprintCallable, BlueprintEvent)

void AThruster_BASE_C::Set_Initial_Use_Context()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.Set Initial Use Context");

	AThruster_BASE_C_Set_Initial_Use_Context_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.OnRep_REP_FX_Override
// (BlueprintCallable, BlueprintEvent)

void AThruster_BASE_C::OnRep_REP_FX_Override()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.OnRep_REP_FX_Override");

	AThruster_BASE_C_OnRep_REP_FX_Override_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.SetThrusterControlOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Override                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::SetThrusterControlOverride(bool Override)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.SetThrusterControlOverride");

	AThruster_BASE_C_SetThrusterControlOverride_Params params;
	params.Override = Override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.GetAvailableFuel_Internal
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Fuel                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::GetAvailableFuel_Internal(float* Fuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.GetAvailableFuel_Internal");

	AThruster_BASE_C_GetAvailableFuel_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Fuel != nullptr)
		*Fuel = params.Fuel;
}


// Function Thruster_BASE.Thruster_BASE_C.GetAvailableFuel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Fuel                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::GetAvailableFuel(float* Fuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.GetAvailableFuel");

	AThruster_BASE_C_GetAvailableFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Fuel != nullptr)
		*Fuel = params.Fuel;
}


// Function Thruster_BASE.Thruster_BASE_C.CheckFuelStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasFuelCurrent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::CheckFuelStateChanged(bool HasFuelCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.CheckFuelStateChanged");

	AThruster_BASE_C_CheckFuelStateChanged_Params params;
	params.HasFuelCurrent = HasFuelCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.TakeFuelAmount_Internal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Taken                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::TakeFuelAmount_Internal(int Amount, int* Taken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.TakeFuelAmount_Internal");

	AThruster_BASE_C_TakeFuelAmount_Internal_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Taken != nullptr)
		*Taken = params.Taken;
}


// Function Thruster_BASE.Thruster_BASE_C.TakeFuelAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Taken                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::TakeFuelAmount(int Amount, int* Taken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.TakeFuelAmount");

	AThruster_BASE_C_TakeFuelAmount_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Taken != nullptr)
		*Taken = params.Taken;
}


// Function Thruster_BASE.Thruster_BASE_C.GetThrusterParticles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UParticleSystemComponent*> NewParam                       (Parm, OutParm, ZeroConstructor)

void AThruster_BASE_C::GetThrusterParticles(TArray<class UParticleSystemComponent*>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.GetThrusterParticles");

	AThruster_BASE_C_GetThrusterParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Thruster_BASE.Thruster_BASE_C.Take Fuel_Internal
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Taken                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::Take_Fuel_Internal(float Rate, int* Taken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.Take Fuel_Internal");

	AThruster_BASE_C_Take_Fuel_Internal_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Taken != nullptr)
		*Taken = params.Taken;
}


// Function Thruster_BASE.Thruster_BASE_C.GetHasFuel_Internal
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasFuel                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::GetHasFuel_Internal(bool* HasFuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.GetHasFuel_Internal");

	AThruster_BASE_C_GetHasFuel_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasFuel != nullptr)
		*HasFuel = params.HasFuel;
}


// Function Thruster_BASE.Thruster_BASE_C.GetHasFuel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AThruster_BASE_C::GetHasFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.GetHasFuel");

	AThruster_BASE_C_GetHasFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Thruster_BASE.Thruster_BASE_C.GetOffsetFromOwner
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AThruster_BASE_C::GetOffsetFromOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.GetOffsetFromOwner");

	AThruster_BASE_C_GetOffsetFromOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Thruster_BASE.Thruster_BASE_C.UpdateThrusterMotion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AThruster_BASE_C::UpdateThrusterMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.UpdateThrusterMotion");

	AThruster_BASE_C_UpdateThrusterMotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.UpdateFuelState
// (Public, BlueprintCallable, BlueprintEvent)

void AThruster_BASE_C::UpdateFuelState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.UpdateFuelState");

	AThruster_BASE_C_UpdateFuelState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AThruster_BASE_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.GetBodySlotLegacy");

	AThruster_BASE_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Thruster_BASE.Thruster_BASE_C.Take Fuel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Taken                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::Take_Fuel(float Rate, int* Taken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.Take Fuel");

	AThruster_BASE_C_Take_Fuel_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Taken != nullptr)
		*Taken = params.Taken;
}


// Function Thruster_BASE.Thruster_BASE_C.Set FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::Set_FX(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.Set FX");

	AThruster_BASE_C_Set_FX_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AThruster_BASE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.UserConstructionScript");

	AThruster_BASE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AThruster_BASE_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	AThruster_BASE_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AThruster_BASE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.ReceiveBeginPlay");

	AThruster_BASE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.ReceiveTick");

	AThruster_BASE_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AThruster_BASE_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.DroppedInWorld");

	AThruster_BASE_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AThruster_BASE_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.PickedUpFromWorld");

	AThruster_BASE_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AThruster_BASE_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.ReceiveDestroyed");

	AThruster_BASE_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_0_PlayerSimpleInteraction__DelegateSignature
// (BlueprintEvent)

void AThruster_BASE_C::BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_0_PlayerSimpleInteraction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_0_PlayerSimpleInteraction__DelegateSignature");

	AThruster_BASE_C_BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_0_PlayerSimpleInteraction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_1_PlayerSimpleInteraction__DelegateSignature
// (BlueprintEvent)

void AThruster_BASE_C::BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_1_PlayerSimpleInteraction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_1_PlayerSimpleInteraction__DelegateSignature");

	AThruster_BASE_C_BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_1_PlayerSimpleInteraction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_2_PlayerSimpleInteraction__DelegateSignature
// (BlueprintEvent)

void AThruster_BASE_C::BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_2_PlayerSimpleInteraction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_2_PlayerSimpleInteraction__DelegateSignature");

	AThruster_BASE_C_BndEvt__PlayerInteraction_K2Node_ComponentBoundEvent_2_PlayerSimpleInteraction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.PlacedInSlot");

	AThruster_BASE_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.ReleasedFromSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::ReleasedFromSlot(bool FromTool, bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.ReleasedFromSlot");

	AThruster_BASE_C_ReleasedFromSlot_Params params;
	params.FromTool = FromTool;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.ReceiveHit
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

void AThruster_BASE_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.ReceiveHit");

	AThruster_BASE_C_ReceiveHit_Params params;
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


// Function Thruster_BASE.Thruster_BASE_C.Push Use Suppression
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AThruster_BASE_C*        Thruster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::Push_Use_Suppression(class AThruster_BASE_C* Thruster)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.Push Use Suppression");

	AThruster_BASE_C_Push_Use_Suppression_Params params;
	params.Thruster = Thruster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.Pop Use Suppression
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AThruster_BASE_C*        Thruster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::Pop_Use_Suppression(class AThruster_BASE_C* Thruster)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.Pop Use Suppression");

	AThruster_BASE_C_Pop_Use_Suppression_Params params;
	params.Thruster = Thruster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.ExecuteUbergraph_Thruster_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::ExecuteUbergraph_Thruster_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.ExecuteUbergraph_Thruster_BASE");

	AThruster_BASE_C_ExecuteUbergraph_Thruster_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.OnFuelRestored__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AThruster_BASE_C*        Thruster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::OnFuelRestored__DelegateSignature(class AThruster_BASE_C* Thruster)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.OnFuelRestored__DelegateSignature");

	AThruster_BASE_C_OnFuelRestored__DelegateSignature_Params params;
	params.Thruster = Thruster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_BASE.Thruster_BASE_C.OnFuelDrained__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AThruster_BASE_C*        Thruster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_BASE_C::OnFuelDrained__DelegateSignature(class AThruster_BASE_C* Thruster)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_BASE.Thruster_BASE_C.OnFuelDrained__DelegateSignature");

	AThruster_BASE_C_OnFuelDrained__DelegateSignature_Params params;
	params.Thruster = Thruster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
