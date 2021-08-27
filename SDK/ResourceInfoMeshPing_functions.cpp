
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

// Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.Ping
// (Public, BlueprintCallable, BlueprintEvent)

void AResourceInfoMeshPing_C::Ping()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.Ping");

	AResourceInfoMeshPing_C_Ping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceInfoMeshPing_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.UserConstructionScript");

	AResourceInfoMeshPing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AResourceInfoMeshPing_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.ReceiveBeginPlay");

	AResourceInfoMeshPing_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceInfoMeshPing_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.ReceiveTick");

	AResourceInfoMeshPing_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.ExecuteUbergraph_ResourceInfoMeshPing
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceInfoMeshPing_C::ExecuteUbergraph_ResourceInfoMeshPing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.ExecuteUbergraph_ResourceInfoMeshPing");

	AResourceInfoMeshPing_C_ExecuteUbergraph_ResourceInfoMeshPing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
