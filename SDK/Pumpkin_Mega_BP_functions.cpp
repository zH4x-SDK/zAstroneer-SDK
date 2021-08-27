
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

// Function Pumpkin_Mega_BP.Pumpkin_Mega_BP_C.SelectingSeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  SelectedSeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APumpkin_Mega_BP_C::SelectingSeed(class UClass** SelectedSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Mega_BP.Pumpkin_Mega_BP_C.SelectingSeed");

	APumpkin_Mega_BP_C_SelectingSeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedSeed != nullptr)
		*SelectedSeed = params.SelectedSeed;
}


// Function Pumpkin_Mega_BP.Pumpkin_Mega_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APumpkin_Mega_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Mega_BP.Pumpkin_Mega_BP_C.UserConstructionScript");

	APumpkin_Mega_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pumpkin_Mega_BP.Pumpkin_Mega_BP_C.Death and Seed
// (Public, BlueprintCallable, BlueprintEvent)

void APumpkin_Mega_BP_C::Death_and_Seed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Mega_BP.Pumpkin_Mega_BP_C.Death and Seed");

	APumpkin_Mega_BP_C_Death_and_Seed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pumpkin_Mega_BP.Pumpkin_Mega_BP_C.ExecuteUbergraph_Pumpkin_Mega_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APumpkin_Mega_BP_C::ExecuteUbergraph_Pumpkin_Mega_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Mega_BP.Pumpkin_Mega_BP_C.ExecuteUbergraph_Pumpkin_Mega_BP");

	APumpkin_Mega_BP_C_ExecuteUbergraph_Pumpkin_Mega_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
