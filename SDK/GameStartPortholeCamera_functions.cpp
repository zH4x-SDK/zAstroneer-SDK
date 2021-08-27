
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

// Function GameStartPortholeCamera.GameStartPortholeCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGameStartPortholeCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartPortholeCamera.GameStartPortholeCamera_C.UserConstructionScript");

	AGameStartPortholeCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartPortholeCamera.GameStartPortholeCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGameStartPortholeCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartPortholeCamera.GameStartPortholeCamera_C.ReceiveBeginPlay");

	AGameStartPortholeCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartPortholeCamera.GameStartPortholeCamera_C.MakeSelfCameraTarget
// (BlueprintCallable, BlueprintEvent)

void AGameStartPortholeCamera_C::MakeSelfCameraTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartPortholeCamera.GameStartPortholeCamera_C.MakeSelfCameraTarget");

	AGameStartPortholeCamera_C_MakeSelfCameraTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartPortholeCamera.GameStartPortholeCamera_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AGameStartPortholeCamera_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartPortholeCamera.GameStartPortholeCamera_C.ReceiveDestroyed");

	AGameStartPortholeCamera_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartPortholeCamera.GameStartPortholeCamera_C.ExecuteUbergraph_GameStartPortholeCamera
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameStartPortholeCamera_C::ExecuteUbergraph_GameStartPortholeCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartPortholeCamera.GameStartPortholeCamera_C.ExecuteUbergraph_GameStartPortholeCamera");

	AGameStartPortholeCamera_C_ExecuteUbergraph_GameStartPortholeCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
