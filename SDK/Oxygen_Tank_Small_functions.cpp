
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

// Function Oxygen_Tank_Small.Oxygen_Tank_Small_C.UpgradeLegacyTanks
// (Public, BlueprintCallable, BlueprintEvent)

void AOxygen_Tank_Small_C::UpgradeLegacyTanks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygen_Tank_Small.Oxygen_Tank_Small_C.UpgradeLegacyTanks");

	AOxygen_Tank_Small_C_UpgradeLegacyTanks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oxygen_Tank_Small.Oxygen_Tank_Small_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOxygen_Tank_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygen_Tank_Small.Oxygen_Tank_Small_C.UserConstructionScript");

	AOxygen_Tank_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oxygen_Tank_Small.Oxygen_Tank_Small_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOxygen_Tank_Small_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygen_Tank_Small.Oxygen_Tank_Small_C.ReceiveBeginPlay");

	AOxygen_Tank_Small_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oxygen_Tank_Small.Oxygen_Tank_Small_C.ExecuteUbergraph_Oxygen_Tank_Small
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOxygen_Tank_Small_C::ExecuteUbergraph_Oxygen_Tank_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygen_Tank_Small.Oxygen_Tank_Small_C.ExecuteUbergraph_Oxygen_Tank_Small");

	AOxygen_Tank_Small_C_ExecuteUbergraph_Oxygen_Tank_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
