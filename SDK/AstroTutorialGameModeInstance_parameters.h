#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.AppendSubGoalsToActiveObjective
struct AAstroTutorialGameModeInstance_C_AppendSubGoalsToActiveObjective_Params
{
	TArray<struct FTutorialSubGoal>                    SubGoals;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.TryRecordObjectiveCompletedTelemetry
struct AAstroTutorialGameModeInstance_C_TryRecordObjectiveCompletedTelemetry_Params
{
	struct FTutorialObjective                          Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.TryRecordSubGoalCompletedTelemetry
struct AAstroTutorialGameModeInstance_C_TryRecordSubGoalCompletedTelemetry_Params
{
	TEnumAsByte<ETutorialObjectiveKeys>                ObjectiveKey;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTutorialSubGoal                            SubGoal;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.InsertActiveObjective
struct AAstroTutorialGameModeInstance_C_InsertActiveObjective_Params
{
	struct FTutorialObjective                          Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.GetNextObjective
struct AAstroTutorialGameModeInstance_C_GetNextObjective_Params
{
	bool                                               NextObjectiveFound;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.GetNextSubGoal
struct AAstroTutorialGameModeInstance_C_GetNextSubGoal_Params
{
	bool                                               NextGoalFound;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.FindAndCompleteSubGoal
struct AAstroTutorialGameModeInstance_C_FindAndCompleteSubGoal_Params
{
	TEnumAsByte<ETutorialSubGoalKeys>                  SubGoalKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.MarkSubGoalCompleted
struct AAstroTutorialGameModeInstance_C_MarkSubGoalCompleted_Params
{
	struct FTutorialSubGoal                            SubGoal;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.CompleteObjectiveGoal
struct AAstroTutorialGameModeInstance_C_CompleteObjectiveGoal_Params
{
	TEnumAsByte<ETutorialSubGoalKeys>                  SubGoalKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FinalObjectiveComplete;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.BuildObjectiveDisplay
struct AAstroTutorialGameModeInstance_C_BuildObjectiveDisplay_Params
{
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ApplyTutorialTooltipProximityVisuals
struct AAstroTutorialGameModeInstance_C_ApplyTutorialTooltipProximityVisuals_Params
{
	struct FTooltipProximityBadgeVisibilityData        InputProximityData;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETutorialTooltipStyle>                 BadgeStyle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTooltipProximityBadgeVisibilityData        OutputProximityData;                                      // (Parm, OutParm)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ApplyTutorialTooltipDisplayVisuals
struct AAstroTutorialGameModeInstance_C_ApplyTutorialTooltipDisplayVisuals_Params
{
	struct FTooltipWidgetDisplayData                   InputDisplayData;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETutorialTooltipStyle>                 BadgeStyle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTooltipWidgetDisplayData                   OutputDisplayData;                                        // (Parm, OutParm)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.RemoveProximityTooltip
struct AAstroTutorialGameModeInstance_C_RemoveProximityTooltip_Params
{
	class ATutorial_POI_Tooltip_C*                     ProximityTooltip;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.AddProximityTooltip
struct AAstroTutorialGameModeInstance_C_AddProximityTooltip_Params
{
	class ATutorial_POI_Tooltip_C*                     ProximityTooltip;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.UpdateProximityTooltips
struct AAstroTutorialGameModeInstance_C_UpdateProximityTooltips_Params
{
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.UserConstructionScript
struct AAstroTutorialGameModeInstance_C_UserConstructionScript_Params
{
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ReceiveTick
struct AAstroTutorialGameModeInstance_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.NotifyTutorialCompleted
struct AAstroTutorialGameModeInstance_C_NotifyTutorialCompleted_Params
{
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ReceiveBeginPlay
struct AAstroTutorialGameModeInstance_C_ReceiveBeginPlay_Params
{
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.K2_OnSetMatchState
struct AAstroTutorialGameModeInstance_C_K2_OnSetMatchState_Params
{
	struct FName                                       NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.ExecuteUbergraph_AstroTutorialGameModeInstance
struct AAstroTutorialGameModeInstance_C_ExecuteUbergraph_AstroTutorialGameModeInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.OnClearCursorTooltipTarget__DelegateSignature
struct AAstroTutorialGameModeInstance_C_OnClearCursorTooltipTarget__DelegateSignature_Params
{
	class UTooltipComponent*                           CursorTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.OnSetCursorTooltipTarget__DelegateSignature
struct AAstroTutorialGameModeInstance_C_OnSetCursorTooltipTarget__DelegateSignature_Params
{
	struct FTutorialCursorTooltipData                  CursorTooltipData;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.OnAstroCorpseSpawned__DelegateSignature
struct AAstroTutorialGameModeInstance_C_OnAstroCorpseSpawned__DelegateSignature_Params
{
	class AAstroCorpse_C*                              Corpse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C.OnProceduralActorRegistered__DelegateSignature
struct AAstroTutorialGameModeInstance_C_OnProceduralActorRegistered__DelegateSignature_Params
{
	class AActor*                                      ProceduralActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
