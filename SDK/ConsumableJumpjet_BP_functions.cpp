
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

// Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.SFX_JumpjetDestroyed
// (Public, BlueprintCallable, BlueprintEvent)

void AConsumableJumpjet_BP_C::SFX_JumpjetDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.SFX_JumpjetDestroyed");

	AConsumableJumpjet_BP_C_SFX_JumpjetDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.SFX_SetFuelHealthSwitchState
// (Public, BlueprintCallable, BlueprintEvent)

void AConsumableJumpjet_BP_C::SFX_SetFuelHealthSwitchState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.SFX_SetFuelHealthSwitchState");

	AConsumableJumpjet_BP_C_SFX_SetFuelHealthSwitchState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.SpawnDestroyedEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AConsumableJumpjet_BP_C::SpawnDestroyedEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.SpawnDestroyedEffects");

	AConsumableJumpjet_BP_C_SpawnDestroyedEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.UpdateFuelHealthState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FuelHealth                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConsumableJumpjet_BP_C::UpdateFuelHealthState(float FuelHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.UpdateFuelHealthState");

	AConsumableJumpjet_BP_C_UpdateFuelHealthState_Params params;
	params.FuelHealth = FuelHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.UpdateChargeGaugePercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ChargePercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConsumableJumpjet_BP_C::UpdateChargeGaugePercent(float ChargePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.UpdateChargeGaugePercent");

	AConsumableJumpjet_BP_C_UpdateChargeGaugePercent_Params params;
	params.ChargePercent = ChargePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AConsumableJumpjet_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.UserConstructionScript");

	AConsumableJumpjet_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AConsumableJumpjet_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.ReceiveBeginPlay");

	AConsumableJumpjet_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.CreateLowFuelLightMaterialInstance
// (Public, BlueprintCallable, BlueprintEvent)

void AConsumableJumpjet_BP_C::CreateLowFuelLightMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.CreateLowFuelLightMaterialInstance");

	AConsumableJumpjet_BP_C_CreateLowFuelLightMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.OnPortionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          portionUsed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConsumableJumpjet_BP_C::OnPortionChanged(float portionUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.OnPortionChanged");

	AConsumableJumpjet_BP_C_OnPortionChanged_Params params;
	params.portionUsed = portionUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AConsumableJumpjet_BP_C::BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AConsumableJumpjet_BP_C_BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void AConsumableJumpjet_BP_C::BndEvt__ItemComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	AConsumableJumpjet_BP_C_BndEvt__ItemComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.Multicast_PlayDestroyedFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AConsumableJumpjet_BP_C::Multicast_PlayDestroyedFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.Multicast_PlayDestroyedFX");

	AConsumableJumpjet_BP_C_Multicast_PlayDestroyedFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.ExecuteUbergraph_ConsumableJumpjet_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConsumableJumpjet_BP_C::ExecuteUbergraph_ConsumableJumpjet_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableJumpjet_BP.ConsumableJumpjet_BP_C.ExecuteUbergraph_ConsumableJumpjet_BP");

	AConsumableJumpjet_BP_C_ExecuteUbergraph_ConsumableJumpjet_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
