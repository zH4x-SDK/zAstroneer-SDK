
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

// Function Pumpkin_Offspring_BASE_BP.Pumpkin_Offspring_BASE_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APumpkin_Offspring_BASE_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Offspring_BASE_BP.Pumpkin_Offspring_BASE_BP_C.UserConstructionScript");

	APumpkin_Offspring_BASE_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pumpkin_Offspring_BASE_BP.Pumpkin_Offspring_BASE_BP_C.Death and Seed
// (Public, BlueprintCallable, BlueprintEvent)

void APumpkin_Offspring_BASE_BP_C::Death_and_Seed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Offspring_BASE_BP.Pumpkin_Offspring_BASE_BP_C.Death and Seed");

	APumpkin_Offspring_BASE_BP_C_Death_and_Seed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pumpkin_Offspring_BASE_BP.Pumpkin_Offspring_BASE_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APumpkin_Offspring_BASE_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Offspring_BASE_BP.Pumpkin_Offspring_BASE_BP_C.ReceiveTick");

	APumpkin_Offspring_BASE_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pumpkin_Offspring_BASE_BP.Pumpkin_Offspring_BASE_BP_C.ExecuteUbergraph_Pumpkin_Offspring_BASE_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APumpkin_Offspring_BASE_BP_C::ExecuteUbergraph_Pumpkin_Offspring_BASE_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Offspring_BASE_BP.Pumpkin_Offspring_BASE_BP_C.ExecuteUbergraph_Pumpkin_Offspring_BASE_BP");

	APumpkin_Offspring_BASE_BP_C_ExecuteUbergraph_Pumpkin_Offspring_BASE_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
