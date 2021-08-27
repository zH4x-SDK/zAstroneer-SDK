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

// BlueprintGeneratedClass Smelter_Large.Smelter_Large_C
// 0x00D8 (0x0738 - 0x0660)
class ASmelter_Large_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UActorItemConverterComponent*                ItemConverter;                                            // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             InputSlotTooltipAnchor;                                   // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    OutputPlacementStorageChassis;                            // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               InteractCollisionForAutoselect;                           // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           Control;                                                  // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Slot_4;                                          // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Slot_3;                                          // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Slot_2;                                          // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Slot_1;                                          // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Out_Slot;                                        // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    StorageChassis;                                           // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Cylinder;                                                 // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFaceCameraComponent*                        FaceCamera;                                               // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Smelting;                                                 // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AudioLoopActive;                                          // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUseContext                                        TurnOnUseContext;                                         // 0x0711(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUseContext                                        TurnOffUseContext;                                        // 0x0712(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0713(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSmeltOperationStarted;                                  // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSmeltItemRefined;                                       // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Smelter_Large.Smelter_Large_C");
		return ptr;
	}


	void UpdateAnimationState();
	void UpdateUseContext();
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Multiplay_Smelter_Finish_SFX();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_OnItemConverterStateChanged__DelegateSignature(EItemConverterState NewState, EItemConverterState prevState);
	void BndEvt__ItemConverter_K2Node_ComponentBoundEvent_2_OnItemConversionComplete__DelegateSignature(TArray<class UClass*> outputItemTypes);
	void BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsListChanged__DelegateSignature(TArray<struct FActiveItemConversionProgress> newActiveConversions);
	void BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature(bool Enable);
	void BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature(bool HasAvailablePower);
	void ExecuteUbergraph_Smelter_Large(int EntryPoint);
	void OnSmeltItemRefined__DelegateSignature();
	void OnSmeltOperationStarted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
