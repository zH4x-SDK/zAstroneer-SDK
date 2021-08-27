
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

// Function Task_PerformAttack_AoESpew.Task_PerformAttack_AoESpew_C.OnFinish_7AA4B4774C5B76386089679F0370FE8E
// (BlueprintCallable, BlueprintEvent)

void UTask_PerformAttack_AoESpew_C::OnFinish_7AA4B4774C5B76386089679F0370FE8E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_PerformAttack_AoESpew.Task_PerformAttack_AoESpew_C.OnFinish_7AA4B4774C5B76386089679F0370FE8E");

	UTask_PerformAttack_AoESpew_C_OnFinish_7AA4B4774C5B76386089679F0370FE8E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_PerformAttack_AoESpew.Task_PerformAttack_AoESpew_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTask_PerformAttack_AoESpew_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_PerformAttack_AoESpew.Task_PerformAttack_AoESpew_C.ReceiveExecute");

	UTask_PerformAttack_AoESpew_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_PerformAttack_AoESpew.Task_PerformAttack_AoESpew_C.ExecuteUbergraph_Task_PerformAttack_AoESpew
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTask_PerformAttack_AoESpew_C::ExecuteUbergraph_Task_PerformAttack_AoESpew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_PerformAttack_AoESpew.Task_PerformAttack_AoESpew_C.ExecuteUbergraph_Task_PerformAttack_AoESpew");

	UTask_PerformAttack_AoESpew_C_ExecuteUbergraph_Task_PerformAttack_AoESpew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
