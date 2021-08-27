
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

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.AppendSubGoalsToActiveObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTutorialSubGoal> SubGoals                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AAstroTutorialGameModeInstance_C::AppendSubGoalsToActiveObjective(TArray<struct FTutorialSubGoal>* SubGoals)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.AppendSubGoalsToActiveObjective");

	AAstroTutorialGameModeInstance_C_AppendSubGoalsToActiveObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubGoals != nullptr)
		*SubGoals = params.SubGoals;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.TryRecordObjectiveCompletedTelemetry
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTutorialObjective      Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAstroTutorialGameModeInstance_C::TryRecordObjectiveCompletedTelemetry(struct FTutorialObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.TryRecordObjectiveCompletedTelemetry");

	AAstroTutorialGameModeInstance_C_TryRecordObjectiveCompletedTelemetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Objective != nullptr)
		*Objective = params.Objective;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.TryRecordSubGoalCompletedTelemetry
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETutorialObjectiveKeys> ObjectiveKey                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTutorialSubGoal        SubGoal                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAstroTutorialGameModeInstance_C::TryRecordSubGoalCompletedTelemetry(TEnumAsByte<ETutorialObjectiveKeys>* ObjectiveKey, struct FTutorialSubGoal* SubGoal)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.TryRecordSubGoalCompletedTelemetry");

	AAstroTutorialGameModeInstance_C_TryRecordSubGoalCompletedTelemetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectiveKey != nullptr)
		*ObjectiveKey = params.ObjectiveKey;
	if (SubGoal != nullptr)
		*SubGoal = params.SubGoal;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.InsertActiveObjective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTutorialObjective      Objective                      (BlueprintVisible, BlueprintReadOnly, Parm)

