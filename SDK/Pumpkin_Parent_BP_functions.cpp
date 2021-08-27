
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

// Function Pumpkin_Parent_BP.Pumpkin_Parent_BP_C.SelectSeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  SelectedSeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APumpkin_Parent_BP_C::SelectSeed(class UClass** SelectedSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Parent_BP.Pumpkin_Parent_BP_C.SelectSeed");

	APumpkin_Parent_BP_C_SelectSeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedSeed != nullptr)
		*SelectedSeed = params.SelectedSeed;
}


// Function Pumpkin_Parent_BP.Pumpkin_Parent_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APumpkin_Parent_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Parent_BP.Pumpkin_Parent_BP_C.UserConstructionScript");

	APumpkin_Parent_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pumpkin_Parent_BP.Pumpkin_Parent_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APumpkin_Parent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Parent_BP.Pumpkin_Parent_BP_C.ReceiveBeginPlay");

	APumpkin_Parent_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pumpkin_Parent_BP.Pumpkin_Parent_BP_C.Death and Seed
// (Public, BlueprintCallable, BlueprintEvent)

void APumpkin_Parent_BP_C::Death_and_Seed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Parent_BP.Pumpkin_Parent_BP_C.Death and Seed");

	APumpkin_Parent_BP_C_Death_and_Seed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pumpkin_Parent_BP.Pumpkin_Parent_BP_C.ExecuteUbergraph_Pumpkin_Parent_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APumpkin_Parent_BP_C::ExecuteUbergraph_Pumpkin_Parent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Parent_BP.Pumpkin_Parent_BP_C.ExecuteUbergraph_Pumpkin_Parent_BP");

	APumpkin_Parent_BP_C_ExecuteUbergraph_Pumpkin_Parent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
