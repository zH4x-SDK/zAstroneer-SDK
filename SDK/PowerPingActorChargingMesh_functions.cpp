
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

// Function PowerPingActorChargingMesh.PowerPingActorChargingMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerPingActorChargingMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerPingActorChargingMesh.PowerPingActorChargingMesh_C.UserConstructionScript");

	APowerPingActorChargingMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerPingActorChargingMesh.PowerPingActorChargingMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APowerPingActorChargingMesh_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerPingActorChargingMesh.PowerPingActorChargingMesh_C.ReceiveBeginPlay");

	APowerPingActorChargingMesh_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerPingActorChargingMesh.PowerPingActorChargingMesh_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerPingActorChargingMesh_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerPingActorChargingMesh.PowerPingActorChargingMesh_C.ReceiveTick");

	APowerPingActorChargingMesh_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerPingActorChargingMesh.PowerPingActorChargingMesh_C.ExecuteUbergraph_PowerPingActorChargingMesh
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerPingActorChargingMesh_C::ExecuteUbergraph_PowerPingActorChargingMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerPingActorChargingMesh.PowerPingActorChargingMesh_C.ExecuteUbergraph_PowerPingActorChargingMesh");

	APowerPingActorChargingMesh_C_ExecuteUbergraph_PowerPingActorChargingMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
