
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

// Function ThrusterSlot.ThrusterSlot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AThrusterSlot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrusterSlot.ThrusterSlot_C.UserConstructionScript");

	AThrusterSlot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrusterSlot.ThrusterSlot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AThrusterSlot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrusterSlot.ThrusterSlot_C.ReceiveBeginPlay");

	AThrusterSlot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrusterSlot.ThrusterSlot_C.ExecuteUbergraph_ThrusterSlot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThrusterSlot_C::ExecuteUbergraph_ThrusterSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrusterSlot.ThrusterSlot_C.ExecuteUbergraph_ThrusterSlot");

	AThrusterSlot_C_ExecuteUbergraph_ThrusterSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
