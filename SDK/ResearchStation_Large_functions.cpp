
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

// Function ResearchStation_Large.ResearchStation_Large_C.UpgradeToNewResearchModule
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AResearchStation_Large_C::UpgradeToNewResearchModule()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchStation_Large.ResearchStation_Large_C.UpgradeToNewResearchModule");

	AResearchStation_Large_C_UpgradeToNewResearchModule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchStation_Large.ResearchStation_Large_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AResearchStation_Large_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchStation_Large.ResearchStation_Large_C.GetBodySlotLegacy");

	AResearchStation_Large_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResearchStation_Large.ResearchStation_Large_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AResearchStation_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchStation_Large.ResearchStation_Large_C.UserConstructionScript");

	AResearchStation_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchStation_Large.ResearchStation_Large_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AResearchStation_Large_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchStation_Large.ResearchStation_Large_C.ReceiveBeginPlay");

	AResearchStation_Large_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchStation_Large.ResearchStation_Large_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearchStation_Large_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchStation_Large.ResearchStation_Large_C.ReceiveEndPlay");

	AResearchStation_Large_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchStation_Large.ResearchStation_Large_C.ExecuteUbergraph_ResearchStation_Large
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearchStation_Large_C::ExecuteUbergraph_ResearchStation_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchStation_Large.ResearchStation_Large_C.ExecuteUbergraph_ResearchStation_Large");

	AResearchStation_Large_C_ExecuteUbergraph_ResearchStation_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
