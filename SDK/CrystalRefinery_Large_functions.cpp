
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

// Function CrystalRefinery_Large.CrystalRefinery_Large_C.UpgradeModule
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACrystalRefinery_Large_C::UpgradeModule()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalRefinery_Large.CrystalRefinery_Large_C.UpgradeModule");

	ACrystalRefinery_Large_C_UpgradeModule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalRefinery_Large.CrystalRefinery_Large_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ACrystalRefinery_Large_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalRefinery_Large.CrystalRefinery_Large_C.GetBodySlotLegacy");

	ACrystalRefinery_Large_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CrystalRefinery_Large.CrystalRefinery_Large_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACrystalRefinery_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalRefinery_Large.CrystalRefinery_Large_C.UserConstructionScript");

	ACrystalRefinery_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalRefinery_Large.CrystalRefinery_Large_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACrystalRefinery_Large_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalRefinery_Large.CrystalRefinery_Large_C.ReceiveBeginPlay");

	ACrystalRefinery_Large_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalRefinery_Large.CrystalRefinery_Large_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACrystalRefinery_Large_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalRefinery_Large.CrystalRefinery_Large_C.ReceiveEndPlay");

	ACrystalRefinery_Large_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalRefinery_Large.CrystalRefinery_Large_C.ExecuteUbergraph_CrystalRefinery_Large
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACrystalRefinery_Large_C::ExecuteUbergraph_CrystalRefinery_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalRefinery_Large.CrystalRefinery_Large_C.ExecuteUbergraph_CrystalRefinery_Large");

	ACrystalRefinery_Large_C_ExecuteUbergraph_CrystalRefinery_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
