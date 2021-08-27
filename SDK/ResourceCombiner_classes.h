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

// BlueprintGeneratedClass ResourceCombiner.ResourceCombiner_C
// 0x011A (0x077A - 0x0660)
class AResourceCombiner_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             PrintHeightMarker;                                        // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelItemComponent*                  ControlPanelItem;                                         // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         FuelSlot;                                                 // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ControlPanel;                                             // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorItemConverterComponent*                ItemConverter;                                            // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ModuleBase;                                               // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      RefineryBodySkeletalMesh;                                 // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           Control;                                                  // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    StorageChassis;                                           // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Cylinder;                                                 // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFaceCameraComponent*                        FaceCamera;                                               // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RefiningEndAnim_HeatElementCurve_5B53AF62428B31A29C3B8885A7D363F9;// 0x06E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RefiningEndAnim__Direction_5B53AF62428B31A29C3B8885A7D363F9;// 0x06E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RefiningEndAnim;                                          // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DrawerCloseAnim__Direction_85DEE2434590BA74897175959E94C2EA;// 0x06F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06F1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          DrawerCloseAnim;                                          // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RefiningStartAnim_HeatElementCurve_A339A969413F749C329EE9A2DA4B7D8D;// 0x0700(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RefiningStartAnim__Direction_A339A969413F749C329EE9A2DA4B7D8D;// 0x0704(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0705(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RefiningStartAnim;                                        // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSlotReference>                      Resource_Slots;                                           // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FSlotReference                              FuelSlotRef;                                              // 0x0720(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlotReference                              OutputSlotRef;                                            // 0x0730(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBaseRefinery_AnimBP_C*                      RefineryAnimBP;                                           // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HeatElementMaterialRef;                                   // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatUpDuration;                                           // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrawerCloseDuration;                                      // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AGenericSelectorControlPanel_C*              ControlPanelRef;                                          // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CooldownDuration;                                         // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingHeatDegree;                                       // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrHeatDegree;                                           // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x076C(0x0004) MISSED OFFSET
	class UClass*                                      FuelItemFiltrationList;                                   // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESlottableItemsFiltrationListBehavior              FuelListFiltrationBehavior;                               // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ProductionAnimationActive;                                // 0x0779(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResourceCombiner.ResourceCombiner_C");
		return ptr;
	}


	void HandleConverterStateChanged(EItemConverterState NewState, EItemConverterState prevState);
	void RemoveInvalidOutputItem();
	void SetDrawerOpen(bool DrawerOpen);
	void SetPumpActive(bool PumpActive);
	void UpdateHeatingAnimationSpeed();
	void UpdateControlPanelDisplay(class UCombinerControlPanelPrimary_C* DisplayPanel);
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void RefiningStartAnim__FinishedFunc();
	void RefiningStartAnim__UpdateFunc();
	void DrawerCloseAnim__FinishedFunc();
	void DrawerCloseAnim__UpdateFunc();
	void RefiningEndAnim__FinishedFunc();
	void RefiningEndAnim__UpdateFunc();
	void ReceiveBeginPlay();
	void StartProductionAnimation();
	void PlayHeatUpAnim();
	void ReceiveDestroyed();
	void OnActivatedThroughControlPanel();
	void CycleLeft();
	void CycleRight();
	void SetDisplayInfo(class UUserWidget* ScreenWidget);
	void OnControlPanelReady(class AControlPanel* ControlPanel);
	void BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterStateChanged__DelegateSignature(EItemConverterState NewState, EItemConverterState prevState);
	void StopProductionAnimation(bool OpenDrawerAtEnd);
	void BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void OnControlPanelCrackedStateChanged(class AControlPanel* ControlPanel, bool IsCracked);
	void BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConversionStateChanged__DelegateSignature(TArray<class UClass*> outputItemTypes);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void ExecuteUbergraph_ResourceCombiner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
