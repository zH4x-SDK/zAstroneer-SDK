
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

// Function GameStartCamera.GameStartCamera_C.ConditionalSetViewTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameStartCamera_C::ConditionalSetViewTarget(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartCamera.GameStartCamera_C.ConditionalSetViewTarget");

	AGameStartCamera_C_ConditionalSetViewTarget_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartCamera.GameStartCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGameStartCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartCamera.GameStartCamera_C.UserConstructionScript");

	AGameStartCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartCamera.GameStartCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGameStartCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartCamera.GameStartCamera_C.ReceiveBeginPlay");

	AGameStartCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartCamera.GameStartCamera_C.OnStartGameSignal_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StartedFromSave                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameStartCamera_C::OnStartGameSignal_Event_1(bool StartedFromSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartCamera.GameStartCamera_C.OnStartGameSignal_Event_1");

	AGameStartCamera_C_OnStartGameSignal_Event_1_Params params;
	params.StartedFromSave = StartedFromSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartCamera.GameStartCamera_C.OnIntroCinematicComplete_Event_1
// (BlueprintCallable, BlueprintEvent)

void AGameStartCamera_C::OnIntroCinematicComplete_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartCamera.GameStartCamera_C.OnIntroCinematicComplete_Event_1");

	AGameStartCamera_C_OnIntroCinematicComplete_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartCamera.GameStartCamera_C.LocalClientJoined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAstroPlayerController*  Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameStartCamera_C::LocalClientJoined(class AAstroPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartCamera.GameStartCamera_C.LocalClientJoined");

	AGameStartCamera_C_LocalClientJoined_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartCamera.GameStartCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameStartCamera_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartCamera.GameStartCamera_C.ReceiveTick");

	AGameStartCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartCamera.GameStartCamera_C.OnLifecycleChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameLifecycleState            OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EGameLifecycleState            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameStartCamera_C::OnLifecycleChanged(EGameLifecycleState OldState, EGameLifecycleState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartCamera.GameStartCamera_C.OnLifecycleChanged");

	AGameStartCamera_C_OnLifecycleChanged_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartCamera.GameStartCamera_C.MakeSelfCameraTarget
// (BlueprintCallable, BlueprintEvent)

void AGameStartCamera_C::MakeSelfCameraTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartCamera.GameStartCamera_C.MakeSelfCameraTarget");

	AGameStartCamera_C_MakeSelfCameraTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartCamera.GameStartCamera_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AGameStartCamera_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartCamera.GameStartCamera_C.ReceiveDestroyed");

	AGameStartCamera_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStartCamera.GameStartCamera_C.ExecuteUbergraph_GameStartCamera
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameStartCamera_C::ExecuteUbergraph_GameStartCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStartCamera.GameStartCamera_C.ExecuteUbergraph_GameStartCamera");

	AGameStartCamera_C_ExecuteUbergraph_GameStartCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
