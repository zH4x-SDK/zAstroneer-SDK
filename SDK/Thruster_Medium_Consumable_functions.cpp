
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

// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.UpdateConeMesh
// (Public, BlueprintCallable, BlueprintEvent)

void AThruster_Medium_Consumable_C::UpdateConeMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.UpdateConeMesh");

	AThruster_Medium_Consumable_C_UpdateConeMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.OnRep_REP_ThrusterUsed
// (BlueprintCallable, BlueprintEvent)

void AThruster_Medium_Consumable_C::OnRep_REP_ThrusterUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.OnRep_REP_ThrusterUsed");

	AThruster_Medium_Consumable_C_OnRep_REP_ThrusterUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.SwapToThrusterDebris
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AThruster_Medium_Consumable_C::SwapToThrusterDebris()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.SwapToThrusterDebris");

	AThruster_Medium_Consumable_C_SwapToThrusterDebris_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.UpdateThrusterVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void AThruster_Medium_Consumable_C::UpdateThrusterVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.UpdateThrusterVisuals");

	AThruster_Medium_Consumable_C_UpdateThrusterVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.TakeFuelAmount_Internal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Taken                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_Medium_Consumable_C::TakeFuelAmount_Internal(int Amount, int* Taken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.TakeFuelAmount_Internal");

	AThruster_Medium_Consumable_C_TakeFuelAmount_Internal_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Taken != nullptr)
		*Taken = params.Taken;
}


// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.Take Fuel_Internal
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Taken                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_Medium_Consumable_C::Take_Fuel_Internal(float Rate, int* Taken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.Take Fuel_Internal");

	AThruster_Medium_Consumable_C_Take_Fuel_Internal_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Taken != nullptr)
		*Taken = params.Taken;
}


// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.GetAvailableFuel_Internal
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Fuel                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_Medium_Consumable_C::GetAvailableFuel_Internal(float* Fuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.GetAvailableFuel_Internal");

	AThruster_Medium_Consumable_C_GetAvailableFuel_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Fuel != nullptr)
		*Fuel = params.Fuel;
}


// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AThruster_Medium_Consumable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.UserConstructionScript");

	AThruster_Medium_Consumable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AThruster_Medium_Consumable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.ReceiveBeginPlay");

	AThruster_Medium_Consumable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.FuelDrained
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AThruster_BASE_C*        Thruster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_Medium_Consumable_C::FuelDrained(class AThruster_BASE_C* Thruster)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.FuelDrained");

	AThruster_Medium_Consumable_C_FuelDrained_Params params;
	params.Thruster = Thruster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.ThrusterDebrisItemSwapped
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           DebrisItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_Medium_Consumable_C::ThrusterDebrisItemSwapped(class APhysicalItem* DebrisItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.ThrusterDebrisItemSwapped");

	AThruster_Medium_Consumable_C_ThrusterDebrisItemSwapped_Params params;
	params.DebrisItem = DebrisItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.ExecuteUbergraph_Thruster_Medium_Consumable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThruster_Medium_Consumable_C::ExecuteUbergraph_Thruster_Medium_Consumable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium_Consumable.Thruster_Medium_Consumable_C.ExecuteUbergraph_Thruster_Medium_Consumable");

	AThruster_Medium_Consumable_C_ExecuteUbergraph_Thruster_Medium_Consumable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
