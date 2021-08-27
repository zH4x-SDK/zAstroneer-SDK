
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

// Function Thruster_Medium.Thruster_Medium_C.GetAvailableFuel_Internal
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Fuel                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_Medium_C::GetAvailableFuel_Internal(float* Fuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium.Thruster_Medium_C.GetAvailableFuel_Internal");

	AThruster_Medium_C_GetAvailableFuel_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Fuel != nullptr)
		*Fuel = params.Fuel;
}


// Function Thruster_Medium.Thruster_Medium_C.TakeFuelAmount_Internal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Taken                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_Medium_C::TakeFuelAmount_Internal(int Amount, int* Taken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium.Thruster_Medium_C.TakeFuelAmount_Internal");

	AThruster_Medium_C_TakeFuelAmount_Internal_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Taken != nullptr)
		*Taken = params.Taken;
}


// Function Thruster_Medium.Thruster_Medium_C.GetHasFuel_Internal
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasFuel                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_Medium_C::GetHasFuel_Internal(bool* HasFuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium.Thruster_Medium_C.GetHasFuel_Internal");

	AThruster_Medium_C_GetHasFuel_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasFuel != nullptr)
		*HasFuel = params.HasFuel;
}


// Function Thruster_Medium.Thruster_Medium_C.Take Fuel_Internal
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Taken                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThruster_Medium_C::Take_Fuel_Internal(float Rate, int* Taken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium.Thruster_Medium_C.Take Fuel_Internal");

	AThruster_Medium_C_Take_Fuel_Internal_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Taken != nullptr)
		*Taken = params.Taken;
}


// Function Thruster_Medium.Thruster_Medium_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AThruster_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thruster_Medium.Thruster_Medium_C.UserConstructionScript");

	AThruster_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
