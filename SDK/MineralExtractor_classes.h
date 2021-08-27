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

// BlueprintGeneratedClass MineralExtractor.MineralExtractor_C
// 0x0160 (0x07C0 - 0x0660)
class AMineralExtractor_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UActorItemConverterComponent*                ActorItemConverter;                                       // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelItemComponent*                  ControlPanelItem;                                         // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ControlPanel;                                             // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ModuleBody;                                               // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDeformEventReceiver*                        DeformEventReceiver;                                      // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpinnerStopAnim_Progress_8EDE484E4CD23DB5DF2EF09CDEAD08A4;// 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpinnerStopAnim__Direction_8EDE484E4CD23DB5DF2EF09CDEAD08A4;// 0x06B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SpinnerStopAnim;                                          // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpinnerStartAnim_Progress_5E26A80545CB2345E874C0B0910F7C97;// 0x06C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpinnerStartAnim__Direction_5E26A80545CB2345E874C0B0910F7C97;// 0x06C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SpinnerStartAnim;                                         // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProduceResourcesAnim_ProductionTime_D7F0667D485FE4C5AF6568A4F8DDBB4C;// 0x06D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ProduceResourcesAnim__Direction_D7F0667D485FE4C5AF6568A4F8DDBB4C;// 0x06D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ProduceResourcesAnim;                                     // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FIllCanAnim_CanFillDegree_67A22EFB4BAE4E712ADF01A093C75BDE;// 0x06E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FIllCanAnim__Direction_67A22EFB4BAE4E712ADF01A093C75BDE;  // 0x06E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FIllCanAnim;                                              // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotateSpinnerAnim_SpinnerLerpDegree_8544F2F64AE4B90A7C2A5183272B56A5;// 0x06F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RotateSpinnerAnim__Direction_8544F2F64AE4B90A7C2A5183272B56A5;// 0x06F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x06F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RotateSpinnerAnim;                                        // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Placeholder_Mesh;                                         // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlotReference                              Input_Slot_Ref;                                           // 0x0708(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Bar_Material;                                             // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Resource_Material;                                        // 0x0720(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxOutputCount;                                           // 0x0728(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x072C(0x0004) MISSED OFFSET
	class AGenericSelectorControlPanel_C*              SelectorUIRef;                                            // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSlotReference>                      Output_Slot_Refs;                                         // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentOutputSlotIndex;                                   // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentMaxLinePercent;                                    // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentLineCount;                                         // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TankUnitConsumeDuration;                                  // 0x0754(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentSpinnerAngle;                                      // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartSpinnerAngle;                                        // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetSpinnerAngle;                                       // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0764(0x0004) MISSED OFFSET
	class UBaseSediment_AnimBP_C*                      AnimationBlueprint;                                       // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinnerSpinDuration;                                      // 0x0770(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpinRate;                                              // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CanGaugeMaterial;                                         // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpinAudioLoopActive;                                      // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0781(0x0003) MISSED OFFSET
	float                                              SpinStartDuration;                                        // 0x0784(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinStopDuration;                                         // 0x0788(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SpinStartCurve;                                           // 0x0790(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SpinStopCurve;                                            // 0x0798(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ProduceResourcesCurve;                                    // 0x07A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DesiredSpinAnimationSpeed;                                // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingSpinAnimationSpeed;                               // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeOfSpinAnimationSpeedChanged;                          // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentSpinAnimationSpeed;                                // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFillingCans;                                            // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SERVER_TryTakeSedimentFromInput;                          // 0x07B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTankViewDirty;                                          // 0x07BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsControlPanelCracked;                                    // 0x07BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsConverting;                                             // 0x07BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasItemsInOutput;                                         // 0x07BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_Producing;                                            // 0x07BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               IsInitialized;                                            // 0x07BF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MineralExtractor.MineralExtractor_C");
		return ptr;
	}


	void GetConversionProgress(float* Progress);
	void GetEffectiveOutputCountForCurrentConversion(int* Count);
	void GetMaxOutputCountForCurrentConversion(int* Count);
	void SERVER_Try_Pull_Cannister_To_Input();
	void CLIENT_Enable_Input_Indicator();
	void CheckIfNeedsTick();
	void UpdateModuleActiveAnimState();
	void TryFillNextCan();
	void UpdateSpinAnimationSpeed(float SpinRate);
	void DestroyPartialOutputs();
	void UpdateControlPanelDisplay(class UMineralExtractorControlPanelPrimary_C* DisplayWidget);
	void TryTakeOutputResourceToStorage(const struct FSlotReference& outputSlot);
	void UpdateSpeedBasedSpinnerRotation(float A);
	void InitializeGaugeMaterials();
	void HandleRemovedOutputResource();
	void UpdateTankView();
	void SERVER_TakeSediment(float DeltaTime);
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void RotateSpinnerAnim__FinishedFunc();
	void RotateSpinnerAnim__UpdateFunc();
	void FIllCanAnim__FinishedFunc();
	void FIllCanAnim__UpdateFunc();
	void ProduceResourcesAnim__FinishedFunc();
	void ProduceResourcesAnim__UpdateFunc();
	void SpinnerStartAnim__FinishedFunc();
	void SpinnerStartAnim__UpdateFunc();
	void SpinnerStopAnim__FinishedFunc();
	void SpinnerStopAnim__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnReleaseItem(class APhysicalItem* Item);
	void IncrementSelection();
	void DecrementSelection();
	void ActivateSelection();
	void RotateSpinnerToAngle();
	void FillCan();
	void ReceiveDestroyed();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnControlPanelReady(class AControlPanel* ControlPanel);
	void OnUpdateControlPanelScreenInfo(class UUserWidget* ScreenWidget);
	void StartSpinner();
	void StopSpinner();
	void LoopSpinner();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature(EItemConverterState NewState, EItemConverterState prevState);
	void BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_2_OnItemConverterActiveConversionsListChanged__DelegateSignature(TArray<struct FActiveItemConversionProgress> newActiveConversions);
	void BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_3_OnItemConverterActiveConversionsListChanged__DelegateSignature(TArray<struct FActiveItemConversionProgress> newActiveConversions);
	void BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void OnInputSetItem(class APhysicalItem* Item);
	void ControlPanelCrackedChanged(class AControlPanel* ControlPanel, bool IsCracked);
	void OnSetItem(class APhysicalItem* Item);
	void InitializeConversion();
	void BndEvt__ActorItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void HandleStateChanged(EItemConverterState New_State);
	void OnInputReleaseItem(class APhysicalItem* Item);
	void ExecuteUbergraph_MineralExtractor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
