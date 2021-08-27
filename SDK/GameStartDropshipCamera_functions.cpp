
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

// Function GameStartDropshipCamera.GameStartDropshipCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGameStartDropshipCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartDropshipCamera.GameStartDropshipCamera_C.UserConstructionScript");

	AGameStartDropshipCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartDropshipCamera.GameStartDropshipCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGameStartDropshipCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartDropshipCamera.GameStartDropshipCamera_C.ReceiveBeginPlay");

	AGameStartDropshipCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartDropshipCamera.GameStartDropshipCamera_C.MakeSelfCameraTarget
// (BlueprintCallable, BlueprintEvent)

void AGameStartDropshipCamera_C::MakeSelfCameraTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartDropshipCamera.GameStartDropshipCamera_C.MakeSelfCameraTarget");

	AGameStartDropshipCamera_C_MakeSelfCameraTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartDropshipCamera.GameStartDropshipCamera_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AGameStartDropshipCamera_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartDropshipCamera.GameStartDropshipCamera_C.ReceiveDestroyed");

	AGameStartDropshipCamera_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartDropshipCamera.GameStartDropshipCamera_C.ExecuteUbergraph_GameStartDropshipCamera
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameStartDropshipCamera_C::ExecuteUbergraph_GameStartDropshipCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartDropshipCamera.GameStartDropshipCamera_C.ExecuteUbergraph_GameStartDropshipCamera");

	AGameStartDropshipCamera_C_ExecuteUbergraph_GameStartDropshipCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
