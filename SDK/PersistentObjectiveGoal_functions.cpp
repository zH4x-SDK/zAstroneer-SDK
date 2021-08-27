
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

// Function PersistentObjectiveGoal.PersistentObjectiveGoal_C.GoalCompleted
// (Public, BlueprintCallable, BlueprintEvent)

void UPersistentObjectiveGoal_C::GoalCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveGoal.PersistentObjectiveGoal_C.GoalCompleted");

	UPersistentObjectiveGoal_C_GoalCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveGoal.PersistentObjectiveGoal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPersistentObjectiveGoal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveGoal.PersistentObjectiveGoal_C.Construct");

	UPersistentObjectiveGoal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveGoal.PersistentObjectiveGoal_C.ExecuteUbergraph_PersistentObjectiveGoal
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersistentObjectiveGoal_C::ExecuteUbergraph_PersistentObjectiveGoal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveGoal.PersistentObjectiveGoal_C.ExecuteUbergraph_PersistentObjectiveGoal");

	UPersistentObjectiveGoal_C_ExecuteUbergraph_PersistentObjectiveGoal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveGoal.PersistentObjectiveGoal_C.OnHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPersistentObjectiveGoal_C::OnHide__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveGoal.PersistentObjectiveGoal_C.OnHide__DelegateSignature");

	UPersistentObjectiveGoal_C_OnHide__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
