
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

// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.GetGoalText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   GoalText                       (Parm, OutParm)

void UPersistentObjectiveHeader_C::GetGoalText(struct FText* GoalText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.GetGoalText");

	UPersistentObjectiveHeader_C_GetGoalText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GoalText != nullptr)
		*GoalText = params.GoalText;
}


// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.SetHeaderAndGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   HeaderText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   GoalText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           CompleteGoal                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersistentObjectiveHeader_C::SetHeaderAndGoal(const struct FText& HeaderText, const struct FText& GoalText, bool CompleteGoal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.SetHeaderAndGoal");

	UPersistentObjectiveHeader_C_SetHeaderAndGoal_Params params;
	params.HeaderText = HeaderText;
	params.GoalText = GoalText;
	params.CompleteGoal = CompleteGoal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.UpdateObjectiveGoal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   GoalText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           CompletePrevious               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersistentObjectiveHeader_C::UpdateObjectiveGoal(const struct FText& GoalText, bool CompletePrevious)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.UpdateObjectiveGoal");

	UPersistentObjectiveHeader_C_UpdateObjectiveGoal_Params params;
	params.GoalText = GoalText;
	params.CompletePrevious = CompletePrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPersistentObjectiveHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.Construct");

	UPersistentObjectiveHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.OnGoalSlideOutStart
// (BlueprintCallable, BlueprintEvent)

void UPersistentObjectiveHeader_C::OnGoalSlideOutStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.OnGoalSlideOutStart");

	UPersistentObjectiveHeader_C_OnGoalSlideOutStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.OnGoalSlideInStart
// (BlueprintCallable, BlueprintEvent)

void UPersistentObjectiveHeader_C::OnGoalSlideInStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.OnGoalSlideInStart");

	UPersistentObjectiveHeader_C_OnGoalSlideInStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.ExecuteUbergraph_PersistentObjectiveHeader
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersistentObjectiveHeader_C::ExecuteUbergraph_PersistentObjectiveHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.ExecuteUbergraph_PersistentObjectiveHeader");

	UPersistentObjectiveHeader_C_ExecuteUbergraph_PersistentObjectiveHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.OnHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPersistentObjectiveHeader_C::OnHide__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentObjectiveHeader.PersistentObjectiveHeader_C.OnHide__DelegateSignature");

	UPersistentObjectiveHeader_C_OnHide__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
