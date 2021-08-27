
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

// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.ObjectiveCompleted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPersistentObjectiveContainer_C::ObjectiveCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.ObjectiveCompleted");

	UPersistentObjectiveContainer_C_ObjectiveCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.UpdateObjectiveGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   GoalText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           CompletePrevGoal               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersistentObjectiveContainer_C::UpdateObjectiveGoal(const struct FText& GoalText, bool CompletePrevGoal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.UpdateObjectiveGoal");

	UPersistentObjectiveContainer_C_UpdateObjectiveGoal_Params params;
	params.GoalText = GoalText;
	params.CompletePrevGoal = CompletePrevGoal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.SetObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ObjectiveText                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   GoalText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           CompletePrevObj                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersistentObjectiveContainer_C::SetObjective(const struct FText& ObjectiveText, const struct FText& GoalText, bool CompletePrevObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.SetObjective");

	UPersistentObjectiveContainer_C_SetObjective_Params params;
	params.ObjectiveText = ObjectiveText;
	params.GoalText = GoalText;
	params.CompletePrevObj = CompletePrevObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPersistentObjectiveContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.Construct");

	UPersistentObjectiveContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.OnObjectiveSlideInStart
// (BlueprintCallable, BlueprintEvent)

void UPersistentObjectiveContainer_C::OnObjectiveSlideInStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.OnObjectiveSlideInStart");

	UPersistentObjectiveContainer_C_OnObjectiveSlideInStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.OnObjectiveSlideOutStart
// (BlueprintCallable, BlueprintEvent)

void UPersistentObjectiveContainer_C::OnObjectiveSlideOutStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.OnObjectiveSlideOutStart");

	UPersistentObjectiveContainer_C_OnObjectiveSlideOutStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.ExecuteUbergraph_PersistentObjectiveContainer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersistentObjectiveContainer_C::ExecuteUbergraph_PersistentObjectiveContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.ExecuteUbergraph_PersistentObjectiveContainer");

	UPersistentObjectiveContainer_C_ExecuteUbergraph_PersistentObjectiveContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.OnHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPersistentObjectiveContainer_C::OnHide__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveContainer.PersistentObjectiveContainer_C.OnHide__DelegateSignature");

	UPersistentObjectiveContainer_C_OnHide__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
