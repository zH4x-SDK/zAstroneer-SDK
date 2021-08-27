
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

// Function Task_PerformAttack_Shoot.Task_PerformAttack_Shoot_C.OnFinish_0D57BA3C40F8532BD7842F844F79B0A1
// (BlueprintCallable, BlueprintEvent)

void UTask_PerformAttack_Shoot_C::OnFinish_0D57BA3C40F8532BD7842F844F79B0A1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_PerformAttack_Shoot.Task_PerformAttack_Shoot_C.OnFinish_0D57BA3C40F8532BD7842F844F79B0A1");

	UTask_PerformAttack_Shoot_C_OnFinish_0D57BA3C40F8532BD7842F844F79B0A1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_PerformAttack_Shoot.Task_PerformAttack_Shoot_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTask_PerformAttack_Shoot_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_PerformAttack_Shoot.Task_PerformAttack_Shoot_C.ReceiveExecute");

	UTask_PerformAttack_Shoot_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_PerformAttack_Shoot.Task_PerformAttack_Shoot_C.ExecuteUbergraph_Task_PerformAttack_Shoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTask_PerformAttack_Shoot_C::ExecuteUbergraph_Task_PerformAttack_Shoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_PerformAttack_Shoot.Task_PerformAttack_Shoot_C.ExecuteUbergraph_Task_PerformAttack_Shoot");

	UTask_PerformAttack_Shoot_C_ExecuteUbergraph_Task_PerformAttack_Shoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
