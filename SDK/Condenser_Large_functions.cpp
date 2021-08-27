
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

// Function Condenser_Large.Condenser_Large_C.UpgradeModule
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACondenser_Large_C::UpgradeModule()
{
	static auto fn = UObject::FindObject<UFunction>("Function Condenser_Large.Condenser_Large_C.UpgradeModule");

	ACondenser_Large_C_UpgradeModule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Condenser_Large.Condenser_Large_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ACondenser_Large_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Condenser_Large.Condenser_Large_C.GetBodySlotLegacy");

	ACondenser_Large_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Condenser_Large.Condenser_Large_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACondenser_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Condenser_Large.Condenser_Large_C.UserConstructionScript");

	ACondenser_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Condenser_Large.Condenser_Large_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACondenser_Large_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Condenser_Large.Condenser_Large_C.ReceiveBeginPlay");

	ACondenser_Large_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Condenser_Large.Condenser_Large_C.ExecuteUbergraph_Condenser_Large
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACondenser_Large_C::ExecuteUbergraph_Condenser_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Condenser_Large.Condenser_Large_C.ExecuteUbergraph_Condenser_Large");

	ACondenser_Large_C_ExecuteUbergraph_Condenser_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
