
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

// Function SedimentFilter_Large.SedimentFilter_Large_C.UpgradeModule
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASedimentFilter_Large_C::UpgradeModule()
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentFilter_Large.SedimentFilter_Large_C.UpgradeModule");

	ASedimentFilter_Large_C_UpgradeModule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentFilter_Large.SedimentFilter_Large_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ASedimentFilter_Large_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentFilter_Large.SedimentFilter_Large_C.GetBodySlotLegacy");

	ASedimentFilter_Large_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SedimentFilter_Large.SedimentFilter_Large_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASedimentFilter_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentFilter_Large.SedimentFilter_Large_C.UserConstructionScript");

	ASedimentFilter_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentFilter_Large.SedimentFilter_Large_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASedimentFilter_Large_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentFilter_Large.SedimentFilter_Large_C.ReceiveBeginPlay");

	ASedimentFilter_Large_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentFilter_Large.SedimentFilter_Large_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASedimentFilter_Large_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentFilter_Large.SedimentFilter_Large_C.ReceiveEndPlay");

	ASedimentFilter_Large_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SedimentFilter_Large.SedimentFilter_Large_C.ExecuteUbergraph_SedimentFilter_Large
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASedimentFilter_Large_C::ExecuteUbergraph_SedimentFilter_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SedimentFilter_Large.SedimentFilter_Large_C.ExecuteUbergraph_SedimentFilter_Large");

	ASedimentFilter_Large_C_ExecuteUbergraph_SedimentFilter_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