void AAstroTutorialGameModeInstance_C::InsertActiveObjective(const struct FTutorialObjective& Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.InsertActiveObjective");

	AAstroTutorialGameModeInstance_C_InsertActiveObjective_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.GetNextObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NextObjectiveFound             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAstroTutorialGameModeInstance_C::GetNextObjective(bool* NextObjectiveFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.GetNextObjective");

	AAstroTutorialGameModeInstance_C_GetNextObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextObjectiveFound != nullptr)
		*NextObjectiveFound = params.NextObjectiveFound;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.GetNextSubGoal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NextGoalFound                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAstroTutorialGameModeInstance_C::GetNextSubGoal(bool* NextGoalFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.GetNextSubGoal");

	AAstroTutorialGameModeInstance_C_GetNextSubGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextGoalFound != nullptr)
		*NextGoalFound = params.NextGoalFound;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.FindAndCompleteSubGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETutorialSubGoalKeys> SubGoalKey                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroTutorialGameModeInstance_C::FindAndCompleteSubGoal(TEnumAsByte<ETutorialSubGoalKeys> SubGoalKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.FindAndCompleteSubGoal");

	AAstroTutorialGameModeInstance_C_FindAndCompleteSubGoal_Params params;
	params.SubGoalKey = SubGoalKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.MarkSubGoalCompleted
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTutorialSubGoal        SubGoal                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAstroTutorialGameModeInstance_C::MarkSubGoalCompleted(struct FTutorialSubGoal* SubGoal)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.MarkSubGoalCompleted");

	AAstroTutorialGameModeInstance_C_MarkSubGoalCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubGoal != nullptr)
		*SubGoal = params.SubGoal;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.CompleteObjectiveGoal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETutorialSubGoalKeys> SubGoalKey                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FinalObjectiveComplete         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAstroTutorialGameModeInstance_C::CompleteObjectiveGoal(TEnumAsByte<ETutorialSubGoalKeys> SubGoalKey, bool* FinalObjectiveComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.CompleteObjectiveGoal");

	AAstroTutorialGameModeInstance_C_CompleteObjectiveGoal_Params params;
	params.SubGoalKey = SubGoalKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinalObjectiveComplete != nullptr)
		*FinalObjectiveComplete = params.FinalObjectiveComplete;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.BuildObjectiveDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void AAstroTutorialGameModeInstance_C::BuildObjectiveDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.BuildObjectiveDisplay");

	AAstroTutorialGameModeInstance_C_BuildObjectiveDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ApplyTutorialTooltipProximityVisuals
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTooltipProximityBadgeVisibilityData InputProximityData             (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ETutorialTooltipStyle> BadgeStyle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTooltipProximityBadgeVisibilityData OutputProximityData            (Parm, OutParm)

void AAstroTutorialGameModeInstance_C::ApplyTutorialTooltipProximityVisuals(const struct FTooltipProximityBadgeVisibilityData& InputProximityData, TEnumAsByte<ETutorialTooltipStyle> BadgeStyle, struct FTooltipProximityBadgeVisibilityData* OutputProximityData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ApplyTutorialTooltipProximityVisuals");

	AAstroTutorialGameModeInstance_C_ApplyTutorialTooltipProximityVisuals_Params params;
	params.InputProximityData = InputProximityData;
	params.BadgeStyle = BadgeStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputProximityData != nullptr)
		*OutputProximityData = params.OutputProximityData;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ApplyTutorialTooltipDisplayVisuals
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTooltipWidgetDisplayData InputDisplayData               (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ETutorialTooltipStyle> BadgeStyle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTooltipWidgetDisplayData OutputDisplayData              (Parm, OutParm)

void AAstroTutorialGameModeInstance_C::ApplyTutorialTooltipDisplayVisuals(const struct FTooltipWidgetDisplayData& InputDisplayData, TEnumAsByte<ETutorialTooltipStyle> BadgeStyle, struct FTooltipWidgetDisplayData* OutputDisplayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ApplyTutorialTooltipDisplayVisuals");

	AAstroTutorialGameModeInstance_C_ApplyTutorialTooltipDisplayVisuals_Params params;
	params.InputDisplayData = InputDisplayData;
	params.BadgeStyle = BadgeStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputDisplayData != nullptr)
		*OutputDisplayData = params.OutputDisplayData;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.RemoveProximityTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATutorial_POI_Tooltip_C* ProximityTooltip               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroTutorialGameModeInstance_C::RemoveProximityTooltip(class ATutorial_POI_Tooltip_C* ProximityTooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.RemoveProximityTooltip");

	AAstroTutorialGameModeInstance_C_RemoveProximityTooltip_Params params;
	params.ProximityTooltip = ProximityTooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.AddProximityTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATutorial_POI_Tooltip_C* ProximityTooltip               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroTutorialGameModeInstance_C::AddProximityTooltip(class ATutorial_POI_Tooltip_C* ProximityTooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.AddProximityTooltip");

	AAstroTutorialGameModeInstance_C_AddProximityTooltip_Params params;
	params.ProximityTooltip = ProximityTooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.UpdateProximityTooltips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAstroTutorialGameModeInstance_C::UpdateProximityTooltips()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.UpdateProximityTooltips");

	AAstroTutorialGameModeInstance_C_UpdateProximityTooltips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAstroTutorialGameModeInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.UserConstructionScript");

	AAstroTutorialGameModeInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroTutorialGameModeInstance_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ReceiveTick");

	AAstroTutorialGameModeInstance_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.NotifyTutorialCompleted
// (BlueprintCallable, BlueprintEvent)

void AAstroTutorialGameModeInstance_C::NotifyTutorialCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.NotifyTutorialCompleted");

	AAstroTutorialGameModeInstance_C_NotifyTutorialCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAstroTutorialGameModeInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ReceiveBeginPlay");

	AAstroTutorialGameModeInstance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.K2_OnSetMatchState
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroTutorialGameModeInstance_C::K2_OnSetMatchState(const struct FName& NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.K2_OnSetMatchState");

	AAstroTutorialGameModeInstance_C_K2_OnSetMatchState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ExecuteUbergraph_AstroTutorialGameModeInstance
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroTutorialGameModeInstance_C::ExecuteUbergraph_AstroTutorialGameModeInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ExecuteUbergraph_AstroTutorialGameModeInstance");

	AAstroTutorialGameModeInstance_C_ExecuteUbergraph_AstroTutorialGameModeInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.OnClearCursorTooltipTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTooltipComponent*       CursorTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroTutorialGameModeInstance_C::OnClearCursorTooltipTarget__DelegateSignature(class UTooltipComponent* CursorTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.OnClearCursorTooltipTarget__DelegateSignature");

	AAstroTutorialGameModeInstance_C_OnClearCursorTooltipTarget__DelegateSignature_Params params;
	params.CursorTarget = CursorTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.OnSetCursorTooltipTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTutorialCursorTooltipData CursorTooltipData              (BlueprintVisible, BlueprintReadOnly, Parm)

void AAstroTutorialGameModeInstance_C::OnSetCursorTooltipTarget__DelegateSignature(const struct FTutorialCursorTooltipData& CursorTooltipData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.OnSetCursorTooltipTarget__DelegateSignature");

	AAstroTutorialGameModeInstance_C_OnSetCursorTooltipTarget__DelegateSignature_Params params;
	params.CursorTooltipData = CursorTooltipData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.OnAstroCorpseSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAstroCorpse_C*          Corpse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroTutorialGameModeInstance_C::OnAstroCorpseSpawned__DelegateSignature(class AAstroCorpse_C* Corpse)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.OnAstroCorpseSpawned__DelegateSignature");

	AAstroTutorialGameModeInstance_C_OnAstroCorpseSpawned__DelegateSignature_Params params;
	params.Corpse = Corpse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.OnProceduralActorRegistered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ProceduralActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroTutorialGameModeInstance_C::OnProceduralActorRegistered__DelegateSignature(class AActor* ProceduralActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.OnProceduralActorRegistered__DelegateSignature");

	AAstroTutorialGameModeInstance_C_OnProceduralActorRegistered__DelegateSignature_Params params;
	params.ProceduralActor = ProceduralActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
