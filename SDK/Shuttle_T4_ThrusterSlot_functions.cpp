
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

// Function Shuttle_T4_ThrusterSlot.Shuttle_T4_ThrusterSlot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShuttle_T4_ThrusterSlot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T4_ThrusterSlot.Shuttle_T4_ThrusterSlot_C.UserConstructionScript");

	AShuttle_T4_ThrusterSlot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T4_ThrusterSlot.Shuttle_T4_ThrusterSlot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShuttle_T4_ThrusterSlot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T4_ThrusterSlot.Shuttle_T4_ThrusterSlot_C.ReceiveBeginPlay");

	AShuttle_T4_ThrusterSlot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T4_ThrusterSlot.Shuttle_T4_ThrusterSlot_C.SetupBlueprintAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void AShuttle_T4_ThrusterSlot_C::SetupBlueprintAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T4_ThrusterSlot.Shuttle_T4_ThrusterSlot_C.SetupBlueprintAnimation");

	AShuttle_T4_ThrusterSlot_C_SetupBlueprintAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T4_ThrusterSlot.Shuttle_T4_ThrusterSlot_C.SetShuttleAnimationState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Occupied                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Launched                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T4_ThrusterSlot_C::SetShuttleAnimationState(bool Occupied, bool Launched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T4_ThrusterSlot.Shuttle_T4_ThrusterSlot_C.SetShuttleAnimationState");

	AShuttle_T4_ThrusterSlot_C_SetShuttleAnimationState_Params params;
	params.Occupied = Occupied;
	params.Launched = Launched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shuttle_T4_ThrusterSlot.Shuttle_T4_ThrusterSlot_C.ExecuteUbergraph_Shuttle_T4_ThrusterSlot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShuttle_T4_ThrusterSlot_C::ExecuteUbergraph_Shuttle_T4_ThrusterSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shuttle_T4_ThrusterSlot.Shuttle_T4_ThrusterSlot_C.ExecuteUbergraph_Shuttle_T4_ThrusterSlot");

	AShuttle_T4_ThrusterSlot_C_ExecuteUbergraph_Shuttle_T4_ThrusterSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
