
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

// Function ResourceNugget10.ResourceNugget10_C.ReplaceWithCarbon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AResourceNugget10_C::ReplaceWithCarbon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNugget10.ResourceNugget10_C.ReplaceWithCarbon");

	AResourceNugget10_C_ReplaceWithCarbon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNugget10.ResourceNugget10_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceNugget10_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNugget10.ResourceNugget10_C.UserConstructionScript");

	AResourceNugget10_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNugget10.ResourceNugget10_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AResourceNugget10_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNugget10.ResourceNugget10_C.ReceiveBeginPlay");

	AResourceNugget10_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNugget10.ResourceNugget10_C.ExecuteUbergraph_ResourceNugget10
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceNugget10_C::ExecuteUbergraph_ResourceNugget10(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNugget10.ResourceNugget10_C.ExecuteUbergraph_ResourceNugget10");

	AResourceNugget10_C_ExecuteUbergraph_ResourceNugget10_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
