
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

// Function Task_PerformAttack_Bounce.Task_PerformAttack_Bounce_C.OnFinish_EF32E51F431FE3118FDEA8BBA5A4B4A3
// (BlueprintCallable, BlueprintEvent)

void UTask_PerformAttack_Bounce_C::OnFinish_EF32E51F431FE3118FDEA8BBA5A4B4A3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_PerformAttack_Bounce.Task_PerformAttack_Bounce_C.OnFinish_EF32E51F431FE3118FDEA8BBA5A4B4A3");

	UTask_PerformAttack_Bounce_C_OnFinish_EF32E51F431FE3118FDEA8BBA5A4B4A3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_PerformAttack_Bounce.Task_PerformAttack_Bounce_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTask_PerformAttack_Bounce_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_PerformAttack_Bounce.Task_PerformAttack_Bounce_C.ReceiveExecute");

	UTask_PerformAttack_Bounce_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_PerformAttack_Bounce.Task_PerformAttack_Bounce_C.MULTI Play SFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Hazard_Actor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTask_PerformAttack_Bounce_C::MULTI_Play_SFX(class AActor* Hazard_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_PerformAttack_Bounce.Task_PerformAttack_Bounce_C.MULTI Play SFX");

	UTask_PerformAttack_Bounce_C_MULTI_Play_SFX_Params params;
	params.Hazard_Actor = Hazard_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_PerformAttack_Bounce.Task_PerformAttack_Bounce_C.ExecuteUbergraph_Task_PerformAttack_Bounce
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTask_PerformAttack_Bounce_C::ExecuteUbergraph_Task_PerformAttack_Bounce(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_PerformAttack_Bounce.Task_PerformAttack_Bounce_C.ExecuteUbergraph_Task_PerformAttack_Bounce");

	UTask_PerformAttack_Bounce_C_ExecuteUbergraph_Task_PerformAttack_Bounce_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
