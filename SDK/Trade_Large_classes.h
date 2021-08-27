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

// BlueprintGeneratedClass Trade_Large.Trade_Large_C
// 0x00F0 (0x0750 - 0x0660)
class ATrade_Large_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UTradeShipDockComponent_Whitelist*           TradeShipDockComponent_Whitelist;                         // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlPanelItemComponent*                  ControlPanelItem;                                         // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ControlPanel;                                             // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Exhaust_1;                                                // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Exhaust_2;                                                // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Base;                                                     // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Output_Slot;                                              // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Ship;                                                     // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemPad*                                    ItemPad;                                                  // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDeformEventReceiver*                        DeformEventReceiver;                                      // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Placeholder_Mesh;                                         // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlotReference                              Output_Slot_Ref;                                          // 0x06D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Current_Traded_Input_Amount;                              // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Current_Traded_Output_Amount;                             // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InputTradeGroupSize;                                      // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OutputTradeGroupSize;                                     // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            Exhausts;                                                 // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       REP_Resource_Slots_Enabled;                               // 0x0708(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      AcceptedInput;                                            // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              PossibleOutputs;                                          // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                REP_Selected_Output_Index;                                // 0x0730(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	class AGenericSelectorControlPanel_C*              ControlPanelRef;                                          // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ExchangeRateMultiplier;                                   // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Trade_In_Progress;                                        // 0x0744(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0745(0x0003) MISSED OFFSET
	class UTradeShipComponent*                         TradeShipComponent;                                       // 0x0748(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trade_Large.Trade_Large_C");
		return ptr;
	}


	void Set_Trade_In_Progress(bool In_Progress);
	void OnRep_TradeShipComponent();
	void AwardAchievement();
	bool GetScoreMaxedOut();
	void AuthorityEjectSurplusResources();
	void GetItemsSlottedToShip(TArray<class APhysicalItem*>* SlottedItems);
	void OnRep_REP_Selected_Output_Index();
	void OnRep_REP_Resource_Slots_Enabled();
	void Update_Resource_Slots_Enabled(bool Score_Maxed_Out);
	void Enable_Exhaust(bool bNewEnableState);
	void Modify_Output_Amount_for_Fit(int Output_Amount, int* New_Output_Amount);
	void Update_State();
	void Authority_Swap_Resources();
	void Update_Score();
	void UpdateControlPanelDisplay(class UTradeModuleControlPanelPrimary_C* ControlPanelDisplay);
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnUpdateDisplay(class UUserWidget* ScreenWidget);
	void OnControlPanelReady(class AControlPanel* ControlPanel);
	void OnCycleLeft();
	void OnCycleRight();
	void ActivatedThroughControlPanel();
	void HandleCycleLeft();
	void HandleCycleRight();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_0_LaunchedSignal__DelegateSignature(float LaunchLength);
	void BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_1_LaunchedSignal__DelegateSignature(float LaunchLength);
	void BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature();
	void BndEvt__TradeShipDockComponent_Whitelist_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature();
	void ExecuteUbergraph_Trade_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
