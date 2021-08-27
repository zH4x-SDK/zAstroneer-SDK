
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

// Function Oxygenator_T2_Starter.Oxygenator_T2_Starter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOxygenator_T2_Starter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_T2_Starter.Oxygenator_T2_Starter_C.UserConstructionScript");

	AOxygenator_T2_Starter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oxygenator_T2_Starter.Oxygenator_T2_Starter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOxygenator_T2_Starter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_T2_Starter.Oxygenator_T2_Starter_C.ReceiveBeginPlay");

	AOxygenator_T2_Starter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oxygenator_T2_Starter.Oxygenator_T2_Starter_C.HandleItemUnpacked
// (BlueprintCallable, BlueprintEvent)

void AOxygenator_T2_Starter_C::HandleItemUnpacked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_T2_Starter.Oxygenator_T2_Starter_C.HandleItemUnpacked");

	AOxygenator_T2_Starter_C_HandleItemUnpacked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oxygenator_T2_Starter.Oxygenator_T2_Starter_C.ExecuteUbergraph_Oxygenator_T2_Starter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOxygenator_T2_Starter_C::ExecuteUbergraph_Oxygenator_T2_Starter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Oxygenator_T2_Starter.Oxygenator_T2_Starter_C.ExecuteUbergraph_Oxygenator_T2_Starter");

	AOxygenator_T2_Starter_C_ExecuteUbergraph_Oxygenator_T2_Starter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
