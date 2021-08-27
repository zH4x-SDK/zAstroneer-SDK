
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

// Function ConsumableGasCanister.ConsumableGasCanister_C.UpdateCanisterVisuals_Internal
// (Public, BlueprintCallable, BlueprintEvent)

void AConsumableGasCanister_C::UpdateCanisterVisuals_Internal()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableGasCanister.ConsumableGasCanister_C.UpdateCanisterVisuals_Internal");

	AConsumableGasCanister_C_UpdateCanisterVisuals_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableGasCanister.ConsumableGasCanister_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AConsumableGasCanister_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableGasCanister.ConsumableGasCanister_C.UserConstructionScript");

	AConsumableGasCanister_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableGasCanister.ConsumableGasCanister_C.UpdateCanisterVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void AConsumableGasCanister_C::UpdateCanisterVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableGasCanister.ConsumableGasCanister_C.UpdateCanisterVisuals");

	AConsumableGasCanister_C_UpdateCanisterVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsumableGasCanister.ConsumableGasCanister_C.ExecuteUbergraph_ConsumableGasCanister
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConsumableGasCanister_C::ExecuteUbergraph_ConsumableGasCanister(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumableGasCanister.ConsumableGasCanister_C.ExecuteUbergraph_ConsumableGasCanister");

	AConsumableGasCanister_C_ExecuteUbergraph_ConsumableGasCanister_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
