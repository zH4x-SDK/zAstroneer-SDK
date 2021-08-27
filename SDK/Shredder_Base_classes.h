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

// BlueprintGeneratedClass Shredder_Base.Shredder_Base_C
// 0x00EC (0x074C - 0x0660)
class AShredder_Base_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ShreddingParticleFX;                                      // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         ShreddingSlot;                                            // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         InputSlot;                                                // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         BodySlot;                                                 // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         outputSlot;                                               // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorItemConverterComponent*                ItemConverter;                                            // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              InputSlotRef;                                             // 0x06A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlotReference                              ShreddingSlotRef;                                         // 0x06B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlotReference                              OutputSlotRef;                                            // 0x06C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       ShreddingSlotAttachSocketName;                            // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ShredderStateChanged;                                     // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ShredderPowerLevelChanged;                                // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UCurveFloat*                                 ShreddedItemScaleOverProgress;                            // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ShreddingFXAttachSocketName;                              // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ShreddingLoopStartSoundEvent;                             // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ShreddingLoopStopSoundEvent;                              // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShreddingSoundLoopActive;                                 // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0731(0x0007) MISSED OFFSET
	struct FString                                     ItemShreddedSoundEvent;                                   // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxShreddingItemProgressRatio;                            // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shredder_Base.Shredder_Base_C");
		return ptr;
	}


	void FixupInvalidShredSlotItems();
	void DoesInputSlotHaveAnyItems(bool* HasItems);
	void IsReadyToShred(bool* CanShred);
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnItemSetInInputSlot(class APhysicalItem* Item);
	void BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query);
	void BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_ItemConverterStateChangedEvent__DelegateSignature(EItemConverterState NewState, EItemConverterState prevState);
	void BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature(bool HasAvailablePower);
	void BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsAdded__DelegateSignature(TArray<struct FActiveItemConversionProgress> newActiveConversions);
	void OnShreddedItemDestroyed(class AActor* DestroyedActor);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_Shredder_Base(int EntryPoint);
	void ShredderPowerLevelChanged__DelegateSignature(float NewPowerLevel);
	void ShredderStateChanged__DelegateSignature(TEnumAsByte<EShredderState> NewState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
