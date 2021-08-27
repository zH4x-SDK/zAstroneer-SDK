#pragma once

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C
// 0x00A0 (0x06A8 - 0x0608)
class AAstroTutorialGameModeInstance_C : public AAstroGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0608(0x0008) (Transient, DuplicateTransient)
	class UCableTutorialComponent*                     CableTutorial;                                            // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ATutorial_POI_Tooltip_C*>             ProximityCustomTooltips;                                  // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               AstroTooltipActive;                                       // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ProximityTooltipDetailsVisible;                           // 0x0631(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0632(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnProceduralActorRegistered;                              // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UClass*                                      ObjectiveDisplayWidget;                                   // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPersistentObjectiveContainer_C*             ObjectiveDisplay;                                         // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTutorialObjective>                  Objectives;                                               // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentObjectiveIndex;                                    // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentGoalIndex;                                         // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ObjectiveTestHandle;                                      // 0x0670(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnAstroCorpseSpawned;                                     // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSetCursorTooltipTarget;                                 // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClearCursorTooltipTarget;                               // 0x0698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AstroTutorialGameModeInstance.AstroTutorialGameModeInstance_C");
		return ptr;
	}


	void AppendSubGoalsToActiveObjective(TArray<struct FTutorialSubGoal>* SubGoals);
	void TryRecordObjectiveCompletedTelemetry(struct FTutorialObjective* Objective);
	void TryRecordSubGoalCompletedTelemetry(TEnumAsByte<ETutorialObjectiveKeys>* ObjectiveKey, struct FTutorialSubGoal* SubGoal);
	void InsertActiveObjective(const struct FTutorialObjective& Objective);
	void GetNextObjective(bool* NextObjectiveFound);
	void GetNextSubGoal(bool* NextGoalFound);
	void FindAndCompleteSubGoal(TEnumAsByte<ETutorialSubGoalKeys> SubGoalKey);
	void MarkSubGoalCompleted(struct FTutorialSubGoal* SubGoal);
	void CompleteObjectiveGoal(TEnumAsByte<ETutorialSubGoalKeys> SubGoalKey, bool* FinalObjectiveComplete);
	void BuildObjectiveDisplay();
	void ApplyTutorialTooltipProximityVisuals(const struct FTooltipProximityBadgeVisibilityData& InputProximityData, TEnumAsByte<ETutorialTooltipStyle> BadgeStyle, struct FTooltipProximityBadgeVisibilityData* OutputProximityData);
	void ApplyTutorialTooltipDisplayVisuals(const struct FTooltipWidgetDisplayData& InputDisplayData, TEnumAsByte<ETutorialTooltipStyle> BadgeStyle, struct FTooltipWidgetDisplayData* OutputDisplayData);
	void RemoveProximityTooltip(class ATutorial_POI_Tooltip_C* ProximityTooltip);
	void AddProximityTooltip(class ATutorial_POI_Tooltip_C* ProximityTooltip);
	void UpdateProximityTooltips();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void NotifyTutorialCompleted();
	void ReceiveBeginPlay();
	void K2_OnSetMatchState(const struct FName& NewState);
	void ExecuteUbergraph_AstroTutorialGameModeInstance(int EntryPoint);
	void OnClearCursorTooltipTarget__DelegateSignature(class UTooltipComponent* CursorTarget);
	void OnSetCursorTooltipTarget__DelegateSignature(const struct FTutorialCursorTooltipData& CursorTooltipData);
	void OnAstroCorpseSpawned__DelegateSignature(class AAstroCorpse_C* Corpse);
	void OnProceduralActorRegistered__DelegateSignature(class AActor* ProceduralActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
