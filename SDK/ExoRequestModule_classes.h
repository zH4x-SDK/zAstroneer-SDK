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

// BlueprintGeneratedClass ExoRequestModule.ExoRequestModule_C
// 0x00B0 (0x0780 - 0x06D0)
class AExoRequestModule_C : public AExoRequestModuleBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D0(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            EventInputIconWidget;                                     // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Exhaust_1;                                                // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Exhaust_2;                                                // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ControlPanel;                                             // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTradeShipDockComponent_ItemDrive*           TradeShipDockComponent_ItemDrive;                         // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelItemComponent*                  ControlPanelItem;                                         // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemPad*                                    ItemPad;                                                  // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDeformEventReceiver*                        DeformEventReceiver;                                      // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Placeholder_Mesh;                                         // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlotReference                              Output_Slot_Ref;                                          // 0x0740(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            Exhausts;                                                 // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AGenericSelectorControlPanel_C*              ControlPanelRef;                                          // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBaseDeliveryPlatformT3_AnimBP_C*            AnimBP;                                                   // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ProgressBarMID;                                           // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrScreenIndex;                                          // 0x0778(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumScreens;                                               // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExoRequestModule.ExoRequestModule_C");
		return ptr;
	}


	void HandleScreenIndexChanged();
	void OnRep_CurrScreenIndex();
	void GetItemDrive(class UItemDriveComponent** ItemDrive);
	void SetArmsOpen(bool Open);
	void Enable_Exhaust(bool bNewEnableState);
	void UpdateControlPanelDisplay(class UExoRequestControlPanelPrimary_C* ControlPanelDisplay);
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnUpdateDisplay(class UUserWidget* ScreenWidget);
	void OnControlPanelReady(class AControlPanel* ControlPanel);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnResearchPointsChanged(float NewPointBalance);
	void CycleLeft();
	void CycleRight();
	void OnStatisticRefreshed(int Value);
	void BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature(float LaunchLength);
	void BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature(float LaunchLength);
	void BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature();
	void BndEvt__TradeShipDockComponent_ItemDrive_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature();
	void OnCreativeModeEntered();
	void UpdateModuleState();
	void UpdateEventIcon();
	void UpdateProgressBar();
	void TryToSwitchToClaimRewardTab(class AControlPanel* ControlPanel, bool IsCracked);
	void HandleUnclaimedPhysicalItemRewardsChanged();
	void CustomEvent_1();
	void ExecuteUbergraph_ExoRequestModule(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
