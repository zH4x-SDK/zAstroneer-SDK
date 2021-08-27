
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

// Function HydrazineJetpack_BP.HydrazineJetpack_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHydrazineJetpack_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HydrazineJetpack_BP.HydrazineJetpack_BP_C.UserConstructionScript");

	AHydrazineJetpack_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrazineJetpack_BP.HydrazineJetpack_BP_C.CreateLowFuelLightMaterialInstance
// (Public, BlueprintCallable, BlueprintEvent)

void AHydrazineJetpack_BP_C::CreateLowFuelLightMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function HydrazineJetpack_BP.HydrazineJetpack_BP_C.CreateLowFuelLightMaterialInstance");

	AHydrazineJetpack_BP_C_CreateLowFuelLightMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrazineJetpack_BP.HydrazineJetpack_BP_C.ExecuteUbergraph_HydrazineJetpack_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHydrazineJetpack_BP_C::ExecuteUbergraph_HydrazineJetpack_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HydrazineJetpack_BP.HydrazineJetpack_BP_C.ExecuteUbergraph_HydrazineJetpack_BP");

	AHydrazineJetpack_BP_C_ExecuteUbergraph_HydrazineJetpack_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
